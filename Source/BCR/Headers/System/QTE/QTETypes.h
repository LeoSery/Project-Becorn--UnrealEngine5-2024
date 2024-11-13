#pragma once

#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "QTETypes.generated.h"

class AMainPlayer;

UENUM(BlueprintType)
enum class EQTEInputType : uint8 {
    None        UMETA(DisplayName = "None"),
    Tap         UMETA(DisplayName = "Tap"),
    Hold        UMETA(DisplayName = "Hold"),
    Release     UMETA(DisplayName = "Release"),
    StickMove   UMETA(DisplayName = "Stick Movement")
};

USTRUCT(BlueprintType)
struct BCR_API FQTEInputStep
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QTE")
    EQTEInputType InputType = EQTEInputType::None;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QTE")
    FKey RequiredInput;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QTE")
    float TimeWindow = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QTE")
    TMap<FString, float> Parameters;
};

USTRUCT(BlueprintType)
struct BCR_API FPlayerSubSequence
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QTE")
    TArray<FQTEInputStep> Steps;

    UPROPERTY(Transient) // Indicates that it does not save/serialize data. (use only in realtime and must not be saved)
    int32 CurrentStepIndex = 0;

    UPROPERTY(Transient)
    float CurrentInputTime = 0.0f;

    UPROPERTY(Transient) 
    bool bIsCompleted = false;
};

USTRUCT(BlueprintType)
struct BCR_API FQTESequence
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QTE")
    TMap<AMainPlayer*, FPlayerSubSequence> PlayerSubSequences;

    UPROPERTY(Transient)
    bool bIsCompleted = false;
};

USTRUCT(BlueprintType)
struct BCR_API FQTEConfiguration
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QTE")
    TArray<FQTESequence> Sequences;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QTE")
    int32 RepeatCount = 1;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QTE")
    float TotalTime = -1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QTE")
    TSubclassOf<UUserWidget> WidgetClass;
};