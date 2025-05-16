// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCR/Headers/System/UniqueRope.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUniqueRope() {}

// Begin Cross Module References
BCR_API UClass* Z_Construct_UClass_AUniqueRope();
BCR_API UClass* Z_Construct_UClass_AUniqueRope_NoRegister();
BCR_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BCR();
// End Cross Module References

// Begin Class AUniqueRope
void AUniqueRope::StaticRegisterNativesAUniqueRope()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUniqueRope);
UClass* Z_Construct_UClass_AUniqueRope_NoRegister()
{
	return AUniqueRope::StaticClass();
}
struct Z_Construct_UClass_AUniqueRope_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Headers/System/UniqueRope.h" },
		{ "ModuleRelativePath", "Headers/System/UniqueRope.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUniqueRope>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AUniqueRope_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BCR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUniqueRope_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AUniqueRope_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractable_NoRegister, (int32)VTABLE_OFFSET(AUniqueRope, IInteractable), false },  // 188668673
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUniqueRope_Statics::ClassParams = {
	&AUniqueRope::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUniqueRope_Statics::Class_MetaDataParams), Z_Construct_UClass_AUniqueRope_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUniqueRope()
{
	if (!Z_Registration_Info_UClass_AUniqueRope.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUniqueRope.OuterSingleton, Z_Construct_UClass_AUniqueRope_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUniqueRope.OuterSingleton;
}
template<> BCR_API UClass* StaticClass<AUniqueRope>()
{
	return AUniqueRope::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUniqueRope);
AUniqueRope::~AUniqueRope() {}
// End Class AUniqueRope

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_CAJOUX_Desktop_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_UniqueRope_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUniqueRope, AUniqueRope::StaticClass, TEXT("AUniqueRope"), &Z_Registration_Info_UClass_AUniqueRope, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUniqueRope), 2728782241U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_CAJOUX_Desktop_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_UniqueRope_h_2900044483(TEXT("/Script/BCR"),
	Z_CompiledInDeferFile_FID_Users_CAJOUX_Desktop_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_UniqueRope_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_CAJOUX_Desktop_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_UniqueRope_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
