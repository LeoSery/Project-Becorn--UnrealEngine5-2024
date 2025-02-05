#pragma once

#include "CoreMinimal.h"
#include "Delegates/Delegate.h"
#include "BCR/Headers/System/Pickable/PickableItem.h"
#include "BCR/Headers/Interfaces/Interactable.h"
#include "GameFramework/Actor.h"
#include <Components/BoxComponent.h>
#include <Components/BillboardComponent.h>
#include "MiniGameSystem.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEndQTESignature, bool, _resultStatus);

UCLASS()
class BCR_API AMiniGameSystem : public AActor, public IInteractable
{
	GENERATED_BODY()

public:
	//// Unreal
	AMiniGameSystem();
	virtual void Tick(float DeltaTime) override;

	//// Game
	// Setters
	UFUNCTION(BlueprintCallable)
	virtual void SetInputItem(TArray<TSubclassOf<APickableItem>> _items);
	UFUNCTION(BlueprintCallable)
	virtual void SetQTE(UQTEConfigurationAsset* _datas);
	UFUNCTION(BlueprintCallable)
	virtual void SetOutputItem(TArray<TSubclassOf<APickableItem>> _items);

	// Methods
	UFUNCTION(BlueprintCallable)
	void StartExecute();
	UFUNCTION(BlueprintCallable)
	void CallQTEReader();
	UFUNCTION(BlueprintCallable)
	void FinishExecute(bool _success);

	UFUNCTION(BlueprintCallable)
	void SpawnItem(int i);
	UFUNCTION(BlueprintCallable)
	void Reset();

	UFUNCTION(BlueprintCallable)
	void PartialReset(TSubclassOf<APickableItem> itemClass);

	UBillboardComponent* GetNearestComponent(FVector ToLocation, TArray<UBillboardComponent*> Components);

	// Interface Methods
	void Interact_Implementation(AMainPlayer* Player);
	void InteractWithObject_Implementation(AMainPlayer* Player, AActor* Object);


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TMap<UBillboardComponent*, AMainPlayer*> snapPointMap;

	UFUNCTION(BlueprintCallable)
	bool checkItemPresent();

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UBillboardComponent* snapPlayerPoint1;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UBillboardComponent* snapPlayerPoint2;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UBillboardComponent* outputSpawnPoint;

private:
	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<APickableItem>> inputItems;
	TArray<TSubclassOf<APickableItem>> itemList; /*Copy of inputItems*/
	
	UPROPERTY(EditAnywhere)
	TMap<APickableItem*,TSubclassOf<APickableItem>> presentItem;

	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<APickableItem>> outputItems;
	UPROPERTY(EditAnywhere)
	UQTEConfigurationAsset* QTEConfig;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USceneComponent* DefaultRootComponent;

	

	UPROPERTY(EditAnywhere)
	UBoxComponent* inputBox;

	UPROPERTY(EditAnywhere)
	float MaxSnapPointDistance = 200.f;

public:

	UFUNCTION(BlueprintNativeEvent)
	void OnFirstSnapPointResult(EQTEResult Result);
	void OnFirstSnapPointResult_Implementation(EQTEResult Result);
    
	UFUNCTION(BlueprintNativeEvent)
	void OnSecondSnapPointResult(EQTEResult Result);
	void OnSecondSnapPointResult_Implementation(EQTEResult Result);

	UFUNCTION(BlueprintNativeEvent)
	void OnFirstSnapPointProgress(const FQTEActionProgress& Progress);
	void OnFirstSnapPointProgress_Implementation(const FQTEActionProgress& Progress);

	UFUNCTION(BlueprintNativeEvent)
	void OnSecondSnapPointProgress(const FQTEActionProgress& Progress);
	void OnSecondSnapPointProgress_Implementation(const FQTEActionProgress& Progress);

protected:
	virtual void BeginPlay() override;
};