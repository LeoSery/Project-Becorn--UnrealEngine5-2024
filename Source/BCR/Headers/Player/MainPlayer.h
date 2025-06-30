#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "BCR/Headers/Interfaces/BCR_Helper.h"
#include "BCR/Headers/Interfaces/Locomotional.h"
#include "MainPlayer.generated.h"

//////// FORWARD DECLARATIONS ////////
/// Class
class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
class ULocomotionConfigurationAsset;

/// Stuct
struct FInputActionValue;

//////// LOG CATEGORY ////////
DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

//////// CLASS ////////

/**
 * @brief Main player character for cooperative gameplay
 * @details Handles input processing, locomotion configuration, object interaction, and pickup system
 */
UCLASS(config=Game)
class BCR_API AMainPlayer : public ACharacter, public IBCR_Helper, public ILocomotional
{
	GENERATED_BODY()

public:

	//////// UNREAL LIFECYCLE ////////
	AMainPlayer();
	virtual void BeginPlay();
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//////// PICKUP SYSTEM ////////
	/// Object manipulation
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void PickUp();
	void PickUp_Implementation();

	UPROPERTY(BlueprintReadWrite)
	AActor* PickedUpObject;

	//////// INTERACTION SYSTEM ////////
	/// World interactions
	UFUNCTION(BlueprintCallable)
	void Interact();

	//////// INTERFACE IMPLEMENTATIONS ////////
	/// ILocomotional interface
	virtual FLocomotionConfiguration ResetLocomotionConfig_Implementation() override;
	virtual FLocomotionConfiguration SetLocomotionConfig_Implementation(ULocomotionConfigurationAsset* NewConfig) override;

	/// IBCR_Helper interface
	virtual FString GetCustomLogInfo() const override
	{
		return FString::Printf(TEXT("Velocity: %.1f"), GetVelocity().Size());
	}

protected:
	
	//////// INPUT MAPPING ////////
	/// Enhanced Input System
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;

	/// Movement actions
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* JumpAction;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveAction;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* LookAction;

	/// Interaction actions
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* PickUpAction;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* InteractAction;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* PauseAction;

	/// Trigger actions
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* LeftTriggerAction;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* RightTriggerAction;
	
	//////// INPUT HANDLERS ////////
	/// Movement processing
	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);

	//////// MOVEMENT SYSTEM ////////
	/// Movement configuration
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCanMove = true;

	//////// LOCOMOTION SYSTEM ////////
	/// Locomotion configuration
	UPROPERTY(EditAnywhere)
	ULocomotionConfigurationAsset* DefaultLocomotionConfig;
	ULocomotionConfigurationAsset* CurrentLocomotionConfig;

	//////// PICKUP STATE ////////
	/// Pickup tracking
	bool PickedUpSomething = false;
};
