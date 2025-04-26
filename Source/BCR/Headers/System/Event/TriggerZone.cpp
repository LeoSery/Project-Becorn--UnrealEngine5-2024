#include "TriggerZone.h"
#include "BCR/Headers/Interfaces/BCR_Helper.h"
#include "BCR/Headers/Player/MainPlayer.h"
#include "BCR/Headers/System/MiniGame/MiniGameSystem.h"

UTriggerZone::UTriggerZone():  VFXZoneSize(150.0f), UIZoneSize(100.0f)
{
	PrimaryComponentTick.bCanEverTick = true;

	VFXZoneComponent = CreateDefaultSubobject<USphereComponent>(TEXT("VFXBoxColliderZone"));
	VFXZoneComponent->SetupAttachment(this);
	VFXZoneComponent->OnComponentBeginOverlap.AddDynamic(this, &UTriggerZone::OnActorEnterVFXZone);
	VFXZoneComponent->OnComponentEndOverlap.AddDynamic(this, &UTriggerZone::OnActorExitVFXZone);
    
	UIZoneComponent = CreateDefaultSubobject<USphereComponent>(TEXT("UIBoxColliderZone"));
	UIZoneComponent->SetupAttachment(this);
	UIZoneComponent->OnComponentBeginOverlap.AddDynamic(this, &UTriggerZone::OnActorEnterUIZone);
	UIZoneComponent->OnComponentEndOverlap.AddDynamic(this, &UTriggerZone::OnActorExitUIZone);
}

void UTriggerZone::OnRegister()
{
	Super::OnRegister();

	SetupZone(VFXZoneComponent, VFXZoneSize, FColor::Blue);
	SetupZone(UIZoneComponent, UIZoneSize, FColor::Red);
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

void UTriggerZone::OnActorEnterVFXZone(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!IsValid(OtherActor) || !OtherActor->IsA(AMainPlayer::StaticClass()))
	{
		return;
	}
	
	FTriggerData CurrentVFXTriggerData(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
	
	PlayersInVFXZone.AddUnique(CurrentVFXTriggerData.OtherActor);

	if (PlayersInVFXZone.Num() == 1)
	{
		
	}
	else if (PlayersInVFXZone.Num() == 2)
	{
		
	}
}

void UTriggerZone::OnActorEnterUIZone(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	FTriggerData CurrentUITriggerData(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
	
	PlayersInUIZone.AddUnique(CurrentUITriggerData.OtherActor);

	if (PlayersInUIZone.Num() == 1)
	{
		
	}
	else if (PlayersInUIZone.Num() == 2)
	{
		
	}
}

void UTriggerZone::OnActorExitVFXZone(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex)
{
	
}

void UTriggerZone::OnActorExitUIZone(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	
}

void UTriggerZone::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	FName PropertyName = (PropertyChangedEvent.Property != nullptr) ? PropertyChangedEvent.Property->GetFName() : NAME_None;
                         
	if (PropertyName == GET_MEMBER_NAME_CHECKED(UTriggerZone, VFXZoneSize))
	{
		SetTriggerZoneSize(VFXZoneComponent, VFXZoneSize);
	}
	else if (PropertyName == GET_MEMBER_NAME_CHECKED(UTriggerZone, UIZoneSize))
	{
		SetTriggerZoneSize(UIZoneComponent, UIZoneSize);
	}
}

void UTriggerZone::BeginDestroy()
{
	Super::BeginDestroy();

	if (VFXZoneComponent)
	{
		VFXZoneComponent->OnComponentBeginOverlap.RemoveDynamic(this, &UTriggerZone::OnActorEnterVFXZone);
	}

	if (UIZoneComponent)
	{
		UIZoneComponent->OnComponentBeginOverlap.RemoveDynamic(this, &UTriggerZone::OnActorEnterUIZone);
	}
}

