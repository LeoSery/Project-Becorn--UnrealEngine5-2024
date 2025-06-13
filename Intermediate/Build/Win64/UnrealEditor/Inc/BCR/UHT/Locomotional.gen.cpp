// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCR/Headers/Interfaces/Locomotional.h"
#include "BCR/Headers/System/MiniGame/LocomotionConfigurationTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocomotional() {}

// Begin Cross Module References
BCR_API UClass* Z_Construct_UClass_ULocomotional();
BCR_API UClass* Z_Construct_UClass_ULocomotional_NoRegister();
BCR_API UClass* Z_Construct_UClass_ULocomotionConfigurationAsset_NoRegister();
BCR_API UScriptStruct* Z_Construct_UScriptStruct_FLocomotionConfiguration();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_BCR();
// End Cross Module References

// Begin Interface ULocomotional Function ResetLocomotionConfig
struct Locomotional_eventResetLocomotionConfig_Parms
{
	FLocomotionConfiguration ReturnValue;
};
FLocomotionConfiguration ILocomotional::ResetLocomotionConfig()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ResetLocomotionConfig instead.");
	Locomotional_eventResetLocomotionConfig_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_ULocomotional_ResetLocomotionConfig = FName(TEXT("ResetLocomotionConfig"));
FLocomotionConfiguration ILocomotional::Execute_ResetLocomotionConfig(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(ULocomotional::StaticClass()));
	Locomotional_eventResetLocomotionConfig_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_ULocomotional_ResetLocomotionConfig);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ILocomotional*)(O->GetNativeInterfaceAddress(ULocomotional::StaticClass())))
	{
		Parms.ReturnValue = I->ResetLocomotionConfig_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_ULocomotional_ResetLocomotionConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Configuration reset\n" },
#endif
		{ "ModuleRelativePath", "Headers/Interfaces/Locomotional.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configuration reset" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULocomotional_ResetLocomotionConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Locomotional_eventResetLocomotionConfig_Parms, ReturnValue), Z_Construct_UScriptStruct_FLocomotionConfiguration, METADATA_PARAMS(0, nullptr) }; // 404476540
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocomotional_ResetLocomotionConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocomotional_ResetLocomotionConfig_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocomotional_ResetLocomotionConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocomotional_ResetLocomotionConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocomotional, nullptr, "ResetLocomotionConfig", nullptr, nullptr, Z_Construct_UFunction_ULocomotional_ResetLocomotionConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocomotional_ResetLocomotionConfig_Statics::PropPointers), sizeof(Locomotional_eventResetLocomotionConfig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocomotional_ResetLocomotionConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULocomotional_ResetLocomotionConfig_Statics::Function_MetaDataParams) };
static_assert(sizeof(Locomotional_eventResetLocomotionConfig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocomotional_ResetLocomotionConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULocomotional_ResetLocomotionConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ILocomotional::execResetLocomotionConfig)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLocomotionConfiguration*)Z_Param__Result=P_THIS->ResetLocomotionConfig_Implementation();
	P_NATIVE_END;
}
// End Interface ULocomotional Function ResetLocomotionConfig

// Begin Interface ULocomotional Function SetLocomotionConfig
struct Locomotional_eventSetLocomotionConfig_Parms
{
	ULocomotionConfigurationAsset* NewConfig;
	FLocomotionConfiguration ReturnValue;
};
FLocomotionConfiguration ILocomotional::SetLocomotionConfig(ULocomotionConfigurationAsset* NewConfig)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetLocomotionConfig instead.");
	Locomotional_eventSetLocomotionConfig_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_ULocomotional_SetLocomotionConfig = FName(TEXT("SetLocomotionConfig"));
FLocomotionConfiguration ILocomotional::Execute_SetLocomotionConfig(UObject* O, ULocomotionConfigurationAsset* NewConfig)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(ULocomotional::StaticClass()));
	Locomotional_eventSetLocomotionConfig_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_ULocomotional_SetLocomotionConfig);
	if (Func)
	{
		Parms.NewConfig=NewConfig;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ILocomotional*)(O->GetNativeInterfaceAddress(ULocomotional::StaticClass())))
	{
		Parms.ReturnValue = I->SetLocomotionConfig_Implementation(NewConfig);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_ULocomotional_SetLocomotionConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////// LOCOMOTION MANAGEMENT ////////\n/// Configuration setup\n" },
#endif
		{ "ModuleRelativePath", "Headers/Interfaces/Locomotional.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "LOCOMOTION MANAGEMENT\nConfiguration setup" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewConfig;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocomotional_SetLocomotionConfig_Statics::NewProp_NewConfig = { "NewConfig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Locomotional_eventSetLocomotionConfig_Parms, NewConfig), Z_Construct_UClass_ULocomotionConfigurationAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULocomotional_SetLocomotionConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Locomotional_eventSetLocomotionConfig_Parms, ReturnValue), Z_Construct_UScriptStruct_FLocomotionConfiguration, METADATA_PARAMS(0, nullptr) }; // 404476540
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocomotional_SetLocomotionConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocomotional_SetLocomotionConfig_Statics::NewProp_NewConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocomotional_SetLocomotionConfig_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocomotional_SetLocomotionConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocomotional_SetLocomotionConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocomotional, nullptr, "SetLocomotionConfig", nullptr, nullptr, Z_Construct_UFunction_ULocomotional_SetLocomotionConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocomotional_SetLocomotionConfig_Statics::PropPointers), sizeof(Locomotional_eventSetLocomotionConfig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocomotional_SetLocomotionConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULocomotional_SetLocomotionConfig_Statics::Function_MetaDataParams) };
static_assert(sizeof(Locomotional_eventSetLocomotionConfig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocomotional_SetLocomotionConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULocomotional_SetLocomotionConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ILocomotional::execSetLocomotionConfig)
{
	P_GET_OBJECT(ULocomotionConfigurationAsset,Z_Param_NewConfig);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLocomotionConfiguration*)Z_Param__Result=P_THIS->SetLocomotionConfig_Implementation(Z_Param_NewConfig);
	P_NATIVE_END;
}
// End Interface ULocomotional Function SetLocomotionConfig

// Begin Interface ULocomotional
void ULocomotional::StaticRegisterNativesULocomotional()
{
	UClass* Class = ULocomotional::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ResetLocomotionConfig", &ILocomotional::execResetLocomotionConfig },
		{ "SetLocomotionConfig", &ILocomotional::execSetLocomotionConfig },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULocomotional);
UClass* Z_Construct_UClass_ULocomotional_NoRegister()
{
	return ULocomotional::StaticClass();
}
struct Z_Construct_UClass_ULocomotional_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Headers/Interfaces/Locomotional.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULocomotional_ResetLocomotionConfig, "ResetLocomotionConfig" }, // 413343940
		{ &Z_Construct_UFunction_ULocomotional_SetLocomotionConfig, "SetLocomotionConfig" }, // 471757486
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILocomotional>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULocomotional_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BCR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotional_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULocomotional_Statics::ClassParams = {
	&ULocomotional::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotional_Statics::Class_MetaDataParams), Z_Construct_UClass_ULocomotional_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULocomotional()
{
	if (!Z_Registration_Info_UClass_ULocomotional.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULocomotional.OuterSingleton, Z_Construct_UClass_ULocomotional_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULocomotional.OuterSingleton;
}
template<> BCR_API UClass* StaticClass<ULocomotional>()
{
	return ULocomotional::StaticClass();
}
ULocomotional::ULocomotional(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULocomotional);
ULocomotional::~ULocomotional() {}
// End Interface ULocomotional

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_Interfaces_Locomotional_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULocomotional, ULocomotional::StaticClass, TEXT("ULocomotional"), &Z_Registration_Info_UClass_ULocomotional, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULocomotional), 4026962811U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_Interfaces_Locomotional_h_3861701353(TEXT("/Script/BCR"),
	Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_Interfaces_Locomotional_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_Interfaces_Locomotional_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
