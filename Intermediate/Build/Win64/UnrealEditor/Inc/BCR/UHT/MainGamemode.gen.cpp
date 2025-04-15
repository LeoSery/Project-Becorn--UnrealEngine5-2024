// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCR/Headers/Core/MainGamemode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainGamemode() {}

// Begin Cross Module References
BCR_API UClass* Z_Construct_UClass_AMainGamemode();
BCR_API UClass* Z_Construct_UClass_AMainGamemode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BCR();
// End Cross Module References

// Begin Class AMainGamemode Function CreateLocalPlayer
struct Z_Construct_UFunction_AMainGamemode_CreateLocalPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Create second player and add a mapping context\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Headers/Core/MainGamemode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create second player and add a mapping context" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainGamemode_CreateLocalPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainGamemode, nullptr, "CreateLocalPlayer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGamemode_CreateLocalPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainGamemode_CreateLocalPlayer_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMainGamemode_CreateLocalPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainGamemode_CreateLocalPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainGamemode::execCreateLocalPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateLocalPlayer();
	P_NATIVE_END;
}
// End Class AMainGamemode Function CreateLocalPlayer

// Begin Class AMainGamemode
void AMainGamemode::StaticRegisterNativesAMainGamemode()
{
	UClass* Class = AMainGamemode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateLocalPlayer", &AMainGamemode::execCreateLocalPlayer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainGamemode);
UClass* Z_Construct_UClass_AMainGamemode_NoRegister()
{
	return AMainGamemode::StaticClass();
}
struct Z_Construct_UClass_AMainGamemode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Headers/Core/MainGamemode.h" },
		{ "ModuleRelativePath", "Headers/Core/MainGamemode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMainGamemode_CreateLocalPlayer, "CreateLocalPlayer" }, // 1404511720
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainGamemode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMainGamemode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BCR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainGamemode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainGamemode_Statics::ClassParams = {
	&AMainGamemode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainGamemode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainGamemode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMainGamemode()
{
	if (!Z_Registration_Info_UClass_AMainGamemode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainGamemode.OuterSingleton, Z_Construct_UClass_AMainGamemode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMainGamemode.OuterSingleton;
}
template<> BCR_API UClass* StaticClass<AMainGamemode>()
{
	return AMainGamemode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMainGamemode);
AMainGamemode::~AMainGamemode() {}
// End Class AMainGamemode

// Begin Registration
struct Z_CompiledInDeferFile_FID_M2_Project_Source_BCR_Headers_Core_MainGamemode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMainGamemode, AMainGamemode::StaticClass, TEXT("AMainGamemode"), &Z_Registration_Info_UClass_AMainGamemode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainGamemode), 3861842392U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_M2_Project_Source_BCR_Headers_Core_MainGamemode_h_326226366(TEXT("/Script/BCR"),
	Z_CompiledInDeferFile_FID_M2_Project_Source_BCR_Headers_Core_MainGamemode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_M2_Project_Source_BCR_Headers_Core_MainGamemode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
