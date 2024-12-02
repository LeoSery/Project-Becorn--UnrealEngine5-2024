#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Interactable.generated.h"

class AMainPlayer;


UINTERFACE(MinimalAPI)
class UInteractable : public UInterface
{
	GENERATED_BODY()
};

class BCR_API IInteractable
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Interact(AMainPlayer* Player);


	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void InteractWithObject(AMainPlayer* Player, AActor* Object);
};
