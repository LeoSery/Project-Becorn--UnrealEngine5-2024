// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCR/Headers/Interfaces/BCR_Helper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCR_Helper() {}

// Begin Cross Module References
BCR_API UClass* Z_Construct_UClass_UBCR_Helper();
BCR_API UClass* Z_Construct_UClass_UBCR_Helper_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_BCR();
// End Cross Module References

// Begin Interface UBCR_Helper
void UBCR_Helper::StaticRegisterNativesUBCR_Helper()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBCR_Helper);
UClass* Z_Construct_UClass_UBCR_Helper_NoRegister()
{
	return UBCR_Helper::StaticClass();
}
struct Z_Construct_UClass_UBCR_Helper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Headers/Interfaces/BCR_Helper.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBCR_Helper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBCR_Helper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BCR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBCR_Helper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBCR_Helper_Statics::ClassParams = {
	&UBCR_Helper::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBCR_Helper_Statics::Class_MetaDataParams), Z_Construct_UClass_UBCR_Helper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBCR_Helper()
{
	if (!Z_Registration_Info_UClass_UBCR_Helper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBCR_Helper.OuterSingleton, Z_Construct_UClass_UBCR_Helper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBCR_Helper.OuterSingleton;
}
template<> BCR_API UClass* StaticClass<UBCR_Helper>()
{
	return UBCR_Helper::StaticClass();
}
UBCR_Helper::UBCR_Helper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBCR_Helper);
UBCR_Helper::~UBCR_Helper() {}
// End Interface UBCR_Helper

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_mathi_Documents_GitHub_M2_Project_Source_BCR_Headers_Interfaces_BCR_Helper_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBCR_Helper, UBCR_Helper::StaticClass, TEXT("UBCR_Helper"), &Z_Registration_Info_UClass_UBCR_Helper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBCR_Helper), 311689699U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mathi_Documents_GitHub_M2_Project_Source_BCR_Headers_Interfaces_BCR_Helper_h_926216296(TEXT("/Script/BCR"),
	Z_CompiledInDeferFile_FID_Users_mathi_Documents_GitHub_M2_Project_Source_BCR_Headers_Interfaces_BCR_Helper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mathi_Documents_GitHub_M2_Project_Source_BCR_Headers_Interfaces_BCR_Helper_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
