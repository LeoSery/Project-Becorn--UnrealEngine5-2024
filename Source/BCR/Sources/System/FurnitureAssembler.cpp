#include "BCR/Headers/System/FurnitureAssembler.h"
#include "BCR/Headers/Player/MainPlayer.h"

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

void AFurnitureAssembler::OnElementDropOnAssembler_Implementation()
{
	
}

FRecipiesInfo AFurnitureAssembler::GetActualRecipiesInfo()
{
	return ActualRecipies;
}

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

void AFurnitureAssembler::Interact_Implementation(AMainPlayer* Player)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, FString::Printf(TEXT("No Item in Hand, Please grab an item")));
}

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
				It.Value()->Destroy();
				PlayerHolding.Remove(It.Key());

				if (requieredMaterials == 0)
					PlayFlowerAnimation = true;
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
