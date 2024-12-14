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
        IBCR_Helper::LogScreen(this, TEXT("invalid QTE Configuration"), 5.0f, FColor::Red);
    }
    else
    {
        StartQTE(Config->ToRuntimeConfig());
    }
}

void UQTE_Subsystem::StartQTE(const FQTEConfiguration Config)
{
    if (IsQTERunning())
    {
        IBCR_Helper::LogScreen(this, TEXT("QTE Already running"), 5.0f, FColor::Red);
        return;
    }

    CurrentConfig = Config;
    if (!IsQTEConfigValid())
    {
        IBCR_Helper::LogScreen(this, TEXT("invalid QTE Configuration"), 5.0f, FColor::Red);
        return;
    }
    
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

    if (CanStartQTE())
    {
        SetQTEState(EQTEState::Running);
        if (UWorld* World = GetWorld())
        {
            World->GetTimerManager().SetTimer(ProcessTimerHandle, 
                [this]() { ProcessInputs(GetWorld()->GetDeltaSeconds()); },
                0.0f, true);
        }
    }
}

void UQTE_Subsystem::OnPlayerLeaveSnapPoint(AMainPlayer* Player, ESnapPointType SnapPoint)
{
    if (!Player || !IsQTERunning())
    {
        return;
    }

    ActivePlayers.Remove(SnapPoint);

    if (CurrentState == EQTEState::Running)
    {
        SetQTEState(EQTEState::WaitingForPlayers);
        if (UWorld* World = GetWorld())
        {
            World->GetTimerManager().PauseTimer(ProcessTimerHandle);
        }
    }
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
            continue;
        }

        if (const FSnapPointConfig* Config = CurrentConfig.SnapPoints.FindByPredicate(
            [SnapPoint](const FSnapPointConfig& Cfg) { return Cfg.SnapPointType == SnapPoint; }))
        {
            ProcessPlayerInput(Player, SnapPoint, *Config, DeltaTime);
        }
    }
}

void UQTE_Subsystem::ProcessPlayerInput(AMainPlayer* Player, ESnapPointType SnapPoint, const FSnapPointConfig& Config, float DeltaTime)
{
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
    
    UpdateActionProgress(Player, SnapPoint, Config);
}

bool UQTE_Subsystem::ValidatePlayerAction(AMainPlayer* Player, const FSnapPointConfig& Config)
{
    switch (Config.ActionType)
    {
    case EQTEActionType::Press:
        return ValidatePressAction(Player, Config);
    case EQTEActionType::Hold:
        return ValidateHoldAction(Player, Config);
    case EQTEActionType::Release:
        return ValidateReleaseAction(Player, Config);
    case EQTEActionType::Rotate:
        return ValidateRotateAction(Player, Config);
    default:
        return false;
    }
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
        return PC->WasInputKeyJustPressed(Config.RequiredInput);
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

void UQTE_Subsystem::UpdateActionProgress(const AMainPlayer* Player, ESnapPointType SnapPoint, 
    const FSnapPointConfig& Config)
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
    if (!IsQTERunning()) return;

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
        IBCR_Helper::LogScreen(this, 
            FString::Printf(TEXT("QTE State: %s"), 
                *UEnum::GetValueAsString(NewState)), 
            2.0f, FColor::White);
    }
}

void UQTE_Subsystem::CompleteQTE(bool bSuccess)
{
    ClearTimers();
    SetQTEState(bSuccess ? EQTEState::Completed : EQTEState::Failed);
    OnQTEComplete.Broadcast(bSuccess);
}