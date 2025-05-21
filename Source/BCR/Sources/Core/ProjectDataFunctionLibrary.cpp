#include "BCR/Headers/Core/ProjectDataFunctionLibrary.h"

FString UProjectDataFunctionLibrary::GetAppVersion()
{
	const FString ProjectName = GetProjectName();
	const FString ProjectVersion = GetProjectVersion();
	const FString CurrentDate = GetCurrentDate();
	const FString Platform = GetCurrentPlatform();
	const FString BuildType = GetBuildType();
	
	return FString::Printf(TEXT("%s_%s_%s_%s_%s"), 
						  *ProjectName,
						  *ProjectVersion, 
						  *CurrentDate, 
						  *Platform,
						  *BuildType);
}

FString UProjectDataFunctionLibrary::GetProjectVersion()
{
	FString ProjectVersion;
	GConfig->GetString(
		TEXT("/Script/EngineSettings.GeneralProjectSettings"),
		TEXT("ProjectVersion"),
		ProjectVersion,
		GGameIni
	);
    
	return ProjectVersion;
}

FString UProjectDataFunctionLibrary::GetProjectName()
{
	FString ProjectName;
	GConfig->GetString(
		TEXT("/Script/EngineSettings.GeneralProjectSettings"),
		TEXT("ProjectName"),
		ProjectName,
		GGameIni
	);
    
	return ProjectName;
}

FString UProjectDataFunctionLibrary::GetCurrentPlatform()
{
	FString Platform;
    
#if PLATFORM_WINDOWS
	Platform = TEXT("win");
    
#if PLATFORM_64BITS
	Platform += TEXT("64");
#else
	Platform += TEXT("32");
#endif
    
#elif PLATFORM_MAC
	Platform = TEXT("mac");
#elif PLATFORM_LINUX
	Platform = TEXT("linux");
#elif PLATFORM_ANDROID
	Platform = TEXT("android");
#elif PLATFORM_IOS
	Platform = TEXT("ios");
#else
	Platform = TEXT("unknown");
#endif
    
	return Platform;
}

FString UProjectDataFunctionLibrary::GetCurrentDate()
{
	const FDateTime Now = FDateTime::Now();
	return FString::Printf(TEXT("%02d-%02d-%04d"), 
						  Now.GetDay(),
						  Now.GetMonth(), 
						  Now.GetYear()); 
}

FString UProjectDataFunctionLibrary::GetBuildType()
{
#if WITH_EDITOR
	return TEXT("Editor");
#else
	return TEXT("Build");
#endif
}