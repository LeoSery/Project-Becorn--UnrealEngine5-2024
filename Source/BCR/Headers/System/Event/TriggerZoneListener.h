#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TriggerZoneListener.generated.h"

struct FTriggerData;

UINTERFACE(Blueprintable)
class UTriggerZoneListener : public UInterface
{
	GENERATED_BODY()
};

class BCR_API ITriggerZoneListener
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void OnOnePlayerEnterInnerZone(const FTriggerData& TriggerData);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void OnTwoPlayersEnterInnerZone(const FTriggerData& TriggerData);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void OnPlayersExitInnerZone(const FTriggerData& TriggerData);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void OnOnePlayerEnterOuterZone(const FTriggerData& TriggerData);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void OnTwoPlayersEnterOuterZone(const FTriggerData& TriggerData);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void OnPlayersExitOuterZone(const FTriggerData& TriggerData);
};
