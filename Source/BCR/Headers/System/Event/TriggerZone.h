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

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOnePlayerEnterZoneSignature, FTriggerData, EventTriggerData);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTwoPlayersZoneSignature, FTriggerData, EventTriggerData);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayersExitZoneSignature, FTriggerData, EventTriggerData);

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

	UFUNCTION()
	void OnActorEnterInnerZone(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnActorEnterOuterZone(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnActorExitInnerZone(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UFUNCTION()
	void OnActorExitOuterZone(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UPROPERTY(BlueprintAssignable)
	FOnOnePlayerEnterZoneSignature OnOnePlayerEnterInnerZone;
	
	UPROPERTY(BlueprintAssignable)
	FOnTwoPlayersZoneSignature OnTwoPlayerEnterInnerZone;

	UPROPERTY(BlueprintAssignable)
	FOnPlayersExitZoneSignature OnPlayersExitInnerZone;
	
	UPROPERTY(BlueprintAssignable)
	FOnOnePlayerEnterZoneSignature OnOnePlayerEnterOuterZone;
	
	UPROPERTY(BlueprintAssignable)
	FOnTwoPlayersZoneSignature OnTwoPlayerEnterOuterZone;

	UPROPERTY(BlueprintAssignable)
	FOnPlayersExitZoneSignature OnPlayersExitOuterZone;
	
	UPROPERTY()
	USphereComponent* InnerZoneComponent;
	
	UPROPERTY(EditAnywhere , Category = "Zone Settings")
	float InnerZoneSize;
	
	UPROPERTY()
	TArray<AActor*> PlayersInInnerZone;
	
	UPROPERTY()
	USphereComponent* OuterZoneComponent;
	
	UPROPERTY(EditAnywhere , Category = "Zone Settings")
	float OuterZoneSize;
	
	UPROPERTY()
	TArray<AActor*> PlayersInOuterZone;
};
