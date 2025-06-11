// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "QuestData.generated.h"

USTRUCT(BlueprintType)
struct BCR_API FQuestStruct {

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


USTRUCT(BlueprintType)
struct BCR_API FQuestLineStruct {

    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "QuestLine|Info")
    FString Tag;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "QuestLine|Info")
    TArray<FQuestStruct> QuestLineData;

};



/**
 * 
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
