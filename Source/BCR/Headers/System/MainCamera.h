#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <Camera/CameraComponent.h>
#include "CineCameraComponent.h"
#include <GameFramework/SpringArmComponent.h>
#include <Components/SphereComponent.h>
#include "GameFramework/Character.h"
#include "Engine/ExponentialHeightFog.h"
#include "Components/ExponentialHeightFogComponent.h"
#include "MainCamera.generated.h"

UCLASS()
class BCR_API AMainCamera : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USceneComponent* DefaultRootComponent;

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCineCameraComponent* FollowCamera;

	/** Debug sphere */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USphereComponent* DebugSphere;
	
public:	
	// Sets default values for this actor's properties
	AMainCamera();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

// Design parameters
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters|Debug")
	bool DebugLocation = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters|Debug")
	bool DebugVariables = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters|Translation")
	bool EnableVerticalMovement = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters|Translation")
	float VerticalOffset = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters|Distance", meta = (UIMin = 0.f))
	float MinimumArmLength = 4000.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters|Distance", meta = (UIMin = 0.f))
	float MaximumArmLength = 16000.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters|Distance", meta = (UIMin = 0.f))
	float DepthBuffer = 400.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters|Distance", meta = (UIMin = 0.f))
	float HorizontalBuffer = 200.f;

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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters|Tilt shift")
	float MaxFStop = 2.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters|Tilt shift")
	float MaxBlurAtDistance = 100.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters|Tilt shift")
	float MinBlurAtDistance = 1500;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters|Tilt shift")
	float BlurMultiplier = 1.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters|Fog")
	float FogDistanceToPlayer = 1000.f;

// Private variables
private:

	TArray<ACharacter*> Players;

	float MaxPlayerHorizontalDistance = MAX_FLT;
	float MaxPlayerDepthDistance = MAX_FLT;

	UExponentialHeightFogComponent* FogComp = nullptr;

//Public functions
public:

	UFUNCTION(BlueprintCallable)
	void SetPlayers(ACharacter* Player1, ACharacter* Player2);

private:

	void InitParam();
	void UpdatePosition();
	void UpdateArmLenght();
	void UpdateArmAngle();
	void UpdateFog(float DepthPlayerDistance);
	void UpdateBlur(float DepthPlayerDistance);
	void ConstrainPlayerPositions();

	FVector2D Get2DVect(FVector vect3d);
	float GetAlpha(float value, float min, float max);
	float GetValue(float alpha, float min, float max);
};
