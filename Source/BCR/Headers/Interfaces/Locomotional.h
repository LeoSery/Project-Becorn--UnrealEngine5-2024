#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Locomotional.generated.h"

class ULocomotionConfigurationAsset;
struct FLocomotionConfiguration;

UINTERFACE(MinimalAPI,Blueprintable)
class ULocomotional : public UInterface
{
	GENERATED_BODY()
};

class BCR_API ILocomotional
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
	FLocomotionConfiguration SetLocomotionConfig(ULocomotionConfigurationAsset* NewConfig);

	virtual FLocomotionConfiguration SetLocomotionConfig_Implementation(ULocomotionConfigurationAsset* NewConfig);
};
