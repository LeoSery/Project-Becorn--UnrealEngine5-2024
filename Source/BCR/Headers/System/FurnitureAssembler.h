// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "DynamicMesh/ColliderMesh.h"
#include "GameFramework/Actor.h"
#include "BCR/Headers/System/Pickable/PickableItem.h"
#include "BCR/Headers/Interfaces/Interactable.h"
#include "BCR/Headers/System/DeliveryPoint.h"
#include "FurnitureAssembler.generated.h"

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

UCLASS()
class BCR_API AFurnitureAssembler : public AActor, public IInteractable
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AFurnitureAssembler();
	UFUNCTION(BlueprintCallable)
	void CraftFurniture();
protected:

	UBoxComponent* AssemblerZone;
	UDataTable* AllRecipies;
	TArray<FName> RowsNames;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// Interface Methods
	void Interact_Implementation(AMainPlayer* Player);
	void InteractWithObject_Implementation(AMainPlayer* Player, AActor* Object);

public:
	UFUNCTION(BlueprintCallable)
	FRecipiesInfo GetActualRecipiesInfo();

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRecipiesInfo ActualRecipies;
};


