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
	FString CompileDate = FString(__DATE__);
	
	TArray<FString> DateParts;
	CompileDate.ParseIntoArray(DateParts, TEXT(" "), true);
    
	if (DateParts.Num() >= 3)
	{
		const FString MonthStr = DateParts[0];
		const FString DayStr = DateParts[1];
		FString YearStr;
		YearStr = DateParts[2];

		int32 Month = 1;
		if (MonthStr == TEXT("Jan")) Month = 1;
		else if (MonthStr == TEXT("Feb")) Month = 2;
		else if (MonthStr == TEXT("Mar")) Month = 3;
		else if (MonthStr == TEXT("Apr")) Month = 4;
		else if (MonthStr == TEXT("May")) Month = 5;
		else if (MonthStr == TEXT("Jun")) Month = 6;
		else if (MonthStr == TEXT("Jul")) Month = 7;
		else if (MonthStr == TEXT("Aug")) Month = 8;
		else if (MonthStr == TEXT("Sep")) Month = 9;
		else if (MonthStr == TEXT("Oct")) Month = 10;
		else if (MonthStr == TEXT("Nov")) Month = 11;
		else if (MonthStr == TEXT("Dec")) Month = 12;
		
		return FString::Printf(TEXT("%s-%02d-%02d"), 
							  *YearStr, 
							  Month, 
							  FCString::Atoi(*DayStr));
	}
	
	return TEXT("unknown-date");
}

FString UProjectDataFunctionLibrary::GetBuildType()
{
#if WITH_EDITOR
	return TEXT("Editor");
#else
	return TEXT("Build");
#endif
}