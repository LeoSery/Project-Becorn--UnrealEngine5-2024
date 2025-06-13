#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "BCR/Headers/System/Pickable/PickableItem.h"
#include "BCR/Headers/Interfaces/Interactable.h"
#include "BCR/Headers/System/DeliveryPoint.h"
#include "FurnitureAssembler.generated.h"

//////// STRUCTS ////////

/**
 * @brief Recipe data for furniture crafting
 * @details Contains material requirements, output item, and delivery point information
 */
USTRUCT(BlueprintType)
struct FRecipiesInfo : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<TSubclassOf<APickableItem>, int> Material;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<APickableItem> Out;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<ADeliveryPoint> DelivreryPoint;
};

//////// CLASS ////////

/**
 * @brief Furniture assembly station for crafting items from recipes
 * @details Manages recipe-based crafting system with material validation and output generation
 */
UCLASS()
class BCR_API AFurnitureAssembler : public AActor, public IInteractable
{
	GENERATED_BODY()

public:

	//////// UNREAL LIFECYCLE ////////
	AFurnitureAssembler();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	//////// CRAFTING SYSTEM ////////
	/// Recipe management
	UFUNCTION(BlueprintCallable)
	FRecipiesInfo GetActualRecipiesInfo();
	
	UFUNCTION(BlueprintCallable)
	void CraftFurniture();

	//////// PROPERTIES ////////
	/// Current recipe data
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRecipiesInfo ActualRecipies;

	/// Animation and state
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool PlayFlowerAnimation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CraftOnce = false;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int requieredMaterials = 3;
	
protected:

	//////// COMPONENTS ////////
	/// Interaction zone
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UBoxComponent* AssemblerZone;

	//////// RECIPE SYSTEM ////////
	/// Recipe data management
	UDataTable* AllRecipies;
	TArray<FName> RowsNames;
	TMap<AMainPlayer*, AActor*> PlayerHolding;

	//////// EVENT CALLBACKS ////////
	/// Collision detection
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	//////// INTERFACE IMPLEMENTATION ////////
	/// IInteractable methods
	void Interact_Implementation(AMainPlayer* Player);
	void InteractWithObject_Implementation(AMainPlayer* Player, AActor* Object);

	//////// CRAFTING EVENTS ////////
	/// Blueprint events
	UFUNCTION(BlueprintNativeEvent)
	void OnElementDropOnAssembler();
	void OnElementDropOnAssembler_Implementation();
};
