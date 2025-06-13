#include "BCR/Headers/System/Event/TriggerZone.h"
#include "BCR/Headers/System/Event/TriggerZoneListener.h"
#include "BCR/Headers/Player/MainPlayer.h"
#include "BCR/Headers/System/MiniGame/MiniGameSystem.h"

/**
 * @brief Initializes the trigger zone component
 * @details Sets up inner and outer sphere components with collision callbacks
 */
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

/**
 * @brief Configures zones when component is registered
 * @details Sets zone sizes and visual properties during component initialization
 */
void UTriggerZone::OnRegister()
{
	Super::OnRegister();

	SetTriggerZoneSize(InnerZoneComponent, InnerZoneSize);
	SetTriggerZoneSize(OuterZoneComponent, OuterZoneSize);

	SetupZone(InnerZoneComponent, InnerZoneSize, FColor::Blue);
	SetupZone(OuterZoneComponent, OuterZoneSize, FColor::Red);
}

/**
 * @brief Configures a sphere zone with collision and visual properties
 * @details Sets up collision profile, visibility, and color for zone visualization
 * 
 * @param ZoneComponent The sphere component to configure
 * @param ZoneSize The radius size for the zone
 * @param ZoneColor The debug color for zone visualization
 */
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

/**
 * @brief Updates the radius of a trigger zone
 * @details Safely resizes a zone component with validation
 * 
 * @param ZoneComponent The sphere component to resize
 * @param NewZoneSize The new radius for the zone
 */
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

/**
 * @brief Handles player entering the inner trigger zone
 * @details Tracks players and notifies listeners about inner zone entry events
 * 
 * @param OverlappedComp The component that was overlapped
 * @param OtherActor The actor that entered the zone
 * @param OtherComp The component of the entering actor
 * @param OtherBodyIndex Body index of the collision
 * @param bFromSweep Whether this was from a sweep operation
 * @param SweepResult Hit result from sweep if applicable
 */
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

/**
 * @brief Handles player entering the outer trigger zone
 * @details Tracks players and notifies listeners about outer zone entry events
 * 
 * @param OverlappedComp The component that was overlapped
 * @param OtherActor The actor that entered the zone
 * @param OtherComp The component of the entering actor
 * @param OtherBodyIndex Body index of the collision
 * @param bFromSweep Whether this was from a sweep operation
 * @param SweepResult Hit result from sweep if applicable
 */
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

/**
 * @brief Handles player leaving the inner trigger zone
 * @details Removes players from tracking and notifies listeners when zone is empty
 * 
 * @param OverlappedComponent The component that was overlapped
 * @param OtherActor The actor that left the zone
 * @param OtherComp The component of the leaving actor
 * @param OtherBodyIndex Body index of the collision
 */
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

/**
 * @brief Handles player leaving the outer trigger zone
 * @details Removes players from tracking and notifies listeners when zone is empty
 * 
 * @param OverlappedComponent The component that was overlapped
 * @param OtherActor The actor that left the zone
 * @param OtherComp The component of the leaving actor
 * @param OtherBodyIndex Body index of the collision
 */
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

#if WITH_EDITOR
/**
 * @brief Handles property changes in the editor
 * @details Ensures zone size constraints and updates components when properties change
 * 
 * @param PropertyChangedEvent Information about the changed property
 */
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
#endif

/**
 * @brief Cleans up component before destruction
 * @details Removes collision event bindings to prevent crashes
 */
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
