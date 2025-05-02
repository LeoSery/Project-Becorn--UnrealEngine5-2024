#include "TriggerZone.h"

#include "TriggerZoneListener.h"
#include "BCR/Headers/Interfaces/BCR_Helper.h"
#include "BCR/Headers/Player/MainPlayer.h"
#include "BCR/Headers/System/MiniGame/MiniGameSystem.h"

UTriggerZone::UTriggerZone() :  InnerZoneSize(100.0f), OuterZoneSize(150.0f)
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

	SetTriggerZoneSize(InnerZoneComponent, InnerZoneSize);
	SetTriggerZoneSize(OuterZoneComponent, OuterZoneSize);

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
	ZoneComponent->SetWorldLocation(GetComponentLocation());
	ZoneComponent->SetWorldRotation(GetComponentRotation());
	ZoneComponent->ShapeColor = ZoneColor;
	ZoneComponent->SetCollisionProfileName(TEXT("Trigger"));
}

void UTriggerZone::SetTriggerZoneSize(USphereComponent* ZoneComponent, const float NewZoneSize)
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

	if (AActor* Owner = GetOwner())
	{
		if (!Owner->Implements<UTriggerZoneListener>())
		{
			IBCR_Helper::LogConsole(this, FString::Printf(
				TEXT("BCR ERROR > UTriggerZone::OnActorEnterInnerZone() : Actor %s must implement TriggerZoneListener interface."),
				*Owner->GetName()));
			return;
		}

		FTriggerData CurrentInnerTriggerData(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
		PlayersInInnerZone.AddUnique(CurrentInnerTriggerData.OtherActor);
			
		if (PlayersInInnerZone.Num() == 1)
		{
			ITriggerZoneListener::Execute_OnOnePlayerEnterInnerZone(Owner, CurrentInnerTriggerData);
		}
		else if (PlayersInInnerZone.Num() == 2)
		{
			ITriggerZoneListener::Execute_OnTwoPlayersEnterInnerZone(Owner, CurrentInnerTriggerData);
		}
	}
}

void UTriggerZone::OnActorEnterOuterZone(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!IsValid(OtherActor) || !OtherActor->IsA(AMainPlayer::StaticClass()))
	{
		return;
	}

	if (AActor* Owner = GetOwner())
	{
		if (!Owner->Implements<UTriggerZoneListener>())
		{
			IBCR_Helper::LogConsole(this, FString::Printf(
				TEXT("BCR ERROR > UTriggerZone::OnActorEnterOuterZone() : Actor %s must implement TriggerZoneListener interface."),
				*Owner->GetName()));
			return;
		}

		FTriggerData CurrentOuterTriggerData(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
		PlayersInOuterZone.AddUnique(CurrentOuterTriggerData.OtherActor);

		if (PlayersInOuterZone.Num() == 1)
		{
			ITriggerZoneListener::Execute_OnOnePlayerEnterOuterZone(Owner, CurrentOuterTriggerData);
		}
		else if (PlayersInOuterZone.Num() == 2)
		{
			ITriggerZoneListener::Execute_OnTwoPlayersEnterOuterZone(Owner, CurrentOuterTriggerData);
		}
	}
}

void UTriggerZone::OnActorExitInnerZone(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex)
{
	if (!IsValid(OtherActor) || !OtherActor->IsA(AMainPlayer::StaticClass()))
	{
		return;
	}

	if (AActor* Owner = GetOwner())
	{
		if (!Owner->Implements<UTriggerZoneListener>())
		{
			IBCR_Helper::LogConsole(this, FString::Printf(
				TEXT("BCR ERROR > UTriggerZone::OnActorExitInnerZone() : Actor %s must implement TriggerZoneListener interface."),
				*Owner->GetName()));
			return;
		}

		FTriggerData CurrentInnerTriggerData(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex);
        PlayersInInnerZone.Remove(CurrentInnerTriggerData.OtherActor);

        if (PlayersInInnerZone.Num() == 0)
        {
        	ITriggerZoneListener::Execute_OnPlayersExitInnerZone(Owner, CurrentInnerTriggerData);
        }
	}
}

void UTriggerZone::OnActorExitOuterZone(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (!IsValid(OtherActor) || !OtherActor->IsA(AMainPlayer::StaticClass()))
	{
		return;
	}

	if (AActor* Owner = GetOwner())
	{
		if (!Owner->Implements<UTriggerZoneListener>())
		{
			IBCR_Helper::LogConsole(this, FString::Printf(
				TEXT("BCR ERROR > UTriggerZone::OnActorExitOuterZone() : Actor %s must implement TriggerZoneListener interface."),
				*Owner->GetName()));
			return;
		}
		
		FTriggerData CurrentOuterTriggerData(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex);
		PlayersInOuterZone.Remove(CurrentOuterTriggerData.OtherActor);

		if (PlayersInOuterZone.Num() == 0)
		{
			ITriggerZoneListener::Execute_OnPlayersExitOuterZone(Owner, CurrentOuterTriggerData);
		}
	}
}

void UTriggerZone::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	FName PropertyName = (PropertyChangedEvent.Property != nullptr) ? PropertyChangedEvent.Property->GetFName() : NAME_None;
	const float SafetyMargin = 1.0f;
                         
	if (PropertyName == GET_MEMBER_NAME_CHECKED(UTriggerZone, InnerZoneSize))
	{
		InnerZoneSize = FMath::Clamp(InnerZoneSize, 0.1f, FMath::Max(0.1f, OuterZoneSize - SafetyMargin));
		SetTriggerZoneSize(InnerZoneComponent, InnerZoneSize);
	}
	else if (PropertyName == GET_MEMBER_NAME_CHECKED(UTriggerZone, OuterZoneSize))
	{
		OuterZoneSize = FMath::Max(OuterZoneSize, InnerZoneSize + SafetyMargin);
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
