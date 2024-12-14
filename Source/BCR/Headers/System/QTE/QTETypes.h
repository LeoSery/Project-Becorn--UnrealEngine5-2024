#pragma once

#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "Blueprint/UserWidget.h"
#include "QTETypes.generated.h"

//////// ENUMS ////////
/** 
* @brief Types d'actions possibles dans le QTE 
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
* @brief État actuel du système QTE
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
* @brief Point d'interaction sur une machine
*/
UENUM(BlueprintType)
enum class ESnapPointType : uint8 {
    First,
    Second
};

//////// STRUCTS ////////
/** 
* @brief Configuration d'un point d'interaction
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
* @brief Configuration complète d'une séquence QTE
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
};

/** 
* @brief Information de progression d'une action
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