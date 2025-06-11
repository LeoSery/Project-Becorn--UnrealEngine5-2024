// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"

#include "BCR/Headers/System/UI_Quest/QuestData.h"
#include "UI_Subsystem.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQuestCompleted, FString, tag);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQuestLineCompleted, FString, tag);

/**
 * 
 */
UCLASS()
class BCR_API UQuest_Subsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
public :

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	UFUNCTION(BlueprintCallable, Category = "Quest")
	void LoadQuestLine(UQuestData* NewQuestLine);

	UFUNCTION(BlueprintCallable, Category = "Quest")
	void CompleteQuest(FString Tag);
	UFUNCTION(BlueprintCallable, Category = "Quest")
	void ProgressQuest(FString Tag);

	UFUNCTION(BlueprintCallable, Category = "Quest")
	FString GetCurrentQuestDesc();
	UFUNCTION(BlueprintCallable, Category = "Quest")
	FString GetCurrentQuestTag();

	UFUNCTION(BlueprintCallable, Category = "Quest")
	int GetCurrentQuestAmount();
	UFUNCTION(BlueprintCallable, Category = "Quest")
	int GetCurrentQuestProgress();

	UPROPERTY(BlueprintAssignable, Category = "Quest")
	FOnQuestCompleted OnQuestCompleted;

	UPROPERTY(BlueprintAssignable, Category = "Quest")
	FOnQuestLineCompleted OnQuestLineCompleted;


private :

	FQuestLineStruct CurrentQuestLine;

	FQuestStruct CurrentQuest;
	int QuestTarget;
};
