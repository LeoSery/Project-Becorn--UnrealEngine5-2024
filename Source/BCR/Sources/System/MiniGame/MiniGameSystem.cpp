#include "BCR/Headers/System/MiniGame/MiniGameSystem.h"
#include "BCR/Headers/Interfaces/IPickable.h"
#include <BCR/Headers/Interfaces/BCR_Helper.h>
#include "BCR/Headers/Player/MainPlayer.h"


AMiniGameSystem::AMiniGameSystem()
{
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMiniGameSystem::BeginPlay()
{
	itemList = inputItems;
	Super::BeginPlay();
}

// Called every frame
void AMiniGameSystem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMiniGameSystem::SetInputItem(TArray<TSubclassOf<APickableItem>> _items)
{
	inputItems = _items;
	itemList = _items;
}

void AMiniGameSystem::SetQTE(TArray<UQTE_Data*> _datas)
{
	
}

void AMiniGameSystem::SetOutputItem(TArray<TSubclassOf<APickableItem>> _items)
{
	outputItems = _items;
}

void AMiniGameSystem::StartExecute()
{
	//check if item are the right one from the inputItems Array
	if (itemList.IsEmpty()) {
		// lock in the player with the state machine
		CallQTEReader();
	}
	else {
		IBCR_Helper::LogScreen(this, "Missing Ingredients");
	}
	

	
}

void AMiniGameSystem::CallQTEReader()
{

	//Call the Qte Reader with qteList as an argument
	if (true) {
		FinishExecute(0);
	}
}


void AMiniGameSystem::FinishExecute(int i)
{
	if (i >= outputItems.Num()) {
		IBCR_Helper::LogScreen(this, "Finished execution");
		Reset();
		return;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
	}
	FTimerHandle TimerHandle;
	FTimerDelegate TimerDelegate = FTimerDelegate::CreateUObject(this, &AMiniGameSystem::FinishExecute, i+1);
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, TimerDelegate, 3, false);
	IBCR_Helper::LogScreen(this, outputItems[i].GetDefaultObject()->GetItemName());

	FVector Location(GetActorLocation().X, GetActorLocation().Y, GetActorLocation().Z+100);
	FRotator Rotation(0.0f, 0.0f, 0.0f);
	FActorSpawnParameters SpawnInfo;
	GetWorld()->SpawnActor<APickableItem>(outputItems[i], Location, GetActorRotation());
}

void AMiniGameSystem::Reset()
{
	itemList = inputItems;
}

void AMiniGameSystem::Interact_Implementation(AMainPlayer* Player)
{
	StartExecute();
}

void AMiniGameSystem::InteractWithObject_Implementation(AMainPlayer* Player, AActor* Object)
{
	APickableItem* item = Cast<APickableItem>(Object);
	if (item) {
		for (int i = 0; i < itemList.Num();i++) {
			if (itemList[i].GetDefaultObject()->GetItemName() == item->GetItemName()) {/* Get the name of the Object (name is given by the class of the pickable */
				itemList.RemoveAt(i);
				Player->PickUp();
				Object->Destroy();
				return;
			}
		}
		IBCR_Helper::LogScreen(this, "Item not in itemList");
	}
	
}
