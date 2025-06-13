#include "BCR/Headers/Interfaces/IPickable.h"

/**
 * @brief Default implementation for pickup behavior
 * @details Provides base pickup functionality - can be overridden for custom behavior
 * 
 * @param Player The player actor picking up the object
 * @param Object The object being picked up
 */
void IIPickable::PickedUp_Implementation(AActor* Player, AActor* Object)
{
	//FAttachmentTransformRules rules = FAttachmentTransformRules(EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld,false);
	//Object->AttachToActor(Player, rules);
}

/**
 * @brief Default implementation for drop behavior
 * @details Provides base drop functionality - can be overridden for custom behavior
 * 
 * @param Player The player actor dropping the object
 * @param Object The object being dropped
 */
void IIPickable::Drop_Implementation(AActor* Player, AActor* Object)
{
	//FDetachmentTransformRules rules = FDetachmentTransformRules(EDetachmentRule::KeepWorld, EDetachmentRule::KeepWorld, EDetachmentRule::KeepWorld, false);
	//Object->DetachFromActor(rules);
}
