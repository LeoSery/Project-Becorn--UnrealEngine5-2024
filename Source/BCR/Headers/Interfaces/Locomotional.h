#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Locomotional.generated.h"

//////// FORWARD DECLARATIONS ////////
/// Class
class ULocomotionConfigurationAsset;

/// Struct
struct FLocomotionConfiguration;

//////// INTERFACE DECLARATION ////////

/**
 * @brief Interface class for locomotion configuration
 * @details Required for Unreal's interface system - no implementation needed
 */
UINTERFACE(MinimalAPI,Blueprintable)
class ULocomotional : public UInterface
{
	GENERATED_BODY()
};

//////// INTERFACE IMPLEMENTATION ////////

/**
 * @brief Interface for objects that can modify player locomotion behavior
 * @details Provides locomotion configuration management for machine interactions and positioning
 */
class BCR_API ILocomotional
{
	GENERATED_BODY()

public:

	//////// LOCOMOTION MANAGEMENT ////////
	/// Configuration setup
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
	FLocomotionConfiguration SetLocomotionConfig(ULocomotionConfigurationAsset* NewConfig);
	virtual FLocomotionConfiguration SetLocomotionConfig_Implementation(ULocomotionConfigurationAsset* NewConfig);

	/// Configuration reset
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
	FLocomotionConfiguration ResetLocomotionConfig();
	virtual FLocomotionConfiguration ResetLocomotionConfig_Implementation();
};
