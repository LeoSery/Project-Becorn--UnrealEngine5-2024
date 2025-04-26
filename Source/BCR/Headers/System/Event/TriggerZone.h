#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/SphereComponent.h"
#include "TriggerZone.generated.h"

USTRUCT()
struct FTriggerData 
{
	GENERATED_BODY()

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
    
	UPrimitiveComponent* OverlappedComp;
	AActor* OtherActor;
	UPrimitiveComponent* OtherComp;
	int32 OtherBodyIndex;
	bool bFromSweep;
	const FHitResult& SweepResult;
};

DECLARE_DYNAMIC_DELEGATE_OneParam(FOnOnePlayerEnterZoneSignature, FTriggerData, EventTriggerData);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnTwoPlayersZoneSignature, FTriggerData, EventTriggerData);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnPlayersExitZoneSignature, FTriggerData, EventTriggerData);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class BCR_API UTriggerZone : public USceneComponent
{
	GENERATED_BODY()

public:
	UTriggerZone();
	
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	virtual void OnRegister() override;
	virtual void BeginDestroy() override;
	
protected:

	void SetupZone(USphereComponent* ZoneComponent, const float ZoneSize, const FColor ZoneColor) const;
	void SetTriggerZoneSize(USphereComponent* ZoneComponent, const float NewZoneSize) const;

	void OnActorEnterVFXZone(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	void OnActorEnterUIZone(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	void OnActorExitVFXZone(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void OnActorExitUIZone(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	
	UPROPERTY()
	USphereComponent* VFXZoneComponent;
	
	UPROPERTY(EditAnywhere , Category = "Zone Settings")
	float VFXZoneSize;
	
	UPROPERTY()
	TArray<AActor*> PlayersInVFXZone;

	
	UPROPERTY()
	USphereComponent* UIZoneComponent;
	
	UPROPERTY(EditAnywhere , Category = "Zone Settings")
	float UIZoneSize;
	
	UPROPERTY()
	TArray<AActor*> PlayersInUIZone;
};
