// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MainGamemode.generated.h"

UCLASS(minimalapi)
class AMainGamemode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AMainGamemode();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	/** Create second player and add a mapping context
	*/
	void CreateLocalPlayer();

	/** Gets the camera and gives it the players
	*/
	void SetupCamera();
};



