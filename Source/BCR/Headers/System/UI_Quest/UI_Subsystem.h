#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "BCR/Headers/System/UI_Quest/QuestData.h"
#include "UI_Subsystem.generated.h"

//////// DELEGATES ////////
/// Quest event notifications
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQuestCompleted, FString, tag);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQuestLineCompleted, FString, tag);

//////// CLASS ////////

/**
 * @brief Quest management subsystem for tracking player progress
 * @details Handles quest line loading, progress tracking, completion validation, and event broadcasting
 */
UCLASS()
class BCR_API UQuest_Subsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
public :

	//////// UNREAL LIFECYCLE ////////
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	//////// QUEST MANAGEMENT ////////
	/// Quest line control
	UFUNCTION(BlueprintCallable, Category = "Quest")
	void LoadQuestLine(UQuestData* NewQuestLine);

	/// Progress tracking
	UFUNCTION(BlueprintCallable, Category = "Quest")
	void CompleteQuest(FString Tag);
	UFUNCTION(BlueprintCallable, Category = "Quest")
	void ProgressQuest(FString Tag);

	//////// QUEST INFORMATION ////////
	/// Current quest data
	UFUNCTION(BlueprintCallable, Category = "Quest")
	FString GetCurrentQuestDesc();
	UFUNCTION(BlueprintCallable, Category = "Quest")
	FString GetCurrentQuestTag();
	UFUNCTION(BlueprintCallable, Category = "Quest")
	int GetCurrentQuestAmount();
	UFUNCTION(BlueprintCallable, Category = "Quest")
	int GetCurrentQuestProgress();

	//////// DELEGATES ////////
	/// Event broadcasting
	UPROPERTY(BlueprintAssignable, Category = "Quest")
	FOnQuestCompleted OnQuestCompleted;
	UPROPERTY(BlueprintAssignable, Category = "Quest")
	FOnQuestLineCompleted OnQuestLineCompleted;
	
private :

	//////// STATE MANAGEMENT ////////
	/// Current quest tracking
	FQuestLineStruct CurrentQuestLine;
	FQuestStruct CurrentQuest;
	int QuestTarget;
};
