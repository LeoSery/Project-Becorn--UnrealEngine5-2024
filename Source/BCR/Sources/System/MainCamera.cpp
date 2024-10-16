#include "BCR/Headers/System/MainCamera.h"

// Sets default values
AMainCamera::AMainCamera()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DefaultRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultRootComponent"));
	SetRootComponent(DefaultRootComponent);

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	DebugSphere = CreateDefaultSubobject<USphereComponent>(TEXT("DebugSphere"));
	DebugSphere->SetupAttachment(RootComponent);
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
	UpdateArmAngle();
}

void AMainCamera::SetPlayers(TArray<AMainPlayer*> players)
{
	Players = players;
}

void AMainCamera::InitParam()
{
	CameraBaseHeight = GetActorLocation().Z;

	DebugSphere->SetHiddenInGame(!DebugLocation);
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
	float PlayerDist = (Players[0]->GetActorLocation() - Players[1]->GetActorLocation()).Size();

	if (DebugVariables)
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Orange, FString::Printf(TEXT("Spring arm length offset = %f"), PlayerDist / 2));
	}

	CameraBoom->TargetArmLength = MinimumArmLength + (PlayerDist / 2);
}

void AMainCamera::UpdateArmAngle()
{
	float Alpha = (CameraBoom->TargetArmLength - MinAngleReachedAtArmLength) / (MaxAngleReachedAtArmLength - MinAngleReachedAtArmLength);
	Alpha = FMath::Clamp(Alpha, 0.f, 1.f);
	SetActorRotation({ -FMath::InterpEaseInOut(MinArmAngle, MaxArmAngle, Alpha, EasingAngleExp), 0.f, 0.f});

	if (DebugVariables)
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Orange, FString::Printf(TEXT("Camera angle = %f"), GetActorRotation().Pitch));
	}
}
