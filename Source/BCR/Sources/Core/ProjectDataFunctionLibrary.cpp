#include "BCR/Headers/Core/ProjectDataFunctionLibrary.h"

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

FString UProjectDataFunctionLibrary::GetBuildType()
{
#if WITH_EDITOR
	return TEXT("Editor");
#else
	return TEXT("Build");
#endif
}