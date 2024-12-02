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
BCR_API UClass* Z_Construct_UClass_AMainPlayer_NoRegister();
BCR_API UEnum* Z_Construct_UEnum_BCR_EQTEInputType();
BCR_API UEnum* Z_Construct_UEnum_BCR_EQTEState();
BCR_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerSubSequence();
BCR_API UScriptStruct* Z_Construct_UScriptStruct_FQTEConfiguration();
BCR_API UScriptStruct* Z_Construct_UScriptStruct_FQTEInputStep();
BCR_API UScriptStruct* Z_Construct_UScriptStruct_FQTESequence();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_BCR();
// End Cross Module References

// Begin Enum EQTEInputType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EQTEInputType;
static UEnum* EQTEInputType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EQTEInputType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EQTEInputType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BCR_EQTEInputType, (UObject*)Z_Construct_UPackage__Script_BCR(), TEXT("EQTEInputType"));
	}
	return Z_Registration_Info_UEnum_EQTEInputType.OuterSingleton;
}
template<> BCR_API UEnum* StaticEnum<EQTEInputType>()
{
	return EQTEInputType_StaticEnum();
}
struct Z_Construct_UEnum_BCR_EQTEInputType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n* @brief Types of input actions required for QTE steps\n*/" },
#endif
		{ "Hold.DisplayName", "Hold" },
		{ "Hold.Name", "EQTEInputType::Hold" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTETypes.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EQTEInputType::None" },
		{ "Release.DisplayName", "Release" },
		{ "Release.Name", "EQTEInputType::Release" },
		{ "StickMove.DisplayName", "Stick Movement" },
		{ "StickMove.Name", "EQTEInputType::StickMove" },
		{ "Tap.DisplayName", "Tap" },
		{ "Tap.Name", "EQTEInputType::Tap" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Types of input actions required for QTE steps" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EQTEInputType::None", (int64)EQTEInputType::None },
		{ "EQTEInputType::Tap", (int64)EQTEInputType::Tap },
		{ "EQTEInputType::Hold", (int64)EQTEInputType::Hold },
		{ "EQTEInputType::Release", (int64)EQTEInputType::Release },
		{ "EQTEInputType::StickMove", (int64)EQTEInputType::StickMove },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BCR_EQTEInputType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BCR,
	nullptr,
	"EQTEInputType",
	"EQTEInputType",
	Z_Construct_UEnum_BCR_EQTEInputType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BCR_EQTEInputType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BCR_EQTEInputType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BCR_EQTEInputType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BCR_EQTEInputType()
{
	if (!Z_Registration_Info_UEnum_EQTEInputType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EQTEInputType.InnerSingleton, Z_Construct_UEnum_BCR_EQTEInputType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EQTEInputType.InnerSingleton;
}
// End Enum EQTEInputType

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
		{ "Comment", "/** \n* @brief Current state of the QTE system\n*/" },
#endif
		{ "Completed.Name", "EQTEState::Completed" },
		{ "Failed.Name", "EQTEState::Failed" },
		{ "Inactive.Name", "EQTEState::Inactive" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTETypes.h" },
		{ "Paused.Name", "EQTEState::Paused" },
		{ "Running.Name", "EQTEState::Running" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Current state of the QTE system" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EQTEState::Inactive", (int64)EQTEState::Inactive },
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

// Begin ScriptStruct FQTEInputStep
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QTEInputStep;
class UScriptStruct* FQTEInputStep::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QTEInputStep.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QTEInputStep.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQTEInputStep, (UObject*)Z_Construct_UPackage__Script_BCR(), TEXT("QTEInputStep"));
	}
	return Z_Registration_Info_UScriptStruct_QTEInputStep.OuterSingleton;
}
template<> BCR_API UScriptStruct* StaticStruct<FQTEInputStep>()
{
	return FQTEInputStep::StaticStruct();
}
struct Z_Construct_UScriptStruct_FQTEInputStep_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n* @brief Single input action within a QTE sequence\n*/" },
#endif
		{ "ModuleRelativePath", "Headers/System/QTE/QTETypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Single input action within a QTE sequence" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputType_MetaData[] = {
		{ "Category", "QTE" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Type of input required for this step */" },
#endif
		{ "ModuleRelativePath", "Headers/System/QTE/QTETypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type of input required for this step" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredInput_MetaData[] = {
		{ "Category", "QTE" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Specific key or button that must be pressed */" },
#endif
		{ "ModuleRelativePath", "Headers/System/QTE/QTETypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specific key or button that must be pressed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeWindow_MetaData[] = {
		{ "Category", "QTE" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Time allowed to complete this input (in seconds) */" },
#endif
		{ "ModuleRelativePath", "Headers/System/QTE/QTETypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time allowed to complete this input (in seconds)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "Category", "QTE" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Additional parameters (stick direction, hold duration) */" },
#endif
		{ "ModuleRelativePath", "Headers/System/QTE/QTETypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional parameters (stick direction, hold duration)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InputType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredInput;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeWindow;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Parameters_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Parameters_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQTEInputStep>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FQTEInputStep_Statics::NewProp_InputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FQTEInputStep_Statics::NewProp_InputType = { "InputType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQTEInputStep, InputType), Z_Construct_UEnum_BCR_EQTEInputType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputType_MetaData), NewProp_InputType_MetaData) }; // 3713181205
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQTEInputStep_Statics::NewProp_RequiredInput = { "RequiredInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQTEInputStep, RequiredInput), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredInput_MetaData), NewProp_RequiredInput_MetaData) }; // 658672854
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQTEInputStep_Statics::NewProp_TimeWindow = { "TimeWindow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQTEInputStep, TimeWindow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeWindow_MetaData), NewProp_TimeWindow_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQTEInputStep_Statics::NewProp_Parameters_ValueProp = { "Parameters", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQTEInputStep_Statics::NewProp_Parameters_Key_KeyProp = { "Parameters_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FQTEInputStep_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQTEInputStep, Parameters), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQTEInputStep_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQTEInputStep_Statics::NewProp_InputType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQTEInputStep_Statics::NewProp_InputType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQTEInputStep_Statics::NewProp_RequiredInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQTEInputStep_Statics::NewProp_TimeWindow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQTEInputStep_Statics::NewProp_Parameters_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQTEInputStep_Statics::NewProp_Parameters_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQTEInputStep_Statics::NewProp_Parameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQTEInputStep_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQTEInputStep_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BCR,
	nullptr,
	&NewStructOps,
	"QTEInputStep",
	Z_Construct_UScriptStruct_FQTEInputStep_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQTEInputStep_Statics::PropPointers),
	sizeof(FQTEInputStep),
	alignof(FQTEInputStep),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQTEInputStep_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQTEInputStep_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FQTEInputStep()
{
	if (!Z_Registration_Info_UScriptStruct_QTEInputStep.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QTEInputStep.InnerSingleton, Z_Construct_UScriptStruct_FQTEInputStep_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_QTEInputStep.InnerSingleton;
}
// End ScriptStruct FQTEInputStep

// Begin ScriptStruct FPlayerSubSequence
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerSubSequence;
class UScriptStruct* FPlayerSubSequence::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerSubSequence.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerSubSequence.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerSubSequence, (UObject*)Z_Construct_UPackage__Script_BCR(), TEXT("PlayerSubSequence"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerSubSequence.OuterSingleton;
}
template<> BCR_API UScriptStruct* StaticStruct<FPlayerSubSequence>()
{
	return FPlayerSubSequence::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayerSubSequence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n* @brief Sequence of inputs for a single player\n*/" },
#endif
		{ "ModuleRelativePath", "Headers/System/QTE/QTETypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Sequence of inputs for a single player" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Steps_MetaData[] = {
		{ "Category", "QTE" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of input steps for this player */" },
#endif
		{ "ModuleRelativePath", "Headers/System/QTE/QTETypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of input steps for this player" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStepIndex_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates that it does not save/serialize data. (use only in realtime and must not be saved)\n" },
#endif
		{ "ModuleRelativePath", "Headers/System/QTE/QTETypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates that it does not save/serialize data. (use only in realtime and must not be saved)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInputTime_MetaData[] = {
		{ "ModuleRelativePath", "Headers/System/QTE/QTETypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Headers/System/QTE/QTETypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Steps_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Steps;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentStepIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentInputTime;
	static void NewProp_bIsCompleted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCompleted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerSubSequence>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerSubSequence_Statics::NewProp_Steps_Inner = { "Steps", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FQTEInputStep, METADATA_PARAMS(0, nullptr) }; // 4103455845
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlayerSubSequence_Statics::NewProp_Steps = { "Steps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerSubSequence, Steps), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Steps_MetaData), NewProp_Steps_MetaData) }; // 4103455845
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerSubSequence_Statics::NewProp_CurrentStepIndex = { "CurrentStepIndex", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerSubSequence, CurrentStepIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentStepIndex_MetaData), NewProp_CurrentStepIndex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerSubSequence_Statics::NewProp_CurrentInputTime = { "CurrentInputTime", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerSubSequence, CurrentInputTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentInputTime_MetaData), NewProp_CurrentInputTime_MetaData) };
void Z_Construct_UScriptStruct_FPlayerSubSequence_Statics::NewProp_bIsCompleted_SetBit(void* Obj)
{
	((FPlayerSubSequence*)Obj)->bIsCompleted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerSubSequence_Statics::NewProp_bIsCompleted = { "bIsCompleted", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPlayerSubSequence), &Z_Construct_UScriptStruct_FPlayerSubSequence_Statics::NewProp_bIsCompleted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCompleted_MetaData), NewProp_bIsCompleted_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerSubSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSubSequence_Statics::NewProp_Steps_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSubSequence_Statics::NewProp_Steps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSubSequence_Statics::NewProp_CurrentStepIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSubSequence_Statics::NewProp_CurrentInputTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSubSequence_Statics::NewProp_bIsCompleted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSubSequence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerSubSequence_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BCR,
	nullptr,
	&NewStructOps,
	"PlayerSubSequence",
	Z_Construct_UScriptStruct_FPlayerSubSequence_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSubSequence_Statics::PropPointers),
	sizeof(FPlayerSubSequence),
	alignof(FPlayerSubSequence),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSubSequence_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerSubSequence_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerSubSequence()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerSubSequence.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerSubSequence.InnerSingleton, Z_Construct_UScriptStruct_FPlayerSubSequence_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayerSubSequence.InnerSingleton;
}
// End ScriptStruct FPlayerSubSequence

// Begin ScriptStruct FQTESequence
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QTESequence;
class UScriptStruct* FQTESequence::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QTESequence.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QTESequence.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQTESequence, (UObject*)Z_Construct_UPackage__Script_BCR(), TEXT("QTESequence"));
	}
	return Z_Registration_Info_UScriptStruct_QTESequence.OuterSingleton;
}
template<> BCR_API UScriptStruct* StaticStruct<FQTESequence>()
{
	return FQTESequence::StaticStruct();
}
struct Z_Construct_UScriptStruct_FQTESequence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n* @brief Sequence requiring multiple players' inputs\n*/" },
#endif
		{ "ModuleRelativePath", "Headers/System/QTE/QTETypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Sequence requiring multiple players' inputs" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerSubSequences_MetaData[] = {
		{ "Category", "QTE" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Map of players to their required input sequences */" },
#endif
		{ "ModuleRelativePath", "Headers/System/QTE/QTETypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map of players to their required input sequences" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Headers/System/QTE/QTETypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerSubSequences_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerSubSequences_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PlayerSubSequences;
	static void NewProp_bIsCompleted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCompleted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQTESequence>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQTESequence_Statics::NewProp_PlayerSubSequences_ValueProp = { "PlayerSubSequences", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FPlayerSubSequence, METADATA_PARAMS(0, nullptr) }; // 311708398
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FQTESequence_Statics::NewProp_PlayerSubSequences_Key_KeyProp = { "PlayerSubSequences_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMainPlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FQTESequence_Statics::NewProp_PlayerSubSequences = { "PlayerSubSequences", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQTESequence, PlayerSubSequences), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerSubSequences_MetaData), NewProp_PlayerSubSequences_MetaData) }; // 311708398
void Z_Construct_UScriptStruct_FQTESequence_Statics::NewProp_bIsCompleted_SetBit(void* Obj)
{
	((FQTESequence*)Obj)->bIsCompleted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQTESequence_Statics::NewProp_bIsCompleted = { "bIsCompleted", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FQTESequence), &Z_Construct_UScriptStruct_FQTESequence_Statics::NewProp_bIsCompleted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCompleted_MetaData), NewProp_bIsCompleted_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQTESequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQTESequence_Statics::NewProp_PlayerSubSequences_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQTESequence_Statics::NewProp_PlayerSubSequences_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQTESequence_Statics::NewProp_PlayerSubSequences,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQTESequence_Statics::NewProp_bIsCompleted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQTESequence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQTESequence_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BCR,
	nullptr,
	&NewStructOps,
	"QTESequence",
	Z_Construct_UScriptStruct_FQTESequence_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQTESequence_Statics::PropPointers),
	sizeof(FQTESequence),
	alignof(FQTESequence),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQTESequence_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQTESequence_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FQTESequence()
{
	if (!Z_Registration_Info_UScriptStruct_QTESequence.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QTESequence.InnerSingleton, Z_Construct_UScriptStruct_FQTESequence_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_QTESequence.InnerSingleton;
}
// End ScriptStruct FQTESequence

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
		{ "Comment", "/** \n* @brief Complete configuration for a QTE event\n*/" },
#endif
		{ "ModuleRelativePath", "Headers/System/QTE/QTETypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Complete configuration for a QTE event" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sequences_MetaData[] = {
		{ "Category", "QTE" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Array of sequences to complete */" },
#endif
		{ "ModuleRelativePath", "Headers/System/QTE/QTETypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of sequences to complete" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepeatCount_MetaData[] = {
		{ "Category", "QTE" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTETypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalTime_MetaData[] = {
		{ "Category", "QTE" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Total time allowed for QTE (-1 for unlimited) */" },
#endif
		{ "ModuleRelativePath", "Headers/System/QTE/QTETypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Total time allowed for QTE (-1 for unlimited)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[] = {
		{ "Category", "QTE" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTETypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Sequences_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Sequences;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RepeatCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalTime;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQTEConfiguration>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQTEConfiguration_Statics::NewProp_Sequences_Inner = { "Sequences", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FQTESequence, METADATA_PARAMS(0, nullptr) }; // 3805758435
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQTEConfiguration_Statics::NewProp_Sequences = { "Sequences", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQTEConfiguration, Sequences), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sequences_MetaData), NewProp_Sequences_MetaData) }; // 3805758435
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQTEConfiguration_Statics::NewProp_RepeatCount = { "RepeatCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQTEConfiguration, RepeatCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepeatCount_MetaData), NewProp_RepeatCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQTEConfiguration_Statics::NewProp_TotalTime = { "TotalTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQTEConfiguration, TotalTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalTime_MetaData), NewProp_TotalTime_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FQTEConfiguration_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQTEConfiguration, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetClass_MetaData), NewProp_WidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQTEConfiguration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQTEConfiguration_Statics::NewProp_Sequences_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQTEConfiguration_Statics::NewProp_Sequences,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQTEConfiguration_Statics::NewProp_RepeatCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQTEConfiguration_Statics::NewProp_TotalTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQTEConfiguration_Statics::NewProp_WidgetClass,
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

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Shadow_Documents_GitHub_M2_Project_Source_BCR_Headers_System_QTE_QTETypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EQTEInputType_StaticEnum, TEXT("EQTEInputType"), &Z_Registration_Info_UEnum_EQTEInputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3713181205U) },
		{ EQTEState_StaticEnum, TEXT("EQTEState"), &Z_Registration_Info_UEnum_EQTEState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2973021642U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FQTEInputStep::StaticStruct, Z_Construct_UScriptStruct_FQTEInputStep_Statics::NewStructOps, TEXT("QTEInputStep"), &Z_Registration_Info_UScriptStruct_QTEInputStep, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQTEInputStep), 4103455845U) },
		{ FPlayerSubSequence::StaticStruct, Z_Construct_UScriptStruct_FPlayerSubSequence_Statics::NewStructOps, TEXT("PlayerSubSequence"), &Z_Registration_Info_UScriptStruct_PlayerSubSequence, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerSubSequence), 311708398U) },
		{ FQTESequence::StaticStruct, Z_Construct_UScriptStruct_FQTESequence_Statics::NewStructOps, TEXT("QTESequence"), &Z_Registration_Info_UScriptStruct_QTESequence, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQTESequence), 3805758435U) },
		{ FQTEConfiguration::StaticStruct, Z_Construct_UScriptStruct_FQTEConfiguration_Statics::NewStructOps, TEXT("QTEConfiguration"), &Z_Registration_Info_UScriptStruct_QTEConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQTEConfiguration), 3649445843U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Shadow_Documents_GitHub_M2_Project_Source_BCR_Headers_System_QTE_QTETypes_h_559581803(TEXT("/Script/BCR"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Shadow_Documents_GitHub_M2_Project_Source_BCR_Headers_System_QTE_QTETypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Shadow_Documents_GitHub_M2_Project_Source_BCR_Headers_System_QTE_QTETypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_Shadow_Documents_GitHub_M2_Project_Source_BCR_Headers_System_QTE_QTETypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Shadow_Documents_GitHub_M2_Project_Source_BCR_Headers_System_QTE_QTETypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
