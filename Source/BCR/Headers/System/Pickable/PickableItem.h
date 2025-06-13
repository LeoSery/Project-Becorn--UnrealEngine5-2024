#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BCR/Headers/Interfaces/IPickable.h"
#include "PickableItem.generated.h"

//////// CLASS ////////

/**
 * @brief Base class for all pickable objects in the game
 * @details Implements the IPickable interface and provides item identification functionality
 */
UCLASS()
class BCR_API APickableItem : public AActor, public IIPickable
{
	GENERATED_BODY()
	
public:

	//////// UNREAL LIFECYCLE ////////
	APickableItem();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	//////// PROPERTIES ////////
	/// Item identification
	UPROPERTY(EditAnywhere)
	FString name;

	//////// METHODS ////////
	/// Item information
	UFUNCTION(Blueprintable,BlueprintCallable)
	FString GetItemName() const { return name; };

	//////// INTERFACE IMPLEMENTATION ////////
	/// IPickable interface
	virtual void PickedUp_Implementation(AActor* _player, AActor* _object) override;
};
