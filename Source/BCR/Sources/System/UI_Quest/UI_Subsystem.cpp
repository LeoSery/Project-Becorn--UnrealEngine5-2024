// Fill out your copyright notice in the Description page of Project Settings.


#include "BCR/Headers/System/UI_Quest/UI_Subsystem.h"

void UQuest_Subsystem::Initialize(FSubsystemCollectionBase& Collection) {

	Super::Initialize(Collection);


};

void UQuest_Subsystem::Deinitialize() {

	Super::Deinitialize();

}

void UQuest_Subsystem::LoadQuestLine(UQuestData* NewQuestLine)
{
	CurrentQuestLine = NewQuestLine->QuestLine;
	
	for (FQuestStruct Quest : CurrentQuestLine.QuestLineData) {

		if (Quest.PreviousQuestTag == "") {

			CurrentQuest = Quest;
			return;
		}

	}



	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("QuestLine Not Started : First Quest Not Found, Check the Previous Tag of the Quest you want First"));
	return;
}

void UQuest_Subsystem::CompleteQuest(FString Tag)
{
	if (Tag != CurrentQuest.Tag)  return;

	for (FQuestStruct Quest : CurrentQuestLine.QuestLineData) {

		if (Quest.Tag == CurrentQuest.NextQuestTag) {

			GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("Next Quest : Next Quest Found"));

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

void UQuest_Subsystem::ProgressQuest(FString Tag)
{
	if (Tag != CurrentQuest.Tag)  return;

	QuestTarget++;
	if (QuestTarget == CurrentQuest.Amount) {
		CompleteQuest(Tag);
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("Quest Completed : Progress is Equal to Amount"));
	}
}




FString UQuest_Subsystem::GetCurrentQuestDesc()
{
	return CurrentQuest.Desc;
}

FString UQuest_Subsystem::GetCurrentQuestTag()
{
	return CurrentQuest.Tag;
}

int UQuest_Subsystem::GetCurrentQuestAmount()
{
	return CurrentQuest.Amount;
}

int UQuest_Subsystem::GetCurrentQuestProgress()
{
	return QuestTarget;
}
;

