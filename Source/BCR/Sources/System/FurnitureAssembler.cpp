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
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, TEXT("Poup"));
}

FRecipiesInfo AFurnitureAssembler::GetActualRecipiesInfo()
{
	return ActualRecipies;
}

void AFurnitureAssembler::CraftFurniture()
{
	int valideIngredients = 0;
	for (auto Ingredient : ActualRecipies.Material)
	{
		if (ActualRecipies.Material[Ingredient.Key] != 0)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, FString::Printf(TEXT("POIREAUX")));
			return;
		}
	}
	auto temp = GetWorld()->SpawnActor<APickableItem>(ActualRecipies.Out, GetActorLocation(), FRotator(0.0f, 0.0f, 0.0f));
}

void AFurnitureAssembler::Interact_Implementation(AMainPlayer* Player)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, FString::Printf(TEXT("AAAAAAAAAAAAAAAAAAAAAAAAA")));
}

void AFurnitureAssembler::InteractWithObject_Implementation(AMainPlayer* Player, AActor* Object)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, FString::Printf(TEXT("POUP")));
	if (Cast<IIPickable>(Object))
	{
		IIPickable::Execute_Drop(Object, this, Object);
		auto requieredMaterials = ActualRecipies.Material.Find(Object->GetClass());
		if (requieredMaterials && requieredMaterials[0] != 0)
		{
			requieredMaterials[0]--;
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, FString::Printf(TEXT("requiered = %d"), requieredMaterials[0]));
			Player->PickUp();
			Object->Destroy();
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, FString::Printf(TEXT("ouille")));
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

