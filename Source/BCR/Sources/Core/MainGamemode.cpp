#include "BCR/Headers/Core/MainGamemode.h"
#include "BCR/Headers/System/MainCamera.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"

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
}

void AMainGamemode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMainGamemode::CreateLocalPlayer()
{
	UGameplayStatics::CreatePlayer(GetWorld());

	SetupCamera();

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
		MainCamera->SetPlayers(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0), UGameplayStatics::GetPlayerCharacter(GetWorld(), 1));
	}
}
