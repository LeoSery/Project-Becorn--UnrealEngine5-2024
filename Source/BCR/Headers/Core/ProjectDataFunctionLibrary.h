#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ProjectDataFunctionLibrary.generated.h"


//////// CLASS ////////

/**
 * @brief Static function library for project and build information
 * @details Provides Blueprint-accessible functions to retrieve project metadata and build details
 */
UCLASS()
class BCR_API UProjectDataFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	//////// VERSION INFORMATION ////////
	/// Application and project versioning
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GetAppVersion"), Category = "Game Config")
	static FString GetAppVersion();
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GetProjectVersion"), Category = "Game Config")
	static FString GetProjectVersion();
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GetProjectName"), Category = "Game Config")
	static FString GetProjectName();

	//////// PLATFORM INFORMATION ////////
	/// Build and platform details
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GetCurrentPlatform"), Category = "Game Config")
	static FString GetCurrentPlatform();
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GetCurrentDate"), Category = "Game Config")
	static FString GetBuildDate();
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GetBuildType"), Category = "Game Config")
	static FString GetBuildType();
};
