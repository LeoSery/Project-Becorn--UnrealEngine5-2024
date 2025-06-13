#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IPickable.generated.h"

//////// INTERFACE DECLARATION ////////

/**
 * @brief Interface class for pickable objects
 * @details Required for Unreal's interface system - no implementation needed
 */
UINTERFACE(MinimalAPI,Blueprintable)
class UIPickable : public UInterface
{
	GENERATED_BODY()
};

//////// INTERFACE IMPLEMENTATION ////////

/**
 * @brief Interface for objects that can be picked up and dropped by players
 * @details Provides pickup and drop functionality with default attachment behavior
 */
class BCR_API IIPickable
{
	GENERATED_BODY()

public:

	//////// PICKUP SYSTEM ////////
	/// Pickup interaction
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
	void PickedUp(AActor* Player, AActor* Object);
	virtual void PickedUp_Implementation(AActor* Player, AActor* Object);

	/// Drop interaction
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Drop(AActor* Player, AActor* Object);
	virtual void Drop_Implementation(AActor* Player, AActor* Object);
};
