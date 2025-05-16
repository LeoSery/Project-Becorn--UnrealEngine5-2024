// Fill out your copyright notice in the Description page of Project Settings.


#include "BCR/Headers/System/FurnitureAssembler.h"
#include "BCR/Headers/Player/MainPlayer.h"


// Sets default values
AFurnitureAssembler::AFurnitureAssembler()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
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

// Called when the game starts or when spawned
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
		int requieredMaterials = ActualRecipies.Material.FindRef(Object->GetClass());
		if (requieredMaterials != 0)
		{
			requieredMaterials--;

			ActualRecipies.Material.Emplace(Object->GetClass(), requieredMaterials);

			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, FString::Printf(TEXT("requiered = %d"), ActualRecipies.Material.FindRef(Object->GetClass())));
			Player->PickUp();
			Object->Destroy();

			if (requieredMaterials == 0)
				PlayFlowerAnimation = true;
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, FString::Printf(TEXT("Bad item given to the assembler")));
			Player->PickUp();
			Object->Destroy();
		}

	}
}

// Called every frame
void AFurnitureAssembler::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

