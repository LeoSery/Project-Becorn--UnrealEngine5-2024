#include "BCR/Headers/System/MiniGame/MiniGameSystem.h"
#include "BCR/Headers/Interfaces/IPickable.h"
#include <BCR/Headers/Interfaces/BCR_Helper.h>
#include <Components/BillboardComponent.h>
#include <Kismet/KismetMathLibrary.h>
#include <Kismet/KismetSystemLibrary.h>
#include "BCR/Headers/Player/MainPlayer.h"


AMiniGameSystem::AMiniGameSystem()
{
	DefaultRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultRootComponent"));
	SetRootComponent(DefaultRootComponent);

	snapPlayerPoint1 = CreateDefaultSubobject<UBillboardComponent>(TEXT("Snap Point Player 1"));
	snapPlayerPoint2 = CreateDefaultSubobject<UBillboardComponent>(TEXT("Snap Point Player 2"));
	outputSpawnPoint = CreateDefaultSubobject<UBillboardComponent>(TEXT("OutPut Spawn Point"));

	snapPlayerPoint1->SetupAttachment(RootComponent);
	snapPlayerPoint1->SetupAttachment(RootComponent);
	outputSpawnPoint->SetupAttachment(RootComponent);

	inputBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Input Box"));

	inputBox->SetupAttachment(RootComponent);

	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMiniGameSystem::BeginPlay()
{
	snapPointMap.Add(snapPlayerPoint1,nullptr);
	snapPointMap.Add(snapPlayerPoint2, nullptr);


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

void AMiniGameSystem::SetQTE(TArray<FQTEConfiguration> _datas)
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

	FRotator Rotation(0.0f, 0.0f, 0.0f);
	FActorSpawnParameters SpawnInfo;
	GetWorld()->SpawnActor<APickableItem>(outputItems[i], outputSpawnPoint->GetComponentLocation() , GetActorRotation());
}

void AMiniGameSystem::Reset()
{
	itemList = inputItems;
}

void AMiniGameSystem::Interact_Implementation(AMainPlayer* Player)
{
	if (snapPointMap.Find(snapPlayerPoint1)[0] == Player) {
		snapPointMap.Add(snapPlayerPoint1, nullptr);

		//set state machine to liberate the player
		return;
	}
	else if (snapPointMap.Find(snapPlayerPoint2)[0] == Player) {
		snapPointMap.Add(snapPlayerPoint2, nullptr);

		//set state machine to liberate the player
		return;
	}
	
	if (snapPointMap.Find(snapPlayerPoint1)[0] == nullptr) {
		snapPointMap.Add(snapPlayerPoint1, Player);
		Player->SetActorLocation(snapPlayerPoint1->GetComponentLocation());

		//set state machine to stopped /occupied / not moving or something
	}
	else if (snapPointMap.Find(snapPlayerPoint2)[0] == nullptr) {
		snapPointMap.Add(snapPlayerPoint2, Player);
		Player->SetActorLocation(snapPlayerPoint2->GetComponentLocation());

		//set state machine to stopped /occupied / not moving or something
	}
	else {
		//Should not go here unless very wrong mistake are made
		IBCR_Helper::LogScreen(this, "No Free Snap Point");
		return;
	}
	if (snapPointMap.Find(snapPlayerPoint1) != nullptr && snapPointMap.Find(snapPlayerPoint2) != nullptr) {
		StartExecute();
	}
	
}

void AMiniGameSystem::InteractWithObject_Implementation(AMainPlayer* Player, AActor* Object)
{
	FVector boxOrigin;
	FVector boxExtent;
	float sphereRadius;
	UKismetSystemLibrary::GetComponentBounds(inputBox, boxOrigin, boxExtent, sphereRadius);
	if (UKismetMathLibrary::IsPointInBox(Player->GetActorLocation(), boxOrigin, boxExtent)) {
		APickableItem* item = Cast<APickableItem>(Object);
		if (item) {
			for (int i = 0; i < itemList.Num(); i++) {
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
}

