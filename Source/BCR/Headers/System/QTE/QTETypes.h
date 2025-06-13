#pragma once

#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "Blueprint/UserWidget.h"
#include "QTETypes.generated.h"

//////// ENUMS ////////

/**
 * @brief Results of QTE action validation
 * @details None = no action, Success = valid action, Failure = invalid action
 */
UENUM(BlueprintType)
enum class EQTEResult : uint8 {
    None        UMETA(DisplayName = "None"),
    Success     UMETA(DisplayName = "Success"),
    Failure     UMETA(DisplayName = "Failure")
};

/**
 * @brief Types of input actions required in QTE
 * @details Press = single press, Hold = continuous, Release = key release, Rotate = analog stick movement
 */
UENUM(BlueprintType)
enum class EQTEActionType : uint8 {
    None        UMETA(DisplayName = "None"),
    Press       UMETA(DisplayName = "Press"),
    Hold        UMETA(DisplayName = "Hold"),
    Release     UMETA(DisplayName = "Release"),
    Rotate      UMETA(DisplayName = "Rotate")
};

/**
 * @brief Current state of the QTE system
 * @details Tracks QTE lifecycle from Inactive through WaitingForPlayers, Running, to Completed/Failed
 */
UENUM(BlueprintType)
enum class EQTEState : uint8 {
    Inactive,
    WaitingForPlayers,
    Running,
    Paused,
    Completed,
    Failed
};

/**
 * @brief Player interaction positions for cooperative QTEs
 * @details First = Player 1 position, Second = Player 2 position
 */
UENUM(BlueprintType)
enum class ESnapPointType : uint8 {
    First,
    Second
};

//////// STRUCTS ////////

/**
 * @brief Internal progress tracking for QTE actions
 * @details Maintains success count and completion state per snap point
 */
USTRUCT()
struct FQTEProgressData 
{
    GENERATED_BODY()
    
    int32 SuccessCount = 0;
    bool bIsComplete = false;
    
    FQTEProgressData() {}
};

/**
 * @brief Configuration for a single snap point in QTE
 * @details Defines input requirements, repeat count, and validation criteria
 */
USTRUCT(BlueprintType)
struct BCR_API FSnapPointConfig {
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QTE")
    ESnapPointType SnapPointType = ESnapPointType::First;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QTE")
    EQTEActionType ActionType = EQTEActionType::None;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QTE")
    FKey RequiredInput;
    
    // Nombre de fois que l'action doit être répétée (-1 pour infini)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QTE", 
        Meta = (ClampMin = "-1", ToolTip = "Nombre de répétitions (-1 pour infini)"))
    int32 RepeatCount = 1;
    
    // Pour les actions de rotation uniquement : vitesse minimale requise
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QTE", 
        Meta = (EditCondition = "ActionType == EQTEActionType::Rotate"))
    float MinRotationSpeed = 0.5f;
};

/**
 * @brief Complete QTE sequence configuration
 * @details Contains snap points, timing, UI widget, and synchronization settings
 */
USTRUCT(BlueprintType)
struct BCR_API FQTEConfiguration {
    GENERATED_BODY()

    // Configuration pour chaque point d'interaction
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QTE")
    TArray<FSnapPointConfig> SnapPoints;

    // Temps total alloué pour compléter le QTE (-1 pour illimité)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QTE")
    float TotalTime = -1.0f;

    // Widget à afficher pendant le QTE
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QTE")
    TSubclassOf<UUserWidget> WidgetClass;
    
    // Nom pour l'identification (optionnel)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QTE")
    FString ConfigurationName = TEXT("New QTE");

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QTE")
    bool ActionShouldWaitOtherPlayer = false;
};

/**
 * @brief Real-time QTE action progress information
 * @details Provides progress, stick position, and active state for UI feedback
 */
USTRUCT(BlueprintType)
struct BCR_API FQTEActionProgress {
    GENERATED_BODY()

    // Progression normalisée (0-1)
    UPROPERTY(BlueprintReadOnly)
    float Progress = 0.0f;

    // Position du stick pour les actions de rotation
    UPROPERTY(BlueprintReadOnly)
    FVector2D StickPosition = FVector2D::ZeroVector;

    // État actif/inactif de l'action
    UPROPERTY(BlueprintReadOnly)
    bool bIsActive = false;

    FQTEActionProgress() = default;
};
