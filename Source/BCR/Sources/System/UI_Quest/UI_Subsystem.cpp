#include "BCR/Headers/System/UI_Quest/UI_Subsystem.h"

/**
 * @brief Initializes the quest subsystem
 * @details Sets up the initial state for quest tracking and management
 * 
 * @param Collection The subsystem collection for dependency management
 */
void UQuest_Subsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
};

/**
 * @brief Cleans up the quest subsystem
 * @details Performs cleanup when the subsystem is destroyed
 */
void UQuest_Subsystem::Deinitialize()
{
	Super::Deinitialize();
}

/**
 * @brief Loads a new quest line and starts the first quest
 * @details Finds and activates the first quest in the chain (one with empty PreviousQuestTag)
 * 
 * @param NewQuestLine The quest data asset containing the quest line to load
 */
void UQuest_Subsystem::LoadQuestLine(UQuestData* NewQuestLine)
{
	CurrentQuestLine = NewQuestLine->QuestLine;
	
	for (FQuestStruct Quest : CurrentQuestLine.QuestLineData)
	{
		if (Quest.PreviousQuestTag == "")
		{
			CurrentQuest = Quest;
			return;
		}
	}

	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("QuestLine Not Started : First Quest Not Found, Check the Previous Tag of the Quest you want First"));
	return;
}

/**
 * @brief Marks a quest as completed and advances to the next quest
 * @details Validates quest tag, finds next quest in chain, or completes the quest line
 * 
 * @param Tag The tag of the quest to complete
 */
void UQuest_Subsystem::CompleteQuest(FString Tag)
{
	if (Tag != CurrentQuest.Tag)  return;

	for (FQuestStruct Quest : CurrentQuestLine.QuestLineData)
	{
		if (Quest.Tag == CurrentQuest.NextQuestTag)
		{
			GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("Next Quest : Next Quest Found"));
			OnQuestCompleted.Broadcast(CurrentQuest.Tag);
			CurrentQuest = Quest;
			QuestTarget = 0;
			
			return;
		}
	}

	// If no next quest has been found, the QuestLine is over
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("QuestLine Completed : No Next Quest Found"));
	OnQuestLineCompleted.Broadcast(CurrentQuestLine.Tag);
	CurrentQuest = FQuestStruct();
	CurrentQuestLine = FQuestLineStruct();
	return;
}

/**
 * @brief Increments progress for the current quest
 * @details Advances quest progress and auto-completes when target amount is reached
 * 
 * @param Tag The tag of the quest to progress
 */
void UQuest_Subsystem::ProgressQuest(FString Tag)
{
	if (Tag != CurrentQuest.Tag)
	{
		return;
	}

	QuestTarget++;
	
	if (QuestTarget == CurrentQuest.Amount)
	{
		CompleteQuest(Tag);
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("Quest Completed : Progress is Equal to Amount"));
	}
}

/**
 * @brief Gets the description of the current active quest
 * @details Returns the descriptive text for the currently active quest
 * 
 * @return Description string of the current quest
 */
FString UQuest_Subsystem::GetCurrentQuestDesc()
{
	return CurrentQuest.Desc;
}

/**
 * @brief Gets the tag identifier of the current active quest
 * @details Returns the unique tag for the currently active quest
 * 
 * @return Tag string of the current quest
 */
FString UQuest_Subsystem::GetCurrentQuestTag()
{
	return CurrentQuest.Tag;
}

/**
 * @brief Gets the target amount required to complete the current quest
 * @details Returns how many actions/items are needed to complete the quest
 * 
 * @return Target amount for quest completion
 */
int UQuest_Subsystem::GetCurrentQuestAmount()
{
	return CurrentQuest.Amount;
}

/**
 * @brief Gets the current progress towards quest completion
 * @details Returns how many actions/items have been completed so far
 * 
 * @return Current progress count
 */
int UQuest_Subsystem::GetCurrentQuestProgress()
{
	return QuestTarget;
};
