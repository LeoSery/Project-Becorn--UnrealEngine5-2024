// Copyright Epic Games, Inc. All Rights Reserved.

#include "BCR/Headers/Core/MainGamemode.h"
#include "BCR/Headers/Player/MainPlayer.h"
#include "BCR/Headers/System/MainCamera.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include <EnhancedInputSubsystems.h>

AMainGamemode::AMainGamemode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Becorn/Blueprints/BP_Player"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void AMainGamemode::BeginPlay()
{
	Super::BeginPlay();

	CreateLocalPlayer();
	SetupCamera();
}

void AMainGamemode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMainGamemode::CreateLocalPlayer()
{
	if (auto PlayerController = Cast<APlayerController>(UGameplayStatics::CreatePlayer(GetWorld())))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			//Add mapping context
			//Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
}

void AMainGamemode::SetupCamera()
{
	TArray<AActor*> Cameras;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMainCamera::StaticClass(), Cameras);

	if (Cameras.Num() > 1)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("More than one camera found; please remove the other(s)"));
	}
	else if (Cameras.Num() < 1)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("No camera found; please add one")); 
		return;
	}

	if (AMainCamera* MainCamera = Cast<AMainCamera>(Cameras[0]))
	{
		TArray<ACharacter*> PlayerCharacters;
		for (size_t i = 0; i < GetWorld()->GetNumPlayerControllers(); i++)
		{
			PlayerCharacters.Add(UGameplayStatics::GetPlayerCharacter(GetWorld(), i));
		}

		TArray<AMainPlayer*> Players;
		for (ACharacter* value : PlayerCharacters)
		{
			if (auto player = Cast<AMainPlayer>(value))
			{
				Players.Add(player);
			}
		}

		GetWorld()->GetFirstPlayerController()->SetViewTarget(MainCamera);
		MainCamera->SetPlayers(Players);
	}
}
