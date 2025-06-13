#include "BCR/Headers/System/UniqueRope.h"

/**
 * @brief Initializes the rope object with default settings
 * @details Sets up tick functionality and interactive properties
 */
AUniqueRope::AUniqueRope()
{
	PrimaryActorTick.bCanEverTick = true;
}

/**
 * @brief Called when the rope object is spawned in the world
 * @details Performs initialization logic for the rope interaction system
 */
void AUniqueRope::BeginPlay()
{
	Super::BeginPlay();
}

/**
 * @brief Handles basic player interaction with the rope
 * @details Defines behavior when player interacts without holding objects
 * 
 * @param Player The player interacting with the rope
 */
void AUniqueRope::Interact_Implementation(AMainPlayer* Player)
{
	
}

/**
 * @brief Handles player interaction with the rope while holding objects
 * @details Defines behavior when player interacts while carrying items
 * 
 * @param Player The player interacting with the rope
 * @param Object The object the player is holding
 */
void AUniqueRope::InteractWithObject_Implementation(AMainPlayer* Player, AActor* Object)
{

}

/**
 * @brief Updates the rope object each frame
 * @details Handles any per-frame logic for the rope system
 * 
 * @param DeltaTime Time elapsed since the last frame in seconds
 */
void AUniqueRope::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
