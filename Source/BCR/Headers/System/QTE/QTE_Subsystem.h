#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "QTETypes.h"
#include "BCR/Headers/System/QTE/QTEConfigurationTypes.h"
#include "GameFramework/PlayerController.h"
#include "QTE_Subsystem.generated.h"

//////// DELEGATES ////////
//// QTE Event delegates
/** Broadcast when a player completes their part of a sequence */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerSubSequenceCompleteSignature, AMainPlayer*, Player, int32, SequenceIndex);
/** Fired when a player fails their part of a sequence */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerSubSequenceFailedSignature, AMainPlayer*, Player, int32, SequenceIndex);
/** Fired when all players complete a sequence successfully */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSequenceCompleteSignature, int32, SequenceIndex);
/** Fired when a sequence fails */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSequenceFailedSignature, int32, SequenceIndex);
/** Fired when the entire QTE completes (success or failure) */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQTECompleteSignature, bool, bSuccess);

class AMainPlayer;

/** 
 * QTE System that manages cooperative quick time events between players
 * Handles input validation, sequence progression, and timing
 */
UCLASS(Blueprintable)
class BCR_API UQTE_Subsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	//////// METHODS ////////
	/// Subsystem interface
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
	
	/// QTE Execution flow
	UFUNCTION(BlueprintCallable, Category = "QTE")
	void StartQTE(const FQTEConfiguration& Config);
	UFUNCTION(BlueprintCallable, Category = "QTE", 
		Meta = (DisplayName = "Start QTE From Asset"))
	void StartQTEFromAsset(UQTEConfigurationAsset* Config, const TArray<AMainPlayer*>& Players);
	
	UFUNCTION(BlueprintCallable, Category = "QTE")
	void StopQTE();
	UFUNCTION(BlueprintCallable, Category = "QTE")
	void SetQTEPaused(bool bPaused);

	//////// DELEGATES ////////
	//// QTE Event delegates
	UPROPERTY(BlueprintAssignable, Category = "QTE")
	FOnPlayerSubSequenceCompleteSignature OnPlayerSubSequenceComplete;
	UPROPERTY(BlueprintAssignable, Category = "QTE")
	FOnPlayerSubSequenceFailedSignature OnPlayerSubSequenceFailed;
	UPROPERTY(BlueprintAssignable, Category = "QTE")
	FOnSequenceCompleteSignature OnSequenceComplete;
	UPROPERTY(BlueprintAssignable, Category = "QTE")
	FOnSequenceFailedSignature OnSequenceFailed;
	UPROPERTY(BlueprintAssignable, Category = "QTE")
	FOnQTECompleteSignature OnQTEComplete;
	
private:
	//////// FIELDS ////////
	/// QTE Config
	/** Current QTE configuration being executed */
	FQTEConfiguration CurrentConfig;

	//// QTE State
	bool bIsPaused;
	EQTEState CurrentState;
	int32 CurrentSequenceIndex;
	int32 CurrentRepeatCount;
	TMap<AMainPlayer*, float> CurrentHoldTimes;
	
	/// QTE Timers
	FTimerHandle TickTimerHandle;
	FTimerHandle GlobalTimerHandle;

	//////// METHODS ////////
	/// Asset Processing
	void ValidateAndStartQTE(const FQTEConfiguration& Config);
	
	/// Input Processing
	void ProcessInputs(float DeltaTime);
	bool ValidateInput(const FQTEInputStep& Step, AMainPlayer* Player, float DeltaTime);
	bool CheckHoldInput(const FQTEInputStep& Step, AMainPlayer* Player);
	bool CheckTapInput(const FQTEInputStep& Step, AMainPlayer* Player);
	bool CheckReleaseInput(const FQTEInputStep& Step, AMainPlayer* Player);
	bool CheckStickMoveInput(const FQTEInputStep& Step, AMainPlayer* Player);

	/// Sequence Processing
	void AdvanceToNextSequence();
	bool ValidateSequenceCompletion(const FQTESequence& Sequence);
	void ProcessSequence(float DeltaTime);
	void ResetCurrentSequence();
	void CompleteQTE(bool bSuccess);

	//////// HELPERS ////////
	/// Timers
	void ClearTimers();
	void SetupGlobalTimer(const FQTEConfiguration& Config);
	void SetupProcessTimer();
	void HandleTimersPause(bool bPause);

	/// State
	void ResetQTEState();
	void SetQTEState(EQTEState NewState);
	bool IsQTERunning() const;
	bool IsQTEConfigValid() const;
};
