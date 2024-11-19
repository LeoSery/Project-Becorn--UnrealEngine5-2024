#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "QTETypes.h"
#include "QTE_System.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerSubSequenceCompleteSignature, AMainPlayer*, Player, int32, SequenceIndex);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerSubSequenceFailedSignature, AMainPlayer*, Player, int32, SequenceIndex);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSequenceCompleteSignature, int32, SequenceIndex);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSequenceFailedSignature, int32, SequenceIndex);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQTECompleteSignature, bool, bSuccess);

UCLASS(Blueprintable)
class BCR_API UQTE_System : public UObject
{
	GENERATED_BODY()

public:
	static UQTE_System* Get();
	
	UFUNCTION(BlueprintCallable, Category = "QTE")
	void StartQTE(const FQTEConfiguration& Config);

	UFUNCTION(BlueprintCallable, Category = "QTE")
	void StopQTE();

	UFUNCTION(BlueprintCallable, Category = "QTE")
	void SetQTEPaused(bool bPaused);
	
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
	static UQTE_System* Instance;
	
	FQTEConfiguration CurrentConfig;
	bool bIsPaused;
};
