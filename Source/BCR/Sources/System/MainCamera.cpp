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

	if (!IsValid(Players[0]) || !IsValid(Players[1]))
	{
		return;
	}

	UpdatePosition();
	UpdateArmLenght();
	UpdateArmAngle();
	ConstrainPlayerPositions();
}

void AMainCamera::SetPlayers(ACharacter* Player1, ACharacter* Player2)
{
	Players = { Player1, Player2 };
}

void AMainCamera::InitParam()
{
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

	if (EnableVerticalMovement)
	{
		AveragePosition.Z += VerticalOffset;
	}
	else
	{
		AveragePosition.Z = VerticalOffset;
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

	//DEPTH
	FVector BackVector = UKismetMathLibrary::RotateAngleAxis(-GetActorForwardVector(), GetActorRotation().Pitch, GetActorRightVector());
	float PlayerDistDepth = FMath::Abs(UKismetMathLibrary::DotProduct2D(Get2DVect(BackVector).GetSafeNormal(), Get2DVect(PlayerDistVec)));
	float EdgeDistDepth = (PlayerDistDepth / 2) + DepthBuffer;
	float TanDemiAngleDepth = UKismetMathLibrary::DegTan(FollowCamera->GetVerticalFieldOfView() / 2);

	float TotalArmLengthDepth = (UKismetMathLibrary::DegSin(-GetActorRotation().Pitch) * EdgeDistDepth / TanDemiAngleDepth) +
		(UKismetMathLibrary::DegCos(-GetActorRotation().Pitch) * EdgeDistDepth);

	float UnclampedDistance = FMath::Max(TotalArmLengthHor, TotalArmLengthDepth);
	float FinalArmLength = FMath::Clamp(UnclampedDistance, MinimumArmLength, MaximumArmLength);
	CameraBoom->TargetArmLength = FinalArmLength;

	MaxPlayerHorizontalDistance = MaximumArmLength * TanDemiAngleHor * 2;
	MaxPlayerDepthDistance = (MaximumArmLength * TanDemiAngleDepth) / (UKismetMathLibrary::DegCos(-GetActorRotation().Pitch) * TanDemiAngleDepth + UKismetMathLibrary::DegSin(-GetActorRotation().Pitch));

	UpdateBlur(PlayerDistDepth);

	if (DebugVariables)
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Orange, FString::Printf(TEXT("Horizontal FOV = %f"), FollowCamera->GetHorizontalFieldOfView()));
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Orange, FString::Printf(TEXT("Vertical FOV = %f"), FollowCamera->GetVerticalFieldOfView()));

		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Orange, FString::Printf(TEXT("Player distance vertical = %f"), PlayerDistDepth));
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

void AMainCamera::UpdateBlur(float DepthPlayerDistance)
{
	float FStopAlpha = GetAlpha(DepthPlayerDistance, MaxBlurAtDistance, MinBlurAtDistance);
	float Aperture = GetValue(FStopAlpha, MinFStop, MaxFStop);
	FollowCamera->CurrentAperture = Aperture / BlurMultiplier;
}

void AMainCamera::ConstrainPlayerPositions()
{
	FVector player1Pos = Players[0]->GetActorLocation();
	FVector player2Pos = Players[1]->GetActorLocation();

	// Get camera's right and forward vectors (normalized)
	FVector rightVector = GetActorRightVector();
	FVector forwardVector = GetActorForwardVector();

	// Calculate the delta vector between players
	FVector deltaVector = player2Pos - player1Pos;

	// Project the delta onto right and forward vectors
	float horizontalDist = FMath::Abs(FVector::DotProduct(deltaVector, rightVector));
	float depthDist = FMath::Abs(FVector::DotProduct(deltaVector, forwardVector));

	// Get player velocities
	FVector player1Vel = Players[0]->GetVelocity();
	FVector player2Vel = Players[1]->GetVelocity();

	bool isPlayer1Moving = player1Vel.SizeSquared() > 0;
	bool isPlayer2Moving = player2Vel.SizeSquared() > 0;

	// Store original positions
	FVector newPos1 = player1Pos;
	FVector newPos2 = player2Pos;

	// Handle constraints
	if (horizontalDist > MaxPlayerHorizontalDistance || depthDist > MaxPlayerDepthDistance)
	{
		// Determine which player to move based on velocity
		bool movePlayer1 = false;
		bool movePlayer2 = false;

		if (isPlayer1Moving && !isPlayer2Moving)
		{
			movePlayer1 = true;
		}
		else if (isPlayer2Moving && !isPlayer1Moving)
		{
			movePlayer2 = true;
		}
		else if (isPlayer1Moving && isPlayer2Moving)
		{
			// If both are moving, move the one that traveled further
			float dist1 = FVector::DistSquared(player1Pos - player1Vel * GetWorld()->GetDeltaSeconds(), player2Pos);
			float dist2 = FVector::DistSquared(player2Pos - player2Vel * GetWorld()->GetDeltaSeconds(), player1Pos);
			movePlayer1 = (dist1 > dist2);
			movePlayer2 = !movePlayer1;
		}

		// Apply constraints
		if (movePlayer1)
		{
			// Calculate the constrained position for player 1
			FVector constrainedDelta = deltaVector;

			if (horizontalDist > MaxPlayerHorizontalDistance)
			{
				float horizontalScale = MaxPlayerHorizontalDistance / horizontalDist;
				FVector horizontalComponent = FVector::DotProduct(deltaVector, rightVector) * rightVector;
				constrainedDelta = horizontalComponent * horizontalScale + (deltaVector - horizontalComponent);
			}

			if (depthDist > MaxPlayerDepthDistance)
			{
				float depthScale = MaxPlayerDepthDistance / depthDist;
				FVector depthComponent = FVector::DotProduct(constrainedDelta, forwardVector) * forwardVector;
				constrainedDelta = depthComponent * depthScale + (constrainedDelta - depthComponent);
			}

			newPos1 = player2Pos - constrainedDelta;
		}
		else if (movePlayer2)
		{
			// Calculate the constrained position for player 2
			FVector constrainedDelta = deltaVector;

			if (horizontalDist > MaxPlayerHorizontalDistance)
			{
				float horizontalScale = MaxPlayerHorizontalDistance / horizontalDist;
				FVector horizontalComponent = FVector::DotProduct(deltaVector, rightVector) * rightVector;
				constrainedDelta = horizontalComponent * horizontalScale + (deltaVector - horizontalComponent);
			}

			if (depthDist > MaxPlayerDepthDistance)
			{
				float depthScale = MaxPlayerDepthDistance / depthDist;
				FVector depthComponent = FVector::DotProduct(constrainedDelta, forwardVector) * forwardVector;
				constrainedDelta = depthComponent * depthScale + (constrainedDelta - depthComponent);
			}

			newPos2 = player1Pos + constrainedDelta;
		}
	}

	// Apply the new positions
	if (newPos1 != player1Pos)
	{
		Players[0]->SetActorLocation(newPos1, true);
	}
	if (newPos2 != player2Pos)
	{
		Players[1]->SetActorLocation(newPos2, true);
	}
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
