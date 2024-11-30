#include "BCR/Headers/System/QTE/QTE_System.h"
#include "BCR/Headers/Player/MainPlayer.h"
#include "BCR/Headers/Interfaces/BCR_Helper.h"

UQTE_System* UQTE_System::Instance = nullptr;

UQTE_System* UQTE_System::Get()
{
	if (!Instance)
	{
		Instance = NewObject<UQTE_System>();
		Instance->AddToRoot(); // Prevents garbage collectors from destroying it
	}
	return Instance;
}

void UQTE_System::StartQTE(const FQTEConfiguration& Config)
{
	if (!CurrentConfig.Sequences.IsEmpty())
	{
		IBCR_Helper::LogScreen(this, "Trying to start QTE while another is running", 5.0f, FColor::Red);
		return;
	}

	CurrentConfig = Config;
	bIsPaused = false;
	
	if (CurrentConfig.Sequences.IsEmpty())
	{
		IBCR_Helper::LogScreen(this, "Invalid QTE Configuration: No sequences", 5.0f, FColor::Red);
		OnQTEComplete.Broadcast(false);
		return;
	}

	if (UWorld* World = GEngine->GetWorld())
	{
		World->GetTimerManager().SetTimer(
			TickTimerHandle,
			[this]() { ProcessInputs(GetWorld()->GetDeltaSeconds()); },
			0.0f,
			true
		);
	}

	IBCR_Helper::LogScreen(this, "QTE Started", 2.0f, FColor::Green);
}

void UQTE_System::StopQTE()
{
	if (CurrentConfig.Sequences.IsEmpty())
	{
		return;
	}
	
	CurrentConfig.Sequences.Empty();
	bIsPaused = false;

	OnQTEComplete.Broadcast(false);
	IBCR_Helper::LogScreen(this, "QTE Stopped", 2.0f, FColor::Yellow);
}

void UQTE_System::SetQTEPaused(bool bPause)
{
	if (CurrentConfig.Sequences.IsEmpty())
	{
		return;
	}

	bIsPaused = bPause;
	IBCR_Helper::LogScreen(this, FString::Printf(TEXT("QTE %s"), bPause ? TEXT("Paused") : TEXT("Resumed")), 
		2.0f, bPause ? FColor::Yellow : FColor::Green);
}

void UQTE_System::ProcessInputs(float DeltaTime)
{
	if (bIsPaused || CurrentConfig.Sequences.IsEmpty())
	{
		return;
	}
	
	for (auto& Sequence : CurrentConfig.Sequences)
	{
		for (auto& PlayerSubSeq : Sequence.PlayerSubSequences)
		{
			AMainPlayer* Player = PlayerSubSeq.Key;
			FPlayerSubSequence& SubSeq = PlayerSubSeq.Value;

			if (SubSeq.bIsCompleted)
			{
				continue;
			}
			
			if (SubSeq.Steps.IsValidIndex(SubSeq.CurrentStepIndex))
			{
				const FQTEInputStep& CurrentStep = SubSeq.Steps[SubSeq.CurrentStepIndex];
				
				if (ValidateInput(CurrentStep, Player, DeltaTime))
				{
					SubSeq.CurrentStepIndex++;
					SubSeq.CurrentInputTime = 0.0f;
                    
					if (SubSeq.CurrentStepIndex >= SubSeq.Steps.Num())
					{
						SubSeq.bIsCompleted = true;
						OnPlayerSubSequenceComplete.Broadcast(Player, 0);
					}
				}
				else
				{
					SubSeq.CurrentInputTime += DeltaTime;
					
					if (SubSeq.CurrentInputTime > CurrentStep.TimeWindow)
					{
						OnPlayerSubSequenceFailed.Broadcast(Player, 0);
						StopQTE();
						return;
					}
				}
			}
		}
	}
}

bool UQTE_System::ValidateInput(const FQTEInputStep& Step, AMainPlayer* Player, float DeltaTime)
{
	if (!Player)
	{
		return false;
	}

	switch (Step.InputType)
	{
	case EQTEInputType::Tap:
		return CheckTapInput(Step, Player);
	case EQTEInputType::Hold:
		return CheckHoldInput(Step, Player);
	case EQTEInputType::Release:
		return CheckReleaseInput(Step, Player);
	case EQTEInputType::StickMove:
		return CheckStickMoveInput(Step, Player);
	default:
		return false;
	}
}

bool UQTE_System::CheckHoldInput(const FQTEInputStep& Step, AMainPlayer* Player)
{
	if (APlayerController* PC = Player->GetController<APlayerController>())
	{
		float RequiredHoldTime = Step.Parameters.Contains("HoldTime") ?  Step.Parameters["HoldTime"] : Step.TimeWindow;
        
		if (PC->IsInputKeyDown(Step.RequiredInput))
		{
			CurrentHoldTimes.FindOrAdd(Player) += GetWorld()->GetDeltaSeconds();
			return CurrentHoldTimes[Player] >= RequiredHoldTime;
		}
		
		CurrentHoldTimes.Remove(Player);
	}
	return false;
}

bool UQTE_System::CheckTapInput(const FQTEInputStep& Step, AMainPlayer* Player)
{
	if (APlayerController* PC = Player->GetController<APlayerController>())
	{
		return PC->WasInputKeyJustPressed(Step.RequiredInput);
	}
	return false;
}

bool UQTE_System::CheckReleaseInput(const FQTEInputStep& Step, AMainPlayer* Player)
{
	if (APlayerController* PC = Player->GetController<APlayerController>())
	{
		return PC->WasInputKeyJustReleased(Step.RequiredInput);
	}
	return false;
}

bool UQTE_System::CheckStickMoveInput(const FQTEInputStep& Step, AMainPlayer* Player)
{
	if (APlayerController* PC = Player->GetController<APlayerController>())
	{
		FVector2D ExpectedDir(
			Step.Parameters.Contains("DirX") ? Step.Parameters["DirX"] : 0.0f,
			Step.Parameters.Contains("DirY") ? Step.Parameters["DirY"] : 0.0f
		);
		
		float X = 0.0f, Y = 0.0f;
		PC->GetInputAnalogStickState(EControllerAnalogStick::CAS_LeftStick, X, Y);
		FVector2D CurrentDir(X, Y);
		
		float Tolerance = Step.Parameters.Contains("Tolerance") ? Step.Parameters["Tolerance"] : 0.3f;
        
		return FVector2D::DotProduct(CurrentDir.GetSafeNormal(), ExpectedDir.GetSafeNormal()) > (1.0f - Tolerance);
	}
	return false;
}
