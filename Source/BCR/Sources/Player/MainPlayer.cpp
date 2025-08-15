#include "BCR/Headers/Player/MainPlayer.h"
#include "Engine/LocalPlayer.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"

#include "BCR/Headers/Interfaces/IPickable.h"
#include "BCR/Headers/Interfaces/Interactable.h"
#include "BCR/Headers/Interfaces/BCR_Helper.h"
#include "BCR/Headers/System/MiniGame/LocomotionConfigurationTypes.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

/**
 * @brief Initializes the main player with default character settings
 * @details Sets up collision capsule, character movement, and default physics properties
 */
AMainPlayer::AMainPlayer()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
		
	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)
}

/**
 * @brief Initializes the player when spawned in the world
 * @details Sets up enhanced input mapping context and resets locomotion configuration
 */
void AMainPlayer::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();
	ResetLocomotionConfig_Implementation();
}

/**
 * @brief Configures input action bindings for the player
 * @details Sets up Enhanced Input system with movement, interaction, and pickup controls
 * 
 * @param PlayerInputComponent The input component to bind actions to
 */
void AMainPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
	
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent)) {
		
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AMainPlayer::Move);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AMainPlayer::Look);

		// Pick-up
		EnhancedInputComponent->BindAction(PickUpAction, ETriggerEvent::Triggered, this, &AMainPlayer::PickUp);
		EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Triggered, this, &AMainPlayer::Interact);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}

/**
 * @brief Handles player movement input
 * @details Processes 2D movement vector and applies it relative to camera orientation
 * 
 * @param Value Input action value containing movement vector
 */
void AMainPlayer::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();
	if (!bCanMove)
	{
		return;
	}

	if (Controller != nullptr)
	{
		// get forward vector
		const FVector ForwardDirection = FRotator(0, GetWorld()->GetFirstPlayerController()->PlayerCameraManager.Get()->GetCameraRotation().Yaw, 0).Vector();
	
		// get right vector 
		const FVector RightDirection = ForwardDirection.RotateAngleAxis(90, { 0,0,1 });

		// add movement 
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

/**
 * @brief Handles player camera look input
 * @details Processes look input for camera control (currently disabled for fixed camera)
 * 
 * @param Value Input action value containing look vector
 */
void AMainPlayer::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

/**
 * @brief Detects interactable objects in front of the player
 * @details Performs a box sweep collision check to find objects the player can interact with
 * 
 * @param Player The player actor to detect objects for
 * @return Array of hit results containing all detected objects
 */
TArray<FHitResult> Detect_Object(AActor* Player)
{
	const FVector Pos = Player->GetActorLocation() + Player->GetActorForwardVector();
	const FName ProfileName = "BlockAll";
	constexpr ECollisionChannel Channel = ECC_Visibility;
	const FCollisionShape ColCapsule = FCollisionShape::MakeBox(FVector(150));
	const TArray<AActor*> ActorsToIgnore = { Player };
	TArray<FHitResult> OutHits = {};
	
	DrawDebugBox(Player->GetWorld(), Pos + Player->GetActorForwardVector() * 100, ColCapsule.GetBox(), Player->GetActorForwardVector().ToOrientationQuat(), FColor::Orange);
	
	if (Player->GetWorld()->SweepMultiByChannel(OutHits, Pos, Pos, Player->GetActorUpVector().ToOrientationQuat(), Channel, ColCapsule))
	{
		return OutHits;
	}

	return OutHits;
}

/**
 * @brief Toggles pickup state for objects in front of the player
 * @details Picks up objects if hands are empty, drops held objects if carrying something
 */
void AMainPlayer::PickUp_Implementation()
{
	if (PickedUpSomething)
	{
		IIPickable::Execute_Drop(PickedUpObject, this, PickedUpObject);
		PickedUpSomething = false;
		PickedUpObject = __nullptr;
	}
	else
	{
		TArray<FHitResult> OutHits = Detect_Object(this);

		for (const FHitResult OutHit : OutHits)
		{
			if (Cast<IIPickable>(OutHit.GetActor()))
			{
				PickedUpSomething = true;
				PickedUpObject = OutHit.GetActor();
			}
		}
	}
}

/**
 * @brief Handles interaction with world objects
 * @details Detects interactable objects and calls appropriate interaction methods
 */
void AMainPlayer::Interact()
{
	TArray<FHitResult> OutHits = Detect_Object(this);
	
	for (const FHitResult OutHit : OutHits)
	{
		
		if(PickedUpObject && Cast<IInteractable>(OutHit.GetActor()))
		{
			GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("Found Interactable with object"));
			IInteractable::Execute_InteractWithObject(OutHit.GetActor(), this,PickedUpObject);
			return;
		}
		else if (Cast<IInteractable>(OutHit.GetActor()))
		{
			GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("Found Interactable"));
			IInteractable::Execute_Interact(OutHit.GetActor(), this);
			return;
		}
	}
}

/**
 * @brief Resets locomotion configuration to default settings
 * @details Restores normal movement behavior from the default configuration asset
 * 
 * @return The default locomotion configuration that was applied
 */
FLocomotionConfiguration AMainPlayer::ResetLocomotionConfig_Implementation()
{
	if (DefaultLocomotionConfig != nullptr)
	{
		CurrentLocomotionConfig = DefaultLocomotionConfig;
		return CurrentLocomotionConfig->ToRuntimeConfig();
	}
	IBCR_Helper::LogAll(this, TEXT("AMainPlayer::ResetLocomotionConfig_Implementation: Config Asset is null"), 5.0f, FColor::Red);
	return FLocomotionConfiguration();
}

/**
 * @brief Applies a new locomotion configuration
 * @details Sets movement constraints and positioning for machine interactions
 * 
 * @param NewConfig The locomotion configuration asset to apply
 * @return The runtime locomotion configuration that was applied
 */
FLocomotionConfiguration AMainPlayer::SetLocomotionConfig_Implementation(ULocomotionConfigurationAsset* NewConfig)
{
	if (NewConfig != nullptr)
	{
		CurrentLocomotionConfig = NewConfig;
		return CurrentLocomotionConfig->ToRuntimeConfig();
	}
	
	IBCR_Helper::LogAll(this, TEXT("AMainPlayer::SetLocomotionConfig_Implementation: Invalid machine locomotion Config Asset"), 5.0f, FColor::Red);
	return FLocomotionConfiguration();
}

bool AMainPlayer::GetPickedUpSomething()
{
	return PickedUpSomething;
}
