#pragma once

#include "CoreMinimal.h"
#include "Delegates/Delegate.h"
#include "BCR/Headers/System/Pickable/PickableItem.h"
#include "BCR/Headers/System/QTE/QTE_Data.h"
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
	virtual void SetInputItem(TArray<TSubclassOf<APickableItem>> _items);
	virtual void SetQTE(TArray<UQTE_Data*> _datas);
	virtual void SetOutputItem(TArray<TSubclassOf<APickableItem>> _items);

	// Methods
	void StartExecute();
	void CallQTEReader();
	void FinishExecute(int i);
	void Reset();


	// Interface Methods
	void Interact_Implementation(AMainPlayer* Player);
	void InteractWithObject_Implementation(AMainPlayer* Player, AActor* Object);

	// Delegates
	UPROPERTY(BlueprintAssignable)
	FOnEndQTESignature OnEndQTEDelegate;

	TMap<UBillboardComponent*, AMainPlayer*> snapPointMap;

private:

	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<APickableItem>> inputItems;
	TArray<TSubclassOf<APickableItem>> itemList; /*Copy of inputItems*/
	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<APickableItem>> outputItems;
	UPROPERTY(EditAnywhere)
	TArray<UQTE_Data*> qteList;


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USceneComponent* DefaultRootComponent;

	UPROPERTY(EditAnywhere)
	UBillboardComponent* snapPlayerPoint1;

	UPROPERTY(EditAnywhere)
	UBillboardComponent* snapPlayerPoint2;

	UPROPERTY(EditAnywhere)
	UBillboardComponent* outputSpawnPoint;

	UPROPERTY(EditAnywhere)
	UBoxComponent* inputBox;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};