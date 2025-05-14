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

// Begin Class UProjectDataFunctionLibrary
void UProjectDataFunctionLibrary::StaticRegisterNativesUProjectDataFunctionLibrary()
{
	UClass* Class = UProjectDataFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAppVersion", &UProjectDataFunctionLibrary::execGetAppVersion },
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
struct Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_Core_ProjectDataFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UProjectDataFunctionLibrary, UProjectDataFunctionLibrary::StaticClass, TEXT("UProjectDataFunctionLibrary"), &Z_Registration_Info_UClass_UProjectDataFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProjectDataFunctionLibrary), 3135023436U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_Core_ProjectDataFunctionLibrary_h_535056657(TEXT("/Script/BCR"),
	Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_Core_ProjectDataFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_Core_ProjectDataFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
