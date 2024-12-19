#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BCR/Headers/Interfaces/IPickable.h"
#include "PickableItem.generated.h"

UCLASS()
class BCR_API APickableItem : public AActor, public IIPickable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickableItem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	FString name;

	UFUNCTION(Blueprintable)
	FString GetItemName() const { return name; };

	virtual void PickedUp_Implementation(AActor* _player, AActor* _object) override;
};
