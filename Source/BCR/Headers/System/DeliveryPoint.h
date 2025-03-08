// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "BCR/Headers/System/Pickable/PickableItem.h"
#include <Components/BillboardComponent.h>
#include "DeliveryPoint.generated.h"

UCLASS()
class BCR_API ADeliveryPoint : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADeliveryPoint();
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UBoxComponent* ColliderBox;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<APickableItem> ItemType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<APickableItem> ObjectToSpawn;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UBillboardComponent* WorldPoint;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	bool DoOnce = false;


public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
