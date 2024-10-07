// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BCR/Headers/Interfaces/IPickable.h"
#include "AWood.generated.h"

UCLASS()
class BCR_API AAWood : public AActor, public IIPickable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAWood();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
