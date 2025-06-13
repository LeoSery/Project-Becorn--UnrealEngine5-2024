#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "QuestData.generated.h"

//////// STRUCTS ////////

/**
 * @brief Individual quest information and progression data
 * @details Contains quest identification, description, completion requirements, and chain linking
 */
USTRUCT(BlueprintType)
struct BCR_API FQuestStruct
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Quest|Info")
    FString Tag;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Quest|Info")
    FString Desc;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Quest|Info")
    int Amount;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Quest|Info")
    FString NextQuestTag;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Quest|Info")
    FString PreviousQuestTag;
};

/**
 * @brief Complete quest line containing multiple linked quests
 * @details Represents a sequence of related quests with shared narrative or gameplay theme
 */
USTRUCT(BlueprintType)
struct BCR_API FQuestLineStruct
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "QuestLine|Info")
    FString Tag;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "QuestLine|Info")
    TArray<FQuestStruct> QuestLineData;
};

//////// CLASS ////////

/**
 * @brief Data asset container for quest line configurations
 * @details Provides designer-friendly interface for creating and managing quest sequences
 */
UCLASS()
class BCR_API UQuestData : public UDataAsset
{
	GENERATED_BODY()

public :

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Quest|Info")
    FString ConfigurationName = TEXT("New QuestLine");

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Quest|Info", Meta = (MultiLine = true))
    FString Description;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Quest|QuestLine")
    FQuestLineStruct QuestLine;
};
