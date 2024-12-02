#pragma once

#include "CoreMinimal.h"
#include "Delegates/Delegate.h"
#include "BCR/Headers/System/Pickable/PickableItem.h"
#include "BCR/Headers/System/QTE/QTETypes.h"
#include "GameFramework/Actor.h"
#include "MiniGameSystem.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEndQTESignature, bool, _resultStatus);

UCLASS()
class BCR_API AMiniGameSystem : public AActor
{
	GENERATED_BODY()
	
public:	

	//// Unreal
	AMiniGameSystem();
	virtual void Tick(float DeltaTime) override;


	//// Game
	// Setters
	virtual void SetInputItem(TArray<APickableItem> _items);
	virtual void SetQTE(TArray<FQTEConfiguration> _datas);
	virtual void SetOutputItem(TArray<APickableItem> _items);

	// Methods
	void StartExecute();
	void CallQTEReader();
	void FinishExecute();

	// Delegates
	UPROPERTY(BlueprintAssignable)
	FOnEndQTESignature OnEndQTEDelegate;

private:

	TArray<APickableItem> inputItems;
	TArray<APickableItem> outputItems;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
