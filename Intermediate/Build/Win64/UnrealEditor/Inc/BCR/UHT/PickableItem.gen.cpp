// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCR/Headers/System/Pickable/PickableItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickableItem() {}

// Begin Cross Module References
BCR_API UClass* Z_Construct_UClass_APickableItem();
BCR_API UClass* Z_Construct_UClass_APickableItem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BCR();
// End Cross Module References

// Begin Class APickableItem
void APickableItem::StaticRegisterNativesAPickableItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APickableItem);
UClass* Z_Construct_UClass_APickableItem_NoRegister()
{
	return APickableItem::StaticClass();
}
struct Z_Construct_UClass_APickableItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Headers/System/Pickable/PickableItem.h" },
		{ "ModuleRelativePath", "Headers/System/Pickable/PickableItem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickableItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APickableItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BCR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickableItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APickableItem_Statics::ClassParams = {
	&APickableItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickableItem_Statics::Class_MetaDataParams), Z_Construct_UClass_APickableItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APickableItem()
{
	if (!Z_Registration_Info_UClass_APickableItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APickableItem.OuterSingleton, Z_Construct_UClass_APickableItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APickableItem.OuterSingleton;
}
template<> BCR_API UClass* StaticClass<APickableItem>()
{
	return APickableItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APickableItem);
APickableItem::~APickableItem() {}
// End Class APickableItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_M2_Project_Source_BCR_Headers_System_Pickable_PickableItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APickableItem, APickableItem::StaticClass, TEXT("APickableItem"), &Z_Registration_Info_UClass_APickableItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APickableItem), 1973463253U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_M2_Project_Source_BCR_Headers_System_Pickable_PickableItem_h_1857843013(TEXT("/Script/BCR"),
	Z_CompiledInDeferFile_FID_M2_Project_Source_BCR_Headers_System_Pickable_PickableItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_M2_Project_Source_BCR_Headers_System_Pickable_PickableItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
