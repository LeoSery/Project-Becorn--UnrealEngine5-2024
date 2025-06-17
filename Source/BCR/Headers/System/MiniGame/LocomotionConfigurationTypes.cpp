#include "LocomotionConfigurationTypes.h"
#include "BCR/Headers/Interfaces/BCR_Helper.h"

/**
 * @brief Converts the asset configuration to runtime format
 * @details Performs validation and creates a runtime-ready locomotion configuration with safety checks
 * 
 * @return Valid runtime configuration with validation warnings for invalid setups
 */
FLocomotionConfiguration ULocomotionConfigurationAsset::ToRuntimeConfig() const
{
	FLocomotionConfiguration RuntimeConfig;
    
	// Copie les données de base
	RuntimeConfig.PositionToGo = Configuration.PositionToGo;
	RuntimeConfig.StartAnimToPlay = Configuration.StartAnimToPlay;
	RuntimeConfig.StartMontageSection = Configuration.StartMontageSection;
	RuntimeConfig.EndAnimToPlay = Configuration.EndAnimToPlay;
	RuntimeConfig.Mode = Configuration.Mode;
	RuntimeConfig.bLockCapsuleOrientation = Configuration.bLockCapsuleOrientation;
	RuntimeConfig.bUsePhysicalAnim = Configuration.bUsePhysicalAnim;
	RuntimeConfig.bToggleReachTarget = Configuration.bToggleReachTarget;
	RuntimeConfig.bUseSpecificAnim = Configuration.bUseSpecificAnim;
	RuntimeConfig.MaxSpeed = Configuration.MaxSpeed;
	RuntimeConfig.DistanceToStopAutoWalking = Configuration.DistanceToStopAutoWalking;

	// Validation des données critiques
	if (!RuntimeConfig.StartAnimToPlay && RuntimeConfig.bUseSpecificAnim)
	{
		IBCR_Helper::LogScreen(this, TEXT("Configuration invalide : animation de départ manquante alors que bUseSpecificAnim est actif"),
			5.0f, FColor::Red);
	}

	if (RuntimeConfig.Mode == ELocomotionMode::Basic && RuntimeConfig.bLockCapsuleOrientation)
	{
		IBCR_Helper::LogScreen(this, TEXT("Avertissement : verrouillage de capsule activé en mode Basic"),
			5.0f, FColor::Yellow);
	}

	return RuntimeConfig;
}
