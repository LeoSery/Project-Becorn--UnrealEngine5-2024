// Fill out your copyright notice in the Description page of Project Settings.


#include "BCR/Headers/Interfaces/IPickable.h"

// Add default functionality here for any IIPickable functions that are not pure virtual.

void IIPickable::PickedUp_Implementation(AActor* Player, AActor* Object)
{
	FAttachmentTransformRules rules = FAttachmentTransformRules(EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld,false);
	Object->AttachToActor(Player, rules);
}

void IIPickable::Drop_Implementation(AActor* Player, AActor* Object)
{
	FDetachmentTransformRules rules = FDetachmentTransformRules(EDetachmentRule::KeepWorld, EDetachmentRule::KeepWorld, EDetachmentRule::KeepWorld, false);
	Object->DetachFromActor(rules);
}
