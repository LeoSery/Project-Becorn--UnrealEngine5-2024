#include "BCR/Headers/System/Pickable/PickableItem.h"

/**
 * @brief Initializes the pickable item with default settings
 * @details Sets up tick functionality and default actor properties
 */
APickableItem::APickableItem()
{
	PrimaryActorTick.bCanEverTick = true;
}

/**
 * @brief Called when the item is spawned in the world
 * @details Performs any initialization logic required when the item becomes active
 */
void APickableItem::BeginPlay()
{
	Super::BeginPlay();
}

/**
 * @brief Updates the item each frame
 * @details Handles any per-frame logic for the pickable item
 * 
 * @param DeltaTime Time elapsed since the last frame in seconds
 */
void APickableItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

/**
 * @brief Handles the pickup action when a player takes this item
 * @details Implements the IPickable interface for pickup behavior
 * 
 * @param _player The player actor picking up the item
 * @param _object The object being picked up (typically this item)
 */
void APickableItem::PickedUp_Implementation(AActor* _player, AActor* _object)
{
	IIPickable::PickedUp_Implementation(_player, _object);
}
