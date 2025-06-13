#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BCR/Headers/Interfaces/IPickable.h"
#include "AWood.generated.h"

//////// CLASS ////////

/**
 * @brief Wood resource object that can be picked up by players
 * @details Basic pickable wood item implementing the IPickable interface
 */
UCLASS()
class BCR_API AAWood : public AActor, public IIPickable
{
	GENERATED_BODY()
	
public:

	//////// UNREAL LIFECYCLE ////////
	AAWood();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

};
