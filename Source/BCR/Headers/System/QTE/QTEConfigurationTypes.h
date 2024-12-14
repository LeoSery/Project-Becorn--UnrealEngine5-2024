#pragma once

#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "Engine/DataAsset.h"
#include "BCR/Headers/System/QTE/QTETypes.h"
#include "QTEConfigurationTypes.generated.h"

class AMainPlayer;

/**
* @brief Configuration d'une séquence QTE pour un point d'interaction
*/
USTRUCT(BlueprintType)
struct FQTESnapPointData {
    GENERATED_BODY()
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QTE|Configuration")
    ESnapPointType SnapPoint = ESnapPointType::First;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QTE|Configuration")
    FSnapPointConfig Config;
};

/**
* @brief Asset de configuration QTE principal
*/
UCLASS(BlueprintType)
class BCR_API UQTEConfigurationAsset : public UDataAsset
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "QTE|Info")
    FString ConfigurationName = TEXT("New QTE");

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "QTE|Info", Meta = (MultiLine = true))
    FString Description;
    
    // La configuration directement, plus besoin de structures intermédiaires
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "QTE|Configuration")
    FQTEConfiguration Configuration;

    // Simple fonction de copie/validation
    FQTEConfiguration ToRuntimeConfig() const;
};
