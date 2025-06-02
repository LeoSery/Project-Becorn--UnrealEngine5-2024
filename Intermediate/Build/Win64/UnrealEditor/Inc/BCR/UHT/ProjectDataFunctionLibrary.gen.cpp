// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCR/Headers/Core/ProjectDataFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectDataFunctionLibrary() {}

// Begin Cross Module References
BCR_API UClass* Z_Construct_UClass_UProjectDataFunctionLibrary();
BCR_API UClass* Z_Construct_UClass_UProjectDataFunctionLibrary_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_BCR();
// End Cross Module References

// Begin Class UProjectDataFunctionLibrary Function GetAppVersion
struct Z_Construct_UFunction_UProjectDataFunctionLibrary_GetAppVersion_Statics
{
	struct ProjectDataFunctionLibrary_eventGetAppVersion_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Config" },
		{ "DisplayName", "GetAppVersion" },
		{ "ModuleRelativePath", "Headers/Core/ProjectDataFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectDataFunctionLibrary_GetAppVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDataFunctionLibrary_eventGetAppVersion_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectDataFunctionLibrary_GetAppVersion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectDataFunctionLibrary_GetAppVersion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectDataFunctionLibrary_GetAppVersion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectDataFunctionLibrary_GetAppVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectDataFunctionLibrary, nullptr, "GetAppVersion", nullptr, nullptr, Z_Construct_UFunction_UProjectDataFunctionLibrary_GetAppVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectDataFunctionLibrary_GetAppVersion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectDataFunctionLibrary_GetAppVersion_Statics::ProjectDataFunctionLibrary_eventGetAppVersion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectDataFunctionLibrary_GetAppVersion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectDataFunctionLibrary_GetAppVersion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProjectDataFunctionLibrary_GetAppVersion_Statics::ProjectDataFunctionLibrary_eventGetAppVersion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectDataFunctionLibrary_GetAppVersion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectDataFunctionLibrary_GetAppVersion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectDataFunctionLibrary::execGetAppVersion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UProjectDataFunctionLibrary::GetAppVersion();
	P_NATIVE_END;
}
// End Class UProjectDataFunctionLibrary Function GetAppVersion

// Begin Class UProjectDataFunctionLibrary Function GetBuildDate
struct Z_Construct_UFunction_UProjectDataFunctionLibrary_GetBuildDate_Statics
{
	struct ProjectDataFunctionLibrary_eventGetBuildDate_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Config" },
		{ "DisplayName", "GetCurrentDate" },
		{ "ModuleRelativePath", "Headers/Core/ProjectDataFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectDataFunctionLibrary_GetBuildDate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDataFunctionLibrary_eventGetBuildDate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectDataFunctionLibrary_GetBuildDate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectDataFunctionLibrary_GetBuildDate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectDataFunctionLibrary_GetBuildDate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectDataFunctionLibrary_GetBuildDate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectDataFunctionLibrary, nullptr, "GetBuildDate", nullptr, nullptr, Z_Construct_UFunction_UProjectDataFunctionLibrary_GetBuildDate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectDataFunctionLibrary_GetBuildDate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectDataFunctionLibrary_GetBuildDate_Statics::ProjectDataFunctionLibrary_eventGetBuildDate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectDataFunctionLibrary_GetBuildDate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectDataFunctionLibrary_GetBuildDate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProjectDataFunctionLibrary_GetBuildDate_Statics::ProjectDataFunctionLibrary_eventGetBuildDate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectDataFunctionLibrary_GetBuildDate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectDataFunctionLibrary_GetBuildDate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectDataFunctionLibrary::execGetBuildDate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UProjectDataFunctionLibrary::GetBuildDate();
	P_NATIVE_END;
}
// End Class UProjectDataFunctionLibrary Function GetBuildDate

// Begin Class UProjectDataFunctionLibrary Function GetBuildType
struct Z_Construct_UFunction_UProjectDataFunctionLibrary_GetBuildType_Statics
{
	struct ProjectDataFunctionLibrary_eventGetBuildType_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Config" },
		{ "DisplayName", "GetBuildType" },
		{ "ModuleRelativePath", "Headers/Core/ProjectDataFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectDataFunctionLibrary_GetBuildType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDataFunctionLibrary_eventGetBuildType_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectDataFunctionLibrary_GetBuildType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectDataFunctionLibrary_GetBuildType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectDataFunctionLibrary_GetBuildType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectDataFunctionLibrary_GetBuildType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectDataFunctionLibrary, nullptr, "GetBuildType", nullptr, nullptr, Z_Construct_UFunction_UProjectDataFunctionLibrary_GetBuildType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectDataFunctionLibrary_GetBuildType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectDataFunctionLibrary_GetBuildType_Statics::ProjectDataFunctionLibrary_eventGetBuildType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectDataFunctionLibrary_GetBuildType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectDataFunctionLibrary_GetBuildType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProjectDataFunctionLibrary_GetBuildType_Statics::ProjectDataFunctionLibrary_eventGetBuildType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectDataFunctionLibrary_GetBuildType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectDataFunctionLibrary_GetBuildType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectDataFunctionLibrary::execGetBuildType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UProjectDataFunctionLibrary::GetBuildType();
	P_NATIVE_END;
}
// End Class UProjectDataFunctionLibrary Function GetBuildType

// Begin Class UProjectDataFunctionLibrary Function GetCurrentPlatform
struct Z_Construct_UFunction_UProjectDataFunctionLibrary_GetCurrentPlatform_Statics
{
	struct ProjectDataFunctionLibrary_eventGetCurrentPlatform_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Config" },
		{ "DisplayName", "GetCurrentPlatform" },
		{ "ModuleRelativePath", "Headers/Core/ProjectDataFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectDataFunctionLibrary_GetCurrentPlatform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDataFunctionLibrary_eventGetCurrentPlatform_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectDataFunctionLibrary_GetCurrentPlatform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectDataFunctionLibrary_GetCurrentPlatform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectDataFunctionLibrary_GetCurrentPlatform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectDataFunctionLibrary_GetCurrentPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectDataFunctionLibrary, nullptr, "GetCurrentPlatform", nullptr, nullptr, Z_Construct_UFunction_UProjectDataFunctionLibrary_GetCurrentPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectDataFunctionLibrary_GetCurrentPlatform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectDataFunctionLibrary_GetCurrentPlatform_Statics::ProjectDataFunctionLibrary_eventGetCurrentPlatform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectDataFunctionLibrary_GetCurrentPlatform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectDataFunctionLibrary_GetCurrentPlatform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProjectDataFunctionLibrary_GetCurrentPlatform_Statics::ProjectDataFunctionLibrary_eventGetCurrentPlatform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectDataFunctionLibrary_GetCurrentPlatform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectDataFunctionLibrary_GetCurrentPlatform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectDataFunctionLibrary::execGetCurrentPlatform)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UProjectDataFunctionLibrary::GetCurrentPlatform();
	P_NATIVE_END;
}
// End Class UProjectDataFunctionLibrary Function GetCurrentPlatform

// Begin Class UProjectDataFunctionLibrary Function GetProjectName
struct Z_Construct_UFunction_UProjectDataFunctionLibrary_GetProjectName_Statics
{
	struct ProjectDataFunctionLibrary_eventGetProjectName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Config" },
		{ "DisplayName", "GetProjectName" },
		{ "ModuleRelativePath", "Headers/Core/ProjectDataFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectDataFunctionLibrary_GetProjectName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDataFunctionLibrary_eventGetProjectName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectDataFunctionLibrary_GetProjectName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectDataFunctionLibrary_GetProjectName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectDataFunctionLibrary_GetProjectName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectDataFunctionLibrary_GetProjectName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectDataFunctionLibrary, nullptr, "GetProjectName", nullptr, nullptr, Z_Construct_UFunction_UProjectDataFunctionLibrary_GetProjectName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectDataFunctionLibrary_GetProjectName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectDataFunctionLibrary_GetProjectName_Statics::ProjectDataFunctionLibrary_eventGetProjectName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectDataFunctionLibrary_GetProjectName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectDataFunctionLibrary_GetProjectName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProjectDataFunctionLibrary_GetProjectName_Statics::ProjectDataFunctionLibrary_eventGetProjectName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectDataFunctionLibrary_GetProjectName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectDataFunctionLibrary_GetProjectName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectDataFunctionLibrary::execGetProjectName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UProjectDataFunctionLibrary::GetProjectName();
	P_NATIVE_END;
}
// End Class UProjectDataFunctionLibrary Function GetProjectName

// Begin Class UProjectDataFunctionLibrary Function GetProjectVersion
struct Z_Construct_UFunction_UProjectDataFunctionLibrary_GetProjectVersion_Statics
{
	struct ProjectDataFunctionLibrary_eventGetProjectVersion_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Config" },
		{ "DisplayName", "GetProjectVersion" },
		{ "ModuleRelativePath", "Headers/Core/ProjectDataFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectDataFunctionLibrary_GetProjectVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDataFunctionLibrary_eventGetProjectVersion_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectDataFunctionLibrary_GetProjectVersion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectDataFunctionLibrary_GetProjectVersion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectDataFunctionLibrary_GetProjectVersion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectDataFunctionLibrary_GetProjectVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectDataFunctionLibrary, nullptr, "GetProjectVersion", nullptr, nullptr, Z_Construct_UFunction_UProjectDataFunctionLibrary_GetProjectVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectDataFunctionLibrary_GetProjectVersion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectDataFunctionLibrary_GetProjectVersion_Statics::ProjectDataFunctionLibrary_eventGetProjectVersion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectDataFunctionLibrary_GetProjectVersion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectDataFunctionLibrary_GetProjectVersion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProjectDataFunctionLibrary_GetProjectVersion_Statics::ProjectDataFunctionLibrary_eventGetProjectVersion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectDataFunctionLibrary_GetProjectVersion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectDataFunctionLibrary_GetProjectVersion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectDataFunctionLibrary::execGetProjectVersion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UProjectDataFunctionLibrary::GetProjectVersion();
	P_NATIVE_END;
}
// End Class UProjectDataFunctionLibrary Function GetProjectVersion

// Begin Class UProjectDataFunctionLibrary
void UProjectDataFunctionLibrary::StaticRegisterNativesUProjectDataFunctionLibrary()
{
	UClass* Class = UProjectDataFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAppVersion", &UProjectDataFunctionLibrary::execGetAppVersion },
		{ "GetBuildDate", &UProjectDataFunctionLibrary::execGetBuildDate },
		{ "GetBuildType", &UProjectDataFunctionLibrary::execGetBuildType },
		{ "GetCurrentPlatform", &UProjectDataFunctionLibrary::execGetCurrentPlatform },
		{ "GetProjectName", &UProjectDataFunctionLibrary::execGetProjectName },
		{ "GetProjectVersion", &UProjectDataFunctionLibrary::execGetProjectVersion },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProjectDataFunctionLibrary);
UClass* Z_Construct_UClass_UProjectDataFunctionLibrary_NoRegister()
{
	return UProjectDataFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UProjectDataFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Headers/Core/ProjectDataFunctionLibrary.h" },
		{ "ModuleRelativePath", "Headers/Core/ProjectDataFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UProjectDataFunctionLibrary_GetAppVersion, "GetAppVersion" }, // 3403325128
		{ &Z_Construct_UFunction_UProjectDataFunctionLibrary_GetBuildDate, "GetBuildDate" }, // 99891827
		{ &Z_Construct_UFunction_UProjectDataFunctionLibrary_GetBuildType, "GetBuildType" }, // 1353944824
		{ &Z_Construct_UFunction_UProjectDataFunctionLibrary_GetCurrentPlatform, "GetCurrentPlatform" }, // 2823843723
		{ &Z_Construct_UFunction_UProjectDataFunctionLibrary_GetProjectName, "GetProjectName" }, // 3207837166
		{ &Z_Construct_UFunction_UProjectDataFunctionLibrary_GetProjectVersion, "GetProjectVersion" }, // 4131412969
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProjectDataFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UProjectDataFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_BCR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectDataFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UProjectDataFunctionLibrary_Statics::ClassParams = {
	&UProjectDataFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectDataFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UProjectDataFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UProjectDataFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UProjectDataFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProjectDataFunctionLibrary.OuterSingleton, Z_Construct_UClass_UProjectDataFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UProjectDataFunctionLibrary.OuterSingleton;
}
template<> BCR_API UClass* StaticClass<UProjectDataFunctionLibrary>()
{
	return UProjectDataFunctionLibrary::StaticClass();
}
UProjectDataFunctionLibrary::UProjectDataFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UProjectDataFunctionLibrary);
UProjectDataFunctionLibrary::~UProjectDataFunctionLibrary() {}
// End Class UProjectDataFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_mathi_Documents_GitHub_M2_Project_Source_BCR_Headers_Core_ProjectDataFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UProjectDataFunctionLibrary, UProjectDataFunctionLibrary::StaticClass, TEXT("UProjectDataFunctionLibrary"), &Z_Registration_Info_UClass_UProjectDataFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProjectDataFunctionLibrary), 4177686343U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mathi_Documents_GitHub_M2_Project_Source_BCR_Headers_Core_ProjectDataFunctionLibrary_h_2259159251(TEXT("/Script/BCR"),
	Z_CompiledInDeferFile_FID_Users_mathi_Documents_GitHub_M2_Project_Source_BCR_Headers_Core_ProjectDataFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mathi_Documents_GitHub_M2_Project_Source_BCR_Headers_Core_ProjectDataFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
