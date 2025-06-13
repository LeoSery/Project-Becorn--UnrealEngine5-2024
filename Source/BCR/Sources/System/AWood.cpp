#include "BCR/Headers/System/AWood.h"

/**
 * @brief Initializes the wood object with default settings
 * @details Sets up tick functionality and pickable properties
 */
AAWood::AAWood()
{
	PrimaryActorTick.bCanEverTick = true;
}

/**
 * @brief Called when the wood object is spawned in the world
 * @details Performs initialization logic for the wood resource
 */
void AAWood::BeginPlay()
{
	Super::BeginPlay();
}

/**
 * @brief Updates the wood object each frame
 * @details Handles any per-frame logic for the wood resource
 * 
 * @param DeltaTime Time elapsed since the last frame in seconds
 */
void AAWood::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
