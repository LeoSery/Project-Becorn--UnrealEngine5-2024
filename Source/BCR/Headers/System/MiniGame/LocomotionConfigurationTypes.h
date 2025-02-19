#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LocomotionConfigurationTypes.generated.h"

UENUM(BlueprintType)
enum class ELocomotionMode : uint8
{
	Basic              UMETA(DisplayName = "Basic"),
	HoldingBox        UMETA(DisplayName = "HoldingBox"),
	WoodCuttingCrank UMETA(DisplayName = "WoodCutting_Crank"),
	WoodCuttingRope  UMETA(DisplayName = "WoodCutting_Rope"),
	MushroomSaw       UMETA(DisplayName = "MushroomSaw"),
	Sap               UMETA(DisplayName = "Sap"),
	Push              UMETA(DisplayName = "Push"),
	Climb             UMETA(DisplayName = "Climb"),
	Test              UMETA(DisplayName = "Test")
};

USTRUCT(BlueprintType)
struct BCR_API FLocomotionConfiguration
{
	GENERATED_BODY()
    
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Locomotion")
	FTransform PositionToGo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Locomotion")
	UAnimMontage* StartAnimToPlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Locomotion")
	FString StartMontageSection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Locomotion")
	UAnimSequence* EndAnimToPlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Locomotion")
	ELocomotionMode Mode = ELocomotionMode::Basic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Locomotion")
	bool bLockCapsuleOrientation = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Locomotion")
	bool bUsePhysicalAnim = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Locomotion")
	bool bUseSpecificAnim = false;
    
};

UCLASS()
class BCR_API ULocomotionConfigurationAsset : public UDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Locomotion|Info")
	FString ConfigurationName = TEXT("New Locomotion Configuration");

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Locomotion|Info", Meta = (MultiLine = true))
	FString Description;
    
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Locomotion|Configuration")
	FLocomotionConfiguration Configuration;
    
	FLocomotionConfiguration ToRuntimeConfig() const;
};
