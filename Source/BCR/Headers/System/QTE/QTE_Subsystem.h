#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "QTETypes.h"
#include "BCR/Headers/System/QTE/QTEConfigurationTypes.h"
#include "GameFramework/PlayerController.h"
#include "QTE_Subsystem.generated.h"

class AMiniGameSystem;
class AMainPlayer;

// Délégués pour communiquer les résultats
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSnapPointQTEResult, EQTEResult, Result);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQTEComplete, bool, bSuccess);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQTEProgress, const FQTEActionProgress&, Progress);

UCLASS()
class BCR_API UQTE_Subsystem : public UGameInstanceSubsystem, public FTickableGameObject
{
    GENERATED_BODY()

public:
    // Initialisation/Deinitialisation
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;

    // TickableGameObject
    virtual void Tick(float DeltaTime) override;
    virtual bool IsTickable() const override;
    virtual TStatId GetStatId() const override;

    // Contrôle du QTE
    UFUNCTION(BlueprintCallable, Category = "QTE")
    void StartQTEFromAsset(const UQTEConfigurationAsset* Config);
    
    UFUNCTION(BlueprintCallable, Category = "QTE")
    void StartQTE(const FQTEConfiguration Config);
    
    UFUNCTION(BlueprintCallable, Category = "QTE")
    void StopQTE();
    
    UFUNCTION(BlueprintCallable, Category = "QTE")
    void SetQTEPaused(bool bPaused);

    // Gestion des joueurs aux snap points
    UFUNCTION(BlueprintCallable, Category = "QTE")
    void OnPlayerEnterSnapPoint(AMainPlayer* Player, ESnapPointType SnapPoint);
    
    UFUNCTION(BlueprintCallable, Category = "QTE")
    void OnPlayerLeaveSnapPoint(AMainPlayer* Player, ESnapPointType SnapPoint);

    // Délégués pour les événements
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

    EQTEState GetCurrentState() const { return CurrentState; }

private:
    // État actuel
    EQTEState CurrentState;
    bool bIsPaused;
    
    // Configuration en cours
    FQTEConfiguration CurrentConfig;
    
    // Map des joueurs actifs par snap point
    TMap<ESnapPointType, TWeakObjectPtr<AMainPlayer>> ActivePlayers;
    TMap<ESnapPointType, FQTEProgressData> ActionProgress;
    
    // Timers
    FTimerHandle GlobalTimerHandle;

    // Méthodes privées de traitement des inputs
    void ProcessInputs(float DeltaTime);
    void ProcessPlayerInput(AMainPlayer* Player, ESnapPointType SnapPoint, const FSnapPointConfig& Config, float DeltaTime);
    bool ValidatePlayerAction(AMainPlayer* Player, const FSnapPointConfig& Config);
    
    // Méthodes de validation par type d'action
    bool ValidateHoldAction(const AMainPlayer* Player, const FSnapPointConfig& Config);
    bool ValidateRotateAction(const AMainPlayer* Player, const FSnapPointConfig& Config);
    bool ValidatePressAction(const AMainPlayer* Player, const FSnapPointConfig& Config);
    bool ValidateReleaseAction(const AMainPlayer* Player, const FSnapPointConfig& Config);
    
    // Méthodes de feedback et progression
    void UpdateActionProgress(const AMainPlayer* Player, ESnapPointType SnapPoint, const FSnapPointConfig& Config);

    // Méthodes de gestion d'état
    void CompleteQTE(bool bSuccess);
    void ClearTimers();
    void SetupTimers();
    void ResetState();
    void SetQTEState(EQTEState NewState);
    
    // Méthodes de validation
    bool IsQTERunning() const;
    bool IsQTEConfigValid() const;
    bool CanStartQTE() const;
    bool CheckQTECompletion();
};