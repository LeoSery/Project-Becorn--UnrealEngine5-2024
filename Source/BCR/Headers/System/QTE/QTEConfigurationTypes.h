#pragma once

#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "Engine/DataAsset.h"
#include "BCR/Headers/System/QTE/QTETypes.h"
#include "QTEConfigurationTypes.generated.h"

class AMainPlayer;

/**
* @brief Struct defining a single QTE action like pressing a key or holding a button
*/
USTRUCT(BlueprintType)
struct FQTEActionData
{
    GENERATED_BODY()
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QTE|Action")
    EQTEInputType InputType = EQTEInputType::Tap;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QTE|Action")
    FKey RequiredKey;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QTE|Action",  Meta = (ClampMin = "0.1", ToolTip = "Time in seconds to complete this action"))
    float TimeWindow = 1.0f;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QTE|Action",  Meta = (EditCondition = "InputType == EQTEInputType::Hold", EditConditionHides, ToolTip = "For actions that require holding a key"))
    float HoldDuration = 1.0f;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QTE|Action", Meta = (EditCondition = "InputType == EQTEInputType::StickMove", EditConditionHides))
    FVector2D StickDirection = FVector2D(1.0f, 0.0f);
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QTE|Action",  Meta = (EditCondition = "InputType == EQTEInputType::StickMove", EditConditionHides, ClampMin = "0.0", ClampMax = "1.0"))
    float DirectionTolerance = 0.3f;
};

/**
* @brief Sequence of actions for a specific player 
*/
USTRUCT(BlueprintType)
struct FQTEPlayerSequenceData
{
    GENERATED_BODY()
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QTE|Sequence", Meta = (ClampMin = "0", ClampMax = "1", ToolTip = "Index of player (0 = Player 1, 1 = Player 2)"))
    int32 PlayerIndex = 0;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QTE|Sequence")
    TArray<FQTEActionData> Actions;
};

/**
* @brief Complete sequence requiring multiple players
*/
USTRUCT(BlueprintType)
struct FQTESequenceData
{
    GENERATED_BODY()
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QTE|Sequence")
    FString SequenceName = TEXT("New Sequence");
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QTE|Sequence")
    TArray<FQTEPlayerSequenceData> PlayerSequences;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QTE|Sequence")
    TSubclassOf<UUserWidget> CustomWidget;
};


/**
* @brief Main asset containing QTE configuration
* Used to define sequences and parameters for QTE events
*/
UCLASS(BlueprintType)
class BCR_API UQTEConfigurationAsset : public UDataAsset
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "QTE|Info", Meta = (ToolTip = "Name of this QTE configuration"))
    FString ConfigurationName = TEXT("New QTE");

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "QTE|Info", Meta = (MultiLine = true, ToolTip = "Description of this QTE configuration"))
    FString Description;
    
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "QTE|Configuration")
    TArray<FQTESequenceData> Sequences;
    
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "QTE|Configuration", Meta = (ClampMin = "1", ToolTip = "Number of times to repeat the QTE"))
    int32 RepeatCount = 1;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "QTE|Configuration", Meta = (ClampMin = "-1", ToolTip = "Total time allowed for QTE (-1 for unlimited)"))
    float TotalTimeLimit = -1.0f;
    
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "QTE|UI")
    TSubclassOf<UUserWidget> DefaultWidgetClass;

    /**
    * @brief Converts asset data to runtime configuration
    * @param Players Array of players in order (Player 1, 2)
    * @return Runtime configuration ready for QTE system
    */
    UFUNCTION(BlueprintCallable, Category = "QTE")
    FQTEConfiguration ToRuntimeConfig(const TArray<AMainPlayer*>& Players);
};
