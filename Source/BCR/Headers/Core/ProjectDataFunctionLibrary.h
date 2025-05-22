#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ProjectDataFunctionLibrary.generated.h"

UCLASS()
class BCR_API UProjectDataFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GetAppVersion"), Category = "Game Config")
	static FString GetAppVersion();
    
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GetProjectVersion"), Category = "Game Config")
	static FString GetProjectVersion();
    
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GetProjectName"), Category = "Game Config")
	static FString GetProjectName();
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GetCurrentPlatform"), Category = "Game Config")
	static FString GetCurrentPlatform();
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GetCurrentDate"), Category = "Game Config")
	static FString GetBuildDate();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GetBuildType"), Category = "Game Config")
	static FString GetBuildType();
};
