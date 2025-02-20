#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IPickable.generated.h"

UINTERFACE(MinimalAPI,Blueprintable)
class UIPickable : public UInterface
{
	GENERATED_BODY()
};

class BCR_API IIPickable
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
	void PickedUp(AActor* Player, AActor* Object);

	virtual void PickedUp_Implementation(AActor* Player, AActor* Object);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Drop(AActor* Player, AActor* Object);

	virtual void Drop_Implementation(AActor* Player, AActor* Object);

};
