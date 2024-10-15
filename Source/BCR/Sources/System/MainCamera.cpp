#include "BCR/Headers/System/MainCamera.h"

// Sets default values
AMainCamera::AMainCamera()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm
}

// Called when the game starts or when spawned
void AMainCamera::BeginPlay()
{
	Super::BeginPlay();

	InitParam();
}

// Called every frame
void AMainCamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UpdatePosition();
	UpdateArmLenght();
}

void AMainCamera::SetPlayers(TArray<AMainPlayer*> players)
{
	Players = players;
}

void AMainCamera::InitParam()
{
	CameraBaseHeight = GetActorLocation().Z;
	ArmBaseLength = CameraBoom->TargetArmLength;
}

void AMainCamera::UpdatePosition()
{
	FVector AveragePosition;
	for (AMainPlayer* player : Players)
	{
		if (!player)
		{
			return;
		}
		AveragePosition += player->GetActorLocation();
	}
	AveragePosition = AveragePosition / Players.Num();

	if (!EnableVerticalMovement)
	{
		AveragePosition.Z = CameraBaseHeight;
	}

	SetActorLocation(AveragePosition);
}

void AMainCamera::UpdateArmLenght()
{
	float ArmLengthOffset = ((Players[0]->GetActorLocation() - Players[1]->GetActorLocation()).Size() - MinimumDistanceToZoom) / 2;
	if (ArmLengthOffset < 0.f)
	{
		ArmLengthOffset = 0.f;
	}
	CameraBoom->TargetArmLength = ArmBaseLength + ArmLengthOffset;
}

//	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("Number of player = %i"), GetWorld()->GetNumPlayerControllers()));

