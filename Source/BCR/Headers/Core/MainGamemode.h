#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MainGamemode.generated.h"

//////// CLASS ////////

/**
 * @brief Main game mode for cooperative gameplay
 * @details Manages local multiplayer setup and camera configuration for two-player sessions
 */
UCLASS(minimalapi)
class AMainGamemode : public AGameModeBase
{
	GENERATED_BODY()

public:

	//////// UNREAL LIFECYCLE ////////
	AMainGamemode();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	//////// PLAYER MANAGEMENT ////////
	/// Local multiplayer setup
	UFUNCTION(BlueprintCallable)
	void CreateLocalPlayer(); // Create second player and add a mapping context

private:

	//////// CAMERA SYSTEM ////////
	/// Camera configuration
	void SetupCamera();
};
