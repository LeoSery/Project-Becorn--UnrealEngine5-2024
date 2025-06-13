#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "QTETypes.h"
#include "BCR/Headers/System/QTE/QTEConfigurationTypes.h"
#include "GameFramework/PlayerController.h"
#include "QTE_Subsystem.generated.h"

//////// FORWARD DECLARATIONS ////////
/// Class
class AMiniGameSystem;
class AMainPlayer;

//////// DELEGATES ////////
/// QTE Delegates
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSnapPointQTEResult, EQTEResult, Result);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQTEComplete, bool, bSuccess);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQTEProgress, const FQTEActionProgress&, Progress);

//////// CLASS ////////
/// Subsystem responsible for managing Quick Time Events (QTE) in the game
/// Handles player input validation, progress tracking, and result broadcasting
UCLASS()
class BCR_API UQTE_Subsystem : public UGameInstanceSubsystem, public FTickableGameObject
{
    GENERATED_BODY()

public:
    
    //////// UNREAL LIFECYCLE ////////
    /// Start and End of subsystem
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;

    /// Tickable subsystem
    virtual void Tick(float DeltaTime) override;
    virtual bool IsTickable() const override;
    virtual TStatId GetStatId() const override;

    //////// QTE WORKFLOW ////////
    UFUNCTION(BlueprintCallable, Category = "QTE")
    void StartQTEFromAsset(const UQTEConfigurationAsset* Config);
    UFUNCTION(BlueprintCallable, Category = "QTE")
    void StartQTE(const FQTEConfiguration Config);
    UFUNCTION(BlueprintCallable, Category = "QTE")
    void StopQTE();
    UFUNCTION(BlueprintCallable, Category = "QTE")
    void SetQTEPaused(bool bPaused);

    //////// PLAYER MANAGEMENT ////////
    UFUNCTION(BlueprintCallable, Category = "QTE")
    void OnPlayerEnterSnapPoint(AMainPlayer* Player, ESnapPointType SnapPoint);
    UFUNCTION(BlueprintCallable, Category = "QTE")
    void OnPlayerLeaveSnapPoint(AMainPlayer* Player, ESnapPointType SnapPoint);

    //////// DELEGATES ////////
    UPROPERTY(BlueprintAssignable, Category = "QTE")
    FOnSnapPointQTEResult OnSnapPointFirstResult;
    UPROPERTY(BlueprintAssignable, Category = "QTE")
    FOnSnapPointQTEResult OnSnapPointSecondResult;
    UPROPERTY(BlueprintAssignable, Category = "QTE")
    FOnQTEComplete OnQTEComplete;
    UPROPERTY(BlueprintAssignable, Category = "QTE")
    FOnQTEProgress OnSnapPointFirstProgress;
    UPROPERTY(BlueprintAssignable, Category = "QTE")
    FOnQTEProgress OnSnapPointSecondProgress;

    //////// GETTERS ////////
    /// QTE State
    EQTEState GetCurrentState() const { return CurrentState; }

private:
    
    //////// STATE MANAGEMENT ////////
    EQTEState CurrentState;
    bool bIsPaused;
    FQTEConfiguration CurrentConfig;
    
    //////// TRACKING ////////
    /// Players tracking
    TMap<ESnapPointType, TWeakObjectPtr<AMainPlayer>> ActivePlayers;
    TMap<ESnapPointType, FQTEProgressData> ActionProgress;
    
    /// Timers tracking
    FTimerHandle GlobalTimerHandle;

    //////// INPUTS ////////
    /// Input Processing
    void ProcessInputs(float DeltaTime);
    void ProcessPlayerInput(AMainPlayer* Player, ESnapPointType SnapPoint, const FSnapPointConfig& Config, float DeltaTime);
    bool ValidatePlayerAction(AMainPlayer* Player, const FSnapPointConfig& Config);
    
    /// Input Validation
    bool ValidateHoldAction(const AMainPlayer* Player, const FSnapPointConfig& Config);
    bool ValidateRotateAction(const AMainPlayer* Player, const FSnapPointConfig& Config);
    bool ValidatePressAction(const AMainPlayer* Player, const FSnapPointConfig& Config);
    bool ValidateReleaseAction(const AMainPlayer* Player, const FSnapPointConfig& Config);
    
    /// Input Progress
    void UpdateActionProgress(const AMainPlayer* Player, ESnapPointType SnapPoint, const FSnapPointConfig& Config);

    //////// HELPERS ////////
    /// State management
    void CompleteQTE(bool bSuccess);
    void ClearTimers();
    void SetupTimers();
    void ResetState();
    void SetQTEState(EQTEState NewState);
    
    /// State validation
    bool IsQTERunning() const;
    bool IsQTEConfigValid() const;
    bool CanStartQTE() const;
    bool CheckQTECompletion();
};
