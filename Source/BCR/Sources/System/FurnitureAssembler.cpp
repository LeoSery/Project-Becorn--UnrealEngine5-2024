#include "BCR/Headers/System/FurnitureAssembler.h"
#include "BCR/Headers/Player/MainPlayer.h"

#define DELAY(time, block)\
	{\
	FTimerHandle TimerHandle;\
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, [&]()block, time, false);\
	}

/**
 * @brief Initializes the furniture assembler with collision detection
 * @details Sets up assembler zone and overlap events for player detection
 */
AFurnitureAssembler::AFurnitureAssembler()
{
	PrimaryActorTick.bCanEverTick = true;
	
	// Create Collision Box
	AssemblerZone = CreateDefaultSubobject<UBoxComponent>(FName("Collision Zone"));
	AssemblerZone->SetRelativeScale3D(FVector(2, 2, 2));
	AssemblerZone->SetVisibility(true);
	AssemblerZone->SetHiddenInGame(false);
	AssemblerZone->SetVisibleInSceneCaptureOnly(false);

	// Add event to the OnComponentBeginOverlap delegate
	RootComponent = CreateDefaultSubobject<USceneComponent>("Root");
	AssemblerZone->SetupAttachment(RootComponent);
	AssemblerZone->OnComponentBeginOverlap.AddDynamic(this, &AFurnitureAssembler::OnOverlapBegin);
}

/**
 * @brief Loads recipe data and initializes the first recipe
 * @details Reads recipes from DataTable and sets up the initial crafting target
 */
void AFurnitureAssembler::BeginPlay()
{
	Super::BeginPlay();
	
	// Keep in memory the first recipie
	AllRecipies = LoadObject<UDataTable>(nullptr, TEXT("/Game/Becorn/Data/DT_RecipiesList.DT_RecipiesList"));
	if (AllRecipies)
	{
		RowsNames = AllRecipies->GetRowNames();
		ActualRecipies = *AllRecipies->FindRow<FRecipiesInfo>(RowsNames[0], TEXT(""));
		RowsNames.RemoveAt(0, 1);
	}
}

/**
 * @brief Handles player entry into the assembler zone
 * @details Tracks players and their held objects for automatic item processing
 * 
 * @param OverlappedComponent The component that was overlapped
 * @param OtherActor The actor that entered the assembler zone
 * @param OtherComp The component of the overlapping actor
 * @param OtherBodyIndex Body index of the collision
 * @param bFromSweep Whether this was from a sweep operation
 * @param SweepResult Hit result from sweep if applicable
 */
void AFurnitureAssembler::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, TEXT("Enter Assembler Zone"));
	AActor* pick = nullptr;
	
	if (Cast<AMainPlayer>(OtherActor) && Cast<AMainPlayer>(OtherActor)->PickedUpObject)
	{
		pick = Cast<AMainPlayer>(OtherActor)->PickedUpObject;
		PlayerHolding.Add(Cast<AMainPlayer>(OtherActor), pick);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, pick->GetName());
	}
}

/**
 * @brief Blueprint event triggered when an element is dropped on the assembler
 * @details Called when a valid material is successfully added to the recipe
 */
void AFurnitureAssembler::OnElementDropOnAssembler_Implementation()
{
	
}

void AFurnitureAssembler::TimerElapsed(AActor* Value, AMainPlayer* Player)
{
	Value->Destroy();
	OnElementDropOnAssembler();

	if (requieredMaterials == 0)
		PlayFlowerAnimation = true;
}

/**
 * @brief Gets the current active recipe information
 * @details Returns the recipe data for the furniture currently being crafted
 * 
 * @return Current recipe information including materials and output
 */
FRecipiesInfo AFurnitureAssembler::GetActualRecipiesInfo()
{
	return ActualRecipies;
}

/**
 * @brief Attempts to craft furniture with the current materials
 * @details Validates all required materials are present and spawns the output item
 */
void AFurnitureAssembler::CraftFurniture()
{
	int i = 0;
	for (auto Ingredient : ActualRecipies.Material)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, FString::Printf(TEXT("Item n°%d"),i));

		if (Ingredient.Value != 0)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, FString::Printf(TEXT("Recipie not complite")));
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, FString::Printf(TEXT("%d"), Ingredient.Value));
			
			return;
		}
		i++;
	}

	if (!CraftOnce)
	{
		auto temp = GetWorld()->SpawnActor<APickableItem>(ActualRecipies.Out, GetActorLocation(), FRotator(0.0f, 0.0f, 0.0f));
		CraftOnce = true;
	}
	else
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Emerald, FString::Printf(TEXT("Recipie already realize !"), i));
}

/**
 * @brief Handles player interaction without held objects
 * @details Provides feedback when player approaches without required items
 * 
 * @param Player The player interacting with the assembler
 */
void AFurnitureAssembler::Interact_Implementation(AMainPlayer* Player)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, FString::Printf(TEXT("No Item in Hand, Please grab an item")));
}

/**
 * @brief Handles player interaction with held objects
 * @details Validates and processes material deposits for crafting
 * 
 * @param Player The player interacting with the assembler
 * @param Object The object the player is holding
 */
void AFurnitureAssembler::InteractWithObject_Implementation(AMainPlayer* Player, AActor* Object)
{
	if (Cast<IIPickable>(Object))
	{
		requieredMaterials = ActualRecipies.Material.FindRef(Object->GetClass());
		if (requieredMaterials != 0)
		{
			requieredMaterials--;

			ActualRecipies.Material.Emplace(Object->GetClass(), requieredMaterials);

			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, FString::Printf(TEXT("requiered = %d"), ActualRecipies.Material.FindRef(Object->GetClass())));
			Player->PickUp();
			Object->Destroy();

			OnElementDropOnAssembler();
			
			if (requieredMaterials == 0)
			{
				PlayFlowerAnimation = true;
			}
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, FString::Printf(TEXT("Bad item given to the assembler")));
			Player->PickUp();
			Object->Destroy();
		}
	}
}

/**
 * @brief Updates the assembler and processes automatic item deposits
 * @details Monitors dropped items in the zone and processes valid materials
 * 
 * @param DeltaTime Time elapsed since the last frame in seconds
 */
void AFurnitureAssembler::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	for (auto It = PlayerHolding.CreateConstIterator(); It; ++It)
	{
		if (!It.Key()->PickedUpObject && IsOverlappingActor(It.Value()))
		{
			requieredMaterials = ActualRecipies.Material.FindRef(It.Value()->GetClass());
			if (requieredMaterials != 0)
			{
				requieredMaterials--;

				ActualRecipies.Material.Emplace(It.Value()->GetClass(), requieredMaterials);

				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, FString::Printf(TEXT("requiered = %d"), ActualRecipies.Material.FindRef(It.Value()->GetClass())));
				PlayerHolding.Remove(It.Key());
				InMemActor = It.Value();
				InMemPlayer = It.Key();
				DELAY(2.0f, {
					AFurnitureAssembler::TimerElapsed(InMemActor, InMemPlayer);
					})

			}
			else
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, FString::Printf(TEXT("Bad item given to the assembler")));
				It.Value()->Destroy();
				PlayerHolding.Remove(It.Key());
			}
		}
	}
}
