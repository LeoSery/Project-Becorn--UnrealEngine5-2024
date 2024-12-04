// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCR/Headers/System/MiniGame/MiniGameSystem.h"
#include "BCR/Headers/System/QTE/QTETypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMiniGameSystem() {}

// Begin Cross Module References
BCR_API UClass* Z_Construct_UClass_AMiniGameSystem();
BCR_API UClass* Z_Construct_UClass_AMiniGameSystem_NoRegister();
BCR_API UClass* Z_Construct_UClass_APickableItem_NoRegister();
BCR_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
BCR_API UFunction* Z_Construct_UDelegateFunction_BCR_OnEndQTESignature__DelegateSignature();
BCR_API UScriptStruct* Z_Construct_UScriptStruct_FQTEConfiguration();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_inputItems_MetaData[] = {
		{ "Category", "MiniGameSystem" },
		{ "ModuleRelativePath", "Headers/System/MiniGame/MiniGameSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_outputItems_MetaData[] = {
		{ "Category", "MiniGameSystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Copy of inputItems*/" },
#endif
		{ "ModuleRelativePath", "Headers/System/MiniGame/MiniGameSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Copy of inputItems" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_qteList_MetaData[] = {
		{ "Category", "MiniGameSystem" },
		{ "ModuleRelativePath", "Headers/System/MiniGame/MiniGameSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultRootComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Headers/System/MiniGame/MiniGameSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_snapPlayerPoint1_MetaData[] = {
		{ "Category", "MiniGameSystem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Headers/System/MiniGame/MiniGameSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_snapPlayerPoint2_MetaData[] = {
		{ "Category", "MiniGameSystem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Headers/System/MiniGame/MiniGameSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_outputSpawnPoint_MetaData[] = {
		{ "Category", "MiniGameSystem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Headers/System/MiniGame/MiniGameSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_inputBox_MetaData[] = {
		{ "Category", "MiniGameSystem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Headers/System/MiniGame/MiniGameSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndQTEDelegate;
	static const UECodeGen_Private::FClassPropertyParams NewProp_inputItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_inputItems;
	static const UECodeGen_Private::FClassPropertyParams NewProp_outputItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_outputItems;
	static const UECodeGen_Private::FStructPropertyParams NewProp_qteList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_qteList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultRootComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_snapPlayerPoint1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_snapPlayerPoint2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_outputSpawnPoint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_inputBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMiniGameSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMiniGameSystem_Statics::NewProp_OnEndQTEDelegate = { "OnEndQTEDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMiniGameSystem, OnEndQTEDelegate), Z_Construct_UDelegateFunction_BCR_OnEndQTESignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEndQTEDelegate_MetaData), NewProp_OnEndQTEDelegate_MetaData) }; // 3358609060
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMiniGameSystem_Statics::NewProp_inputItems_Inner = { "inputItems", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_APickableItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMiniGameSystem_Statics::NewProp_inputItems = { "inputItems", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMiniGameSystem, inputItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_inputItems_MetaData), NewProp_inputItems_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMiniGameSystem_Statics::NewProp_outputItems_Inner = { "outputItems", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_APickableItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMiniGameSystem_Statics::NewProp_outputItems = { "outputItems", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMiniGameSystem, outputItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_outputItems_MetaData), NewProp_outputItems_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMiniGameSystem_Statics::NewProp_qteList_Inner = { "qteList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FQTEConfiguration, METADATA_PARAMS(0, nullptr) }; // 3649445843
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMiniGameSystem_Statics::NewProp_qteList = { "qteList", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMiniGameSystem, qteList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_qteList_MetaData), NewProp_qteList_MetaData) }; // 3649445843
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMiniGameSystem_Statics::NewProp_DefaultRootComponent = { "DefaultRootComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMiniGameSystem, DefaultRootComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultRootComponent_MetaData), NewProp_DefaultRootComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMiniGameSystem_Statics::NewProp_snapPlayerPoint1 = { "snapPlayerPoint1", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMiniGameSystem, snapPlayerPoint1), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_snapPlayerPoint1_MetaData), NewProp_snapPlayerPoint1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMiniGameSystem_Statics::NewProp_snapPlayerPoint2 = { "snapPlayerPoint2", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMiniGameSystem, snapPlayerPoint2), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_snapPlayerPoint2_MetaData), NewProp_snapPlayerPoint2_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMiniGameSystem_Statics::NewProp_outputSpawnPoint = { "outputSpawnPoint", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMiniGameSystem, outputSpawnPoint), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_outputSpawnPoint_MetaData), NewProp_outputSpawnPoint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMiniGameSystem_Statics::NewProp_inputBox = { "inputBox", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMiniGameSystem, inputBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_inputBox_MetaData), NewProp_inputBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMiniGameSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMiniGameSystem_Statics::NewProp_OnEndQTEDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMiniGameSystem_Statics::NewProp_inputItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMiniGameSystem_Statics::NewProp_inputItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMiniGameSystem_Statics::NewProp_outputItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMiniGameSystem_Statics::NewProp_outputItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMiniGameSystem_Statics::NewProp_qteList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMiniGameSystem_Statics::NewProp_qteList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMiniGameSystem_Statics::NewProp_DefaultRootComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMiniGameSystem_Statics::NewProp_snapPlayerPoint1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMiniGameSystem_Statics::NewProp_snapPlayerPoint2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMiniGameSystem_Statics::NewProp_outputSpawnPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMiniGameSystem_Statics::NewProp_inputBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMiniGameSystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMiniGameSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BCR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMiniGameSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMiniGameSystem_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractable_NoRegister, (int32)VTABLE_OFFSET(AMiniGameSystem, IInteractable), false },  // 188668673
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMiniGameSystem_Statics::ClassParams = {
	&AMiniGameSystem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMiniGameSystem_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMiniGameSystem_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
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
struct Z_CompiledInDeferFile_FID_Users_fieng_OneDrive_Documents_GitHub_M2_Project_Source_BCR_Headers_System_MiniGame_MiniGameSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMiniGameSystem, AMiniGameSystem::StaticClass, TEXT("AMiniGameSystem"), &Z_Registration_Info_UClass_AMiniGameSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMiniGameSystem), 3782652576U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fieng_OneDrive_Documents_GitHub_M2_Project_Source_BCR_Headers_System_MiniGame_MiniGameSystem_h_4250338100(TEXT("/Script/BCR"),
	Z_CompiledInDeferFile_FID_Users_fieng_OneDrive_Documents_GitHub_M2_Project_Source_BCR_Headers_System_MiniGame_MiniGameSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fieng_OneDrive_Documents_GitHub_M2_Project_Source_BCR_Headers_System_MiniGame_MiniGameSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
