#include "BCR/Headers/System/MiniGame/MiniGameSystem.h"

AMiniGameSystem::AMiniGameSystem()
{
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMiniGameSystem::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AMiniGameSystem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMiniGameSystem::SetInputItem(TArray<APickableItem> _items)
{

}

void AMiniGameSystem::SetQTE(TArray<FQTEConfiguration> _datas)
{

}

void AMiniGameSystem::SetOutputItem(TArray<APickableItem> _items)
{

}

void AMiniGameSystem::StartExecute()
{

}

void AMiniGameSystem::CallQTEReader()
{

}

void AMiniGameSystem::FinishExecute()
{

}
