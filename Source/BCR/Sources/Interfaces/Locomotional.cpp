#include "BCR/Headers/Interfaces/Locomotional.h"
#include "BCR/Headers/System/MiniGame/LocomotionConfigurationTypes.h"

/**
 * @brief Sets a new locomotion configuration for the implementing object
 * @details Applies movement constraints, positioning, and animation settings from the configuration asset
 * 
 * @param NewConfig The locomotion configuration asset to apply
 * @return The runtime locomotion configuration that was applied
 */
FLocomotionConfiguration ILocomotional::SetLocomotionConfig_Implementation(ULocomotionConfigurationAsset* NewConfig)
{
	return FLocomotionConfiguration();
}

/**
 * @brief Resets locomotion to default configuration
 * @details Restores normal movement behavior and clears any special positioning or constraints
 * 
 * @return The default locomotion configuration that was restored
 */
FLocomotionConfiguration ILocomotional::ResetLocomotionConfig_Implementation()
{
	return FLocomotionConfiguration();
}
