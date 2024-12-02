#pragma once

#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "Blueprint/UserWidget.h"
#include "QTETypes.generated.h"

class AMainPlayer;

//////// ENUMS ////////
/** 
* @brief Types of input actions required for QTE steps
*/
UENUM(BlueprintType)
enum class EQTEInputType : uint8 {
    None        UMETA(DisplayName = "None"),
    Tap         UMETA(DisplayName = "Tap"),
    Hold        UMETA(DisplayName = "Hold"),
    Release     UMETA(DisplayName = "Release"),
    StickMove   UMETA(DisplayName = "Stick Movement")
};

/** 
* @brief Current state of the QTE system
*/
UENUM(BlueprintType)
enum class EQTEState : uint8
{
    Inactive,
    Running,
    Paused,
    Completed, 
    Failed
};

//////// STRUCTS ////////
/** 
* @brief Single input action within a QTE sequence
*/
USTRUCT(BlueprintType)
struct BCR_API FQTEInputStep
{
    GENERATED_BODY()

    /** Type of input required for this step */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QTE")
    EQTEInputType InputType = EQTEInputType::None;

    /** Specific key or button that must be pressed */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QTE")
    FKey RequiredInput;

    /** Time allowed to complete this input (in seconds) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QTE")
    float TimeWindow = 1.0f;

    /** Additional parameters (stick direction, hold duration) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QTE")
    TMap<FString, float> Parameters;
};

/** 
* @brief Sequence of inputs for a single player
*/
USTRUCT(BlueprintType)
struct BCR_API FPlayerSubSequence
{
    GENERATED_BODY()

    /** List of input steps for this player */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QTE")
    TArray<FQTEInputStep> Steps;
    
    UPROPERTY(Transient) // Indicates that it does not save/serialize data. (use only in realtime and must not be saved)
    int32 CurrentStepIndex = 0;
    
    UPROPERTY(Transient)
    float CurrentInputTime = 0.0f;

    UPROPERTY(Transient) 
    bool bIsCompleted = false;
};

/** 
* @brief Sequence requiring multiple players' inputs
*/
USTRUCT(BlueprintType)
struct BCR_API FQTESequence
{
    GENERATED_BODY()

    /** Map of players to their required input sequences */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QTE")
    TMap<AMainPlayer*, FPlayerSubSequence> PlayerSubSequences;

    UPROPERTY(Transient)
    bool bIsCompleted = false;
};

/** 
* @brief Complete configuration for a QTE event
*/
USTRUCT(BlueprintType)
struct BCR_API FQTEConfiguration
{
    GENERATED_BODY()

    /** Array of sequences to complete */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QTE")
    TArray<FQTESequence> Sequences;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QTE")
    int32 RepeatCount = 1;

    /** Total time allowed for QTE (-1 for unlimited) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QTE")
    float TotalTime = -1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QTE")
    TSubclassOf<UUserWidget> WidgetClass;
};