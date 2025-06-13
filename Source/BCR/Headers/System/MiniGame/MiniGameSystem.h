#pragma once

#include "CoreMinimal.h"
#include "Delegates/Delegate.h"
#include "BCR/Headers/System/Pickable/PickableItem.h"
#include "BCR/Headers/Interfaces/Interactable.h"
#include "GameFramework/Actor.h"
#include <Components/BoxComponent.h>
#include <Components/BillboardComponent.h>
#include "MiniGameSystem.generated.h"

//////// FORWARD DECLARATIONS ////////
/// Class
class UQTEConfigurationAsset;
class ULocomotionConfigurationAsset;

//////// DELEGATES ////////
/// QTE events
UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEndQTESignature, bool, _resultStatus);

//////// CLASS ////////
/**
 * @brief Core system for cooperative mini-games with QTE integration
 * @details Manages player snap points, item requirements, QTE execution, and production output
 */
UCLASS()
class BCR_API AMiniGameSystem : public AActor, public IInteractable
{
	GENERATED_BODY()

public:
	
	//////// UNREAL LIFECYCLE ////////
	AMiniGameSystem();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	//////// CONFIGURATION ////////
	/// System setup
	UFUNCTION(BlueprintCallable)
	virtual void SetInputItem(TArray<TSubclassOf<APickableItem>> _items);
	UFUNCTION(BlueprintCallable)
	virtual void SetQTE(UQTEConfigurationAsset* _datas);
	UFUNCTION(BlueprintCallable)
	virtual void SetOutputItem(TArray<TSubclassOf<APickableItem>> _items);

	//////// WORKFLOW ////////
	/// Execute minigames
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

	//////// COMPONENTS ////////
	/// Billboard snap points
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UBillboardComponent* snapPlayerPoint1;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UBillboardComponent* snapPlayerPoint2;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UBillboardComponent* outputSpawnPoint;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TMap<UBillboardComponent*, AMainPlayer*> snapPointMap;

	/// Zone
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UBoxComponent* inputBox;

	//////// INTERFACE IMPLEMENTATION ////////
	/// IInteractable methods
	void Interact_Implementation(AMainPlayer* Player);
	void InteractWithObject_Implementation(AMainPlayer* Player, AActor* Object);

	//////// ITEM MANAGEMENT ////////
	/// Item validation and tracking
	UFUNCTION(BlueprintCallable)
	bool checkItemPresent();
	UFUNCTION(BlueprintCallable)
	int checkItemInRecipe(APickableItem* item);
	UFUNCTION(BlueprintCallable)
	void SetPresentItem(APickableItem* item);
	UFUNCTION(BlueprintCallable)
	void RemoveItemFromList(int i);
	UFUNCTION(BlueprintCallable)
	bool PlayerIsInBox(AMainPlayer* Player);

	//////// QTE CALLBACKS ////////
	/// QTE event responses
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
	UFUNCTION(BlueprintNativeEvent)
	void OnQTEComplete(const bool bSuccess);
	void OnQTEComplete_Implementation(const bool bSuccess);

	//////// HELPERS ////////
	UBillboardComponent* GetNearestComponent(FVector ToLocation, TArray<UBillboardComponent*> Components);

private:

	//////// COMPONENTS ////////
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USceneComponent* DefaultRootComponent;

	//////// SYSTEM ////////
	/// Item system
	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<APickableItem>> inputItems;
	TArray<TSubclassOf<APickableItem>> itemList; /*Copy of inputItems*/
	UPROPERTY(EditAnywhere)
	TMap<APickableItem*,TSubclassOf<APickableItem>> presentItem;
	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<APickableItem>> outputItems;

	//////// CONFIGURATION ASSETS ////////
	/// System configuration
	UPROPERTY(EditAnywhere)
	UQTEConfigurationAsset* QTEConfig;
	UPROPERTY(EditAnywhere)
	TArray<ULocomotionConfigurationAsset*> locomotionConfigs;
	
	//////// SETTINGS ////////
	/// Behavior parameters
	UPROPERTY()
	int Debug;
	UPROPERTY(EditAnywhere)
	float MaxSnapPointDistance = 200.f;
};
