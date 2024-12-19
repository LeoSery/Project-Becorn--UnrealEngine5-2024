#include "BCR/Headers/System/MainCamera.h"
#include "Kismet/KismetMathLibrary.h"
#include <Kismet/GameplayStatics.h>

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
	FollowCamera = CreateDefaultSubobject<UCineCameraComponent>(TEXT("FollowCamera"));
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

	if (!Players[0] || !Players[1])
	{
		return;
	}

	UpdatePosition();
	UpdateArmLenght();
	UpdateArmAngle();
}

void AMainCamera::SetPlayers(ACharacter* Player1, ACharacter* Player2)
{
	Players = { Player1, Player2 };
}

void AMainCamera::InitParam()
{
	CameraBaseHeight = GetActorLocation().Z;
	DebugSphere->SetHiddenInGame(!DebugLocation);

	FollowCamera->FocusSettings.TrackingFocusSettings.ActorToTrack = this;
	FollowCamera->LensSettings.MinFStop = MinFStop;
	FollowCamera->LensSettings.MaxFStop = MaxFStop;
}

void AMainCamera::UpdatePosition()
{
	FVector AveragePosition;
	for (ACharacter* player : Players)
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
	/** TESTS
	float PlayerDist = (Players[0]->GetActorLocation() - Players[1]->GetActorLocation()).Size();

	CameraBoom->TargetArmLength = MinimumArmLength + (PlayerDist / 2);
	CameraBoom->TargetArmLength = MinimumArmLength + (PlayerDist * (90 / FollowCamera->GetHorizontalFieldOfView()) / 2);
	CameraBoom->TargetArmLength = MinimumArmLength + (PlayerDist / 2 / FollowCamera->AspectRatio) / FMath::Tan(FMath::DegreesToRadians(FollowCamera->GetHorizontalFieldOfView() / 2));
	
	FIntVector2 ScreenSize;
	GetWorld()->GetFirstPlayerController()->GetViewportSize(ScreenSize.X, ScreenSize.Y);
	for (AMainPlayer* player : Players)
	{
		FVector2D ScreenPosition;
		GetWorld()->GetFirstPlayerController()->ProjectWorldLocationToScreen(player->GetActorLocation(), ScreenPosition);

		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Orange, FString::Printf(TEXT("Screen position X = %f"), ScreenPosition.X));
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Orange, FString::Printf(TEXT("Screen position Y = %f"), ScreenPosition.Y));
	}
	*/

	FVector PlayerDistVec = Players[0]->GetActorLocation() - Players[1]->GetActorLocation();

	//HORIZONTAL
	float PlayerDistHor = FMath::Abs(UKismetMathLibrary::DotProduct2D(Get2DVect(GetActorRightVector()).GetSafeNormal(), Get2DVect(PlayerDistVec)));
	float EdgeDistHor = (PlayerDistHor / 2) + HorizontalBuffer;
	float TanDemiAngleHor = UKismetMathLibrary::DegTan(FollowCamera->GetHorizontalFieldOfView() / 2);

	float TotalArmLengthHor = EdgeDistHor / TanDemiAngleHor;

	//VERTICAL
	FVector BackVector = UKismetMathLibrary::RotateAngleAxis(-GetActorForwardVector(), GetActorRotation().Pitch, GetActorRightVector());
	float PlayerDistVer = FMath::Abs(UKismetMathLibrary::DotProduct2D(Get2DVect(BackVector).GetSafeNormal(), Get2DVect(PlayerDistVec)));
	float EdgeDistVer = (PlayerDistVer / 2) + VerticalBuffer;
	float TanDemiAngleVer = UKismetMathLibrary::DegTan(FollowCamera->GetVerticalFieldOfView() / 2);

	float TotalArmLengthVer = (UKismetMathLibrary::DegSin(-GetActorRotation().Pitch) * EdgeDistVer / TanDemiAngleVer) +
		(UKismetMathLibrary::DegCos(-GetActorRotation().Pitch) * EdgeDistVer);

	CameraBoom->TargetArmLength = FMath::Max3(TotalArmLengthHor, TotalArmLengthVer, MinimumArmLength);

	UpdateBlur(PlayerDistVer);

	if (DebugVariables)
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Orange, FString::Printf(TEXT("Horizontal FOV = %f"), FollowCamera->GetHorizontalFieldOfView()));
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Orange, FString::Printf(TEXT("Vertical FOV = %f"), FollowCamera->GetVerticalFieldOfView()));

		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Orange, FString::Printf(TEXT("Player distance vertical = %f"), PlayerDistVer));
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Orange, FString::Printf(TEXT("Player distance horizontal = %f"), PlayerDistHor));
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Orange, FString::Printf(TEXT("Player distance = %f"), PlayerDistVec.Size()));
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Orange, FString::Printf(TEXT("Spring arm length offset = %f"), CameraBoom->TargetArmLength - MinimumArmLength));

		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Orange, FString::Printf(TEXT("DISTANCE VARIABLES")));
	}
}

void AMainCamera::UpdateArmAngle()
{
	if (!UseAngleChange)
	{
		return;
	}

	float Alpha = (CameraBoom->TargetArmLength - MinAngleReachedAtArmLength) / (MaxAngleReachedAtArmLength - MinAngleReachedAtArmLength);
	Alpha = FMath::Clamp(Alpha, 0.f, 1.f);
	SetActorRotation({ -FMath::InterpEaseInOut(MinArmAngle, MaxArmAngle, Alpha, EasingAngleExp), 0.f, 0.f});

	if (DebugVariables)
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Orange, FString::Printf(TEXT("Camera angle = %f"), GetActorRotation().Pitch));

		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Orange, FString::Printf(TEXT("ANGLE VARIABLES")));
	}
}

void AMainCamera::UpdateBlur(float VerticalPlayerDistance)
{
	float FStopAlpha = GetAlpha(VerticalPlayerDistance, MaxBlurAtDistance, MinBlurAtDistance);
	float Aperture = GetValue(FStopAlpha, MinFStop, MaxFStop);
	FollowCamera->CurrentAperture = Aperture / BlurMultiplier;
}

FVector2D AMainCamera::Get2DVect(FVector vect3d)
{
	return { vect3d.X, vect3d.Y };
}

float AMainCamera::GetAlpha(float value, float min, float max)
{
	return (value - min) / (max - min);
}

float AMainCamera::GetValue(float alpha, float min, float max)
{
	return alpha * (max - min) + min;
}
