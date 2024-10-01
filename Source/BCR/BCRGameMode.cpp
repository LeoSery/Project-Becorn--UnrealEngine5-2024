// Copyright Epic Games, Inc. All Rights Reserved.

#include "BCRGameMode.h"
#include "BCRCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABCRGameMode::ABCRGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
