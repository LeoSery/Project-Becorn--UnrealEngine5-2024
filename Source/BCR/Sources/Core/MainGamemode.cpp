#include "BCR/Headers/Core/MainGamemode.h"
#include "BCR/Headers/System/MainCamera.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"

/**
 * @brief Initializes the game mode with default pawn class
 * @details Sets up the blueprinted character class as the default pawn
 */
AMainGamemode::AMainGamemode()
{
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Becorn/Blueprints/BP_Player"));
	
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

/**
 * @brief Configures multiplayer and creates the second player
 * @details Sets maximum splitscreen players and initializes local co-op
 */
void AMainGamemode::BeginPlay()
{
	GetGameInstance()->GetGameViewportClient()->MaxSplitscreenPlayers = 2;

	Super::BeginPlay();
	CreateLocalPlayer();
}

/**
 * @brief Updates the game mode each frame
 * @details Handles any per-frame game mode logic
 * 
 * @param DeltaTime Time elapsed since the last frame in seconds
 */
void AMainGamemode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

/**
 * @brief Creates a second local player for split-screen cooperation
 * @details Spawns the second player and configures the camera system
 */
void AMainGamemode::CreateLocalPlayer()
{
	UGameplayStatics::CreatePlayer(GetWorld());
	SetupCamera();
}

/**
 * @brief Configures the main camera for two-player cooperation
 * @details Finds the camera actor and assigns both player characters to it
 */
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
		MainCamera->SetPlayers(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0), UGameplayStatics::GetPlayerCharacter(GetWorld(), 1));
	}
}
