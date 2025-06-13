#include "BCR/Headers/Core/ProjectDataFunctionLibrary.h"

/**
 * @brief Generates a comprehensive application version string
 * @details Combines project name, version, build date, platform, and build type into a single identifier
 * 
 * @return Formatted version string: ProjectName_Version_Date_Platform_BuildType
 */
FString UProjectDataFunctionLibrary::GetAppVersion()
{
	const FString ProjectName = GetProjectName();
	const FString ProjectVersion = GetProjectVersion();
	const FString CurrentDate = GetBuildDate();
	const FString Platform = GetCurrentPlatform();
	const FString BuildType = GetBuildType();
	
	return FString::Printf(TEXT("%s_%s_%s_%s_%s"), 
						  *ProjectName,
						  *ProjectVersion, 
						  *CurrentDate, 
						  *Platform,
						  *BuildType);
}

/**
 * @brief Retrieves the project version from game configuration
 * @details Reads the ProjectVersion setting from the project's .ini file
 * 
 * @return Project version string as defined in project settings
 */
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

/**
 * @brief Retrieves the project name from game configuration
 * @details Reads the ProjectName setting from the project's .ini file
 * 
 * @return Project name string as defined in project settings
 */
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

/**
 * @brief Determines the current target platform
 * @details Uses preprocessor macros to identify the build platform and architecture
 * 
 * @return Platform identifier (win64, win32, mac, linux, android, ios, unknown)
 */
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

/**
 * @brief Gets the build compilation date
 * @details Returns current date in editor or parses __DATE__ macro in builds
 * 
 * @return Build date in DD-MM-YYYY format
 */
FString UProjectDataFunctionLibrary::GetBuildDate()
{
#if WITH_EDITOR
	const FDateTime Now = FDateTime::Now();
	return FString::Printf(TEXT("%02d-%02d-%04d"), 
						  Now.GetDay(),
						  Now.GetMonth(),
						  Now.GetYear());
#else
	FString CompileDate = FString(__DATE__);
	
	static const TMap<FString, int32> MonthMap = {
		{TEXT("Jan"), 1}, {TEXT("Feb"), 2}, {TEXT("Mar"), 3}, {TEXT("Apr"), 4},
		{TEXT("May"), 5}, {TEXT("Jun"), 6}, {TEXT("Jul"), 7}, {TEXT("Aug"), 8},
		{TEXT("Sep"), 9}, {TEXT("Oct"), 10}, {TEXT("Nov"), 11}, {TEXT("Dec"), 12}
	};
    
	TArray<FString> DateParts;
	CompileDate.ParseIntoArray(DateParts, TEXT(" "), true);
    
	if (DateParts.Num() >= 3)
	{
		const FString MonthStr = DateParts[0];
		const FString DayStr = DateParts[1];
		const FString YearStr = DateParts[2];
        
		const int32* MonthPtr = MonthMap.Find(MonthStr);
		if (MonthPtr)
		{
			return FString::Printf(TEXT("%02d-%02d-%s"), 
								  FCString::Atoi(*DayStr),
								  *MonthPtr,
								  *YearStr);
		}
	}
    
	return TEXT("unknown-date");
#endif
}

/**
 * @brief Identifies whether this is an editor or build version
 * @details Distinguishes between development and shipping builds
 * 
 * @return "Editor" for development builds, "Build" for packaged builds
 */
FString UProjectDataFunctionLibrary::GetBuildType()
{
#if WITH_EDITOR
	return TEXT("Editor");
#else
	return TEXT("Build");
#endif
}
