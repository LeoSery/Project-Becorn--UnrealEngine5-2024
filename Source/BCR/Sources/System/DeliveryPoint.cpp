// Fill out your copyright notice in the Description page of Project Settings.


#include "BCR/Headers/System/DeliveryPoint.h"


// Sets default values
ADeliveryPoint::ADeliveryPoint()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create Collision Box
	ColliderBox = CreateDefaultSubobject<UBoxComponent>(FName("Collision Zone"));
	ColliderBox->SetRelativeScale3D(FVector(2, 2, 2));
	ColliderBox->SetVisibility(true);
	ColliderBox->SetHiddenInGame(false);
	ColliderBox->SetVisibleInSceneCaptureOnly(false);

	// Add event to the OnComponentBeginOverlap delegate
	RootComponent = CreateDefaultSubobject<USceneComponent>("Root");
	ColliderBox->SetupAttachment(RootComponent);
	ColliderBox->OnComponentBeginOverlap.AddDynamic(this, &ADeliveryPoint::OnOverlapBegin);
	WorldPoint = CreateDefaultSubobject<UBillboardComponent>(TEXT("Snap object point"));
	WorldPoint->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ADeliveryPoint::BeginPlay()
{
	Super::BeginPlay();
	
}

void ADeliveryPoint::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (ItemType == OtherActor->GetClass() && !DoOnce)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, TEXT("Object Deliver !"));
		GetWorld()->SpawnActor<APickableItem>(ObjectToSpawn, WorldPoint->GetComponentLocation(), FRotator(0.0f, 0.0f, 0.0f));
		DoOnce = true;
	}
}

// Called every frame
void ADeliveryPoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

