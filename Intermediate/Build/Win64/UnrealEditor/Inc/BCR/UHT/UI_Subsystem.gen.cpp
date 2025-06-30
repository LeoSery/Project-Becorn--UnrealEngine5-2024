// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCR/Headers/System/UI_Quest/UI_Subsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUI_Subsystem() {}

// Begin Cross Module References
BCR_API UClass* Z_Construct_UClass_UQuest_Subsystem();
BCR_API UClass* Z_Construct_UClass_UQuest_Subsystem_NoRegister();
BCR_API UClass* Z_Construct_UClass_UQuestData_NoRegister();
BCR_API UFunction* Z_Construct_UDelegateFunction_BCR_OnQuestCompleted__DelegateSignature();
BCR_API UFunction* Z_Construct_UDelegateFunction_BCR_OnQuestLineCompleted__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
UPackage* Z_Construct_UPackage__Script_BCR();
// End Cross Module References

// Begin Delegate FOnQuestCompleted
struct Z_Construct_UDelegateFunction_BCR_OnQuestCompleted__DelegateSignature_Statics
{
	struct _Script_BCR_eventOnQuestCompleted_Parms
	{
		FString tag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////// DELEGATES ////////\n/// Quest event notifications\n" },
#endif
		{ "ModuleRelativePath", "Headers/System/UI_Quest/UI_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DELEGATES\nQuest event notifications" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_tag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_BCR_OnQuestCompleted__DelegateSignature_Statics::NewProp_tag = { "tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BCR_eventOnQuestCompleted_Parms, tag), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BCR_OnQuestCompleted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BCR_OnQuestCompleted__DelegateSignature_Statics::NewProp_tag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCR_OnQuestCompleted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BCR_OnQuestCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BCR, nullptr, "OnQuestCompleted__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BCR_OnQuestCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCR_OnQuestCompleted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BCR_OnQuestCompleted__DelegateSignature_Statics::_Script_BCR_eventOnQuestCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCR_OnQuestCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BCR_OnQuestCompleted__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_BCR_OnQuestCompleted__DelegateSignature_Statics::_Script_BCR_eventOnQuestCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BCR_OnQuestCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BCR_OnQuestCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnQuestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnQuestCompleted, const FString& tag)
{
	struct _Script_BCR_eventOnQuestCompleted_Parms
	{
		FString tag;
	};
	_Script_BCR_eventOnQuestCompleted_Parms Parms;
	Parms.tag=tag;
	OnQuestCompleted.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnQuestCompleted

// Begin Delegate FOnQuestLineCompleted
struct Z_Construct_UDelegateFunction_BCR_OnQuestLineCompleted__DelegateSignature_Statics
{
	struct _Script_BCR_eventOnQuestLineCompleted_Parms
	{
		FString tag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Headers/System/UI_Quest/UI_Subsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_tag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_BCR_OnQuestLineCompleted__DelegateSignature_Statics::NewProp_tag = { "tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BCR_eventOnQuestLineCompleted_Parms, tag), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BCR_OnQuestLineCompleted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BCR_OnQuestLineCompleted__DelegateSignature_Statics::NewProp_tag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCR_OnQuestLineCompleted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BCR_OnQuestLineCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BCR, nullptr, "OnQuestLineCompleted__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BCR_OnQuestLineCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCR_OnQuestLineCompleted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BCR_OnQuestLineCompleted__DelegateSignature_Statics::_Script_BCR_eventOnQuestLineCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCR_OnQuestLineCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BCR_OnQuestLineCompleted__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_BCR_OnQuestLineCompleted__DelegateSignature_Statics::_Script_BCR_eventOnQuestLineCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BCR_OnQuestLineCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BCR_OnQuestLineCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnQuestLineCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnQuestLineCompleted, const FString& tag)
{
	struct _Script_BCR_eventOnQuestLineCompleted_Parms
	{
		FString tag;
	};
	_Script_BCR_eventOnQuestLineCompleted_Parms Parms;
	Parms.tag=tag;
	OnQuestLineCompleted.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnQuestLineCompleted

// Begin Class UQuest_Subsystem Function CompleteQuest
struct Z_Construct_UFunction_UQuest_Subsystem_CompleteQuest_Statics
{
	struct Quest_Subsystem_eventCompleteQuest_Parms
	{
		FString Tag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quest" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Progress tracking\n" },
#endif
		{ "ModuleRelativePath", "Headers/System/UI_Quest/UI_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Progress tracking" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuest_Subsystem_CompleteQuest_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_Subsystem_eventCompleteQuest_Parms, Tag), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_Subsystem_CompleteQuest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_Subsystem_CompleteQuest_Statics::NewProp_Tag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_Subsystem_CompleteQuest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_Subsystem_CompleteQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest_Subsystem, nullptr, "CompleteQuest", nullptr, nullptr, Z_Construct_UFunction_UQuest_Subsystem_CompleteQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_Subsystem_CompleteQuest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_Subsystem_CompleteQuest_Statics::Quest_Subsystem_eventCompleteQuest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_Subsystem_CompleteQuest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_Subsystem_CompleteQuest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuest_Subsystem_CompleteQuest_Statics::Quest_Subsystem_eventCompleteQuest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuest_Subsystem_CompleteQuest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_Subsystem_CompleteQuest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuest_Subsystem::execCompleteQuest)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CompleteQuest(Z_Param_Tag);
	P_NATIVE_END;
}
// End Class UQuest_Subsystem Function CompleteQuest

// Begin Class UQuest_Subsystem Function GetCurrentQuestAmount
struct Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestAmount_Statics
{
	struct Quest_Subsystem_eventGetCurrentQuestAmount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Headers/System/UI_Quest/UI_Subsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestAmount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_Subsystem_eventGetCurrentQuestAmount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestAmount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestAmount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestAmount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest_Subsystem, nullptr, "GetCurrentQuestAmount", nullptr, nullptr, Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestAmount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestAmount_Statics::Quest_Subsystem_eventGetCurrentQuestAmount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestAmount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestAmount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestAmount_Statics::Quest_Subsystem_eventGetCurrentQuestAmount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestAmount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestAmount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuest_Subsystem::execGetCurrentQuestAmount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentQuestAmount();
	P_NATIVE_END;
}
// End Class UQuest_Subsystem Function GetCurrentQuestAmount

// Begin Class UQuest_Subsystem Function GetCurrentQuestDesc
struct Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestDesc_Statics
{
	struct Quest_Subsystem_eventGetCurrentQuestDesc_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quest" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////// QUEST INFORMATION ////////\n/// Current quest data\n" },
#endif
		{ "ModuleRelativePath", "Headers/System/UI_Quest/UI_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "QUEST INFORMATION\nCurrent quest data" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestDesc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_Subsystem_eventGetCurrentQuestDesc_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestDesc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestDesc_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestDesc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestDesc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest_Subsystem, nullptr, "GetCurrentQuestDesc", nullptr, nullptr, Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestDesc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestDesc_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestDesc_Statics::Quest_Subsystem_eventGetCurrentQuestDesc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestDesc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestDesc_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestDesc_Statics::Quest_Subsystem_eventGetCurrentQuestDesc_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestDesc()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestDesc_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuest_Subsystem::execGetCurrentQuestDesc)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetCurrentQuestDesc();
	P_NATIVE_END;
}
// End Class UQuest_Subsystem Function GetCurrentQuestDesc

// Begin Class UQuest_Subsystem Function GetCurrentQuestProgress
struct Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestProgress_Statics
{
	struct Quest_Subsystem_eventGetCurrentQuestProgress_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Headers/System/UI_Quest/UI_Subsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_Subsystem_eventGetCurrentQuestProgress_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestProgress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest_Subsystem, nullptr, "GetCurrentQuestProgress", nullptr, nullptr, Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestProgress_Statics::Quest_Subsystem_eventGetCurrentQuestProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestProgress_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestProgress_Statics::Quest_Subsystem_eventGetCurrentQuestProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuest_Subsystem::execGetCurrentQuestProgress)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentQuestProgress();
	P_NATIVE_END;
}
// End Class UQuest_Subsystem Function GetCurrentQuestProgress

// Begin Class UQuest_Subsystem Function GetCurrentQuestTag
struct Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestTag_Statics
{
	struct Quest_Subsystem_eventGetCurrentQuestTag_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Headers/System/UI_Quest/UI_Subsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_Subsystem_eventGetCurrentQuestTag_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest_Subsystem, nullptr, "GetCurrentQuestTag", nullptr, nullptr, Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestTag_Statics::Quest_Subsystem_eventGetCurrentQuestTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestTag_Statics::Quest_Subsystem_eventGetCurrentQuestTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuest_Subsystem::execGetCurrentQuestTag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetCurrentQuestTag();
	P_NATIVE_END;
}
// End Class UQuest_Subsystem Function GetCurrentQuestTag

// Begin Class UQuest_Subsystem Function LoadQuestLine
struct Z_Construct_UFunction_UQuest_Subsystem_LoadQuestLine_Statics
{
	struct Quest_Subsystem_eventLoadQuestLine_Parms
	{
		UQuestData* NewQuestLine;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quest" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////// QUEST MANAGEMENT ////////\n/// Quest line control\n" },
#endif
		{ "ModuleRelativePath", "Headers/System/UI_Quest/UI_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "QUEST MANAGEMENT\nQuest line control" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewQuestLine;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_Subsystem_LoadQuestLine_Statics::NewProp_NewQuestLine = { "NewQuestLine", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_Subsystem_eventLoadQuestLine_Parms, NewQuestLine), Z_Construct_UClass_UQuestData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_Subsystem_LoadQuestLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_Subsystem_LoadQuestLine_Statics::NewProp_NewQuestLine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_Subsystem_LoadQuestLine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_Subsystem_LoadQuestLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest_Subsystem, nullptr, "LoadQuestLine", nullptr, nullptr, Z_Construct_UFunction_UQuest_Subsystem_LoadQuestLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_Subsystem_LoadQuestLine_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_Subsystem_LoadQuestLine_Statics::Quest_Subsystem_eventLoadQuestLine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_Subsystem_LoadQuestLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_Subsystem_LoadQuestLine_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuest_Subsystem_LoadQuestLine_Statics::Quest_Subsystem_eventLoadQuestLine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuest_Subsystem_LoadQuestLine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_Subsystem_LoadQuestLine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuest_Subsystem::execLoadQuestLine)
{
	P_GET_OBJECT(UQuestData,Z_Param_NewQuestLine);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadQuestLine(Z_Param_NewQuestLine);
	P_NATIVE_END;
}
// End Class UQuest_Subsystem Function LoadQuestLine

// Begin Class UQuest_Subsystem Function ProgressQuest
struct Z_Construct_UFunction_UQuest_Subsystem_ProgressQuest_Statics
{
	struct Quest_Subsystem_eventProgressQuest_Parms
	{
		FString Tag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Headers/System/UI_Quest/UI_Subsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuest_Subsystem_ProgressQuest_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_Subsystem_eventProgressQuest_Parms, Tag), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_Subsystem_ProgressQuest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_Subsystem_ProgressQuest_Statics::NewProp_Tag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_Subsystem_ProgressQuest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_Subsystem_ProgressQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest_Subsystem, nullptr, "ProgressQuest", nullptr, nullptr, Z_Construct_UFunction_UQuest_Subsystem_ProgressQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_Subsystem_ProgressQuest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_Subsystem_ProgressQuest_Statics::Quest_Subsystem_eventProgressQuest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_Subsystem_ProgressQuest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_Subsystem_ProgressQuest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuest_Subsystem_ProgressQuest_Statics::Quest_Subsystem_eventProgressQuest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuest_Subsystem_ProgressQuest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_Subsystem_ProgressQuest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuest_Subsystem::execProgressQuest)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProgressQuest(Z_Param_Tag);
	P_NATIVE_END;
}
// End Class UQuest_Subsystem Function ProgressQuest

// Begin Class UQuest_Subsystem
void UQuest_Subsystem::StaticRegisterNativesUQuest_Subsystem()
{
	UClass* Class = UQuest_Subsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CompleteQuest", &UQuest_Subsystem::execCompleteQuest },
		{ "GetCurrentQuestAmount", &UQuest_Subsystem::execGetCurrentQuestAmount },
		{ "GetCurrentQuestDesc", &UQuest_Subsystem::execGetCurrentQuestDesc },
		{ "GetCurrentQuestProgress", &UQuest_Subsystem::execGetCurrentQuestProgress },
		{ "GetCurrentQuestTag", &UQuest_Subsystem::execGetCurrentQuestTag },
		{ "LoadQuestLine", &UQuest_Subsystem::execLoadQuestLine },
		{ "ProgressQuest", &UQuest_Subsystem::execProgressQuest },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuest_Subsystem);
UClass* Z_Construct_UClass_UQuest_Subsystem_NoRegister()
{
	return UQuest_Subsystem::StaticClass();
}
struct Z_Construct_UClass_UQuest_Subsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief Quest management subsystem for tracking player progress\n * @details Handles quest line loading, progress tracking, completion validation, and event broadcasting\n */" },
#endif
		{ "IncludePath", "Headers/System/UI_Quest/UI_Subsystem.h" },
		{ "ModuleRelativePath", "Headers/System/UI_Quest/UI_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Quest management subsystem for tracking player progress\n@details Handles quest line loading, progress tracking, completion validation, and event broadcasting" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnQuestCompleted_MetaData[] = {
		{ "Category", "Quest" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////// DELEGATES ////////\n/// Event broadcasting\n" },
#endif
		{ "ModuleRelativePath", "Headers/System/UI_Quest/UI_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DELEGATES\nEvent broadcasting" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnQuestLineCompleted_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Headers/System/UI_Quest/UI_Subsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQuestCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQuestLineCompleted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuest_Subsystem_CompleteQuest, "CompleteQuest" }, // 1560190571
		{ &Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestAmount, "GetCurrentQuestAmount" }, // 1395422551
		{ &Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestDesc, "GetCurrentQuestDesc" }, // 3289995628
		{ &Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestProgress, "GetCurrentQuestProgress" }, // 1339659804
		{ &Z_Construct_UFunction_UQuest_Subsystem_GetCurrentQuestTag, "GetCurrentQuestTag" }, // 62676265
		{ &Z_Construct_UFunction_UQuest_Subsystem_LoadQuestLine, "LoadQuestLine" }, // 807951105
		{ &Z_Construct_UFunction_UQuest_Subsystem_ProgressQuest, "ProgressQuest" }, // 3450141236
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuest_Subsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuest_Subsystem_Statics::NewProp_OnQuestCompleted = { "OnQuestCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest_Subsystem, OnQuestCompleted), Z_Construct_UDelegateFunction_BCR_OnQuestCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnQuestCompleted_MetaData), NewProp_OnQuestCompleted_MetaData) }; // 2321146309
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuest_Subsystem_Statics::NewProp_OnQuestLineCompleted = { "OnQuestLineCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest_Subsystem, OnQuestLineCompleted), Z_Construct_UDelegateFunction_BCR_OnQuestLineCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnQuestLineCompleted_MetaData), NewProp_OnQuestLineCompleted_MetaData) }; // 3173388573
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuest_Subsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Subsystem_Statics::NewProp_OnQuestCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Subsystem_Statics::NewProp_OnQuestLineCompleted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Subsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UQuest_Subsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_BCR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Subsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuest_Subsystem_Statics::ClassParams = {
	&UQuest_Subsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UQuest_Subsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Subsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Subsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuest_Subsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQuest_Subsystem()
{
	if (!Z_Registration_Info_UClass_UQuest_Subsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuest_Subsystem.OuterSingleton, Z_Construct_UClass_UQuest_Subsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuest_Subsystem.OuterSingleton;
}
template<> BCR_API UClass* StaticClass<UQuest_Subsystem>()
{
	return UQuest_Subsystem::StaticClass();
}
UQuest_Subsystem::UQuest_Subsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQuest_Subsystem);
UQuest_Subsystem::~UQuest_Subsystem() {}
// End Class UQuest_Subsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_UI_Quest_UI_Subsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQuest_Subsystem, UQuest_Subsystem::StaticClass, TEXT("UQuest_Subsystem"), &Z_Registration_Info_UClass_UQuest_Subsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuest_Subsystem), 4150125463U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_UI_Quest_UI_Subsystem_h_1043491845(TEXT("/Script/BCR"),
	Z_CompiledInDeferFile_FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_UI_Quest_UI_Subsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_UI_Quest_UI_Subsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
