#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/SphereComponent.h"
#include "TriggerZone.generated.h"

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
	void SetTriggerZoneSize(USphereComponent* ZoneComponent, const float NewZoneSize);

	UFUNCTION()
	void OnActorEnterInnerZone(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnActorEnterOuterZone(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnActorExitInnerZone(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UFUNCTION()
	void OnActorExitOuterZone(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	
	UPROPERTY()
	USphereComponent* InnerZoneComponent;
	
	UPROPERTY(EditAnywhere , Category = "Zone Settings", meta = (ClampMin = "0.1"))
	float InnerZoneSize;
	
	UPROPERTY()
	TArray<AActor*> PlayersInInnerZone;
	
	UPROPERTY()
	USphereComponent* OuterZoneComponent;
	
	UPROPERTY(EditAnywhere , Category = "Zone Settings", meta = (ClampMin = "0.1"))
	float OuterZoneSize;
	
	UPROPERTY()
	TArray<AActor*> PlayersInOuterZone;
};
