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

    IBCR_Helper::LogAll(this, 
    FString::Printf(TEXT("Starting QTE: %s"), 
        *Config->ConfigurationName),
    3.0f, FColor::Green);
    
    StartQTE(Config->ToRuntimeConfig());
}

void UQTE_Subsystem::StartQTE(const FQTEConfiguration Config)
{
    if (IsQTERunning())
    {
        IBCR_Helper::LogAll(this, TEXT("QTE Already running"), 5.0f, FColor::Red);
        return;
    }

    CurrentConfig = Config;
    ActionProgress.Empty();
    
    if (!IsQTEConfigValid())
    {
        IBCR_Helper::LogAll(this, 
            FString::Printf(TEXT("Invalid QTE Configuration: %s"), 
                *Config.ConfigurationName), 
            5.0f, FColor::Red);
        return;
    }

    for (const auto& SnapPoint : Config.SnapPoints)
    {
        IBCR_Helper::LogAll(this, 
            FString::Printf(TEXT("Snap Point %s: Action=%s, RepeatCount=%d"), 
                *UEnum::GetValueAsString(SnapPoint.SnapPointType),
                *UEnum::GetValueAsString(SnapPoint.ActionType),
                SnapPoint.RepeatCount),
            5.0f, FColor::Cyan);
    }
    
    SetQTEState(EQTEState::WaitingForPlayers);
    
    if (CurrentConfig.TotalTime > 0.0f)
    {
        IBCR_Helper::LogAll(this, 
            FString::Printf(TEXT("QTE Time Limit: %.1f seconds"), 
                CurrentConfig.TotalTime),
            3.0f, FColor::Yellow);
        
        SetupTimers();
    }
}

void UQTE_Subsystem::OnPlayerEnterSnapPoint(AMainPlayer* Player, ESnapPointType SnapPoint)
{
    if (!Player || CurrentState != EQTEState::WaitingForPlayers)
    {
        return;
    }

    if (auto PC = Player->GetController<APlayerController>())
    {
        IBCR_Helper::LogAll(this, 
            FString::Printf(TEXT("Player at %s has valid controller"), 
                *UEnum::GetValueAsString(SnapPoint)),
            1.0f, FColor::Green);
    }

    ActivePlayers.Add(SnapPoint, Player);

    IBCR_Helper::LogAll(this, 
        FString::Printf(TEXT("Player entered %s point (%d/%d players)"), 
            *UEnum::GetValueAsString(SnapPoint),
            ActivePlayers.Num(), 
            CurrentConfig.SnapPoints.Num()),
        2.0f, FColor::Cyan);
    
    if (ActivePlayers.Num() == 2)
    {
        SetQTEState(EQTEState::Running);
        IBCR_Helper::LogAll(this, TEXT("QTE Starting - Both players ready!"), 2.0f, FColor::Green);
        
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
                0.016f,
                true);
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
    
    bool bSuccess = ValidatePlayerAction(Player, Config);

    switch (SnapPoint)
    {
    case ESnapPointType::First:
        OnSnapPointFirstResult.Broadcast(bSuccess);
        break;
    case ESnapPointType::Second:
        OnSnapPointSecondResult.Broadcast(bSuccess);
        break;
    }
    
    if (bSuccess)
    {
        FQTEProgressData& Progress = ActionProgress.FindOrAdd(SnapPoint);
        Progress.SuccessCount++;
        
        if (Progress.SuccessCount >= Config.RepeatCount)
        {
            Progress.bIsComplete = true;
        }
        
        if (CheckQTECompletion())
        {
            CompleteQTE(true);
            return;
        }
    }
    UpdateActionProgress(Player, SnapPoint, Config);
}

bool UQTE_Subsystem::ValidatePlayerAction(AMainPlayer* Player, const FSnapPointConfig& Config)
{
    bool result = false;
    FString debugInfo;
    
    switch (Config.ActionType)
    {
    case EQTEActionType::Press:
        result = ValidatePressAction(Player, Config);
        debugInfo = TEXT("Button Press");
        break;
    case EQTEActionType::Hold:
        result = ValidateHoldAction(Player, Config);
        debugInfo = TEXT("Button Hold");
        break;
    case EQTEActionType::Release:
        result = ValidateReleaseAction(Player, Config);
        debugInfo = TEXT("Button Release");
        break;
    case EQTEActionType::Rotate:
        result = ValidateRotateAction(Player, Config);
        debugInfo = TEXT("Rotation");
        break;
    default:
        debugInfo = TEXT("Unknown Action");
    }

    if (result)
    {
        IBCR_Helper::LogAll(this, 
    FString::Printf(TEXT("Validating %s: %s [Key:%s]"), 
        *debugInfo,
        result ? TEXT("Valid") : TEXT("Invalid"),
        *Config.RequiredInput.ToString()),
    1.0f, result ? FColor::Green : FColor::Red);   
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
        float analogValue = PC->GetInputAnalogKeyState(Config.RequiredInput);
        bool bWasPressed = PC->WasInputKeyJustPressed(Config.RequiredInput);
        bool bIsPressed = analogValue > 0.5f;

        return bWasPressed || bIsPressed;
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

                if(Progress.bIsActive)
                {
                    IBCR_Helper::LogAll(this,
                        FString::Printf(TEXT("Rotation Progress: %.2f%%"),
                            Progress.Progress * 100.0f),
                        0.5f, FColor::Yellow);
                }
                    
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
    for (const auto& Config : CurrentConfig.SnapPoints)
    {
        const FQTEProgressData* Progress = ActionProgress.Find(Config.SnapPointType);
        if (!Progress || !Progress->bIsComplete)
        {
            return false;
        }
    }
    return true;
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
        IBCR_Helper::LogAll(this, 
            FString::Printf(TEXT("QTE State: %s"), 
                *UEnum::GetValueAsString(NewState)), 
            2.0f, FColor::White);
    }
}

void UQTE_Subsystem::CompleteQTE(bool bSuccess)
{
    ClearTimers();

    IBCR_Helper::LogAll(this, 
        FString::Printf(TEXT("QTE %s"), 
            bSuccess ? TEXT("Completed Successfully") : TEXT("Failed")),
        3.0f, bSuccess ? FColor::Green : FColor::Red);
    
    SetQTEState(bSuccess ? EQTEState::Completed : EQTEState::Failed);
    OnQTEComplete.Broadcast(bSuccess);
}