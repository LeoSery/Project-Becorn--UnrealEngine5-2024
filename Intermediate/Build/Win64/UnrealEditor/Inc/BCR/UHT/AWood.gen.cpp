// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCR/Headers/System/AWood.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAWood() {}

// Begin Cross Module References
BCR_API UClass* Z_Construct_UClass_AAWood();
BCR_API UClass* Z_Construct_UClass_AAWood_NoRegister();
BCR_API UClass* Z_Construct_UClass_UIPickable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BCR();
// End Cross Module References

// Begin Class AAWood
void AAWood::StaticRegisterNativesAAWood()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAWood);
UClass* Z_Construct_UClass_AAWood_NoRegister()
{
	return AAWood::StaticClass();
}
struct Z_Construct_UClass_AAWood_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief Wood resource object that can be picked up by players\n * @details Basic pickable wood item implementing the IPickable interface\n */" },
#endif
		{ "IncludePath", "Headers/System/AWood.h" },
		{ "ModuleRelativePath", "Headers/System/AWood.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Wood resource object that can be picked up by players\n@details Basic pickable wood item implementing the IPickable interface" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAWood>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAWood_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BCR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAWood_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AAWood_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIPickable_NoRegister, (int32)VTABLE_OFFSET(AAWood, IIPickable), false },  // 23792606
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAWood_Statics::ClassParams = {
	&AAWood::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAWood_Statics::Class_MetaDataParams), Z_Construct_UClass_AAWood_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAWood()
{
	if (!Z_Registration_Info_UClass_AAWood.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAWood.OuterSingleton, Z_Construct_UClass_AAWood_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAWood.OuterSingleton;
}
template<> BCR_API UClass* StaticClass<AAWood>()
{
	return AAWood::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAWood);
AAWood::~AAWood() {}
// End Class AAWood

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_AWood_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAWood, AAWood::StaticClass, TEXT("AAWood"), &Z_Registration_Info_UClass_AAWood, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAWood), 767261759U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_AWood_h_440791641(TEXT("/Script/BCR"),
	Z_CompiledInDeferFile_FID_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_AWood_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_AWood_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
