#include "BCR/Headers/System/MiniGame/MiniGameSystem.h"
#include "BCR/Headers/Interfaces/IPickable.h"
#include "BCR/Headers/System/QTE/QTE_Subsystem.h"
#include <BCR/Headers/Interfaces/BCR_Helper.h>
#include <Components/BillboardComponent.h>
#include <Kismet/KismetMathLibrary.h>
#include <Kismet/KismetSystemLibrary.h>
#include "BCR/Headers/System/QTE/QTE_Subsystem.h"
#include "BCR/Headers/Player/MainPlayer.h"
#include "BCR/Headers/System/MiniGame/LocomotionConfigurationTypes.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "BCR/Headers/System/QTE/QTETypes.h"

/**
 * @brief Initializes the mini-game system with default components
 * @details Sets up snap points, collision box, and enables tick functionality
 */
AMiniGameSystem::AMiniGameSystem()
{
	DefaultRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultRootComponent"));
	SetRootComponent(DefaultRootComponent);

	snapPlayerPoint1 = CreateDefaultSubobject<UBillboardComponent>(TEXT("Snap Point Player 1"));
	snapPlayerPoint2 = CreateDefaultSubobject<UBillboardComponent>(TEXT("Snap Point Player 2"));
	outputSpawnPoint = CreateDefaultSubobject<UBillboardComponent>(TEXT("OutPut Spawn Point"));

	snapPlayerPoint1->SetupAttachment(RootComponent);
	snapPlayerPoint2->SetupAttachment(RootComponent);
	outputSpawnPoint->SetupAttachment(RootComponent);

	inputBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Input Box"));

	inputBox->SetupAttachment(RootComponent);

	PrimaryActorTick.bCanEverTick = true;
}

/**
 * @brief Callback for first snap point QTE results
 * @details Handles and logs QTE action results for player 1
 * 
 * @param Result The result of the QTE action (Success/Failure/None)
 */
void AMiniGameSystem::OnFirstSnapPointResult_Implementation(EQTEResult Result)
{
	// Technical log
	IBCR_Helper::LogConsole(this, FString::Printf(TEXT("Player 1 action: %s"), 
		*UEnum::GetValueAsString(Result)));
}

/**
 * @brief Callback for second snap point QTE results
 * @details Handles and logs QTE action results for player 2
 * 
 * @param Result The result of the QTE action (Success/Failure/None)
 */
void AMiniGameSystem::OnSecondSnapPointResult_Implementation(EQTEResult Result)
{
	// Technical log
	IBCR_Helper::LogConsole(this, FString::Printf(TEXT("Player 2 action: %s"), 
		*UEnum::GetValueAsString(Result)));
}

/**
 * @brief Callback for first snap point progress updates
 * @details Receives real-time progress information for player 1
 * 
 * @param Progress Current progress data for the QTE action
 */
void AMiniGameSystem::OnFirstSnapPointProgress_Implementation(const FQTEActionProgress& Progress)
{
	IBCR_Helper::LogConsole(this, FString::Printf(TEXT("Player 1 action")));
}

/**
 * @brief Callback for second snap point progress updates
 * @details Receives real-time progress information for player 2
 * 
 * @param Progress Current progress data for the QTE action
 */
void AMiniGameSystem::OnSecondSnapPointProgress_Implementation(const FQTEActionProgress& Progress)
{
	IBCR_Helper::LogConsole(this, FString::Printf(TEXT("Player 2 action")));
}

/**
 * @brief Callback for overall QTE completion
 * @details Handles the final result of the entire QTE sequence
 * 
 * @param bSuccess Whether the complete QTE sequence was successful
 */
void AMiniGameSystem::OnQTEComplete_Implementation(const bool bSuccess)
{
	IBCR_Helper::LogConsole(this, FString::Printf(TEXT("QTE Complete for : %s with result : %s"), 
		*GetName(), bSuccess ? TEXT("Success") : TEXT("Failure")));
}

/**
 * @brief Initializes snap point mappings and item lists
 * @details Sets up the initial state for player tracking and item management
 */
void AMiniGameSystem::BeginPlay()
{
	snapPointMap.Add(snapPlayerPoint1,nullptr);
	snapPointMap.Add(snapPlayerPoint2, nullptr);
	
	itemList = inputItems;
	Super::BeginPlay();
}

/**
 * @brief Updates the system each frame
 * @details Currently handles any per-frame logic for the mini-game system
 * 
 * @param DeltaTime Time elapsed since the last frame in seconds
 */
void AMiniGameSystem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

/**
 * @brief Sets the required input items for this machine
 * @details Configures which items are needed to activate the mini-game
 * 
 * @param _items Array of pickable item classes required as input
 */
void AMiniGameSystem::SetInputItem(TArray<TSubclassOf<APickableItem>> _items)
{
	inputItems = _items;
	itemList = _items;
}

/**
 * @brief Sets the QTE configuration for this machine
 * @details Assigns the Quick Time Event sequence to be executed
 * 
 * @param _datas QTE configuration asset containing the sequence setup
 */
void AMiniGameSystem::SetQTE(UQTEConfigurationAsset* _datas)
{
	QTEConfig = _datas;
}

/**
 * @brief Sets the items that will be produced upon successful completion
 * @details Configures the output items spawned after QTE success
 * 
 * @param _items Array of pickable item classes to produce as output
 */
void AMiniGameSystem::SetOutputItem(TArray<TSubclassOf<APickableItem>> _items)
{
	outputItems = _items;
}

/**
 * @brief Initiates the QTE execution if all conditions are met
 * @details Checks item requirements and player positioning before starting QTE
 */
void AMiniGameSystem::StartExecute()
{
	if (itemList.IsEmpty())
	{
		if (!QTEConfig)
		{
			// technical log
			IBCR_Helper::LogConsole(this, "No QTE Configuration assigned!");
			return;
		}

		if (UGameInstance* GameInstance = GetGameInstance())
		{
			if (UQTE_Subsystem* QTESystem = GameInstance->GetSubsystem<UQTE_Subsystem>())
			{
				if (QTESystem->GetCurrentState() != EQTEState::Running && QTESystem->GetCurrentState() != EQTEState::WaitingForPlayers)
				{
					// technical log
					IBCR_Helper::LogConsole(this, "Setting up QTE");
					
					// Binding callbacks
					QTESystem->OnQTEComplete.AddDynamic(this, &AMiniGameSystem::FinishExecute);
					
					QTESystem->OnSnapPointFirstResult.AddDynamic(this, &AMiniGameSystem::OnFirstSnapPointResult);
					QTESystem->OnSnapPointSecondResult.AddDynamic(this, &AMiniGameSystem::OnSecondSnapPointResult);

					QTESystem->OnSnapPointFirstProgress.AddDynamic(this, &AMiniGameSystem::OnFirstSnapPointProgress);
					QTESystem->OnSnapPointSecondProgress.AddDynamic(this, &AMiniGameSystem::OnSecondSnapPointProgress);

					QTESystem->OnQTEComplete.AddDynamic(this, &AMiniGameSystem::OnQTEComplete);

					CallQTEReader();
				}
				
				if (snapPointMap[snapPlayerPoint1])
				{
					QTESystem->OnPlayerEnterSnapPoint(snapPointMap[snapPlayerPoint1], ESnapPointType::First);
				}
				if (snapPointMap[snapPlayerPoint2])
				{
					QTESystem->OnPlayerEnterSnapPoint(snapPointMap[snapPlayerPoint2], ESnapPointType::Second);
				}
			}
		}
	}
	else
	{
		// visual log for demonstration
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("Need more resources!"));
		}
	}
}

/**
 * @brief Starts the QTE sequence using the configured asset
 * @details Initializes the QTE subsystem with the assigned configuration
 */
void AMiniGameSystem::CallQTEReader()
{
	if (UGameInstance* GameInstance = GetGameInstance())
	{
		if (UQTE_Subsystem* QTESystem = GameInstance->GetSubsystem<UQTE_Subsystem>())
		{
			QTESystem->StartQTEFromAsset(QTEConfig);
		}
	}
}

/**
 * @brief Handles QTE completion and triggers item production
 * @details Cleans up QTE callbacks and spawns output items on success
 * 
 * @param _success Whether the QTE was completed successfully
 */
void AMiniGameSystem::FinishExecute(bool _success)
{
	if (UGameInstance* GameInstance = GetGameInstance())
	{
		if (UQTE_Subsystem* QTESystem = GameInstance->GetSubsystem<UQTE_Subsystem>())
		{
			QTESystem->OnQTEComplete.RemoveDynamic(this, &AMiniGameSystem::FinishExecute);
			
			QTESystem->OnSnapPointFirstResult.RemoveDynamic(this, &AMiniGameSystem::OnFirstSnapPointResult);
			QTESystem->OnSnapPointSecondResult.RemoveDynamic(this, &AMiniGameSystem::OnSecondSnapPointResult);

			QTESystem->OnSnapPointFirstProgress.RemoveDynamic(this, &AMiniGameSystem::OnFirstSnapPointProgress);
			QTESystem->OnSnapPointSecondProgress.RemoveDynamic(this, &AMiniGameSystem::OnSecondSnapPointProgress);
		}
	}

	// technical log
	IBCR_Helper::LogConsole(this, 
		FString::Printf(TEXT("QTE Execution finished with result: %s"), 
			_success ? TEXT("Success") : TEXT("Failure")));
	
	if (_success)
	{
		// visual log for demonstration
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Green, TEXT("Machine active!"));
		}
	}
	else
	{
		// visual log for demonstration
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, TEXT("Machine failed!"));
		}
	}
}

/**
 * @brief Spawns output items sequentially with delays
 * @details Recursively spawns items from the output list with timed intervals
 * 
 * @param i Index of the item to spawn in the output array
 */
void AMiniGameSystem::SpawnItem(int i)
{
	if (i >= outputItems.Num())
	{
		// visual log for demonstration
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, TEXT("Production complete"));
		}
		return;
	}
	
	FRotator Rotation(0.0f, 0.0f, 0.0f);
	FActorSpawnParameters SpawnInfo;
	GetWorld()->SpawnActor<APickableItem>(outputItems[i], outputSpawnPoint->GetComponentLocation(), GetActorRotation());

	FTimerHandle TimerHandle;
	FTimerDelegate TimerDelegate = FTimerDelegate::CreateUObject(this, &AMiniGameSystem::SpawnItem, i + 1);
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, TimerDelegate, 3, false);

	// technical log
	IBCR_Helper::LogConsole(this, FString::Printf(TEXT("Spawning item: %s"), *outputItems[i].GetDefaultObject()->GetItemName()));
}

/**
 * @brief Resets the machine to its initial state
 * @details Restores the required item list to its original configuration
 */
void AMiniGameSystem::Reset()
{
	itemList = inputItems;
}

/**
 * @brief Partially restores an item to the required list
 * @details Used when an item is removed from the machine area
 * 
 * @param itemClass The item class to restore to the required list
 */
void AMiniGameSystem::PartialReset(TSubclassOf<APickableItem> itemClass)
{
	itemList.Add(itemClass);
}

/**
 * @brief Finds the nearest snap point component to a given location
 * @details Utility method for determining optimal player positioning
 * 
 * @param ToLocation The reference location to measure distance from
 * @param Components Array of billboard components to check
 * @return The closest billboard component to the specified location
 */
UBillboardComponent* AMiniGameSystem::GetNearestComponent(FVector ToLocation, TArray<UBillboardComponent*> Components)
{
	float MinDistance = MAX_FLT;
	UBillboardComponent* ClosestComponent = nullptr;

	for (UBillboardComponent* component : Components)
	{
		float distance = UKismetMathLibrary::Vector_Distance(component->GetComponentLocation(), ToLocation);
		
		if (!IsValid(ClosestComponent) || distance < MinDistance)
		{
			MinDistance = distance;
			ClosestComponent = component;
		}
	}

	return ClosestComponent;
}

/**
 * @brief Handles player interaction without held objects
 * @details Manages snap point assignment and locomotion configuration
 * 
 * @param Player The player attempting to interact with the machine
 */
void AMiniGameSystem::Interact_Implementation(AMainPlayer* Player)
{
	checkItemPresent();

	if (!itemList.IsEmpty() && (snapPointMap.Find(snapPlayerPoint1)[0] != Player && snapPointMap.Find(snapPlayerPoint2)[0] != Player))
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("Need more resources!"));
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, FString::Printf(TEXT("%i"),itemList.Num()));
		return;
	}

	if (UGameInstance* GameInstance = GetGameInstance())
	{
		UQTE_Subsystem* QTESystem;
		QTESystem = GameInstance->GetSubsystem<UQTE_Subsystem>();

		if (snapPointMap.Find(snapPlayerPoint1)[0] == Player)
		{
			snapPointMap.Add(snapPlayerPoint1, nullptr);
			QTESystem->OnPlayerLeaveSnapPoint(Player, ESnapPointType::First);

			if (Cast<ILocomotional>(Player))
			{
				if (locomotionConfigs.Num() > 0)
				{
					ILocomotional::Execute_ResetLocomotionConfig(Player);
				}
			}
			
			//set state machine to liberate the player
			Player->GetCharacterMovement()->SetMovementMode(MOVE_Walking);
			return;
		}
		if (snapPointMap.Find(snapPlayerPoint2)[0] == Player)
		{
			snapPointMap.Add(snapPlayerPoint2, nullptr);
			QTESystem->OnPlayerLeaveSnapPoint(Player, ESnapPointType::Second);

			if (Cast<ILocomotional>(Player))
			{
				if (locomotionConfigs.Num() > 0)
				{
					ILocomotional::Execute_ResetLocomotionConfig(Player);
				}
			}
			
			//set state machine to liberate the player
			Player->GetCharacterMovement()->SetMovementMode(MOVE_Walking);
			return;
		}
	}
	
	TArray<UBillboardComponent*> SnapArray;
	SnapArray.Add(snapPlayerPoint1);
	SnapArray.Add(snapPlayerPoint2);

	UBillboardComponent* closestBillBoard = GetNearestComponent(Player->GetActorLocation(), SnapArray);

	if (snapPointMap.Find(closestBillBoard)[0] == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, TEXT("Found a SnapPoint"));
		snapPointMap.Add(closestBillBoard, Player);

		if (Cast<ILocomotional>(Player))
		{
			if (locomotionConfigs.Num() > 0)
			{
				int32 configIndex = (closestBillBoard == snapPlayerPoint1) ? 0 : 1;
				locomotionConfigs[configIndex]->Configuration.PositionToGo.SetLocation(closestBillBoard->GetComponentLocation());
				locomotionConfigs[configIndex]->Configuration.PositionToGo.SetRotation(closestBillBoard->GetComponentRotation().Quaternion());
				IBCR_Helper::LogConsole(this,FString::Printf(TEXT("Setting locomotion config %d for player at snap point %d"), configIndex, configIndex + 1));
            
				if (locomotionConfigs.IsValidIndex(configIndex))
				{
					ILocomotional::Execute_SetLocomotionConfig(Player, locomotionConfigs[configIndex]);
				}
			}
			else
			{
				Player->GetCharacterMovement()->SetMovementMode(MOVE_None);
				Player->SetActorLocation(closestBillBoard->GetComponentLocation());
			}
		}
	}
	if (snapPointMap.FindRef(snapPlayerPoint1) != nullptr && snapPointMap.FindRef(snapPlayerPoint2) != nullptr)
	{
		StartExecute();
	}
}

/**
 * @brief Handles player interaction with held objects
 * @details Validates and processes item deposits into the machine
 * 
 * @param Player The player interacting with the machine
 * @param Object The object the player is holding
 */
void AMiniGameSystem::InteractWithObject_Implementation(AMainPlayer* Player, AActor* Object)
{
	APickableItem* item = Cast<APickableItem>(Object);
	
	if (item)
	{
		if (presentItem.Contains(item))
		{
			GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, TEXT("Player Already Deposited the Item"));
			Player->PickUp();
			IInteractable::Execute_Interact(this, Player);
			return;
		}
		if (PlayerIsInBox(Player))
		{
			int i = checkItemInRecipe(item);
			
			if (i != -1)
			{
				itemList.RemoveAt(i);
				presentItem.Add(item, item->GetClass());
				Player->PickUp();
				return;
			}
			else if (itemList.Num() == 0)
			{
				presentItem.Add(item, item->GetClass());
				Player->PickUp();
				return;
			}
			IBCR_Helper::LogScreen(this, "Item not in itemList");
		}
	}
}

/**
 * @brief Validates the presence and state of deposited items
 * @details Checks if deposited items are still valid and removes invalid ones
 * 
 * @return True if items are present, false if the machine is empty
 */
bool AMiniGameSystem::checkItemPresent()
{
	for (auto [item,CLASS] : presentItem)
	{
		if(!IsValid(item))
		{
			presentItem.Remove(item);
			PartialReset(CLASS);
		}
	}
	if (presentItem.IsEmpty())
	{
		return false;
	}
	return true;
}

/**
 * @brief Checks if an item is required by the current recipe
 * @details Searches the required item list for a matching item type
 * 
 * @param item The pickable item to validate against the recipe
 * @return Index of the item in the recipe, or -1 if not found
 */
int AMiniGameSystem::checkItemInRecipe(APickableItem* item)
{
	for (int i = 0; i < itemList.Num(); i++)
	{
		if (itemList[i].GetDefaultObject()->GetItemName() == item->GetItemName())
		{
			/* Get the name of the Object (name is given by the class of the pickable */
			return i;
		}
	}
	return -1;
}

/**
 * @brief Adds an item to the present items tracking
 * @details Registers a deposited item with its class for validation
 * 
 * @param item The pickable item to track as present
 */
void AMiniGameSystem::SetPresentItem(APickableItem* item)
{
	presentItem.Add(item, item->GetClass());
}

/**
 * @brief Removes an item from the required list by index
 * @details Used when an item requirement has been fulfilled
 * 
 * @param i Index of the item to remove from the required list
 */
void AMiniGameSystem::RemoveItemFromList(int i)
{
	itemList.RemoveAt(i);
}

/**
 * @brief Checks if a player is within the machine's interaction area
 * @details Validates player position against the input box bounds
 * 
 * @param Player The player to check positioning for
 * @return True if the player is within the interaction box
 */
bool AMiniGameSystem::PlayerIsInBox(AMainPlayer* Player)
{
	FVector boxOrigin;
	FVector boxExtent;
	float sphereRadius;
	UKismetSystemLibrary::GetComponentBounds(inputBox, boxOrigin, boxExtent, sphereRadius);
	
	if (UKismetMathLibrary::IsPointInBox(Player->GetActorLocation(), boxOrigin, boxExtent))
	{
		return true;
	}
	return false;
}
