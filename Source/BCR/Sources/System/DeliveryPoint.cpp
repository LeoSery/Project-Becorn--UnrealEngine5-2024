#include "BCR/Headers/System/DeliveryPoint.h"

#include "Components/BillboardComponent.h"

/**
 * @brief Initializes the delivery point with collision detection
 * @details Sets up collision box and overlap events for item detection
 */
ADeliveryPoint::ADeliveryPoint()
{
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

/**
 * @brief Called when the delivery point is spawned in the world
 * @details Performs initialization logic for the delivery system
 */
void ADeliveryPoint::BeginPlay()
{
	Super::BeginPlay();
}

/**
 * @brief Handles item overlap detection and transformation
 * @details Spawns output object when the correct item type is delivered
 * 
 * @param OverlappedComponent The component that was overlapped
 * @param OtherActor The actor that entered the delivery zone
 * @param OtherComp The component of the overlapping actor
 * @param OtherBodyIndex Body index of the collision
 * @param bFromSweep Whether this was from a sweep operation
 * @param SweepResult Hit result from sweep if applicable
 */
void ADeliveryPoint::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (ItemType == OtherActor->GetClass() && !DoOnce)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, TEXT("Object Deliver !"));
		GetWorld()->SpawnActor<APickableItem>(ObjectToSpawn, WorldPoint->GetComponentLocation(), FRotator(0.0f, 0.0f, 0.0f));
		DoOnce = true;
	}
}

/**
 * @brief Updates the delivery point each frame
 * @details Handles any per-frame logic for the delivery system
 * 
 * @param DeltaTime Time elapsed since the last frame in seconds
 */
void ADeliveryPoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
