#include "BCR/Headers/System/QTE/QTE_Subsystem.h"
#include "BCR/Headers/Player/MainPlayer.h"
#include "BCR/Headers/Interfaces/BCR_Helper.h"

/**
 * @brief Initializes the QTE subsystem
 * @details Sets up the initial state and resets all internal variables
 * 
 * @param Collection The subsystem collection for dependency management
 */
void UQTE_Subsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);
    ResetState();
    CurrentState = EQTEState::Inactive;
}

/**
 * @brief Cleans up the QTE subsystem
 * @details Stops any running QTE and performs cleanup
 */
void UQTE_Subsystem::Deinitialize()
{
    StopQTE();
    Super::Deinitialize();
}

/**
 * @brief Updates the QTE system each frame
 * @details Processes player inputs and updates QTE state when running and not paused
 * 
 * @param DeltaTime Time elapsed since the last frame in seconds
 */
void UQTE_Subsystem::Tick(float DeltaTime)
{
    if (CurrentState == EQTEState::Running && !bIsPaused)
    {
        ProcessInputs(DeltaTime);
    }
}

/**
 * @brief Determines if this object should be ticked
 * @details Only ticks when QTE is running and not paused
 * 
 * @return True if the subsystem should tick, false otherwise
 */
bool UQTE_Subsystem::IsTickable() const
{
    return IsQTERunning() && !bIsPaused;
}

/**
 * @brief Gets the stat ID for profiling
 * @details Used by Unreal's profiling system to track performance
 * 
 * @return Stat ID for this tickable object
 */
TStatId UQTE_Subsystem::GetStatId() const
{
    RETURN_QUICK_DECLARE_CYCLE_STAT(UQTE_Subsystem, STATGROUP_Tickables);
}

/**
 * @brief Starts a QTE using a configuration asset
 * @details Converts the asset to runtime configuration and starts the QTE
 * 
 * @param Config The QTE configuration asset to use
 */
void UQTE_Subsystem::StartQTEFromAsset(const UQTEConfigurationAsset* Config)
{
    if (!Config)
    {
        IBCR_Helper::LogAll(this, TEXT("StartQTEFromAsset: Invalid Config Asset"), 5.0f, FColor::Red);
    }

    if (IsQTERunning())
    {
        IBCR_Helper::LogAll(this, TEXT("StartQTEFromAsset: Invalid Starting > Already running"), 5.0f, FColor::Red);
        return;
    }
    
    StartQTE(Config->ToRuntimeConfig());
}

/**
 * @brief Starts a QTE with the given configuration
 * @details Initializes the QTE state and waits for players to enter snap points
 * 
 * @param Config The runtime QTE configuration
 */
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

/**
 * @brief Registers a player entering a snap point
 * @details Adds the player to the active list and starts QTE when all positions are filled
 * 
 * @param Player The player entering the snap point
 * @param SnapPoint The type of snap point being entered
 */
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
    ////////////////////////////////////////////////
    
    if (GEngine)
    {
        FString PlayerText = (SnapPoint == ESnapPointType::First) ? TEXT("Player 1") : TEXT("Player 2");
        GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Cyan,
            FString::Printf(TEXT("%s ready"), *PlayerText));
        
        if (ActivePlayers.Num() == 2)
        {
            GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, TEXT("Play the QTE !"));
            SetQTEState(EQTEState::Running);
        }
    }
}

/**
 * @brief Handles a player leaving a snap point
 * @details Removes the player and stops the QTE if it was running
 * 
 * @param Player The player leaving the snap point
 * @param SnapPoint The type of snap point being left
 */
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

/**
 * @brief Processes all player inputs for the current frame
 * @details Iterates through active players and validates their actions
 * 
 * @param DeltaTime Time elapsed since the last frame in seconds
 */
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

/**
 * @brief Processes input for a specific player at a snap point
 * @details Validates the player's action and updates progress accordingly
 * 
 * @param Player The player whose input to process
 * @param SnapPoint The snap point the player is at
 * @param Config The configuration for this snap point
 * @param DeltaTime Time elapsed since the last frame in seconds
 */
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
        
        if (Progress && Progress->SuccessCount > 0 && (!OtherProgress || OtherProgress->SuccessCount < Progress->SuccessCount))
        {
            IBCR_Helper::LogConsole(this, FString::Printf(TEXT("Waiting for other player. Current: %d, Other: %d"), Progress->SuccessCount, OtherProgress ? OtherProgress->SuccessCount : 0));
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
            // GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green,
            //     FString::Printf(TEXT("%s: Success!"), *PlayerText));
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

/**
 * @brief Validates a player's action based on the required input type
 * @details Routes to the appropriate validation method based on action type
 * 
 * @param Player The player performing the action
 * @param Config The snap point configuration with action requirements
 * @return True if the action is valid, false otherwise
 */
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

/**
 * @brief Validates a hold action input
 * @details Checks if the required key is currently being held down
 * 
 * @param Player The player performing the action
 * @param Config The snap point configuration
 * @return True if the key is being held, false otherwise
 */
bool UQTE_Subsystem::ValidateHoldAction(const AMainPlayer* Player, const FSnapPointConfig& Config)
{
    if (auto PC = Player->GetController<APlayerController>())
    {
        return PC->IsInputKeyDown(Config.RequiredInput);
    }
    return false;
}

/**
 * @brief Validates a rotate action input
 * @details Checks if the analog stick movement meets the minimum rotation speed
 * 
 * @param Player The player performing the action
 * @param Config The snap point configuration with minimum rotation speed
 * @return True if rotation speed is sufficient, false otherwise
 */
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

/**
 * @brief Validates a press action input
 * @details Checks if the required key was just pressed this frame
 * 
 * @param Player The player performing the action
 * @param Config The snap point configuration
 * @return True if the key was just pressed, false otherwise
 */
bool UQTE_Subsystem::ValidatePressAction(const AMainPlayer* Player, const FSnapPointConfig& Config)
{
    if (auto PC = Player->GetController<APlayerController>())
    {
        bool bWasPressed = PC->WasInputKeyJustPressed(Config.RequiredInput);
        return bWasPressed;
    }
    return false;
}

/**
 * @brief Validates a release action input
 * @details Checks if the required key was just released this frame
 * 
 * @param Player The player performing the action
 * @param Config The snap point configuration
 * @return True if the key was just released, false otherwise
 */
bool UQTE_Subsystem::ValidateReleaseAction(const AMainPlayer* Player, const FSnapPointConfig& Config)
{
    if (auto PC = Player->GetController<APlayerController>())
    {
        return PC->WasInputKeyJustReleased(Config.RequiredInput);
    }
    return false;
}

/**
 * @brief Updates and broadcasts the action progress for a player
 * @details Calculates progress based on action type and broadcasts to listeners
 * 
 * @param Player The player whose progress to update
 * @param SnapPoint The snap point the player is at
 * @param Config The snap point configuration
 */
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

                const float MIN_STICK_THRESHOLD = 0.1f;
                float stickMagnitude = Progress.StickPosition.Size();


                if (stickMagnitude > MIN_STICK_THRESHOLD)
                {
                    Progress.Progress = Progress.StickPosition.Size() / Config.MinRotationSpeed;
                    Progress.bIsActive = Progress.Progress > 0.0f;
                }
                else
                {
                    Progress.Progress = 0.0f;
                    Progress.bIsActive = false;
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

    switch (SnapPoint)
    {
    case ESnapPointType::First:
        OnSnapPointFirstProgress.Broadcast(Progress);
        break;
    case ESnapPointType::Second:
        OnSnapPointSecondProgress.Broadcast(Progress);
        break;
    }
}

/**
 * @brief Stops the current QTE
 * @details Clears timers, resets state, and broadcasts failure
 */
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

/**
 * @brief Pauses or unpauses the QTE
 * @details Suspends input processing and timer updates
 * 
 * @param bPause True to pause, false to resume
 */
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
            World->GetTimerManager().PauseTimer(GlobalTimerHandle);
        }
        else
        {
            World->GetTimerManager().UnPauseTimer(GlobalTimerHandle);
        }
    }
}

/**
 * @brief Checks if a QTE is currently running or waiting for players
 * @details Used to prevent multiple QTEs from running simultaneously
 * 
 * @return True if QTE is active, false otherwise
 */
bool UQTE_Subsystem::IsQTERunning() const
{
    return CurrentState == EQTEState::Running || CurrentState == EQTEState::WaitingForPlayers;
}

/**
 * @brief Validates the current QTE configuration
 * @details Ensures the configuration has valid snap points and settings
 * 
 * @return True if configuration is valid, false otherwise
 */
bool UQTE_Subsystem::IsQTEConfigValid() const
{
    return CurrentConfig.SnapPoints.Num() > 0 && CurrentConfig.SnapPoints.Num() <= 2;
}

/**
 * @brief Checks if all required players are present to start the QTE
 * @details Compares active player count with required snap points
 * 
 * @return True if QTE can start, false otherwise
 */
bool UQTE_Subsystem::CanStartQTE() const
{
    return ActivePlayers.Num() == CurrentConfig.SnapPoints.Num();
}

/**
 * @brief Checks if all QTE actions have been completed
 * @details Verifies that all snap points have reached their completion criteria
 * 
 * @return True if QTE is complete, false otherwise
 */
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

/**
 * @brief Sets up global timers for the QTE
 * @details Creates timeout timer if the configuration specifies a time limit
 */
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

/**
 * @brief Clears all active timers
 * @details Stops the global timeout timer if it's running
 */
void UQTE_Subsystem::ClearTimers()
{
    if (UWorld* World = GetWorld())
    {
        World->GetTimerManager().ClearTimer(GlobalTimerHandle);
    }
}

/**
 * @brief Resets all internal state to default values
 * @details Clears configuration, players, and progress data
 */
void UQTE_Subsystem::ResetState()
{
    CurrentConfig = FQTEConfiguration();
    ActivePlayers.Empty();
    bIsPaused = false;
}

/**
 * @brief Changes the current QTE state
 * @details Updates the internal state enum
 * 
 * @param NewState The new state to transition to
 */
void UQTE_Subsystem::SetQTEState(EQTEState NewState)
{
    if (CurrentState != NewState)
    {
        CurrentState = NewState;
    }
}

/**
 * @brief Completes the QTE with success or failure
 * @details Clears timers, sets final state, and broadcasts completion
 * 
 * @param bSuccess True if QTE was completed successfully, false if failed
 */
void UQTE_Subsystem::CompleteQTE(bool bSuccess)
{
    ClearTimers();
    
    SetQTEState(bSuccess ? EQTEState::Completed : EQTEState::Failed);
    OnQTEComplete.Broadcast(bSuccess);
}
