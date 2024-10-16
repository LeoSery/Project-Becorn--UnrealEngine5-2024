#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <Camera/CameraComponent.h>
#include "CineCameraComponent.h"
#include <GameFramework/SpringArmComponent.h>
#include <Components/SphereComponent.h>
#include "BCR/Headers/Player/MainPlayer.h"
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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters|Movement")
	bool EnableVerticalMovement = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters|Movement", meta = (UIMin = 0.f))
	float MinimumArmLength = 400.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters|Angle")
	bool UseAngleChange = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters|Angle", meta = (UIMin = 0.f))
	float MinAngleReachedAtArmLength = 400.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters|Angle", meta = (UIMin = 0.f))
	float MaxAngleReachedAtArmLength = 1200.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters|Angle", meta = (UIMin = 0.f, UIMax = 90.f))
	float MinArmAngle = 10.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters|Angle", meta = (UIMin = 0.f, UIMax = 90.f))
	float MaxArmAngle = 40.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters|Angle")
	float EasingAngleExp = 1.f;

// Private variables
private:

	TArray<AMainPlayer*> Players;
	float CameraBaseHeight = 0.f;

//Public functions
public:

	void SetPlayers(TArray<AMainPlayer*> players);

private:

	void InitParam();
	void UpdatePosition();
	void UpdateArmLenght();
	void UpdateArmAngle();
};
