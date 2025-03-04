// Fill out your copyright notice in the Description page of Project Settings.


#include "BCR/Headers/System/UniqueRope.h"
#include "BCR/Headers/Interfaces/BCR_Helper.h"


// Sets default values
AUniqueRope::AUniqueRope()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AUniqueRope::BeginPlay()
{
	Super::BeginPlay();
	
}

void AUniqueRope::Interact_Implementation(AMainPlayer* Player)
{
	
}

void AUniqueRope::InteractWithObject_Implementation(AMainPlayer* Player, AActor* Object)
{

}

// Called every frame
void AUniqueRope::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

