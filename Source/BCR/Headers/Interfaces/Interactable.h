#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Interactable.generated.h"

//////// FORWARD DECLARATIONS ////////
/// Classes
class AMainPlayer;

//////// INTERFACE DECLARATION ////////

/**
 * @brief Interface class for interactive objects
 * @details Required for Unreal's interface system - no implementation needed
 */
UINTERFACE(MinimalAPI)
class UInteractable : public UInterface
{
	GENERATED_BODY()
};

//////// INTERFACE IMPLEMENTATION ////////

/**
 * @brief Interface for objects that can be interacted with by players
 * @details Provides basic interaction functionality and object-specific interactions
 */
class BCR_API IInteractable
{
	GENERATED_BODY()

public:

	//////// INTERACTION METHODS ////////
	/// Basic interaction
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Interact(AMainPlayer* Player);

	/// Object-specific interaction
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void InteractWithObject(AMainPlayer* Player, AActor* Object);
};
