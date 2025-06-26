#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/SphereComponent.h"
#include "TriggerZone.generated.h"

//////// STRUCTS ////////

/**
 * @brief Event data for trigger zone interactions
 * @details Contains overlap information passed to trigger zone listeners
 */
USTRUCT(BlueprintType)
struct FTriggerData 
{
	GENERATED_BODY()
	
	FTriggerData() {}

	FTriggerData(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
		bool bFromSweep, const FHitResult& SweepResult)
		: OverlappedComp(OverlappedComp)
		, OtherActor(OtherActor)
		, OtherComp(OtherComp)
		, OtherBodyIndex(OtherBodyIndex)
		, bFromSweep(bFromSweep)
		, SweepResult(SweepResult)
	{
		
	}

	FTriggerData(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
		: OverlappedComp(OverlappedComp)
		, OtherActor(OtherActor)
		, OtherComp(OtherComp)
		, OtherBodyIndex(OtherBodyIndex)
	{
		
	}

	UPROPERTY(BlueprintReadOnly)
	UPrimitiveComponent* OverlappedComp = nullptr;

	UPROPERTY(BlueprintReadOnly)
	AActor* OtherActor = nullptr;

	UPROPERTY(BlueprintReadOnly)
	UPrimitiveComponent* OtherComp = nullptr;

	UPROPERTY(BlueprintReadOnly)
	int32 OtherBodyIndex = 0;

	UPROPERTY(BlueprintReadOnly)
	bool bFromSweep = false;

	UPROPERTY(BlueprintReadOnly)
	FHitResult SweepResult;
};

//////// CLASS ////////
/**
 * @brief Dual-zone trigger component for player detection
 * @details Manages inner and outer spherical trigger zones with player tracking and event broadcasting
 */
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class BCR_API UTriggerZone : public USceneComponent
{
	GENERATED_BODY()

public:

	//////// UNREAL LIFECYCLE ////////
	UTriggerZone();
	virtual void OnRegister() override;
	virtual void BeginDestroy() override;

	UFUNCTION(BlueprintCallable, BlueprintPure)
	FORCEINLINE USphereComponent* GetInnerZoneComponent() { return InnerZoneComponent; }

	UFUNCTION(BlueprintCallable, BlueprintPure)
	FORCEINLINE USphereComponent* GetOuterZoneComponent() { return OuterZoneComponent; }
	
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
	
protected:

	//////// ZONE MANAGEMENT ////////
	/// Setup
	void SetupZone(USphereComponent* ZoneComponent, const float ZoneSize, const FColor ZoneColor) const;
	void SetTriggerZoneSize(USphereComponent* ZoneComponent, const float NewZoneSize);

	//////// EVENT CALLBACKS ////////
	/// Inner zone
	UFUNCTION()
	void OnActorEnterInnerZone(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	void OnActorExitInnerZone(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	/// Outer zone
	UFUNCTION()
	void OnActorEnterOuterZone(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	void OnActorExitOuterZone(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	
	//////// COMPONENTS ////////
	UPROPERTY()
	USphereComponent* InnerZoneComponent;
	UPROPERTY()
	USphereComponent* OuterZoneComponent;

	//////// PROPERTIES ////////
	/// Configuration
	UPROPERTY(EditAnywhere , Category = "Zone Settings", meta = (ClampMin = "0.1"))
	float InnerZoneSize;
	UPROPERTY(EditAnywhere , Category = "Zone Settings", meta = (ClampMin = "0.1"))
	float OuterZoneSize;

	/// Player tracking
	UPROPERTY()
	TArray<AActor*> PlayersInInnerZone;
	UPROPERTY()
	TArray<AActor*> PlayersInOuterZone;
};
