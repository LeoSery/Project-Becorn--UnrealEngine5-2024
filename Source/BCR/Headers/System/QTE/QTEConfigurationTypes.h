#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BCR/Headers/System/QTE/QTETypes.h"
#include "QTEConfigurationTypes.generated.h"

//////// FORWARD DECLARATIONS ////////
/// Class
class AMainPlayer;

//////// STRUCTS ////////
/// QTE snap point configuration data
USTRUCT(BlueprintType)
struct FQTESnapPointData {
    GENERATED_BODY()
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QTE|Configuration")
    ESnapPointType SnapPoint = ESnapPointType::First;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QTE|Configuration")
    FSnapPointConfig Config;
};

//////// CLASS ////////
/// Asset container for QTE configuration data
/// Provides validation and runtime conversion for Quick Time Event setups
UCLASS(BlueprintType)
class BCR_API UQTEConfigurationAsset : public UDataAsset
{
    GENERATED_BODY()

public:

    //////// PROPERTIES ////////
    /// Asset information
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "QTE|Info")
    FString ConfigurationName = TEXT("New QTE");

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "QTE|Info", Meta = (MultiLine = true))
    FString Description;
    
    /// QTE configuration
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "QTE|Configuration")
    FQTEConfiguration Configuration;

    //////// METHODS ////////
    /// Runtime conversion
    FQTEConfiguration ToRuntimeConfig() const;
};
