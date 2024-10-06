// Copyright Epic Games, Inc. All Rights Reserved.

#include "BCR/Headers/Core/MainGamemode.h"
#include "BCR/Headers/Player/MainPlayer.h"
#include "UObject/ConstructorHelpers.h"

AMainGamemode::AMainGamemode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Becorn/Blueprints/BP_Player"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
