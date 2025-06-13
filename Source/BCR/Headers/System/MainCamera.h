#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <Camera/CameraComponent.h>
#include "CineCameraComponent.h"
#include <GameFramework/SpringArmComponent.h>
#include <Components/SphereComponent.h>
#include "GameFramework/Character.h"
#include "Components/ExponentialHeightFogComponent.h"
#include "MainCamera.generated.h"

//////// CLASS ////////

/**
 * @brief Dynamic cooperative camera system for two-player gameplay
 * @details Automatically adjusts position, distance, angle, and effects based on player positioning
 */
UCLASS()
class BCR_API AMainCamera : public AActor
{
	GENERATED_BODY()

public:

	//////// UNREAL LIFECYCLE ////////
	AMainCamera();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	//////// PLAYER MANAGEMENT ////////
	/// Player assignment
	UFUNCTION(BlueprintCallable)
	void SetPlayers(ACharacter* Player1, ACharacter* Player2);

	//////// GETTERS ////////
	/// Component access
	FORCEINLINE USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	FORCEINLINE UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	//////// DEBUG PARAMETERS ////////
	/// Debug configuration
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters|Debug")
	bool DebugLocation = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters|Debug")
	bool DebugVariables = false;

	//////// TRANSLATION PARAMETERS ////////
	/// Position behavior
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters|Translation")
	bool EnableVerticalMovement = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters|Translation")
	float VerticalOffset = 0.f;

	//////// DISTANCE PARAMETERS ////////
	/// Camera distance configuration
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters|Distance", meta = (UIMin = 0.f))
	float MinimumArmLength = 4000.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters|Distance", meta = (UIMin = 0.f))
	float MaximumArmLength = 16000.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters|Distance", meta = (UIMin = 0.f))
	float DepthBuffer = 400.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters|Distance", meta = (UIMin = 0.f))
	float HorizontalBuffer = 200.f;

	//////// ANGLE PARAMETERS ////////
	/// Camera angle configuration
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters|Angle")
	bool UseAngleChange = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters|Angle", meta = (UIMin = 0.f))
	float MinAngleReachedAtArmLength = 4000.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters|Angle", meta = (UIMin = 0.f))
	float MaxAngleReachedAtArmLength = 20000.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters|Angle", meta = (UIMin = 0.f, UIMax = 90.f))
	float MinArmAngle = 10.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters|Angle", meta = (UIMin = 0.f, UIMax = 90.f))
	float MaxArmAngle = 20.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters|Angle")
	float EasingAngleExp = 1.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters|Tilt shift")
	float MinFStop = 0.2f;

	//////// TILT SHIFT PARAMETERS ////////
	/// Depth of field configuration
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters|Tilt shift")
	float MaxFStop = 2.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters|Tilt shift")
	float MaxBlurAtDistance = 100.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters|Tilt shift")
	float MinBlurAtDistance = 1500;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters|Tilt shift")
	float BlurMultiplier = 1.f;

	//////// FOG PARAMETERS ////////
	/// Atmospheric effects
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters|Fog")
	float FogDistanceToPlayer = 1000.f;
	
private:

	//////// COMPONENTS ////////
	/// Camera components
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USceneComponent* DefaultRootComponent;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCineCameraComponent* FollowCamera;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USphereComponent* DebugSphere;

	//////// PLAYER TRACKING ////////
	/// Player management
	TArray<ACharacter*> Players;

	//////// CONSTRAINT SYSTEM ////////
	/// Player position limits
	float MaxPlayerHorizontalDistance = MAX_FLT;
	float MaxPlayerDepthDistance = MAX_FLT;

	//////// EFFECTS SYSTEM ////////
	/// Environmental effects
	UExponentialHeightFogComponent* FogComp = nullptr;

	//////// CAMERA SYSTEM ////////
	/// Camera behavior methods
	void InitParam();
	void UpdatePosition();
	void UpdateArmLenght();
	void UpdateArmAngle();
	void UpdateFog(float DepthPlayerDistance);
	void UpdateBlur(float DepthPlayerDistance);
	void ConstrainPlayerPositions();

	//////// UTILITY METHODS ////////
	/// Mathematical helpers
	FVector2D Get2DVect(FVector vect3d);
	float GetAlpha(float value, float min, float max);
	float GetValue(float alpha, float min, float max);
};
