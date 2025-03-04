// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BCR/Headers/Interfaces/Interactable.h"
#include "UniqueRope.generated.h"

UCLASS()
class BCR_API AUniqueRope : public AActor, public IInteractable
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AUniqueRope();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Interface Methods
	void Interact_Implementation(AMainPlayer* Player);
	void InteractWithObject_Implementation(AMainPlayer* Player, AActor* Object);

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
