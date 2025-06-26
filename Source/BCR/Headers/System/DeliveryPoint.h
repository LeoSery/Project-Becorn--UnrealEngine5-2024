#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "BCR/Headers/System/Pickable/PickableItem.h"
#include "DeliveryPoint.generated.h"

class UBillboardComponent;

//////// CLASS ////////

/**
 * @brief Delivery point for transforming items into new objects
 * @details Detects specific item types and spawns corresponding output objects
 */
UCLASS()
class BCR_API ADeliveryPoint : public AActor
{
	GENERATED_BODY()

public:

	//////// UNREAL LIFECYCLE ////////
	ADeliveryPoint();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	//////// COMPONENTS ////////
	/// Collision and positioning
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UBoxComponent* ColliderBox;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UBillboardComponent* WorldPoint;

	//////// CONFIGURATION ////////
	/// Item transformation setup
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<APickableItem> ItemType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<APickableItem> ObjectToSpawn;

protected:
	
	//////// EVENT CALLBACKS ////////
	/// Collision detection
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	//////// STATE TRACKING ////////
	/// Delivery state
	bool DoOnce = false;
};
