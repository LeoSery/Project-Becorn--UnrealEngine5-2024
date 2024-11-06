// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCR/BCRGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCRGameMode() {}

// Begin Cross Module References
BCR_API UClass* Z_Construct_UClass_ABCRGameMode();
BCR_API UClass* Z_Construct_UClass_ABCRGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BCR();
// End Cross Module References

// Begin Class ABCRGameMode
void ABCRGameMode::StaticRegisterNativesABCRGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABCRGameMode);
UClass* Z_Construct_UClass_ABCRGameMode_NoRegister()
{
	return ABCRGameMode::StaticClass();
}
struct Z_Construct_UClass_ABCRGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BCRGameMode.h" },
		{ "ModuleRelativePath", "BCRGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABCRGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABCRGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BCR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABCRGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABCRGameMode_Statics::ClassParams = {
	&ABCRGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABCRGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABCRGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABCRGameMode()
{
	if (!Z_Registration_Info_UClass_ABCRGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABCRGameMode.OuterSingleton, Z_Construct_UClass_ABCRGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABCRGameMode.OuterSingleton;
}
template<> BCR_API UClass* StaticClass<ABCRGameMode>()
{
	return ABCRGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABCRGameMode);
ABCRGameMode::~ABCRGameMode() {}
// End Class ABCRGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_M2_Project_Source_BCR_BCRGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABCRGameMode, ABCRGameMode::StaticClass, TEXT("ABCRGameMode"), &Z_Registration_Info_UClass_ABCRGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABCRGameMode), 1043499460U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_M2_Project_Source_BCR_BCRGameMode_h_3367261783(TEXT("/Script/BCR"),
	Z_CompiledInDeferFile_FID_M2_Project_Source_BCR_BCRGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_M2_Project_Source_BCR_BCRGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
