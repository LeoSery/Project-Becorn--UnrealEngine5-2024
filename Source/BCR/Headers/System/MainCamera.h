#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <Camera/CameraComponent.h>
#include <GameFramework/SpringArmComponent.h>
#include "BCR/Headers/Player/MainPlayer.h"
#include "MainCamera.generated.h"

UCLASS()
class BCR_API AMainCamera : public AActor
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;
	
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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Parameters)
	bool EnableVerticalMovement = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Parameters, meta = (UIMin = 0.f))
	float MinimumDistanceToZoom = 300.f;

// Private variables
private:

	TArray<AMainPlayer*> Players;
	float CameraBaseHeight = 0.f;
	float ArmBaseLength = 0.f;

//Public functions
public:

	void SetPlayers(TArray<AMainPlayer*> players);

private:

	void InitParam();
	void UpdatePosition();
	void UpdateArmLenght();
};
