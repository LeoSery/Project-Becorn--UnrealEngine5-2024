#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TriggerZoneListener.generated.h"

//////// FORWARD DECLARATIONS ////////
/// Structs
struct FTriggerData;

//////// INTERFACE DECLARATION ////////
/**
 * @brief Interface class for trigger zone events
 * @details Required for Unreal's interface system - no implementation needed
 */
UINTERFACE(Blueprintable)
class UTriggerZoneListener : public UInterface
{
	GENERATED_BODY()
};

//////// INTERFACE IMPLEMENTATION ////////
/**
 * @brief Interface for objects that need to respond to trigger zone events
 * @details Provides callbacks for inner and outer zone entry/exit with player count tracking
 */
class BCR_API ITriggerZoneListener
{
	GENERATED_BODY()

public:

	//////// INNER ZONE EVENTS ////////
	/// Enter
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void OnOnePlayerEnterInnerZone(const FTriggerData& TriggerData);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void OnTwoPlayersEnterInnerZone(const FTriggerData& TriggerData);

	/// Exit
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void OnPlayersExitInnerZone(const FTriggerData& TriggerData);

	//////// OUTER ZONE EVENTS ////////
	/// Enter
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void OnOnePlayerEnterOuterZone(const FTriggerData& TriggerData);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void OnTwoPlayersEnterOuterZone(const FTriggerData& TriggerData);

	/// Exit
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void OnPlayersExitOuterZone(const FTriggerData& TriggerData);
};
