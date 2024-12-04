// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCR/Headers/System/QTE/QTEConfigurationTypes.h"
#include "BCR/Headers/System/QTE/QTETypes.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQTEConfigurationTypes() {}

// Begin Cross Module References
BCR_API UClass* Z_Construct_UClass_AMainPlayer_NoRegister();
BCR_API UClass* Z_Construct_UClass_UQTEConfigurationAsset();
BCR_API UClass* Z_Construct_UClass_UQTEConfigurationAsset_NoRegister();
BCR_API UEnum* Z_Construct_UEnum_BCR_EQTEInputType();
BCR_API UScriptStruct* Z_Construct_UScriptStruct_FQTEActionData();
BCR_API UScriptStruct* Z_Construct_UScriptStruct_FQTEConfiguration();
BCR_API UScriptStruct* Z_Construct_UScriptStruct_FQTEPlayerSequenceData();
BCR_API UScriptStruct* Z_Construct_UScriptStruct_FQTESequenceData();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_BCR();
// End Cross Module References

// Begin ScriptStruct FQTEActionData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QTEActionData;
class UScriptStruct* FQTEActionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QTEActionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QTEActionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQTEActionData, (UObject*)Z_Construct_UPackage__Script_BCR(), TEXT("QTEActionData"));
	}
	return Z_Registration_Info_UScriptStruct_QTEActionData.OuterSingleton;
}
template<> BCR_API UScriptStruct* StaticStruct<FQTEActionData>()
{
	return FQTEActionData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FQTEActionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* @brief Struct defining a single QTE action like pressing a key or holding a button\n*/" },
#endif
		{ "ModuleRelativePath", "Headers/System/QTE/QTEConfigurationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Struct defining a single QTE action like pressing a key or holding a button" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputType_MetaData[] = {
		{ "Category", "QTE|Action" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTEConfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredKey_MetaData[] = {
		{ "Category", "QTE|Action" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTEConfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeWindow_MetaData[] = {
		{ "Category", "QTE|Action" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTEConfigurationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time in seconds to complete this action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoldDuration_MetaData[] = {
		{ "Category", "QTE|Action" },
		{ "EditCondition", "InputType == EQTEInputType::Hold" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTEConfigurationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For actions that require holding a key" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StickDirection_MetaData[] = {
		{ "Category", "QTE|Action" },
		{ "EditCondition", "InputType == EQTEInputType::StickMove" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTEConfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionTolerance_MetaData[] = {
		{ "Category", "QTE|Action" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "InputType == EQTEInputType::StickMove" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTEConfigurationTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InputType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredKey;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeWindow;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HoldDuration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StickDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DirectionTolerance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQTEActionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FQTEActionData_Statics::NewProp_InputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FQTEActionData_Statics::NewProp_InputType = { "InputType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQTEActionData, InputType), Z_Construct_UEnum_BCR_EQTEInputType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputType_MetaData), NewProp_InputType_MetaData) }; // 3713181205
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQTEActionData_Statics::NewProp_RequiredKey = { "RequiredKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQTEActionData, RequiredKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredKey_MetaData), NewProp_RequiredKey_MetaData) }; // 658672854
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQTEActionData_Statics::NewProp_TimeWindow = { "TimeWindow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQTEActionData, TimeWindow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeWindow_MetaData), NewProp_TimeWindow_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQTEActionData_Statics::NewProp_HoldDuration = { "HoldDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQTEActionData, HoldDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoldDuration_MetaData), NewProp_HoldDuration_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQTEActionData_Statics::NewProp_StickDirection = { "StickDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQTEActionData, StickDirection), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StickDirection_MetaData), NewProp_StickDirection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQTEActionData_Statics::NewProp_DirectionTolerance = { "DirectionTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQTEActionData, DirectionTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionTolerance_MetaData), NewProp_DirectionTolerance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQTEActionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQTEActionData_Statics::NewProp_InputType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQTEActionData_Statics::NewProp_InputType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQTEActionData_Statics::NewProp_RequiredKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQTEActionData_Statics::NewProp_TimeWindow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQTEActionData_Statics::NewProp_HoldDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQTEActionData_Statics::NewProp_StickDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQTEActionData_Statics::NewProp_DirectionTolerance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQTEActionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQTEActionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BCR,
	nullptr,
	&NewStructOps,
	"QTEActionData",
	Z_Construct_UScriptStruct_FQTEActionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQTEActionData_Statics::PropPointers),
	sizeof(FQTEActionData),
	alignof(FQTEActionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQTEActionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQTEActionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FQTEActionData()
{
	if (!Z_Registration_Info_UScriptStruct_QTEActionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QTEActionData.InnerSingleton, Z_Construct_UScriptStruct_FQTEActionData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_QTEActionData.InnerSingleton;
}
// End ScriptStruct FQTEActionData

// Begin ScriptStruct FQTEPlayerSequenceData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QTEPlayerSequenceData;
class UScriptStruct* FQTEPlayerSequenceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QTEPlayerSequenceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QTEPlayerSequenceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQTEPlayerSequenceData, (UObject*)Z_Construct_UPackage__Script_BCR(), TEXT("QTEPlayerSequenceData"));
	}
	return Z_Registration_Info_UScriptStruct_QTEPlayerSequenceData.OuterSingleton;
}
template<> BCR_API UScriptStruct* StaticStruct<FQTEPlayerSequenceData>()
{
	return FQTEPlayerSequenceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FQTEPlayerSequenceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* @brief Sequence of actions for a specific player \n*/" },
#endif
		{ "ModuleRelativePath", "Headers/System/QTE/QTEConfigurationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Sequence of actions for a specific player" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerIndex_MetaData[] = {
		{ "Category", "QTE|Sequence" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTEConfigurationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Index of player (0 = Player 1, 1 = Player 2)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[] = {
		{ "Category", "QTE|Sequence" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTEConfigurationTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Actions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Actions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQTEPlayerSequenceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQTEPlayerSequenceData_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQTEPlayerSequenceData, PlayerIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerIndex_MetaData), NewProp_PlayerIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQTEPlayerSequenceData_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FQTEActionData, METADATA_PARAMS(0, nullptr) }; // 305327723
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQTEPlayerSequenceData_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQTEPlayerSequenceData, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actions_MetaData), NewProp_Actions_MetaData) }; // 305327723
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQTEPlayerSequenceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQTEPlayerSequenceData_Statics::NewProp_PlayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQTEPlayerSequenceData_Statics::NewProp_Actions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQTEPlayerSequenceData_Statics::NewProp_Actions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQTEPlayerSequenceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQTEPlayerSequenceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BCR,
	nullptr,
	&NewStructOps,
	"QTEPlayerSequenceData",
	Z_Construct_UScriptStruct_FQTEPlayerSequenceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQTEPlayerSequenceData_Statics::PropPointers),
	sizeof(FQTEPlayerSequenceData),
	alignof(FQTEPlayerSequenceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQTEPlayerSequenceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQTEPlayerSequenceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FQTEPlayerSequenceData()
{
	if (!Z_Registration_Info_UScriptStruct_QTEPlayerSequenceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QTEPlayerSequenceData.InnerSingleton, Z_Construct_UScriptStruct_FQTEPlayerSequenceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_QTEPlayerSequenceData.InnerSingleton;
}
// End ScriptStruct FQTEPlayerSequenceData

// Begin ScriptStruct FQTESequenceData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QTESequenceData;
class UScriptStruct* FQTESequenceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QTESequenceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QTESequenceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQTESequenceData, (UObject*)Z_Construct_UPackage__Script_BCR(), TEXT("QTESequenceData"));
	}
	return Z_Registration_Info_UScriptStruct_QTESequenceData.OuterSingleton;
}
template<> BCR_API UScriptStruct* StaticStruct<FQTESequenceData>()
{
	return FQTESequenceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FQTESequenceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* @brief Complete sequence requiring multiple players\n*/" },
#endif
		{ "ModuleRelativePath", "Headers/System/QTE/QTEConfigurationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Complete sequence requiring multiple players" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequenceName_MetaData[] = {
		{ "Category", "QTE|Sequence" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTEConfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerSequences_MetaData[] = {
		{ "Category", "QTE|Sequence" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTEConfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomWidget_MetaData[] = {
		{ "Category", "QTE|Sequence" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTEConfigurationTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SequenceName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerSequences_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerSequences;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CustomWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQTESequenceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQTESequenceData_Statics::NewProp_SequenceName = { "SequenceName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQTESequenceData, SequenceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequenceName_MetaData), NewProp_SequenceName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQTESequenceData_Statics::NewProp_PlayerSequences_Inner = { "PlayerSequences", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FQTEPlayerSequenceData, METADATA_PARAMS(0, nullptr) }; // 387951230
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQTESequenceData_Statics::NewProp_PlayerSequences = { "PlayerSequences", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQTESequenceData, PlayerSequences), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerSequences_MetaData), NewProp_PlayerSequences_MetaData) }; // 387951230
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FQTESequenceData_Statics::NewProp_CustomWidget = { "CustomWidget", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQTESequenceData, CustomWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomWidget_MetaData), NewProp_CustomWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQTESequenceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQTESequenceData_Statics::NewProp_SequenceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQTESequenceData_Statics::NewProp_PlayerSequences_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQTESequenceData_Statics::NewProp_PlayerSequences,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQTESequenceData_Statics::NewProp_CustomWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQTESequenceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQTESequenceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BCR,
	nullptr,
	&NewStructOps,
	"QTESequenceData",
	Z_Construct_UScriptStruct_FQTESequenceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQTESequenceData_Statics::PropPointers),
	sizeof(FQTESequenceData),
	alignof(FQTESequenceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQTESequenceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQTESequenceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FQTESequenceData()
{
	if (!Z_Registration_Info_UScriptStruct_QTESequenceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QTESequenceData.InnerSingleton, Z_Construct_UScriptStruct_FQTESequenceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_QTESequenceData.InnerSingleton;
}
// End ScriptStruct FQTESequenceData

// Begin Class UQTEConfigurationAsset Function ToRuntimeConfig
struct Z_Construct_UFunction_UQTEConfigurationAsset_ToRuntimeConfig_Statics
{
	struct QTEConfigurationAsset_eventToRuntimeConfig_Parms
	{
		TArray<AMainPlayer*> Players;
		FQTEConfiguration ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "QTE" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * @brief Converts asset data to runtime configuration\n    * @param Players Array of players in order (Player 1, 2)\n    * @return Runtime configuration ready for QTE system\n    */" },
#endif
		{ "ModuleRelativePath", "Headers/System/QTE/QTEConfigurationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Converts asset data to runtime configuration\n@param Players Array of players in order (Player 1, 2)\n@return Runtime configuration ready for QTE system" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Players_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Players_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Players;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQTEConfigurationAsset_ToRuntimeConfig_Statics::NewProp_Players_Inner = { "Players", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMainPlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQTEConfigurationAsset_ToRuntimeConfig_Statics::NewProp_Players = { "Players", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QTEConfigurationAsset_eventToRuntimeConfig_Parms, Players), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Players_MetaData), NewProp_Players_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQTEConfigurationAsset_ToRuntimeConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QTEConfigurationAsset_eventToRuntimeConfig_Parms, ReturnValue), Z_Construct_UScriptStruct_FQTEConfiguration, METADATA_PARAMS(0, nullptr) }; // 3649445843
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQTEConfigurationAsset_ToRuntimeConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQTEConfigurationAsset_ToRuntimeConfig_Statics::NewProp_Players_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQTEConfigurationAsset_ToRuntimeConfig_Statics::NewProp_Players,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQTEConfigurationAsset_ToRuntimeConfig_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQTEConfigurationAsset_ToRuntimeConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQTEConfigurationAsset_ToRuntimeConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQTEConfigurationAsset, nullptr, "ToRuntimeConfig", nullptr, nullptr, Z_Construct_UFunction_UQTEConfigurationAsset_ToRuntimeConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQTEConfigurationAsset_ToRuntimeConfig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQTEConfigurationAsset_ToRuntimeConfig_Statics::QTEConfigurationAsset_eventToRuntimeConfig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQTEConfigurationAsset_ToRuntimeConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQTEConfigurationAsset_ToRuntimeConfig_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQTEConfigurationAsset_ToRuntimeConfig_Statics::QTEConfigurationAsset_eventToRuntimeConfig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQTEConfigurationAsset_ToRuntimeConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQTEConfigurationAsset_ToRuntimeConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQTEConfigurationAsset::execToRuntimeConfig)
{
	P_GET_TARRAY_REF(AMainPlayer*,Z_Param_Out_Players);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FQTEConfiguration*)Z_Param__Result=P_THIS->ToRuntimeConfig(Z_Param_Out_Players);
	P_NATIVE_END;
}
// End Class UQTEConfigurationAsset Function ToRuntimeConfig

// Begin Class UQTEConfigurationAsset
void UQTEConfigurationAsset::StaticRegisterNativesUQTEConfigurationAsset()
{
	UClass* Class = UQTEConfigurationAsset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ToRuntimeConfig", &UQTEConfigurationAsset::execToRuntimeConfig },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQTEConfigurationAsset);
UClass* Z_Construct_UClass_UQTEConfigurationAsset_NoRegister()
{
	return UQTEConfigurationAsset::StaticClass();
}
struct Z_Construct_UClass_UQTEConfigurationAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* @brief Main asset containing QTE configuration\n* Used to define sequences and parameters for QTE events\n*/" },
#endif
		{ "IncludePath", "Headers/System/QTE/QTEConfigurationTypes.h" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTEConfigurationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Main asset containing QTE configuration\nUsed to define sequences and parameters for QTE events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConfigurationName_MetaData[] = {
		{ "Category", "QTE|Info" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTEConfigurationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of this QTE configuration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "QTE|Info" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTEConfigurationTypes.h" },
		{ "MultiLine", "TRUE" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Description of this QTE configuration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sequences_MetaData[] = {
		{ "Category", "QTE|Configuration" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTEConfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepeatCount_MetaData[] = {
		{ "Category", "QTE|Configuration" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTEConfigurationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of times to repeat the QTE" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalTimeLimit_MetaData[] = {
		{ "Category", "QTE|Configuration" },
		{ "ClampMin", "-1" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTEConfigurationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Total time allowed for QTE (-1 for unlimited)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWidgetClass_MetaData[] = {
		{ "Category", "QTE|UI" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTEConfigurationTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConfigurationName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Sequences_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Sequences;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RepeatCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalTimeLimit;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UQTEConfigurationAsset_ToRuntimeConfig, "ToRuntimeConfig" }, // 3961888874
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQTEConfigurationAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UQTEConfigurationAsset_Statics::NewProp_ConfigurationName = { "ConfigurationName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQTEConfigurationAsset, ConfigurationName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConfigurationName_MetaData), NewProp_ConfigurationName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UQTEConfigurationAsset_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQTEConfigurationAsset, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQTEConfigurationAsset_Statics::NewProp_Sequences_Inner = { "Sequences", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FQTESequenceData, METADATA_PARAMS(0, nullptr) }; // 288525367
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQTEConfigurationAsset_Statics::NewProp_Sequences = { "Sequences", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQTEConfigurationAsset, Sequences), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sequences_MetaData), NewProp_Sequences_MetaData) }; // 288525367
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UQTEConfigurationAsset_Statics::NewProp_RepeatCount = { "RepeatCount", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQTEConfigurationAsset, RepeatCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepeatCount_MetaData), NewProp_RepeatCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQTEConfigurationAsset_Statics::NewProp_TotalTimeLimit = { "TotalTimeLimit", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQTEConfigurationAsset, TotalTimeLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalTimeLimit_MetaData), NewProp_TotalTimeLimit_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UQTEConfigurationAsset_Statics::NewProp_DefaultWidgetClass = { "DefaultWidgetClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQTEConfigurationAsset, DefaultWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultWidgetClass_MetaData), NewProp_DefaultWidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQTEConfigurationAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQTEConfigurationAsset_Statics::NewProp_ConfigurationName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQTEConfigurationAsset_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQTEConfigurationAsset_Statics::NewProp_Sequences_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQTEConfigurationAsset_Statics::NewProp_Sequences,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQTEConfigurationAsset_Statics::NewProp_RepeatCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQTEConfigurationAsset_Statics::NewProp_TotalTimeLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQTEConfigurationAsset_Statics::NewProp_DefaultWidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQTEConfigurationAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UQTEConfigurationAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_BCR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQTEConfigurationAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQTEConfigurationAsset_Statics::ClassParams = {
	&UQTEConfigurationAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UQTEConfigurationAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UQTEConfigurationAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQTEConfigurationAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UQTEConfigurationAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQTEConfigurationAsset()
{
	if (!Z_Registration_Info_UClass_UQTEConfigurationAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQTEConfigurationAsset.OuterSingleton, Z_Construct_UClass_UQTEConfigurationAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQTEConfigurationAsset.OuterSingleton;
}
template<> BCR_API UClass* StaticClass<UQTEConfigurationAsset>()
{
	return UQTEConfigurationAsset::StaticClass();
}
UQTEConfigurationAsset::UQTEConfigurationAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQTEConfigurationAsset);
UQTEConfigurationAsset::~UQTEConfigurationAsset() {}
// End Class UQTEConfigurationAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_QTE_QTEConfigurationTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FQTEActionData::StaticStruct, Z_Construct_UScriptStruct_FQTEActionData_Statics::NewStructOps, TEXT("QTEActionData"), &Z_Registration_Info_UScriptStruct_QTEActionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQTEActionData), 305327723U) },
		{ FQTEPlayerSequenceData::StaticStruct, Z_Construct_UScriptStruct_FQTEPlayerSequenceData_Statics::NewStructOps, TEXT("QTEPlayerSequenceData"), &Z_Registration_Info_UScriptStruct_QTEPlayerSequenceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQTEPlayerSequenceData), 387951230U) },
		{ FQTESequenceData::StaticStruct, Z_Construct_UScriptStruct_FQTESequenceData_Statics::NewStructOps, TEXT("QTESequenceData"), &Z_Registration_Info_UScriptStruct_QTESequenceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQTESequenceData), 288525367U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQTEConfigurationAsset, UQTEConfigurationAsset::StaticClass, TEXT("UQTEConfigurationAsset"), &Z_Registration_Info_UClass_UQTEConfigurationAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQTEConfigurationAsset), 501606388U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_QTE_QTEConfigurationTypes_h_3125218399(TEXT("/Script/BCR"),
	Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_QTE_QTEConfigurationTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_QTE_QTEConfigurationTypes_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_QTE_QTEConfigurationTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_QTE_QTEConfigurationTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
