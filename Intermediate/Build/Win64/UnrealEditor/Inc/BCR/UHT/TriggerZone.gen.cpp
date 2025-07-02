// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCR/Headers/System/Event/TriggerZone.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerZone() {}

// Begin Cross Module References
BCR_API UClass* Z_Construct_UClass_UTriggerZone();
BCR_API UClass* Z_Construct_UClass_UTriggerZone_NoRegister();
BCR_API UScriptStruct* Z_Construct_UScriptStruct_FTriggerData();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
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
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief Event data for trigger zone interactions\n * @details Contains overlap information passed to trigger zone listeners\n */" },
#endif
		{ "ModuleRelativePath", "Headers/System/Event/TriggerZone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Event data for trigger zone interactions\n@details Contains overlap information passed to trigger zone listeners" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "Category", "TriggerData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Headers/System/Event/TriggerZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherActor_MetaData[] = {
		{ "Category", "TriggerData" },
		{ "ModuleRelativePath", "Headers/System/Event/TriggerZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "Category", "TriggerData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Headers/System/Event/TriggerZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherBodyIndex_MetaData[] = {
		{ "Category", "TriggerData" },
		{ "ModuleRelativePath", "Headers/System/Event/TriggerZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFromSweep_MetaData[] = {
		{ "Category", "TriggerData" },
		{ "ModuleRelativePath", "Headers/System/Event/TriggerZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "Category", "TriggerData" },
		{ "ModuleRelativePath", "Headers/System/Event/TriggerZone.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTriggerData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTriggerData_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTriggerData, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTriggerData_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTriggerData, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherActor_MetaData), NewProp_OtherActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTriggerData_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTriggerData, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTriggerData_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTriggerData, OtherBodyIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherBodyIndex_MetaData), NewProp_OtherBodyIndex_MetaData) };
void Z_Construct_UScriptStruct_FTriggerData_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((FTriggerData*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTriggerData_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTriggerData), &Z_Construct_UScriptStruct_FTriggerData_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFromSweep_MetaData), NewProp_bFromSweep_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTriggerData_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTriggerData, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTriggerData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTriggerData_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTriggerData_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTriggerData_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTriggerData_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTriggerData_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTriggerData_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriggerData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTriggerData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BCR,
	nullptr,
	&NewStructOps,
	"TriggerData",
	Z_Construct_UScriptStruct_FTriggerData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriggerData_Statics::PropPointers),
	sizeof(FTriggerData),
	alignof(FTriggerData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
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

// Begin Class UTriggerZone Function GetInnerZoneComponent
struct Z_Construct_UFunction_UTriggerZone_GetInnerZoneComponent_Statics
{
	struct TriggerZone_eventGetInnerZoneComponent_Parms
	{
		USphereComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Headers/System/Event/TriggerZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerZone_GetInnerZoneComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerZone_eventGetInnerZoneComponent_Parms, ReturnValue), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerZone_GetInnerZoneComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerZone_GetInnerZoneComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerZone_GetInnerZoneComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerZone_GetInnerZoneComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerZone, nullptr, "GetInnerZoneComponent", nullptr, nullptr, Z_Construct_UFunction_UTriggerZone_GetInnerZoneComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerZone_GetInnerZoneComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTriggerZone_GetInnerZoneComponent_Statics::TriggerZone_eventGetInnerZoneComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerZone_GetInnerZoneComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTriggerZone_GetInnerZoneComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTriggerZone_GetInnerZoneComponent_Statics::TriggerZone_eventGetInnerZoneComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTriggerZone_GetInnerZoneComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTriggerZone_GetInnerZoneComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTriggerZone::execGetInnerZoneComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USphereComponent**)Z_Param__Result=P_THIS->GetInnerZoneComponent();
	P_NATIVE_END;
}
// End Class UTriggerZone Function GetInnerZoneComponent

// Begin Class UTriggerZone Function GetOuterZoneComponent
struct Z_Construct_UFunction_UTriggerZone_GetOuterZoneComponent_Statics
{
	struct TriggerZone_eventGetOuterZoneComponent_Parms
	{
		USphereComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Headers/System/Event/TriggerZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerZone_GetOuterZoneComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerZone_eventGetOuterZoneComponent_Parms, ReturnValue), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerZone_GetOuterZoneComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerZone_GetOuterZoneComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerZone_GetOuterZoneComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerZone_GetOuterZoneComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerZone, nullptr, "GetOuterZoneComponent", nullptr, nullptr, Z_Construct_UFunction_UTriggerZone_GetOuterZoneComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerZone_GetOuterZoneComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTriggerZone_GetOuterZoneComponent_Statics::TriggerZone_eventGetOuterZoneComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerZone_GetOuterZoneComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTriggerZone_GetOuterZoneComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTriggerZone_GetOuterZoneComponent_Statics::TriggerZone_eventGetOuterZoneComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTriggerZone_GetOuterZoneComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTriggerZone_GetOuterZoneComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTriggerZone::execGetOuterZoneComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USphereComponent**)Z_Param__Result=P_THIS->GetOuterZoneComponent();
	P_NATIVE_END;
}
// End Class UTriggerZone Function GetOuterZoneComponent

// Begin Class UTriggerZone Function OnActorEnterInnerZone
struct Z_Construct_UFunction_UTriggerZone_OnActorEnterInnerZone_Statics
{
	struct TriggerZone_eventOnActorEnterInnerZone_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////// EVENT CALLBACKS ////////\n/// Inner zone\n" },
#endif
		{ "ModuleRelativePath", "Headers/System/Event/TriggerZone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EVENT CALLBACKS\nInner zone" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerZone_OnActorEnterInnerZone_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerZone_eventOnActorEnterInnerZone_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerZone_OnActorEnterInnerZone_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerZone_eventOnActorEnterInnerZone_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerZone_OnActorEnterInnerZone_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerZone_eventOnActorEnterInnerZone_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTriggerZone_OnActorEnterInnerZone_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerZone_eventOnActorEnterInnerZone_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTriggerZone_OnActorEnterInnerZone_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((TriggerZone_eventOnActorEnterInnerZone_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerZone_OnActorEnterInnerZone_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TriggerZone_eventOnActorEnterInnerZone_Parms), &Z_Construct_UFunction_UTriggerZone_OnActorEnterInnerZone_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerZone_OnActorEnterInnerZone_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerZone_eventOnActorEnterInnerZone_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerZone_OnActorEnterInnerZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerZone_OnActorEnterInnerZone_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerZone_OnActorEnterInnerZone_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerZone_OnActorEnterInnerZone_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerZone_OnActorEnterInnerZone_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerZone_OnActorEnterInnerZone_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerZone_OnActorEnterInnerZone_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerZone_OnActorEnterInnerZone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerZone_OnActorEnterInnerZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerZone, nullptr, "OnActorEnterInnerZone", nullptr, nullptr, Z_Construct_UFunction_UTriggerZone_OnActorEnterInnerZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerZone_OnActorEnterInnerZone_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTriggerZone_OnActorEnterInnerZone_Statics::TriggerZone_eventOnActorEnterInnerZone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerZone_OnActorEnterInnerZone_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTriggerZone_OnActorEnterInnerZone_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTriggerZone_OnActorEnterInnerZone_Statics::TriggerZone_eventOnActorEnterInnerZone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTriggerZone_OnActorEnterInnerZone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTriggerZone_OnActorEnterInnerZone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTriggerZone::execOnActorEnterInnerZone)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnActorEnterInnerZone(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class UTriggerZone Function OnActorEnterInnerZone

// Begin Class UTriggerZone Function OnActorEnterOuterZone
struct Z_Construct_UFunction_UTriggerZone_OnActorEnterOuterZone_Statics
{
	struct TriggerZone_eventOnActorEnterOuterZone_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Outer zone\n" },
#endif
		{ "ModuleRelativePath", "Headers/System/Event/TriggerZone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Outer zone" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerZone_OnActorEnterOuterZone_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerZone_eventOnActorEnterOuterZone_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerZone_OnActorEnterOuterZone_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerZone_eventOnActorEnterOuterZone_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerZone_OnActorEnterOuterZone_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerZone_eventOnActorEnterOuterZone_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTriggerZone_OnActorEnterOuterZone_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerZone_eventOnActorEnterOuterZone_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTriggerZone_OnActorEnterOuterZone_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((TriggerZone_eventOnActorEnterOuterZone_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerZone_OnActorEnterOuterZone_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TriggerZone_eventOnActorEnterOuterZone_Parms), &Z_Construct_UFunction_UTriggerZone_OnActorEnterOuterZone_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerZone_OnActorEnterOuterZone_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerZone_eventOnActorEnterOuterZone_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerZone_OnActorEnterOuterZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerZone_OnActorEnterOuterZone_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerZone_OnActorEnterOuterZone_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerZone_OnActorEnterOuterZone_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerZone_OnActorEnterOuterZone_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerZone_OnActorEnterOuterZone_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerZone_OnActorEnterOuterZone_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerZone_OnActorEnterOuterZone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerZone_OnActorEnterOuterZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerZone, nullptr, "OnActorEnterOuterZone", nullptr, nullptr, Z_Construct_UFunction_UTriggerZone_OnActorEnterOuterZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerZone_OnActorEnterOuterZone_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTriggerZone_OnActorEnterOuterZone_Statics::TriggerZone_eventOnActorEnterOuterZone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerZone_OnActorEnterOuterZone_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTriggerZone_OnActorEnterOuterZone_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTriggerZone_OnActorEnterOuterZone_Statics::TriggerZone_eventOnActorEnterOuterZone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTriggerZone_OnActorEnterOuterZone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTriggerZone_OnActorEnterOuterZone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTriggerZone::execOnActorEnterOuterZone)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnActorEnterOuterZone(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class UTriggerZone Function OnActorEnterOuterZone

// Begin Class UTriggerZone Function OnActorExitInnerZone
struct Z_Construct_UFunction_UTriggerZone_OnActorExitInnerZone_Statics
{
	struct TriggerZone_eventOnActorExitInnerZone_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Headers/System/Event/TriggerZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerZone_OnActorExitInnerZone_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerZone_eventOnActorExitInnerZone_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerZone_OnActorExitInnerZone_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerZone_eventOnActorExitInnerZone_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerZone_OnActorExitInnerZone_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerZone_eventOnActorExitInnerZone_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTriggerZone_OnActorExitInnerZone_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerZone_eventOnActorExitInnerZone_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerZone_OnActorExitInnerZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerZone_OnActorExitInnerZone_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerZone_OnActorExitInnerZone_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerZone_OnActorExitInnerZone_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerZone_OnActorExitInnerZone_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerZone_OnActorExitInnerZone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerZone_OnActorExitInnerZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerZone, nullptr, "OnActorExitInnerZone", nullptr, nullptr, Z_Construct_UFunction_UTriggerZone_OnActorExitInnerZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerZone_OnActorExitInnerZone_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTriggerZone_OnActorExitInnerZone_Statics::TriggerZone_eventOnActorExitInnerZone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerZone_OnActorExitInnerZone_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTriggerZone_OnActorExitInnerZone_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTriggerZone_OnActorExitInnerZone_Statics::TriggerZone_eventOnActorExitInnerZone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTriggerZone_OnActorExitInnerZone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTriggerZone_OnActorExitInnerZone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTriggerZone::execOnActorExitInnerZone)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnActorExitInnerZone(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Class UTriggerZone Function OnActorExitInnerZone

// Begin Class UTriggerZone Function OnActorExitOuterZone
struct Z_Construct_UFunction_UTriggerZone_OnActorExitOuterZone_Statics
{
	struct TriggerZone_eventOnActorExitOuterZone_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Headers/System/Event/TriggerZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerZone_OnActorExitOuterZone_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerZone_eventOnActorExitOuterZone_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerZone_OnActorExitOuterZone_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerZone_eventOnActorExitOuterZone_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerZone_OnActorExitOuterZone_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerZone_eventOnActorExitOuterZone_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTriggerZone_OnActorExitOuterZone_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerZone_eventOnActorExitOuterZone_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerZone_OnActorExitOuterZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerZone_OnActorExitOuterZone_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerZone_OnActorExitOuterZone_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerZone_OnActorExitOuterZone_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerZone_OnActorExitOuterZone_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerZone_OnActorExitOuterZone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerZone_OnActorExitOuterZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerZone, nullptr, "OnActorExitOuterZone", nullptr, nullptr, Z_Construct_UFunction_UTriggerZone_OnActorExitOuterZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerZone_OnActorExitOuterZone_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTriggerZone_OnActorExitOuterZone_Statics::TriggerZone_eventOnActorExitOuterZone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerZone_OnActorExitOuterZone_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTriggerZone_OnActorExitOuterZone_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTriggerZone_OnActorExitOuterZone_Statics::TriggerZone_eventOnActorExitOuterZone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTriggerZone_OnActorExitOuterZone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTriggerZone_OnActorExitOuterZone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTriggerZone::execOnActorExitOuterZone)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnActorExitOuterZone(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Class UTriggerZone Function OnActorExitOuterZone

// Begin Class UTriggerZone
void UTriggerZone::StaticRegisterNativesUTriggerZone()
{
	UClass* Class = UTriggerZone::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetInnerZoneComponent", &UTriggerZone::execGetInnerZoneComponent },
		{ "GetOuterZoneComponent", &UTriggerZone::execGetOuterZoneComponent },
		{ "OnActorEnterInnerZone", &UTriggerZone::execOnActorEnterInnerZone },
		{ "OnActorEnterOuterZone", &UTriggerZone::execOnActorEnterOuterZone },
		{ "OnActorExitInnerZone", &UTriggerZone::execOnActorExitInnerZone },
		{ "OnActorExitOuterZone", &UTriggerZone::execOnActorExitOuterZone },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief Dual-zone trigger component for player detection\n * @details Manages inner and outer spherical trigger zones with player tracking and event broadcasting\n */" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Headers/System/Event/TriggerZone.h" },
		{ "ModuleRelativePath", "Headers/System/Event/TriggerZone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Dual-zone trigger component for player detection\n@details Manages inner and outer spherical trigger zones with player tracking and event broadcasting" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InnerZoneComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////// COMPONENTS ////////\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Headers/System/Event/TriggerZone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "COMPONENTS" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OuterZoneComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Headers/System/Event/TriggerZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InnerZoneSize_MetaData[] = {
		{ "Category", "Zone Settings" },
		{ "ClampMin", "0.1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////// PROPERTIES ////////\n/// Configuration\n" },
#endif
		{ "ModuleRelativePath", "Headers/System/Event/TriggerZone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PROPERTIES\nConfiguration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OuterZoneSize_MetaData[] = {
		{ "Category", "Zone Settings" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Headers/System/Event/TriggerZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayersInInnerZone_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Player tracking\n" },
#endif
		{ "ModuleRelativePath", "Headers/System/Event/TriggerZone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Player tracking" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayersInOuterZone_MetaData[] = {
		{ "ModuleRelativePath", "Headers/System/Event/TriggerZone.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InnerZoneComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OuterZoneComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InnerZoneSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OuterZoneSize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayersInInnerZone_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayersInInnerZone;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayersInOuterZone_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayersInOuterZone;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerZone_GetInnerZoneComponent, "GetInnerZoneComponent" }, // 2970482870
		{ &Z_Construct_UFunction_UTriggerZone_GetOuterZoneComponent, "GetOuterZoneComponent" }, // 3607939616
		{ &Z_Construct_UFunction_UTriggerZone_OnActorEnterInnerZone, "OnActorEnterInnerZone" }, // 878777935
		{ &Z_Construct_UFunction_UTriggerZone_OnActorEnterOuterZone, "OnActorEnterOuterZone" }, // 142420971
		{ &Z_Construct_UFunction_UTriggerZone_OnActorExitInnerZone, "OnActorExitInnerZone" }, // 613708655
		{ &Z_Construct_UFunction_UTriggerZone_OnActorExitOuterZone, "OnActorExitOuterZone" }, // 569901885
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerZone>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerZone_Statics::NewProp_InnerZoneComponent = { "InnerZoneComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTriggerZone, InnerZoneComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InnerZoneComponent_MetaData), NewProp_InnerZoneComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerZone_Statics::NewProp_OuterZoneComponent = { "OuterZoneComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTriggerZone, OuterZoneComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OuterZoneComponent_MetaData), NewProp_OuterZoneComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTriggerZone_Statics::NewProp_InnerZoneSize = { "InnerZoneSize", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTriggerZone, InnerZoneSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InnerZoneSize_MetaData), NewProp_InnerZoneSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTriggerZone_Statics::NewProp_OuterZoneSize = { "OuterZoneSize", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTriggerZone, OuterZoneSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OuterZoneSize_MetaData), NewProp_OuterZoneSize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerZone_Statics::NewProp_PlayersInInnerZone_Inner = { "PlayersInInnerZone", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTriggerZone_Statics::NewProp_PlayersInInnerZone = { "PlayersInInnerZone", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTriggerZone, PlayersInInnerZone), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayersInInnerZone_MetaData), NewProp_PlayersInInnerZone_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerZone_Statics::NewProp_PlayersInOuterZone_Inner = { "PlayersInOuterZone", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTriggerZone_Statics::NewProp_PlayersInOuterZone = { "PlayersInOuterZone", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTriggerZone, PlayersInOuterZone), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayersInOuterZone_MetaData), NewProp_PlayersInOuterZone_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriggerZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerZone_Statics::NewProp_InnerZoneComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerZone_Statics::NewProp_OuterZoneComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerZone_Statics::NewProp_InnerZoneSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerZone_Statics::NewProp_OuterZoneSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerZone_Statics::NewProp_PlayersInInnerZone_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerZone_Statics::NewProp_PlayersInInnerZone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerZone_Statics::NewProp_PlayersInOuterZone_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerZone_Statics::NewProp_PlayersInOuterZone,
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
	FuncInfo,
	Z_Construct_UClass_UTriggerZone_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
		{ FTriggerData::StaticStruct, Z_Construct_UScriptStruct_FTriggerData_Statics::NewStructOps, TEXT("TriggerData"), &Z_Registration_Info_UScriptStruct_TriggerData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTriggerData), 1974293367U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTriggerZone, UTriggerZone::StaticClass, TEXT("UTriggerZone"), &Z_Registration_Info_UClass_UTriggerZone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTriggerZone), 3866576778U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_Event_TriggerZone_h_1926305827(TEXT("/Script/BCR"),
	Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_Event_TriggerZone_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_Event_TriggerZone_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_Event_TriggerZone_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_Event_TriggerZone_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
