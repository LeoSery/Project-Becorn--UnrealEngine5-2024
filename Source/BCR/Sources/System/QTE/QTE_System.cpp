#include "BCR/Headers/System/QTE/QTE_System.h"
#include "BCR/Headers/Player/MainPlayer.h"
#include "BCR/Headers/Interfaces/BCR_Helper.h"

UQTE_System* UQTE_System::Instance = nullptr;

/** 
 * @brief Gets the singleton instance of the QTE System
 * @return The singleton instance
 */
UQTE_System* UQTE_System::Get()
{
	if (!Instance)
	{
		Instance = NewObject<UQTE_System>();
		Instance->AddToRoot(); // Prevents garbage collectors from destroying it
	}
	return Instance;
}

/** 
 * @brief Starts a new QTE sequence if none is currently running
 * @param Config The configuration for this QTE sequence
 */
void UQTE_System::StartQTE(const FQTEConfiguration& Config)
{
	// Validate no existing QTE is running
	if (IsQTERunning())
	{
		IBCR_Helper::LogScreen(this, "Trying to start QTE while another is running", 5.0f, FColor::Red);
		return;
	}

	// Initialize QTE state
	CurrentConfig = Config;
	CurrentSequenceIndex = 0;
	CurrentRepeatCount = 0;
	bIsPaused = false;

	// check for valid configuration
	if (!IsQTEConfigValid())
	{
		IBCR_Helper::LogScreen(this, "Invalid QTE Configuration: No sequences", 5.0f, FColor::Red);
		CompleteQTE(false);
		return;
	}

	// Setup timers and start
	SetupGlobalTimer(Config);
	SetupProcessTimer();
	SetQTEState(EQTEState::Running);
}

void UQTE_System::StartQTEFromAsset(UQTEConfigurationAsset* Config, const TArray<AMainPlayer*>& Players)
{
	if (!Config)
	{
		IBCR_Helper::LogScreen(this, "Configuration QTE invalide", 5.0f, FColor::Red);
		return;
	}

	FQTEConfiguration RuntimeConfig = Config->ToRuntimeConfig(Players);
	StartQTE(RuntimeConfig);
}

/** 
 * @brief Stops the current QTE sequence and resets state
 */
void UQTE_System::StopQTE()
{
	if (!IsQTERunning())
	{
		return;
	}
	
	ClearTimers();
	ResetQTEState();
	SetQTEState(EQTEState::Inactive);
	OnQTEComplete.Broadcast(false);
	
	IBCR_Helper::LogScreen(this, "QTE Stopped", 2.0f, FColor::Yellow);
}

/** 
 * @brief Pauses or resumes the current QTE sequence
 * @param bPaused True to pause, false to resume
 */
void UQTE_System::SetQTEPaused(bool bPause)
{
	if (CurrentConfig.Sequences.IsEmpty())
	{
		return;
	}

	HandleTimersPause(bPause);
	SetQTEState(bPause ? EQTEState::Paused : EQTEState::Running);
}

void UQTE_System::ValidateAndStartQTE(const FQTEConfiguration& Config)
{
	
}

/** 
 * @brief Processes inputs for the current tick
 * @param DeltaTime Time elapsed since last tick
 */
void UQTE_System::ProcessInputs(float DeltaTime)
{
	if (CurrentState == EQTEState::Paused || CurrentConfig.Sequences.IsEmpty())
	{
		return;
	}
	
	ProcessSequence(DeltaTime);
}

/** 
 * @brief Validates an input step for a specific player
 * @param Step The input step to validate
 * @param Player The player to check input for
 * @param DeltaTime Time elapsed since last tick
 * @return True if input is valid, false otherwise
 */
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

/** 
* @brief Validates hold input for specified duration
* @param Step The input step containing hold parameters
* @param Player The player to check input for
* @return True if hold is valid, false otherwise
*/
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

/** 
* @brief Validates single tap input
* @param Step The input step to validate
* @param Player The player to check input for
* @return True if tap is valid, false otherwise
*/
bool UQTE_System::CheckTapInput(const FQTEInputStep& Step, AMainPlayer* Player)
{
	if (APlayerController* PC = Player->GetController<APlayerController>())
	{
		return PC->WasInputKeyJustPressed(Step.RequiredInput);
	}
	return false;
}

/** 
* @brief Validates input release
* @param Step The input step to validate
* @param Player The player to check input for
* @return True if release is valid, false otherwise
*/
bool UQTE_System::CheckReleaseInput(const FQTEInputStep& Step, AMainPlayer* Player)
{
	if (APlayerController* PC = Player->GetController<APlayerController>())
	{
		return PC->WasInputKeyJustReleased(Step.RequiredInput);
	}
	return false;
}

/** 
* @brief Validates stick movement direction
* @param Step The input step containing direction parameters
* @param Player The player to check input for
* @return True if movement is in correct direction, false otherwise
*/
bool UQTE_System::CheckStickMoveInput(const FQTEInputStep& Step, AMainPlayer* Player)
{
	if (APlayerController* PC = Player->GetController<APlayerController>())
	{
		// Get expected direction from parameters
		FVector2D ExpectedDir(
			Step.Parameters.Contains("DirX") ? Step.Parameters["DirX"] : 0.0f,
			Step.Parameters.Contains("DirY") ? Step.Parameters["DirY"] : 0.0f
		);

		// Get current stick position
		float X = 0.0f, Y = 0.0f;
		PC->GetInputAnalogStickState(EControllerAnalogStick::CAS_LeftStick, X, Y);
		FVector2D CurrentDir(X, Y);

		// Compare directions with tolerance
		float Tolerance = Step.Parameters.Contains("Tolerance") ? Step.Parameters["Tolerance"] : 0.3f;
		return FVector2D::DotProduct(CurrentDir.GetSafeNormal(), ExpectedDir.GetSafeNormal()) > (1.0f - Tolerance);
	}
	return false;
}

/** 
* @brief Advances to next sequence or completes QTE
*/
void UQTE_System::AdvanceToNextSequence()
{
	CurrentConfig.Sequences[CurrentSequenceIndex].bIsCompleted = true;

	// Check if we need to repeat current sequence
	if (CurrentRepeatCount + 1 < CurrentConfig.RepeatCount)
	{
		CurrentRepeatCount++;
		ResetCurrentSequence();
		return;
	}

	// Move to next sequence
	CurrentSequenceIndex++;
	CurrentRepeatCount = 0;

	// Check if QTE is complete
	if (CurrentSequenceIndex >= CurrentConfig.Sequences.Num())
	{
		CompleteQTE(true);
		return;
	}
    
	ResetCurrentSequence();
}

/** 
* @brief Checks if all players have completed their parts
* @param Sequence The sequence to validate
* @return True if sequence is complete, false otherwise
*/
bool UQTE_System::ValidateSequenceCompletion(const FQTESequence& Sequence)
{
	for (const auto& PlayerSubSeq : Sequence.PlayerSubSequences)
	{
		if (!PlayerSubSeq.Value.bIsCompleted)
		{
			return false;
		}
	}
	return true;
}

/** 
* @brief Processes the current sequence for all players
* @param DeltaTime Time elapsed since last tick
*/
void UQTE_System::ProcessSequence(float DeltaTime)
{
	FQTESequence& CurrentSequence = CurrentConfig.Sequences[CurrentSequenceIndex];

	// Process each player's inputs
	for (auto& PlayerSubSeq : CurrentSequence.PlayerSubSequences)
	{
		AMainPlayer* Player = PlayerSubSeq.Key;
		FPlayerSubSequence& SubSeq = PlayerSubSeq.Value;

		if (SubSeq.bIsCompleted)
		{
			continue;
		}

		// Process current step
		if (SubSeq.Steps.IsValidIndex(SubSeq.CurrentStepIndex))
		{
			const FQTEInputStep& CurrentStep = SubSeq.Steps[SubSeq.CurrentStepIndex];
            
			if (ValidateInput(CurrentStep, Player, DeltaTime))
			{
				SubSeq.CurrentStepIndex++;
				SubSeq.CurrentInputTime = 0.0f;

				// Check if player completed their sequence
				if (SubSeq.CurrentStepIndex >= SubSeq.Steps.Num())
				{
					SubSeq.bIsCompleted = true;
					OnPlayerSubSequenceComplete.Broadcast(Player, CurrentSequenceIndex);
				}
			}
			else
			{
				// Update step timer and check for timeout
				SubSeq.CurrentInputTime += DeltaTime;
				
				if (SubSeq.CurrentInputTime > CurrentStep.TimeWindow)
				{
					OnPlayerSubSequenceFailed.Broadcast(Player, CurrentSequenceIndex);
					OnSequenceFailed.Broadcast(CurrentSequenceIndex);
					CompleteQTE(false);
					return;
				}
			}
		}
	}
	
	if (ValidateSequenceCompletion(CurrentSequence))
	{
		OnSequenceComplete.Broadcast(CurrentSequenceIndex);
		AdvanceToNextSequence();
	}
}

/** 
* @brief Resets the current sequence state for all players
*/
void UQTE_System::ResetCurrentSequence()
{
	for (auto& PlayerSubSeq : CurrentConfig.Sequences[CurrentSequenceIndex].PlayerSubSequences)
	{
		PlayerSubSeq.Value.CurrentStepIndex = 0;
		PlayerSubSeq.Value.CurrentInputTime = 0.0f;
		PlayerSubSeq.Value.bIsCompleted = false;
	}
}

/** 
* @brief Completes the QTE and handles cleanup
* @param bSuccess Whether the QTE was completed successfully
*/
void UQTE_System::CompleteQTE(bool bSuccess)
{
	ClearTimers();
	ResetQTEState();
	OnQTEComplete.Broadcast(bSuccess);
    
	IBCR_Helper::LogScreen(this, FString::Printf(TEXT("QTE %s"), 
		bSuccess ? TEXT("Completed Successfully") : TEXT("Failed")), 
		2.0f, bSuccess ? FColor::Green : FColor::Red);
}

/** 
* @brief Clears all active timers
*/
void UQTE_System::ClearTimers()
{
	if (UWorld* World = GEngine->GetWorld())
	{
		World->GetTimerManager().ClearTimer(TickTimerHandle);
		World->GetTimerManager().ClearTimer(GlobalTimerHandle);
	}
}

/** 
* @brief Sets up the global timeout timer
* @param Config The QTE configuration containing timeout settings
*/
void UQTE_System::SetupGlobalTimer(const FQTEConfiguration& Config)
{
	if (Config.TotalTime > 0.0f && GEngine->GetWorld())
	{
		GEngine->GetWorld()->GetTimerManager().SetTimer(
			GlobalTimerHandle,
			[this]() { 
				OnSequenceFailed.Broadcast(CurrentSequenceIndex);
				CompleteQTE(false); 
			},
			Config.TotalTime,
			false
		);
	}
}

/** 
* @brief Sets up the main processing timer
*/
void UQTE_System::SetupProcessTimer()
{
	if (UWorld* World = GEngine->GetWorld())
	{
		World->GetTimerManager().SetTimer(
			TickTimerHandle,
			[this]() { ProcessInputs(GetWorld()->GetDeltaSeconds()); },
			0.0f,
			true
		);
	}
}

/** 
* @brief Handles pausing/unpausing of all timers
* @param bPause True to pause, false to resume
*/
void UQTE_System::HandleTimersPause(bool bPause)
{
	if (UWorld* World = GEngine->GetWorld())
	{
		if (CurrentConfig.TotalTime > 0.0f)
		{
			if (bPause)
			{
				World->GetTimerManager().PauseTimer(TickTimerHandle);
				World->GetTimerManager().PauseTimer(GlobalTimerHandle);
			}
			else
			{
				World->GetTimerManager().UnPauseTimer(TickTimerHandle);
				World->GetTimerManager().UnPauseTimer(GlobalTimerHandle);
			}
		}
	}
}

/** 
* @brief Resets all QTE state to initial values
*/
void UQTE_System::ResetQTEState()
{
	CurrentConfig.Sequences.Empty();
	bIsPaused = false;
	CurrentSequenceIndex = 0;
	CurrentRepeatCount = 0;
	CurrentHoldTimes.Empty();
}

/** 
* @brief Updates and logs QTE state changes
* @param NewState The new state to set
*/
void UQTE_System::SetQTEState(EQTEState NewState)
{
	if (CurrentState != NewState)
	{
		CurrentState = NewState;
		
		IBCR_Helper::LogScreen(this, FString::Printf(TEXT("QTE State changed to: %s"), 
			*UEnum::GetValueAsString(NewState)), 2.0f, FColor::White);
	}
}

/** 
* @brief Checks if a QTE is currently active
* @return True if QTE is running or paused, false otherwise
*/
bool UQTE_System::IsQTERunning() const
{
	return CurrentState == EQTEState::Running || CurrentState == EQTEState::Paused;
}

/** 
* @brief Validates QTE configuration
* @return True if configuration is valid, false otherwise
*/
bool UQTE_System::IsQTEConfigValid() const
{
	return !CurrentConfig.Sequences.IsEmpty();
}
