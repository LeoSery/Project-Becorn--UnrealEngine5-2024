// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCR/Headers/System/Event/TriggerZone.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerZone() {}

// Begin Cross Module References
BCR_API UClass* Z_Construct_UClass_UTriggerZone();
BCR_API UClass* Z_Construct_UClass_UTriggerZone_NoRegister();
BCR_API UFunction* Z_Construct_UDelegateFunction_BCR_OnOnePlayerEnterZoneSignature__DelegateSignature();
BCR_API UFunction* Z_Construct_UDelegateFunction_BCR_OnPlayersExitZoneSignature__DelegateSignature();
BCR_API UFunction* Z_Construct_UDelegateFunction_BCR_OnTwoPlayersZoneSignature__DelegateSignature();
BCR_API UScriptStruct* Z_Construct_UScriptStruct_FTriggerData();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BCR();
// End Cross Module References

// Begin ScriptStruct FTriggerData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TriggerData;
class UScriptStruct* FTriggerData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TriggerData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TriggerData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTriggerData, (UObject*)Z_Construct_UPackage__Script_BCR(), TEXT("TriggerData"));
	}
	return Z_Registration_Info_UScriptStruct_TriggerData.OuterSingleton;
}
template<> BCR_API UScriptStruct* StaticStruct<FTriggerData>()
{
	return FTriggerData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTriggerData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Headers/System/Event/TriggerZone.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTriggerData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTriggerData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BCR,
	nullptr,
	&NewStructOps,
	"TriggerData",
	nullptr,
	0,
	sizeof(FTriggerData),
	alignof(FTriggerData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriggerData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTriggerData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTriggerData()
{
	if (!Z_Registration_Info_UScriptStruct_TriggerData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TriggerData.InnerSingleton, Z_Construct_UScriptStruct_FTriggerData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TriggerData.InnerSingleton;
}
// End ScriptStruct FTriggerData

// Begin Delegate FOnOnePlayerEnterZoneSignature
struct Z_Construct_UDelegateFunction_BCR_OnOnePlayerEnterZoneSignature__DelegateSignature_Statics
{
	struct _Script_BCR_eventOnOnePlayerEnterZoneSignature_Parms
	{
		FTriggerData EventTriggerData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Headers/System/Event/TriggerZone.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTriggerData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_BCR_OnOnePlayerEnterZoneSignature__DelegateSignature_Statics::NewProp_EventTriggerData = { "EventTriggerData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BCR_eventOnOnePlayerEnterZoneSignature_Parms, EventTriggerData), Z_Construct_UScriptStruct_FTriggerData, METADATA_PARAMS(0, nullptr) }; // 880075000
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BCR_OnOnePlayerEnterZoneSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BCR_OnOnePlayerEnterZoneSignature__DelegateSignature_Statics::NewProp_EventTriggerData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCR_OnOnePlayerEnterZoneSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BCR_OnOnePlayerEnterZoneSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BCR, nullptr, "OnOnePlayerEnterZoneSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BCR_OnOnePlayerEnterZoneSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCR_OnOnePlayerEnterZoneSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BCR_OnOnePlayerEnterZoneSignature__DelegateSignature_Statics::_Script_BCR_eventOnOnePlayerEnterZoneSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCR_OnOnePlayerEnterZoneSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BCR_OnOnePlayerEnterZoneSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_BCR_OnOnePlayerEnterZoneSignature__DelegateSignature_Statics::_Script_BCR_eventOnOnePlayerEnterZoneSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BCR_OnOnePlayerEnterZoneSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BCR_OnOnePlayerEnterZoneSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnOnePlayerEnterZoneSignature_DelegateWrapper(const FScriptDelegate& OnOnePlayerEnterZoneSignature, FTriggerData EventTriggerData)
{
	struct _Script_BCR_eventOnOnePlayerEnterZoneSignature_Parms
	{
		FTriggerData EventTriggerData;
	};
	_Script_BCR_eventOnOnePlayerEnterZoneSignature_Parms Parms;
	Parms.EventTriggerData=EventTriggerData;
	OnOnePlayerEnterZoneSignature.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnOnePlayerEnterZoneSignature

// Begin Delegate FOnTwoPlayersZoneSignature
struct Z_Construct_UDelegateFunction_BCR_OnTwoPlayersZoneSignature__DelegateSignature_Statics
{
	struct _Script_BCR_eventOnTwoPlayersZoneSignature_Parms
	{
		FTriggerData EventTriggerData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Headers/System/Event/TriggerZone.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTriggerData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_BCR_OnTwoPlayersZoneSignature__DelegateSignature_Statics::NewProp_EventTriggerData = { "EventTriggerData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BCR_eventOnTwoPlayersZoneSignature_Parms, EventTriggerData), Z_Construct_UScriptStruct_FTriggerData, METADATA_PARAMS(0, nullptr) }; // 880075000
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BCR_OnTwoPlayersZoneSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BCR_OnTwoPlayersZoneSignature__DelegateSignature_Statics::NewProp_EventTriggerData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCR_OnTwoPlayersZoneSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BCR_OnTwoPlayersZoneSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BCR, nullptr, "OnTwoPlayersZoneSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BCR_OnTwoPlayersZoneSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCR_OnTwoPlayersZoneSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BCR_OnTwoPlayersZoneSignature__DelegateSignature_Statics::_Script_BCR_eventOnTwoPlayersZoneSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCR_OnTwoPlayersZoneSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BCR_OnTwoPlayersZoneSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_BCR_OnTwoPlayersZoneSignature__DelegateSignature_Statics::_Script_BCR_eventOnTwoPlayersZoneSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BCR_OnTwoPlayersZoneSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BCR_OnTwoPlayersZoneSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTwoPlayersZoneSignature_DelegateWrapper(const FScriptDelegate& OnTwoPlayersZoneSignature, FTriggerData EventTriggerData)
{
	struct _Script_BCR_eventOnTwoPlayersZoneSignature_Parms
	{
		FTriggerData EventTriggerData;
	};
	_Script_BCR_eventOnTwoPlayersZoneSignature_Parms Parms;
	Parms.EventTriggerData=EventTriggerData;
	OnTwoPlayersZoneSignature.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnTwoPlayersZoneSignature

// Begin Delegate FOnPlayersExitZoneSignature
struct Z_Construct_UDelegateFunction_BCR_OnPlayersExitZoneSignature__DelegateSignature_Statics
{
	struct _Script_BCR_eventOnPlayersExitZoneSignature_Parms
	{
		FTriggerData EventTriggerData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Headers/System/Event/TriggerZone.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTriggerData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_BCR_OnPlayersExitZoneSignature__DelegateSignature_Statics::NewProp_EventTriggerData = { "EventTriggerData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BCR_eventOnPlayersExitZoneSignature_Parms, EventTriggerData), Z_Construct_UScriptStruct_FTriggerData, METADATA_PARAMS(0, nullptr) }; // 880075000
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BCR_OnPlayersExitZoneSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BCR_OnPlayersExitZoneSignature__DelegateSignature_Statics::NewProp_EventTriggerData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCR_OnPlayersExitZoneSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BCR_OnPlayersExitZoneSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BCR, nullptr, "OnPlayersExitZoneSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BCR_OnPlayersExitZoneSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCR_OnPlayersExitZoneSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BCR_OnPlayersExitZoneSignature__DelegateSignature_Statics::_Script_BCR_eventOnPlayersExitZoneSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCR_OnPlayersExitZoneSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BCR_OnPlayersExitZoneSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_BCR_OnPlayersExitZoneSignature__DelegateSignature_Statics::_Script_BCR_eventOnPlayersExitZoneSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BCR_OnPlayersExitZoneSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BCR_OnPlayersExitZoneSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPlayersExitZoneSignature_DelegateWrapper(const FScriptDelegate& OnPlayersExitZoneSignature, FTriggerData EventTriggerData)
{
	struct _Script_BCR_eventOnPlayersExitZoneSignature_Parms
	{
		FTriggerData EventTriggerData;
	};
	_Script_BCR_eventOnPlayersExitZoneSignature_Parms Parms;
	Parms.EventTriggerData=EventTriggerData;
	OnPlayersExitZoneSignature.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnPlayersExitZoneSignature

// Begin Class UTriggerZone
void UTriggerZone::StaticRegisterNativesUTriggerZone()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTriggerZone);
UClass* Z_Construct_UClass_UTriggerZone_NoRegister()
{
	return UTriggerZone::StaticClass();
}
struct Z_Construct_UClass_UTriggerZone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Headers/System/Event/TriggerZone.h" },
		{ "ModuleRelativePath", "Headers/System/Event/TriggerZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VFXZoneComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Headers/System/Event/TriggerZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VFXZoneSize_MetaData[] = {
		{ "Category", "Zone Settings" },
		{ "ModuleRelativePath", "Headers/System/Event/TriggerZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayersInVFXZone_MetaData[] = {
		{ "ModuleRelativePath", "Headers/System/Event/TriggerZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIZoneComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Headers/System/Event/TriggerZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIZoneSize_MetaData[] = {
		{ "Category", "Zone Settings" },
		{ "ModuleRelativePath", "Headers/System/Event/TriggerZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayersInUIZone_MetaData[] = {
		{ "ModuleRelativePath", "Headers/System/Event/TriggerZone.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VFXZoneComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VFXZoneSize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayersInVFXZone_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayersInVFXZone;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UIZoneComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UIZoneSize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayersInUIZone_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayersInUIZone;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerZone>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerZone_Statics::NewProp_VFXZoneComponent = { "VFXZoneComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTriggerZone, VFXZoneComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VFXZoneComponent_MetaData), NewProp_VFXZoneComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTriggerZone_Statics::NewProp_VFXZoneSize = { "VFXZoneSize", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTriggerZone, VFXZoneSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VFXZoneSize_MetaData), NewProp_VFXZoneSize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerZone_Statics::NewProp_PlayersInVFXZone_Inner = { "PlayersInVFXZone", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTriggerZone_Statics::NewProp_PlayersInVFXZone = { "PlayersInVFXZone", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTriggerZone, PlayersInVFXZone), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayersInVFXZone_MetaData), NewProp_PlayersInVFXZone_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerZone_Statics::NewProp_UIZoneComponent = { "UIZoneComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTriggerZone, UIZoneComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIZoneComponent_MetaData), NewProp_UIZoneComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTriggerZone_Statics::NewProp_UIZoneSize = { "UIZoneSize", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTriggerZone, UIZoneSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIZoneSize_MetaData), NewProp_UIZoneSize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerZone_Statics::NewProp_PlayersInUIZone_Inner = { "PlayersInUIZone", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTriggerZone_Statics::NewProp_PlayersInUIZone = { "PlayersInUIZone", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTriggerZone, PlayersInUIZone), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayersInUIZone_MetaData), NewProp_PlayersInUIZone_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriggerZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerZone_Statics::NewProp_VFXZoneComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerZone_Statics::NewProp_VFXZoneSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerZone_Statics::NewProp_PlayersInVFXZone_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerZone_Statics::NewProp_PlayersInVFXZone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerZone_Statics::NewProp_UIZoneComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerZone_Statics::NewProp_UIZoneSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerZone_Statics::NewProp_PlayersInUIZone_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerZone_Statics::NewProp_PlayersInUIZone,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerZone_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTriggerZone_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_BCR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerZone_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTriggerZone_Statics::ClassParams = {
	&UTriggerZone::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTriggerZone_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerZone_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerZone_Statics::Class_MetaDataParams), Z_Construct_UClass_UTriggerZone_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTriggerZone()
{
	if (!Z_Registration_Info_UClass_UTriggerZone.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTriggerZone.OuterSingleton, Z_Construct_UClass_UTriggerZone_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTriggerZone.OuterSingleton;
}
template<> BCR_API UClass* StaticClass<UTriggerZone>()
{
	return UTriggerZone::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerZone);
UTriggerZone::~UTriggerZone() {}
// End Class UTriggerZone

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_Event_TriggerZone_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTriggerData::StaticStruct, Z_Construct_UScriptStruct_FTriggerData_Statics::NewStructOps, TEXT("TriggerData"), &Z_Registration_Info_UScriptStruct_TriggerData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTriggerData), 880075000U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTriggerZone, UTriggerZone::StaticClass, TEXT("UTriggerZone"), &Z_Registration_Info_UClass_UTriggerZone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTriggerZone), 1360931638U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_Event_TriggerZone_h_2077394871(TEXT("/Script/BCR"),
	Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_Event_TriggerZone_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_Event_TriggerZone_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_Event_TriggerZone_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_Event_TriggerZone_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
