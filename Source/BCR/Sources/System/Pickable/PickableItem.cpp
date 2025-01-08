#include "BCR/Headers/System/Pickable/PickableItem.h"

// Sets default values
APickableItem::APickableItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APickableItem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APickableItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APickableItem::PickedUp_Implementation(AActor* _player, AActor* _object)
{

	IIPickable::PickedUp_Implementation(_player, _object);
}


