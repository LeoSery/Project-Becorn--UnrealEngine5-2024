// QTE_Subsystem.cpp
#include "BCR/Headers/System/QTE/QTE_Subsystem.h"
#include "BCR/Headers/Player/MainPlayer.h"
#include "BCR/Headers/Interfaces/BCR_Helper.h"

void UQTE_Subsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);
    ResetState();
    CurrentState = EQTEState::Inactive;
}

void UQTE_Subsystem::Deinitialize()
{
    StopQTE();
    Super::Deinitialize();
}

void UQTE_Subsystem::StartQTEFromAsset(const UQTEConfigurationAsset* Config)
{
    if (!Config)
    {
        IBCR_Helper::LogAll(this, TEXT("StartQTEFromAsset: Invalid Config Asset"), 5.0f, FColor::Red);
    }

    if (IsQTERunning())
    {
        return;
    }
    
    StartQTE(Config->ToRuntimeConfig());
}

void UQTE_Subsystem::StartQTE(const FQTEConfiguration Config)
{
    if (IsQTERunning())
    {
        return;
    }

    CurrentConfig = Config;
    ActionProgress.Empty();
    
    if (!IsQTEConfigValid())
    {
        return;
    }

    ////////////////////////////////////////////////
    // Log technical details
    IBCR_Helper::LogConsole(this, TEXT("QTE Configuration loaded and validated"));

    // visual log for demonstration
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Yellow, TEXT("Get ready!"));
    }
    ////////////////////////////////////////////////
    
    SetQTEState(EQTEState::WaitingForPlayers);
    
    if (CurrentConfig.TotalTime > 0.0f)
    {
        SetupTimers();
    }
}

void UQTE_Subsystem::OnPlayerEnterSnapPoint(AMainPlayer* Player, ESnapPointType SnapPoint)
{
    if (!Player || CurrentState != EQTEState::WaitingForPlayers)
    {
        return;
    }

    ActivePlayers.Add(SnapPoint, Player);

    ////////////////////////////////////////////////
    // Log technical details
    IBCR_Helper::LogConsole(this, 
        FString::Printf(TEXT("Player registered at %s"), 
        *UEnum::GetValueAsString(SnapPoint)));

    // visual log for demonstration
    
    if (GEngine)
    {
        FString PlayerText = (SnapPoint == ESnapPointType::First) ? TEXT("Player 1") : TEXT("Player 2");
        GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Cyan,
            FString::Printf(TEXT("%s ready"), *PlayerText));
        
        if (ActivePlayers.Num() == 2)
        {
            GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, TEXT("Play the QTE !"));
            
            SetQTEState(EQTEState::Running);
        
            if (UWorld* World = GetWorld())
            {
                World->GetTimerManager().SetTimer(ProcessTimerHandle, 
                    [this]() 
                    { 
                        if (GetWorld())
                        {
                            ProcessInputs(GetWorld()->GetDeltaSeconds()); 
                        }
                    },
                    0.006f,
                    true);
            }
        }
    }
}

void UQTE_Subsystem::OnPlayerLeaveSnapPoint(AMainPlayer* Player, ESnapPointType SnapPoint)
{
    if (!Player)
    {
        return;
    }

    ActivePlayers.Remove(SnapPoint);
    StopQTE();
    CompleteQTE(false);
}

void UQTE_Subsystem::ProcessInputs(float DeltaTime)
{
    if (CurrentState != EQTEState::Running || bIsPaused)
    {
        return;
    }
    
    for (const auto& PlayerPair : ActivePlayers)
    {
        ESnapPointType SnapPoint = PlayerPair.Key;
        AMainPlayer* Player = PlayerPair.Value.Get();
        
        if (!Player)
        {
            IBCR_Helper::LogAll(this, TEXT("Invalid player reference!"), 1.0f, FColor::Red);
            continue;
        }
        
        if (const FSnapPointConfig* Config = CurrentConfig.SnapPoints.FindByPredicate(
            [SnapPoint](const FSnapPointConfig& Cfg) { return Cfg.SnapPointType == SnapPoint; }))
        {
            ProcessPlayerInput(Player, SnapPoint, *Config, DeltaTime);
        }
        else
        {
            IBCR_Helper::LogAll(this, TEXT("No config found for snap point!"), 1.0f, FColor::Red);
        }
    }
}

void UQTE_Subsystem::ProcessPlayerInput(AMainPlayer* Player, ESnapPointType SnapPoint, const FSnapPointConfig& Config, float DeltaTime)
{
    if (CurrentState != EQTEState::Running)
    {
        return;
    }
    
    FQTEProgressData* Progress = ActionProgress.Find(SnapPoint);

    if (CurrentConfig.ActionShouldWaitOtherPlayer)
    {
        ESnapPointType OtherPoint = (SnapPoint == ESnapPointType::First) ? ESnapPointType::Second : ESnapPointType::First;
                                  
        const FQTEProgressData* OtherProgress = ActionProgress.Find(OtherPoint);
        
        if (Progress && Progress->SuccessCount > 0 && 
            (!OtherProgress || OtherProgress->SuccessCount < Progress->SuccessCount))
        {
            IBCR_Helper::LogConsole(this, 
                            FString::Printf(TEXT("Waiting for other player. Current: %d, Other: %d"), 
                                Progress->SuccessCount,
                                OtherProgress ? OtherProgress->SuccessCount : 0));
            return;
        }
    }

    // Vérifie d'abord si le joueur fait une action
    bool isActing = false;
    if (auto PC = Player->GetController<APlayerController>())
    {
        switch(Config.ActionType)
        {
            case EQTEActionType::Press:
            case EQTEActionType::Release:
                isActing = PC->WasInputKeyJustPressed(Config.RequiredInput) || 
                          PC->WasInputKeyJustReleased(Config.RequiredInput);
                break;
            case EQTEActionType::Hold:
                isActing = PC->IsInputKeyDown(Config.RequiredInput);
                break;
            case EQTEActionType::Rotate:
                float X = 0.0f, Y = 0.0f;
                PC->GetInputAnalogStickState(EControllerAnalogStick::CAS_LeftStick, X, Y);
                isActing = FVector2D(X, Y).Size() > 0;
                break;
        }
    }

    // Détermine le résultat
    EQTEResult result = EQTEResult::None;
    if (isActing)
    {
        bool bSuccess = ValidatePlayerAction(Player, Config);
        result = bSuccess ? EQTEResult::Success : EQTEResult::Failure;
    }

    // Broadcast le résultat
    switch (SnapPoint)
    {
        case ESnapPointType::First:
            OnSnapPointFirstResult.Broadcast(result);
            break;
        case ESnapPointType::Second:
            OnSnapPointSecondResult.Broadcast(result);
            break;
    }
    
    if (result == EQTEResult::Success)
    {
        FQTEProgressData& NewProgress = ActionProgress.FindOrAdd(SnapPoint);
        NewProgress.SuccessCount++;

        ////////////////////////////////////////////////
        // Log technical details
        IBCR_Helper::LogConsole(this, 
            FString::Printf(TEXT("Action validated for %s"), 
            *UEnum::GetValueAsString(SnapPoint)));

        // visual log for demonstration
        if (GEngine)
        {
            FString PlayerText = (SnapPoint == ESnapPointType::First) ? TEXT("Player 1") : TEXT("Player 2");
            GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green,
                FString::Printf(TEXT("%s: Success!"), *PlayerText));
        }
        ////////////////////////////////////////////////
        
        if (Config.RepeatCount != -1 && NewProgress.SuccessCount >= Config.RepeatCount)
        {
            NewProgress.bIsComplete = true;

            if (CheckQTECompletion())
            {
                CompleteQTE(true);
                return;
            }
        }        
    }

    UpdateActionProgress(Player, SnapPoint, Config);
}

bool UQTE_Subsystem::ValidatePlayerAction(AMainPlayer* Player, const FSnapPointConfig& Config)
{
    bool result = false;
    
    switch (Config.ActionType)
    {
    case EQTEActionType::Press:
        result = ValidatePressAction(Player, Config);
        break;
    case EQTEActionType::Hold:
        result = ValidateHoldAction(Player, Config);
        break;
    case EQTEActionType::Release:
        result = ValidateReleaseAction(Player, Config);
        break;
    case EQTEActionType::Rotate:
        result = ValidateRotateAction(Player, Config);
        break;
    }
    return result;
}

bool UQTE_Subsystem::ValidateHoldAction(const AMainPlayer* Player, const FSnapPointConfig& Config)
{
    if (auto PC = Player->GetController<APlayerController>())
    {
        return PC->IsInputKeyDown(Config.RequiredInput);
    }
    return false;
}

bool UQTE_Subsystem::ValidateRotateAction(const AMainPlayer* Player, const FSnapPointConfig& Config)
{
    if (auto PC = Player->GetController<APlayerController>())
    {
        float X = 0.0f, Y = 0.0f;
        PC->GetInputAnalogStickState(EControllerAnalogStick::CAS_LeftStick, X, Y);
        float RotationSpeed = FVector2D(X, Y).Size();
        return RotationSpeed >= Config.MinRotationSpeed;
    }
    return false;
}

bool UQTE_Subsystem::ValidatePressAction(const AMainPlayer* Player, const FSnapPointConfig& Config)
{
    if (auto PC = Player->GetController<APlayerController>())
    {
        bool bWasPressed = PC->WasInputKeyJustPressed(Config.RequiredInput);
        return bWasPressed;
    }
    return false;
}

bool UQTE_Subsystem::ValidateReleaseAction(const AMainPlayer* Player, const FSnapPointConfig& Config)
{
    if (auto PC = Player->GetController<APlayerController>())
    {
        return PC->WasInputKeyJustReleased(Config.RequiredInput);
    }
    return false;
}

void UQTE_Subsystem::UpdateActionProgress(const AMainPlayer* Player, ESnapPointType SnapPoint, const FSnapPointConfig& Config)
{
    FQTEActionProgress Progress;

    if (auto PC = Player->GetController<APlayerController>())
    {
        switch (Config.ActionType)
        {
            case EQTEActionType::Rotate:
            {
                float X = 0.0f, Y = 0.0f;
                PC->GetInputAnalogStickState(EControllerAnalogStick::CAS_LeftStick, X, Y);
                Progress.StickPosition = FVector2D(X, Y);
                Progress.Progress = Progress.StickPosition.Size() / Config.MinRotationSpeed;
                Progress.bIsActive = Progress.Progress > 0.0f;
                break;
            }
            case EQTEActionType::Hold:
            case EQTEActionType::Press:
            case EQTEActionType::Release:
            {
                Progress.bIsActive = PC->IsInputKeyDown(Config.RequiredInput);
                Progress.Progress = Progress.bIsActive ? 1.0f : 0.0f;
                break;
            }
            case EQTEActionType::None:
            default:
            {
                break;
            }
        }
    }

    OnQTEActionProgress.Broadcast(SnapPoint, Progress);
}

void UQTE_Subsystem::StopQTE()
{
    if (!IsQTERunning())
    {
        return;
    }

    ClearTimers();
    ResetState();
    SetQTEState(EQTEState::Inactive);
    OnQTEComplete.Broadcast(false);
}

void UQTE_Subsystem::SetQTEPaused(bool bPause)
{
    if (bPause == bIsPaused || !IsQTERunning())
    {
        return;
    }

    bIsPaused = bPause;
    
    if (UWorld* World = GetWorld())
    {
        if (bPause)
        {
            World->GetTimerManager().PauseTimer(ProcessTimerHandle);
            World->GetTimerManager().PauseTimer(GlobalTimerHandle);
        }
        else
        {
            World->GetTimerManager().UnPauseTimer(ProcessTimerHandle);
            World->GetTimerManager().UnPauseTimer(GlobalTimerHandle);
        }
    }
}

bool UQTE_Subsystem::IsQTERunning() const
{
    return CurrentState == EQTEState::Running || CurrentState == EQTEState::WaitingForPlayers;
}

bool UQTE_Subsystem::IsQTEConfigValid() const
{
    return CurrentConfig.SnapPoints.Num() > 0 && CurrentConfig.SnapPoints.Num() <= 2;
}

bool UQTE_Subsystem::CanStartQTE() const
{
    return ActivePlayers.Num() == CurrentConfig.SnapPoints.Num();
}

bool UQTE_Subsystem::CheckQTECompletion()
{
    bool allComplete = true;
    
    for (const auto& Config : CurrentConfig.SnapPoints)
    {
        if (Config.RepeatCount == -1)
        {
            continue;
        }

        const FQTEProgressData* Progress = ActionProgress.Find(Config.SnapPointType);
        if (!Progress || !Progress->bIsComplete)
        {
            allComplete = false;
        }
    }
    
    return allComplete;
}

void UQTE_Subsystem::SetupTimers()
{
    if (UWorld* World = GetWorld())
    {
        World->GetTimerManager().SetTimer(GlobalTimerHandle,
            [this]() { CompleteQTE(false); },
            CurrentConfig.TotalTime,
            false);
    }
}

void UQTE_Subsystem::ClearTimers()
{
    if (UWorld* World = GetWorld())
    {
        World->GetTimerManager().ClearTimer(GlobalTimerHandle);
        World->GetTimerManager().ClearTimer(ProcessTimerHandle);
    }
}

void UQTE_Subsystem::ResetState()
{
    CurrentConfig = FQTEConfiguration();
    ActivePlayers.Empty();
    bIsPaused = false;
}

void UQTE_Subsystem::SetQTEState(EQTEState NewState)
{
    if (CurrentState != NewState)
    {
        CurrentState = NewState;
    }
}

void UQTE_Subsystem::CompleteQTE(bool bSuccess)
{
    ClearTimers();
    
    SetQTEState(bSuccess ? EQTEState::Completed : EQTEState::Failed);
    OnQTEComplete.Broadcast(bSuccess);
}