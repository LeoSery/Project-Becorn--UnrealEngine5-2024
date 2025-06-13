#include "BCR/Headers/System/MainCamera.h"
#include "Kismet/KismetMathLibrary.h"
#include <Kismet/GameplayStatics.h>

#include "Engine/ExponentialHeightFog.h"

/**
 * @brief Initializes the camera system with all components
 * @details Sets up spring arm, cine camera, and debug sphere with default settings
 */
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

/**
 * @brief Initializes camera parameters and finds fog component
 * @details Sets up focus settings, F-stop values, and locates the fog component in the scene
 */
void AMainCamera::BeginPlay()
{
	Super::BeginPlay();
	InitParam();
}

/**
 * @brief Updates all camera systems each frame
 * @details Manages position, distance, angle, effects, and player constraints
 * 
 * @param DeltaTime Time elapsed since the last frame in seconds
 */
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

/**
 * @brief Assigns the two player characters to track
 * @details Sets the players that the camera system will follow and frame
 * 
 * @param Player1 First player character to track
 * @param Player2 Second player character to track
 */
void AMainCamera::SetPlayers(ACharacter* Player1, ACharacter* Player2)
{
	Players = { Player1, Player2 };
}

/**
 * @brief Initializes camera parameters and fog component references
 * @details Configures focus settings, F-stop range, and finds fog component in the world
 */
void AMainCamera::InitParam()
{
	DebugSphere->SetHiddenInGame(!DebugLocation);

	FollowCamera->FocusSettings.TrackingFocusSettings.ActorToTrack = this;
	FollowCamera->LensSettings.MinFStop = MinFStop;
	FollowCamera->LensSettings.MaxFStop = MaxFStop;

	TArray<AActor*> Fogs;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AExponentialHeightFog::StaticClass(), Fogs);

	if (IsValid(Fogs[0]))
	{
		FogComp = Cast<AExponentialHeightFog>(Fogs[0])->GetComponent();
	}
}

/**
 * @brief Updates camera position to maintain both players in frame
 * @details Calculates average position between players and applies vertical offset
 */
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

/**
 * @brief Dynamically adjusts camera distance based on player separation
 * @details Calculates optimal spring arm length using FOV and player distance math
 */
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

	UpdateFog(PlayerDistDepth);
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

/**
 * @brief Adjusts camera angle based on distance from players
 * @details Interpolates between min/max angles based on current arm length
 */
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

/**
 * @brief Updates fog distance to maintain visual consistency
 * @details Adjusts volumetric fog start distance relative to camera and players
 * 
 * @param DepthPlayerDistance Distance between players along the depth axis
 */
void AMainCamera::UpdateFog(float DepthPlayerDistance)
{
	float FogDist = CameraBoom->TargetArmLength + FogDistanceToPlayer + DepthPlayerDistance / 2;
	FogComp->VolumetricFogStartDistance = FogDist;
	FogComp->MarkRenderStateDirty();

	if (DebugVariables)
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Orange, FString::Printf(TEXT("Fog distance = %f"), FogComp->StartDistance));
	}
}

/**
 * @brief Updates depth of field blur for tilt-shift effect
 * @details Adjusts camera aperture based on player distance for cinematic effect
 * 
 * @param DepthPlayerDistance Distance between players along the depth axis
 */
void AMainCamera::UpdateBlur(float DepthPlayerDistance)
{
	float FStopAlpha = GetAlpha(DepthPlayerDistance, MaxBlurAtDistance, MinBlurAtDistance);
	float Aperture = GetValue(FStopAlpha, MinFStop, MaxFStop);
	FollowCamera->CurrentAperture = Aperture / BlurMultiplier;
}

/**
 * @brief Constrains player movement to keep them within camera frame
 * @details Prevents players from moving outside the viewable area by limiting their positions
 */
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

	// Get player displacements
	FVector player1Displacement = Players[0]->GetVelocity() * GetWorld()->GetDeltaSeconds();
	FVector player2Displacement = Players[1]->GetVelocity() * GetWorld()->GetDeltaSeconds();

	// Store original positions
	FVector newPos1 = player1Pos;
	FVector newPos2 = player2Pos;

	// Handle constraints
	if (horizontalDist > MaxPlayerHorizontalDistance)
	{
		newPos1 += -FVector::DotProduct(player1Displacement, rightVector) * rightVector;
		newPos2 += -FVector::DotProduct(player2Displacement, rightVector) * rightVector;
	}
	if (depthDist > MaxPlayerDepthDistance)
	{
		newPos1 += -FVector::DotProduct(player1Displacement, forwardVector) * forwardVector;
		newPos2 += -FVector::DotProduct(player2Displacement, forwardVector) * forwardVector;
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

/**
 * @brief Converts 3D vector to 2D by removing Z component
 * @details Utility function for 2D distance calculations
 * 
 * @param vect3d 3D vector to convert
 * @return 2D vector with X and Y components
 */
FVector2D AMainCamera::Get2DVect(FVector vect3d)
{
	return { vect3d.X, vect3d.Y };
}

/**
 * @brief Calculates normalized alpha value between min and max
 * @details Linear interpolation utility function
 * 
 * @param value Current value to normalize
 * @param min Minimum value in range
 * @param max Maximum value in range
 * @return Alpha value between 0 and 1
 */
float AMainCamera::GetAlpha(float value, float min, float max)
{
	return (value - min) / (max - min);
}

/**
 * @brief Calculates interpolated value using alpha
 * @details Reverse interpolation utility function
 * 
 * @param alpha Normalized value between 0 and 1
 * @param min Minimum value in range
 * @param max Maximum value in range
 * @return Interpolated value between min and max
 */
float AMainCamera::GetValue(float alpha, float min, float max)
{
	return alpha * (max - min) + min;
}
