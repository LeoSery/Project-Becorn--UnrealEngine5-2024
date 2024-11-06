// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCR/Headers/System/QTE/QTE_Data.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQTE_Data() {}

// Begin Cross Module References
BCR_API UClass* Z_Construct_UClass_UQTE_Data();
BCR_API UClass* Z_Construct_UClass_UQTE_Data_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_BCR();
// End Cross Module References

// Begin Class UQTE_Data
void UQTE_Data::StaticRegisterNativesUQTE_Data()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQTE_Data);
UClass* Z_Construct_UClass_UQTE_Data_NoRegister()
{
	return UQTE_Data::StaticClass();
}
struct Z_Construct_UClass_UQTE_Data_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Headers/System/QTE/QTE_Data.h" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTE_Data.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQTE_Data>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UQTE_Data_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BCR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQTE_Data_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQTE_Data_Statics::ClassParams = {
	&UQTE_Data::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQTE_Data_Statics::Class_MetaDataParams), Z_Construct_UClass_UQTE_Data_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQTE_Data()
{
	if (!Z_Registration_Info_UClass_UQTE_Data.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQTE_Data.OuterSingleton, Z_Construct_UClass_UQTE_Data_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQTE_Data.OuterSingleton;
}
template<> BCR_API UClass* StaticClass<UQTE_Data>()
{
	return UQTE_Data::StaticClass();
}
UQTE_Data::UQTE_Data(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQTE_Data);
UQTE_Data::~UQTE_Data() {}
// End Class UQTE_Data

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_mathi_Documents_GitHub_M2_Project_Source_BCR_Headers_System_QTE_QTE_Data_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQTE_Data, UQTE_Data::StaticClass, TEXT("UQTE_Data"), &Z_Registration_Info_UClass_UQTE_Data, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQTE_Data), 2470520102U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mathi_Documents_GitHub_M2_Project_Source_BCR_Headers_System_QTE_QTE_Data_h_735510622(TEXT("/Script/BCR"),
	Z_CompiledInDeferFile_FID_Users_mathi_Documents_GitHub_M2_Project_Source_BCR_Headers_System_QTE_QTE_Data_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mathi_Documents_GitHub_M2_Project_Source_BCR_Headers_System_QTE_QTE_Data_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
