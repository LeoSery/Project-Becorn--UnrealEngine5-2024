// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCR/Headers/System/QTE/QTETypes.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQTETypes() {}

// Begin Cross Module References
BCR_API UEnum* Z_Construct_UEnum_BCR_EQTEActionType();
BCR_API UEnum* Z_Construct_UEnum_BCR_EQTEState();
BCR_API UEnum* Z_Construct_UEnum_BCR_ESnapPointType();
BCR_API UScriptStruct* Z_Construct_UScriptStruct_FQTEActionProgress();
BCR_API UScriptStruct* Z_Construct_UScriptStruct_FQTEConfiguration();
BCR_API UScriptStruct* Z_Construct_UScriptStruct_FQTEProgressData();
BCR_API UScriptStruct* Z_Construct_UScriptStruct_FSnapPointConfig();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_BCR();
// End Cross Module References

// Begin Enum EQTEActionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EQTEActionType;
static UEnum* EQTEActionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EQTEActionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EQTEActionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BCR_EQTEActionType, (UObject*)Z_Construct_UPackage__Script_BCR(), TEXT("EQTEActionType"));
	}
	return Z_Registration_Info_UEnum_EQTEActionType.OuterSingleton;
}
template<> BCR_API UEnum* StaticEnum<EQTEActionType>()
{
	return EQTEActionType_StaticEnum();
}
struct Z_Construct_UEnum_BCR_EQTEActionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n* @brief Types d'actions possibles dans le QTE \n*/" },
#endif
		{ "Hold.DisplayName", "Hold" },
		{ "Hold.Name", "EQTEActionType::Hold" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTETypes.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EQTEActionType::None" },
		{ "Press.DisplayName", "Press" },
		{ "Press.Name", "EQTEActionType::Press" },
		{ "Release.DisplayName", "Release" },
		{ "Release.Name", "EQTEActionType::Release" },
		{ "Rotate.DisplayName", "Rotate" },
		{ "Rotate.Name", "EQTEActionType::Rotate" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Types d'actions possibles dans le QTE" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EQTEActionType::None", (int64)EQTEActionType::None },
		{ "EQTEActionType::Press", (int64)EQTEActionType::Press },
		{ "EQTEActionType::Hold", (int64)EQTEActionType::Hold },
		{ "EQTEActionType::Release", (int64)EQTEActionType::Release },
		{ "EQTEActionType::Rotate", (int64)EQTEActionType::Rotate },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BCR_EQTEActionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BCR,
	nullptr,
	"EQTEActionType",
	"EQTEActionType",
	Z_Construct_UEnum_BCR_EQTEActionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BCR_EQTEActionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BCR_EQTEActionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BCR_EQTEActionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BCR_EQTEActionType()
{
	if (!Z_Registration_Info_UEnum_EQTEActionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EQTEActionType.InnerSingleton, Z_Construct_UEnum_BCR_EQTEActionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EQTEActionType.InnerSingleton;
}
// End Enum EQTEActionType

// Begin Enum EQTEState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EQTEState;
static UEnum* EQTEState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EQTEState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EQTEState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BCR_EQTEState, (UObject*)Z_Construct_UPackage__Script_BCR(), TEXT("EQTEState"));
	}
	return Z_Registration_Info_UEnum_EQTEState.OuterSingleton;
}
template<> BCR_API UEnum* StaticEnum<EQTEState>()
{
	return EQTEState_StaticEnum();
}
struct Z_Construct_UEnum_BCR_EQTEState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n* @brief \xc3\x89tat actuel du syst\xc3\xa8me QTE\n*/" },
#endif
		{ "Completed.Name", "EQTEState::Completed" },
		{ "Failed.Name", "EQTEState::Failed" },
		{ "Inactive.Name", "EQTEState::Inactive" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTETypes.h" },
		{ "Paused.Name", "EQTEState::Paused" },
		{ "Running.Name", "EQTEState::Running" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief \xc3\x89tat actuel du syst\xc3\xa8me QTE" },
#endif
		{ "WaitingForPlayers.Name", "EQTEState::WaitingForPlayers" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EQTEState::Inactive", (int64)EQTEState::Inactive },
		{ "EQTEState::WaitingForPlayers", (int64)EQTEState::WaitingForPlayers },
		{ "EQTEState::Running", (int64)EQTEState::Running },
		{ "EQTEState::Paused", (int64)EQTEState::Paused },
		{ "EQTEState::Completed", (int64)EQTEState::Completed },
		{ "EQTEState::Failed", (int64)EQTEState::Failed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BCR_EQTEState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BCR,
	nullptr,
	"EQTEState",
	"EQTEState",
	Z_Construct_UEnum_BCR_EQTEState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BCR_EQTEState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BCR_EQTEState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BCR_EQTEState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BCR_EQTEState()
{
	if (!Z_Registration_Info_UEnum_EQTEState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EQTEState.InnerSingleton, Z_Construct_UEnum_BCR_EQTEState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EQTEState.InnerSingleton;
}
// End Enum EQTEState

// Begin Enum ESnapPointType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESnapPointType;
static UEnum* ESnapPointType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESnapPointType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESnapPointType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BCR_ESnapPointType, (UObject*)Z_Construct_UPackage__Script_BCR(), TEXT("ESnapPointType"));
	}
	return Z_Registration_Info_UEnum_ESnapPointType.OuterSingleton;
}
template<> BCR_API UEnum* StaticEnum<ESnapPointType>()
{
	return ESnapPointType_StaticEnum();
}
struct Z_Construct_UEnum_BCR_ESnapPointType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n* @brief Point d'interaction sur une machine\n*/" },
#endif
		{ "First.Name", "ESnapPointType::First" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTETypes.h" },
		{ "Second.Name", "ESnapPointType::Second" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Point d'interaction sur une machine" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESnapPointType::First", (int64)ESnapPointType::First },
		{ "ESnapPointType::Second", (int64)ESnapPointType::Second },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BCR_ESnapPointType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BCR,
	nullptr,
	"ESnapPointType",
	"ESnapPointType",
	Z_Construct_UEnum_BCR_ESnapPointType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BCR_ESnapPointType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BCR_ESnapPointType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BCR_ESnapPointType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BCR_ESnapPointType()
{
	if (!Z_Registration_Info_UEnum_ESnapPointType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESnapPointType.InnerSingleton, Z_Construct_UEnum_BCR_ESnapPointType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESnapPointType.InnerSingleton;
}
// End Enum ESnapPointType

// Begin ScriptStruct FQTEProgressData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QTEProgressData;
class UScriptStruct* FQTEProgressData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QTEProgressData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QTEProgressData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQTEProgressData, (UObject*)Z_Construct_UPackage__Script_BCR(), TEXT("QTEProgressData"));
	}
	return Z_Registration_Info_UScriptStruct_QTEProgressData.OuterSingleton;
}
template<> BCR_API UScriptStruct* StaticStruct<FQTEProgressData>()
{
	return FQTEProgressData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FQTEProgressData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Headers/System/QTE/QTETypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQTEProgressData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQTEProgressData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BCR,
	nullptr,
	&NewStructOps,
	"QTEProgressData",
	nullptr,
	0,
	sizeof(FQTEProgressData),
	alignof(FQTEProgressData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQTEProgressData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQTEProgressData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FQTEProgressData()
{
	if (!Z_Registration_Info_UScriptStruct_QTEProgressData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QTEProgressData.InnerSingleton, Z_Construct_UScriptStruct_FQTEProgressData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_QTEProgressData.InnerSingleton;
}
// End ScriptStruct FQTEProgressData

// Begin ScriptStruct FSnapPointConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SnapPointConfig;
class UScriptStruct* FSnapPointConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SnapPointConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SnapPointConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSnapPointConfig, (UObject*)Z_Construct_UPackage__Script_BCR(), TEXT("SnapPointConfig"));
	}
	return Z_Registration_Info_UScriptStruct_SnapPointConfig.OuterSingleton;
}
template<> BCR_API UScriptStruct* StaticStruct<FSnapPointConfig>()
{
	return FSnapPointConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSnapPointConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n* @brief Configuration d'un point d'interaction\n*/" },
#endif
		{ "ModuleRelativePath", "Headers/System/QTE/QTETypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Configuration d'un point d'interaction" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapPointType_MetaData[] = {
		{ "Category", "QTE" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTETypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionType_MetaData[] = {
		{ "Category", "QTE" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTETypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredInput_MetaData[] = {
		{ "Category", "QTE" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTETypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepeatCount_MetaData[] = {
		{ "Category", "QTE" },
		{ "ClampMin", "-1" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTETypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Nombre de r\xc3\xa9p\xc3\xa9titions (-1 pour infini)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinRotationSpeed_MetaData[] = {
		{ "Category", "QTE" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Pour les actions de rotation uniquement : vitesse minimale requise\n" },
#endif
		{ "EditCondition", "ActionType == EQTEActionType::Rotate" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTETypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pour les actions de rotation uniquement : vitesse minimale requise" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SnapPointType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SnapPointType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActionType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredInput;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RepeatCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinRotationSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSnapPointConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSnapPointConfig_Statics::NewProp_SnapPointType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSnapPointConfig_Statics::NewProp_SnapPointType = { "SnapPointType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapPointConfig, SnapPointType), Z_Construct_UEnum_BCR_ESnapPointType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapPointType_MetaData), NewProp_SnapPointType_MetaData) }; // 3685084137
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSnapPointConfig_Statics::NewProp_ActionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSnapPointConfig_Statics::NewProp_ActionType = { "ActionType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapPointConfig, ActionType), Z_Construct_UEnum_BCR_EQTEActionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionType_MetaData), NewProp_ActionType_MetaData) }; // 430712991
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapPointConfig_Statics::NewProp_RequiredInput = { "RequiredInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapPointConfig, RequiredInput), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredInput_MetaData), NewProp_RequiredInput_MetaData) }; // 658672854
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSnapPointConfig_Statics::NewProp_RepeatCount = { "RepeatCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapPointConfig, RepeatCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepeatCount_MetaData), NewProp_RepeatCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSnapPointConfig_Statics::NewProp_MinRotationSpeed = { "MinRotationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapPointConfig, MinRotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinRotationSpeed_MetaData), NewProp_MinRotationSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSnapPointConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapPointConfig_Statics::NewProp_SnapPointType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapPointConfig_Statics::NewProp_SnapPointType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapPointConfig_Statics::NewProp_ActionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapPointConfig_Statics::NewProp_ActionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapPointConfig_Statics::NewProp_RequiredInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapPointConfig_Statics::NewProp_RepeatCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapPointConfig_Statics::NewProp_MinRotationSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapPointConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSnapPointConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BCR,
	nullptr,
	&NewStructOps,
	"SnapPointConfig",
	Z_Construct_UScriptStruct_FSnapPointConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapPointConfig_Statics::PropPointers),
	sizeof(FSnapPointConfig),
	alignof(FSnapPointConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapPointConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSnapPointConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSnapPointConfig()
{
	if (!Z_Registration_Info_UScriptStruct_SnapPointConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SnapPointConfig.InnerSingleton, Z_Construct_UScriptStruct_FSnapPointConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SnapPointConfig.InnerSingleton;
}
// End ScriptStruct FSnapPointConfig

// Begin ScriptStruct FQTEConfiguration
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QTEConfiguration;
class UScriptStruct* FQTEConfiguration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QTEConfiguration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QTEConfiguration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQTEConfiguration, (UObject*)Z_Construct_UPackage__Script_BCR(), TEXT("QTEConfiguration"));
	}
	return Z_Registration_Info_UScriptStruct_QTEConfiguration.OuterSingleton;
}
template<> BCR_API UScriptStruct* StaticStruct<FQTEConfiguration>()
{
	return FQTEConfiguration::StaticStruct();
}
struct Z_Construct_UScriptStruct_FQTEConfiguration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n* @brief Configuration compl\xc3\xa8te d'une s\xc3\xa9quence QTE\n*/" },
#endif
		{ "ModuleRelativePath", "Headers/System/QTE/QTETypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Configuration compl\xc3\xa8te d'une s\xc3\xa9quence QTE" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapPoints_MetaData[] = {
		{ "Category", "QTE" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Configuration pour chaque point d'interaction\n" },
#endif
		{ "ModuleRelativePath", "Headers/System/QTE/QTETypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configuration pour chaque point d'interaction" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalTime_MetaData[] = {
		{ "Category", "QTE" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Temps total allou\xc3\xa9 pour compl\xc3\xa9ter le QTE (-1 pour illimit\xc3\xa9)\n" },
#endif
		{ "ModuleRelativePath", "Headers/System/QTE/QTETypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Temps total allou\xc3\xa9 pour compl\xc3\xa9ter le QTE (-1 pour illimit\xc3\xa9)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[] = {
		{ "Category", "QTE" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Widget \xc3\xa0 afficher pendant le QTE\n" },
#endif
		{ "ModuleRelativePath", "Headers/System/QTE/QTETypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Widget \xc3\xa0 afficher pendant le QTE" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConfigurationName_MetaData[] = {
		{ "Category", "QTE" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Nom pour l'identification (optionnel)\n" },
#endif
		{ "ModuleRelativePath", "Headers/System/QTE/QTETypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Nom pour l'identification (optionnel)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SnapPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SnapPoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalTime;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConfigurationName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQTEConfiguration>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQTEConfiguration_Statics::NewProp_SnapPoints_Inner = { "SnapPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSnapPointConfig, METADATA_PARAMS(0, nullptr) }; // 796225583
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQTEConfiguration_Statics::NewProp_SnapPoints = { "SnapPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQTEConfiguration, SnapPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapPoints_MetaData), NewProp_SnapPoints_MetaData) }; // 796225583
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQTEConfiguration_Statics::NewProp_TotalTime = { "TotalTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQTEConfiguration, TotalTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalTime_MetaData), NewProp_TotalTime_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FQTEConfiguration_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQTEConfiguration, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetClass_MetaData), NewProp_WidgetClass_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQTEConfiguration_Statics::NewProp_ConfigurationName = { "ConfigurationName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQTEConfiguration, ConfigurationName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConfigurationName_MetaData), NewProp_ConfigurationName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQTEConfiguration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQTEConfiguration_Statics::NewProp_SnapPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQTEConfiguration_Statics::NewProp_SnapPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQTEConfiguration_Statics::NewProp_TotalTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQTEConfiguration_Statics::NewProp_WidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQTEConfiguration_Statics::NewProp_ConfigurationName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQTEConfiguration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQTEConfiguration_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BCR,
	nullptr,
	&NewStructOps,
	"QTEConfiguration",
	Z_Construct_UScriptStruct_FQTEConfiguration_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQTEConfiguration_Statics::PropPointers),
	sizeof(FQTEConfiguration),
	alignof(FQTEConfiguration),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQTEConfiguration_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQTEConfiguration_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FQTEConfiguration()
{
	if (!Z_Registration_Info_UScriptStruct_QTEConfiguration.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QTEConfiguration.InnerSingleton, Z_Construct_UScriptStruct_FQTEConfiguration_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_QTEConfiguration.InnerSingleton;
}
// End ScriptStruct FQTEConfiguration

// Begin ScriptStruct FQTEActionProgress
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QTEActionProgress;
class UScriptStruct* FQTEActionProgress::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QTEActionProgress.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QTEActionProgress.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQTEActionProgress, (UObject*)Z_Construct_UPackage__Script_BCR(), TEXT("QTEActionProgress"));
	}
	return Z_Registration_Info_UScriptStruct_QTEActionProgress.OuterSingleton;
}
template<> BCR_API UScriptStruct* StaticStruct<FQTEActionProgress>()
{
	return FQTEActionProgress::StaticStruct();
}
struct Z_Construct_UScriptStruct_FQTEActionProgress_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n* @brief Information de progression d'une action\n*/" },
#endif
		{ "ModuleRelativePath", "Headers/System/QTE/QTETypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Information de progression d'une action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Progress_MetaData[] = {
		{ "Category", "QTEActionProgress" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Progression normalis\xc3\xa9""e (0-1)\n" },
#endif
		{ "ModuleRelativePath", "Headers/System/QTE/QTETypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Progression normalis\xc3\xa9""e (0-1)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StickPosition_MetaData[] = {
		{ "Category", "QTEActionProgress" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Position du stick pour les actions de rotation\n" },
#endif
		{ "ModuleRelativePath", "Headers/System/QTE/QTETypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Position du stick pour les actions de rotation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[] = {
		{ "Category", "QTEActionProgress" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xc3\x89tat actif/inactif de l'action\n" },
#endif
		{ "ModuleRelativePath", "Headers/System/QTE/QTETypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc3\x89tat actif/inactif de l'action" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Progress;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StickPosition;
	static void NewProp_bIsActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQTEActionProgress>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQTEActionProgress_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQTEActionProgress, Progress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Progress_MetaData), NewProp_Progress_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQTEActionProgress_Statics::NewProp_StickPosition = { "StickPosition", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQTEActionProgress, StickPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StickPosition_MetaData), NewProp_StickPosition_MetaData) };
void Z_Construct_UScriptStruct_FQTEActionProgress_Statics::NewProp_bIsActive_SetBit(void* Obj)
{
	((FQTEActionProgress*)Obj)->bIsActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQTEActionProgress_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FQTEActionProgress), &Z_Construct_UScriptStruct_FQTEActionProgress_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsActive_MetaData), NewProp_bIsActive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQTEActionProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQTEActionProgress_Statics::NewProp_Progress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQTEActionProgress_Statics::NewProp_StickPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQTEActionProgress_Statics::NewProp_bIsActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQTEActionProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQTEActionProgress_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BCR,
	nullptr,
	&NewStructOps,
	"QTEActionProgress",
	Z_Construct_UScriptStruct_FQTEActionProgress_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQTEActionProgress_Statics::PropPointers),
	sizeof(FQTEActionProgress),
	alignof(FQTEActionProgress),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQTEActionProgress_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQTEActionProgress_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FQTEActionProgress()
{
	if (!Z_Registration_Info_UScriptStruct_QTEActionProgress.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QTEActionProgress.InnerSingleton, Z_Construct_UScriptStruct_FQTEActionProgress_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_QTEActionProgress.InnerSingleton;
}
// End ScriptStruct FQTEActionProgress

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_QTE_QTETypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EQTEActionType_StaticEnum, TEXT("EQTEActionType"), &Z_Registration_Info_UEnum_EQTEActionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 430712991U) },
		{ EQTEState_StaticEnum, TEXT("EQTEState"), &Z_Registration_Info_UEnum_EQTEState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 303231836U) },
		{ ESnapPointType_StaticEnum, TEXT("ESnapPointType"), &Z_Registration_Info_UEnum_ESnapPointType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3685084137U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FQTEProgressData::StaticStruct, Z_Construct_UScriptStruct_FQTEProgressData_Statics::NewStructOps, TEXT("QTEProgressData"), &Z_Registration_Info_UScriptStruct_QTEProgressData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQTEProgressData), 3793634775U) },
		{ FSnapPointConfig::StaticStruct, Z_Construct_UScriptStruct_FSnapPointConfig_Statics::NewStructOps, TEXT("SnapPointConfig"), &Z_Registration_Info_UScriptStruct_SnapPointConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSnapPointConfig), 796225583U) },
		{ FQTEConfiguration::StaticStruct, Z_Construct_UScriptStruct_FQTEConfiguration_Statics::NewStructOps, TEXT("QTEConfiguration"), &Z_Registration_Info_UScriptStruct_QTEConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQTEConfiguration), 2591637879U) },
		{ FQTEActionProgress::StaticStruct, Z_Construct_UScriptStruct_FQTEActionProgress_Statics::NewStructOps, TEXT("QTEActionProgress"), &Z_Registration_Info_UScriptStruct_QTEActionProgress, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQTEActionProgress), 2649691905U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_QTE_QTETypes_h_560116261(TEXT("/Script/BCR"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_QTE_QTETypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_QTE_QTETypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_QTE_QTETypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_QTE_QTETypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
