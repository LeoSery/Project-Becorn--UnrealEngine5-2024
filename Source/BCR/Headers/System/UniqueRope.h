#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BCR/Headers/Interfaces/Interactable.h"
#include "UniqueRope.generated.h"

//////// CLASS ////////

/**
 * @brief Special rope object for cooperative interactions
 * @details Implements interactive functionality for rope-based mini-games
 */
UCLASS()
class BCR_API AUniqueRope : public AActor, public IInteractable
{
	GENERATED_BODY()

public:

	//////// UNREAL LIFECYCLE ////////
	AUniqueRope();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

protected:

	//////// INTERFACE IMPLEMENTATION ////////
	/// IInteractable methods
	void Interact_Implementation(AMainPlayer* Player);
	void InteractWithObject_Implementation(AMainPlayer* Player, AActor* Object);
};
