// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCR/Headers/System/MiniGame/MiniGameSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMiniGameSystem() {}

// Begin Cross Module References
BCR_API UClass* Z_Construct_UClass_AMiniGameSystem();
BCR_API UClass* Z_Construct_UClass_AMiniGameSystem_NoRegister();
BCR_API UFunction* Z_Construct_UDelegateFunction_BCR_OnEndQTESignature__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BCR();
// End Cross Module References

// Begin Delegate FOnEndQTESignature
struct Z_Construct_UDelegateFunction_BCR_OnEndQTESignature__DelegateSignature_Statics
{
	struct _Script_BCR_eventOnEndQTESignature_Parms
	{
		bool _resultStatus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Headers/System/MiniGame/MiniGameSystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp__resultStatus_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__resultStatus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_BCR_OnEndQTESignature__DelegateSignature_Statics::NewProp__resultStatus_SetBit(void* Obj)
{
	((_Script_BCR_eventOnEndQTESignature_Parms*)Obj)->_resultStatus = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_BCR_OnEndQTESignature__DelegateSignature_Statics::NewProp__resultStatus = { "_resultStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_BCR_eventOnEndQTESignature_Parms), &Z_Construct_UDelegateFunction_BCR_OnEndQTESignature__DelegateSignature_Statics::NewProp__resultStatus_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BCR_OnEndQTESignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BCR_OnEndQTESignature__DelegateSignature_Statics::NewProp__resultStatus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCR_OnEndQTESignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BCR_OnEndQTESignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BCR, nullptr, "OnEndQTESignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BCR_OnEndQTESignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCR_OnEndQTESignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BCR_OnEndQTESignature__DelegateSignature_Statics::_Script_BCR_eventOnEndQTESignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCR_OnEndQTESignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BCR_OnEndQTESignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_BCR_OnEndQTESignature__DelegateSignature_Statics::_Script_BCR_eventOnEndQTESignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BCR_OnEndQTESignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BCR_OnEndQTESignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnEndQTESignature_DelegateWrapper(const FMulticastScriptDelegate& OnEndQTESignature, bool _resultStatus)
{
	struct _Script_BCR_eventOnEndQTESignature_Parms
	{
		bool _resultStatus;
	};
	_Script_BCR_eventOnEndQTESignature_Parms Parms;
	Parms._resultStatus=_resultStatus ? true : false;
	OnEndQTESignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnEndQTESignature

// Begin Class AMiniGameSystem
void AMiniGameSystem::StaticRegisterNativesAMiniGameSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMiniGameSystem);
UClass* Z_Construct_UClass_AMiniGameSystem_NoRegister()
{
	return AMiniGameSystem::StaticClass();
}
struct Z_Construct_UClass_AMiniGameSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Headers/System/MiniGame/MiniGameSystem.h" },
		{ "ModuleRelativePath", "Headers/System/MiniGame/MiniGameSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEndQTEDelegate_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegates\n" },
#endif
		{ "ModuleRelativePath", "Headers/System/MiniGame/MiniGameSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegates" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndQTEDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMiniGameSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMiniGameSystem_Statics::NewProp_OnEndQTEDelegate = { "OnEndQTEDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMiniGameSystem, OnEndQTEDelegate), Z_Construct_UDelegateFunction_BCR_OnEndQTESignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEndQTEDelegate_MetaData), NewProp_OnEndQTEDelegate_MetaData) }; // 3358609060
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMiniGameSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMiniGameSystem_Statics::NewProp_OnEndQTEDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMiniGameSystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMiniGameSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BCR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMiniGameSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMiniGameSystem_Statics::ClassParams = {
	&AMiniGameSystem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMiniGameSystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMiniGameSystem_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMiniGameSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_AMiniGameSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMiniGameSystem()
{
	if (!Z_Registration_Info_UClass_AMiniGameSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMiniGameSystem.OuterSingleton, Z_Construct_UClass_AMiniGameSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMiniGameSystem.OuterSingleton;
}
template<> BCR_API UClass* StaticClass<AMiniGameSystem>()
{
	return AMiniGameSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMiniGameSystem);
AMiniGameSystem::~AMiniGameSystem() {}
// End Class AMiniGameSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_MiniGame_MiniGameSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMiniGameSystem, AMiniGameSystem::StaticClass, TEXT("AMiniGameSystem"), &Z_Registration_Info_UClass_AMiniGameSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMiniGameSystem), 1212263545U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_MiniGame_MiniGameSystem_h_2688982652(TEXT("/Script/BCR"),
	Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_MiniGame_MiniGameSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_MiniGame_MiniGameSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
