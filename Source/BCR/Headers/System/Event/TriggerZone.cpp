#include "TriggerZone.h"
#include "BCR/Headers/Interfaces/BCR_Helper.h"
#include "BCR/Headers/Player/MainPlayer.h"
#include "BCR/Headers/System/MiniGame/MiniGameSystem.h"

UTriggerZone::UTriggerZone():  InnerZoneSize(150.0f), OuterZoneSize(100.0f)
{
	PrimaryComponentTick.bCanEverTick = true;

	InnerZoneComponent = CreateDefaultSubobject<USphereComponent>(TEXT("InnerBoxColliderZone"));
	InnerZoneComponent->SetupAttachment(this);
	InnerZoneComponent->OnComponentBeginOverlap.AddDynamic(this, &UTriggerZone::OnActorEnterInnerZone);
	InnerZoneComponent->OnComponentEndOverlap.AddDynamic(this, &UTriggerZone::OnActorExitInnerZone);
    
	OuterZoneComponent = CreateDefaultSubobject<USphereComponent>(TEXT("OuterBoxColliderZone"));
	OuterZoneComponent->SetupAttachment(this);
	OuterZoneComponent->OnComponentBeginOverlap.AddDynamic(this, &UTriggerZone::OnActorEnterOuterZone);
	OuterZoneComponent->OnComponentEndOverlap.AddDynamic(this, &UTriggerZone::OnActorExitOuterZone);
}

void UTriggerZone::OnRegister()
{
	Super::OnRegister();

	SetupZone(InnerZoneComponent, InnerZoneSize, FColor::Blue);
	SetupZone(OuterZoneComponent, OuterZoneSize, FColor::Red);
}

void UTriggerZone::SetupZone(USphereComponent* ZoneComponent, const float ZoneSize, const FColor ZoneColor) const
{
	if (ZoneComponent == nullptr || ZoneSize <= 0.0f)
	{
		if (const AActor* Owner = GetOwner())
		{
			IBCR_Helper::LogConsole(this, FString::Printf(
				TEXT("BCR ERROR > TriggerZone::SetupZone() : One or more elements are invalid or null for trigger zone setup: %s"),
				*Owner->GetName()));
		}
		else
		{
			IBCR_Helper::LogConsole(this, TEXT("BCR ERROR > TriggerZone::SetupZone() : Owner is null."));
		}
		return;
	}
	
	ZoneComponent->SetVisibility(true);
	ZoneComponent->SetSphereRadius(ZoneSize);
	ZoneComponent->SetWorldLocation(GetComponentLocation());
	ZoneComponent->SetWorldRotation(GetComponentRotation());
	ZoneComponent->ShapeColor = ZoneColor;
}

void UTriggerZone::SetTriggerZoneSize(USphereComponent* ZoneComponent, const float NewZoneSize) const
{
	if (ZoneComponent == nullptr || NewZoneSize <= 0.0f)
	{
		if (const AActor* Owner = GetOwner())
		{
			IBCR_Helper::LogConsole(this, FString::Printf(
				TEXT("BCR ERROR > UTriggerZone::SetTriggerZoneSize() : One or more elements are invalid or null for trigger zone resize for: %s"),
				*Owner->GetName()));
		}
		else
		{
			IBCR_Helper::LogConsole(this, TEXT("BCR ERROR > TriggerZone::SetupZone() : Owner is null."));
		}
		return;
	}

	ZoneComponent->SetSphereRadius(NewZoneSize);
}

void UTriggerZone::OnActorEnterInnerZone(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!IsValid(OtherActor) || !OtherActor->IsA(AMainPlayer::StaticClass()))
	{
		return;
	}
	
	FTriggerData CurrentVFXTriggerData(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
	
	PlayersInInnerZone.AddUnique(CurrentVFXTriggerData.OtherActor);

	if (PlayersInInnerZone.Num() == 1 && OnOnePlayerEnterInnerZone.IsBound())
	{
		OnOnePlayerEnterInnerZone.Broadcast(CurrentVFXTriggerData);
	}
	else if (PlayersInInnerZone.Num() == 2 && OnTwoPlayerEnterInnerZone.IsBound())
	{
		OnTwoPlayerEnterInnerZone.Broadcast(CurrentVFXTriggerData);
	}
}

void UTriggerZone::OnActorEnterOuterZone(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	FTriggerData CurrentUITriggerData(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
	
	PlayersInOuterZone.AddUnique(CurrentUITriggerData.OtherActor);

	if (PlayersInOuterZone.Num() == 1 && OnOnePlayerEnterOuterZone.IsBound())
	{
		OnOnePlayerEnterOuterZone.Broadcast(CurrentUITriggerData);
	}
	else if (PlayersInOuterZone.Num() == 2 && OnTwoPlayerEnterOuterZone.IsBound())
	{
		OnTwoPlayerEnterOuterZone.Broadcast(CurrentUITriggerData);
	}
}

void UTriggerZone::OnActorExitInnerZone(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex)
{
	FTriggerData CurrentVFXTriggerData(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex);

	PlayersInInnerZone.Remove(CurrentVFXTriggerData.OtherActor);

	if (PlayersInInnerZone.Num() == 0 && OnPlayersExitOuterZone.IsBound())
	{
		OnPlayersExitOuterZone.Broadcast(CurrentVFXTriggerData);
	}
}

void UTriggerZone::OnActorExitOuterZone(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	FTriggerData CurrentVFXTriggerData(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex);

	PlayersInOuterZone.Remove(CurrentVFXTriggerData.OtherActor);

	if (PlayersInOuterZone.Num() == 0 && OnPlayersExitInnerZone.IsBound())
	{
		OnPlayersExitInnerZone.Broadcast(CurrentVFXTriggerData);
	}
}

void UTriggerZone::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	FName PropertyName = (PropertyChangedEvent.Property != nullptr) ? PropertyChangedEvent.Property->GetFName() : NAME_None;
                         
	if (PropertyName == GET_MEMBER_NAME_CHECKED(UTriggerZone, InnerZoneSize))
	{
		SetTriggerZoneSize(InnerZoneComponent, InnerZoneSize);
	}
	else if (PropertyName == GET_MEMBER_NAME_CHECKED(UTriggerZone, OuterZoneSize))
	{
		SetTriggerZoneSize(OuterZoneComponent, OuterZoneSize);
	}
}

void UTriggerZone::BeginDestroy()
{
	Super::BeginDestroy();

	if (InnerZoneComponent)
	{
		InnerZoneComponent->OnComponentBeginOverlap.RemoveDynamic(this, &UTriggerZone::OnActorEnterInnerZone);
		InnerZoneComponent->OnComponentEndOverlap.RemoveDynamic(this, &UTriggerZone::OnActorExitInnerZone);
	}

	if (OuterZoneComponent)
	{
		OuterZoneComponent->OnComponentBeginOverlap.RemoveDynamic(this, &UTriggerZone::OnActorEnterOuterZone);
		OuterZoneComponent->OnComponentEndOverlap.RemoveDynamic(this, &UTriggerZone::OnActorExitOuterZone);
	}
}

