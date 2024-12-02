// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCR/Headers/System/QTE/QTE_System.h"
#include "BCR/Headers/System/QTE/QTETypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQTE_System() {}

// Begin Cross Module References
BCR_API UClass* Z_Construct_UClass_AMainPlayer_NoRegister();
BCR_API UClass* Z_Construct_UClass_UQTE_System();
BCR_API UClass* Z_Construct_UClass_UQTE_System_NoRegister();
BCR_API UFunction* Z_Construct_UDelegateFunction_BCR_OnPlayerSubSequenceCompleteSignature__DelegateSignature();
BCR_API UFunction* Z_Construct_UDelegateFunction_BCR_OnPlayerSubSequenceFailedSignature__DelegateSignature();
BCR_API UFunction* Z_Construct_UDelegateFunction_BCR_OnQTECompleteSignature__DelegateSignature();
BCR_API UFunction* Z_Construct_UDelegateFunction_BCR_OnSequenceCompleteSignature__DelegateSignature();
BCR_API UFunction* Z_Construct_UDelegateFunction_BCR_OnSequenceFailedSignature__DelegateSignature();
BCR_API UScriptStruct* Z_Construct_UScriptStruct_FQTEConfiguration();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_BCR();
// End Cross Module References

// Begin Delegate FOnPlayerSubSequenceCompleteSignature
struct Z_Construct_UDelegateFunction_BCR_OnPlayerSubSequenceCompleteSignature__DelegateSignature_Statics
{
	struct _Script_BCR_eventOnPlayerSubSequenceCompleteSignature_Parms
	{
		AMainPlayer* Player;
		int32 SequenceIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Broadcast when a player completes their part of a sequence */" },
#endif
		{ "ModuleRelativePath", "Headers/System/QTE/QTE_System.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Broadcast when a player completes their part of a sequence" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SequenceIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_BCR_OnPlayerSubSequenceCompleteSignature__DelegateSignature_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BCR_eventOnPlayerSubSequenceCompleteSignature_Parms, Player), Z_Construct_UClass_AMainPlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_BCR_OnPlayerSubSequenceCompleteSignature__DelegateSignature_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BCR_eventOnPlayerSubSequenceCompleteSignature_Parms, SequenceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BCR_OnPlayerSubSequenceCompleteSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BCR_OnPlayerSubSequenceCompleteSignature__DelegateSignature_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BCR_OnPlayerSubSequenceCompleteSignature__DelegateSignature_Statics::NewProp_SequenceIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCR_OnPlayerSubSequenceCompleteSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BCR_OnPlayerSubSequenceCompleteSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BCR, nullptr, "OnPlayerSubSequenceCompleteSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BCR_OnPlayerSubSequenceCompleteSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCR_OnPlayerSubSequenceCompleteSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BCR_OnPlayerSubSequenceCompleteSignature__DelegateSignature_Statics::_Script_BCR_eventOnPlayerSubSequenceCompleteSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCR_OnPlayerSubSequenceCompleteSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BCR_OnPlayerSubSequenceCompleteSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_BCR_OnPlayerSubSequenceCompleteSignature__DelegateSignature_Statics::_Script_BCR_eventOnPlayerSubSequenceCompleteSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BCR_OnPlayerSubSequenceCompleteSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BCR_OnPlayerSubSequenceCompleteSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPlayerSubSequenceCompleteSignature_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerSubSequenceCompleteSignature, AMainPlayer* Player, int32 SequenceIndex)
{
	struct _Script_BCR_eventOnPlayerSubSequenceCompleteSignature_Parms
	{
		AMainPlayer* Player;
		int32 SequenceIndex;
	};
	_Script_BCR_eventOnPlayerSubSequenceCompleteSignature_Parms Parms;
	Parms.Player=Player;
	Parms.SequenceIndex=SequenceIndex;
	OnPlayerSubSequenceCompleteSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnPlayerSubSequenceCompleteSignature

// Begin Delegate FOnPlayerSubSequenceFailedSignature
struct Z_Construct_UDelegateFunction_BCR_OnPlayerSubSequenceFailedSignature__DelegateSignature_Statics
{
	struct _Script_BCR_eventOnPlayerSubSequenceFailedSignature_Parms
	{
		AMainPlayer* Player;
		int32 SequenceIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fired when a player fails their part of a sequence */" },
#endif
		{ "ModuleRelativePath", "Headers/System/QTE/QTE_System.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fired when a player fails their part of a sequence" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SequenceIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_BCR_OnPlayerSubSequenceFailedSignature__DelegateSignature_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BCR_eventOnPlayerSubSequenceFailedSignature_Parms, Player), Z_Construct_UClass_AMainPlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_BCR_OnPlayerSubSequenceFailedSignature__DelegateSignature_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BCR_eventOnPlayerSubSequenceFailedSignature_Parms, SequenceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BCR_OnPlayerSubSequenceFailedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BCR_OnPlayerSubSequenceFailedSignature__DelegateSignature_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BCR_OnPlayerSubSequenceFailedSignature__DelegateSignature_Statics::NewProp_SequenceIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCR_OnPlayerSubSequenceFailedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BCR_OnPlayerSubSequenceFailedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BCR, nullptr, "OnPlayerSubSequenceFailedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BCR_OnPlayerSubSequenceFailedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCR_OnPlayerSubSequenceFailedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BCR_OnPlayerSubSequenceFailedSignature__DelegateSignature_Statics::_Script_BCR_eventOnPlayerSubSequenceFailedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCR_OnPlayerSubSequenceFailedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BCR_OnPlayerSubSequenceFailedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_BCR_OnPlayerSubSequenceFailedSignature__DelegateSignature_Statics::_Script_BCR_eventOnPlayerSubSequenceFailedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BCR_OnPlayerSubSequenceFailedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BCR_OnPlayerSubSequenceFailedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPlayerSubSequenceFailedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerSubSequenceFailedSignature, AMainPlayer* Player, int32 SequenceIndex)
{
	struct _Script_BCR_eventOnPlayerSubSequenceFailedSignature_Parms
	{
		AMainPlayer* Player;
		int32 SequenceIndex;
	};
	_Script_BCR_eventOnPlayerSubSequenceFailedSignature_Parms Parms;
	Parms.Player=Player;
	Parms.SequenceIndex=SequenceIndex;
	OnPlayerSubSequenceFailedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnPlayerSubSequenceFailedSignature

// Begin Delegate FOnSequenceCompleteSignature
struct Z_Construct_UDelegateFunction_BCR_OnSequenceCompleteSignature__DelegateSignature_Statics
{
	struct _Script_BCR_eventOnSequenceCompleteSignature_Parms
	{
		int32 SequenceIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fired when all players complete a sequence successfully */" },
#endif
		{ "ModuleRelativePath", "Headers/System/QTE/QTE_System.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fired when all players complete a sequence successfully" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SequenceIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_BCR_OnSequenceCompleteSignature__DelegateSignature_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BCR_eventOnSequenceCompleteSignature_Parms, SequenceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BCR_OnSequenceCompleteSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BCR_OnSequenceCompleteSignature__DelegateSignature_Statics::NewProp_SequenceIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCR_OnSequenceCompleteSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BCR_OnSequenceCompleteSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BCR, nullptr, "OnSequenceCompleteSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BCR_OnSequenceCompleteSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCR_OnSequenceCompleteSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BCR_OnSequenceCompleteSignature__DelegateSignature_Statics::_Script_BCR_eventOnSequenceCompleteSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCR_OnSequenceCompleteSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BCR_OnSequenceCompleteSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_BCR_OnSequenceCompleteSignature__DelegateSignature_Statics::_Script_BCR_eventOnSequenceCompleteSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BCR_OnSequenceCompleteSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BCR_OnSequenceCompleteSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSequenceCompleteSignature_DelegateWrapper(const FMulticastScriptDelegate& OnSequenceCompleteSignature, int32 SequenceIndex)
{
	struct _Script_BCR_eventOnSequenceCompleteSignature_Parms
	{
		int32 SequenceIndex;
	};
	_Script_BCR_eventOnSequenceCompleteSignature_Parms Parms;
	Parms.SequenceIndex=SequenceIndex;
	OnSequenceCompleteSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSequenceCompleteSignature

// Begin Delegate FOnSequenceFailedSignature
struct Z_Construct_UDelegateFunction_BCR_OnSequenceFailedSignature__DelegateSignature_Statics
{
	struct _Script_BCR_eventOnSequenceFailedSignature_Parms
	{
		int32 SequenceIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fired when a sequence fails */" },
#endif
		{ "ModuleRelativePath", "Headers/System/QTE/QTE_System.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fired when a sequence fails" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SequenceIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_BCR_OnSequenceFailedSignature__DelegateSignature_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BCR_eventOnSequenceFailedSignature_Parms, SequenceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BCR_OnSequenceFailedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BCR_OnSequenceFailedSignature__DelegateSignature_Statics::NewProp_SequenceIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCR_OnSequenceFailedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BCR_OnSequenceFailedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BCR, nullptr, "OnSequenceFailedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BCR_OnSequenceFailedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCR_OnSequenceFailedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BCR_OnSequenceFailedSignature__DelegateSignature_Statics::_Script_BCR_eventOnSequenceFailedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCR_OnSequenceFailedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BCR_OnSequenceFailedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_BCR_OnSequenceFailedSignature__DelegateSignature_Statics::_Script_BCR_eventOnSequenceFailedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BCR_OnSequenceFailedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BCR_OnSequenceFailedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSequenceFailedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnSequenceFailedSignature, int32 SequenceIndex)
{
	struct _Script_BCR_eventOnSequenceFailedSignature_Parms
	{
		int32 SequenceIndex;
	};
	_Script_BCR_eventOnSequenceFailedSignature_Parms Parms;
	Parms.SequenceIndex=SequenceIndex;
	OnSequenceFailedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSequenceFailedSignature

// Begin Delegate FOnQTECompleteSignature
struct Z_Construct_UDelegateFunction_BCR_OnQTECompleteSignature__DelegateSignature_Statics
{
	struct _Script_BCR_eventOnQTECompleteSignature_Parms
	{
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fired when the entire QTE completes (success or failure) */" },
#endif
		{ "ModuleRelativePath", "Headers/System/QTE/QTE_System.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fired when the entire QTE completes (success or failure)" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_BCR_OnQTECompleteSignature__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_BCR_eventOnQTECompleteSignature_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_BCR_OnQTECompleteSignature__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_BCR_eventOnQTECompleteSignature_Parms), &Z_Construct_UDelegateFunction_BCR_OnQTECompleteSignature__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BCR_OnQTECompleteSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BCR_OnQTECompleteSignature__DelegateSignature_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCR_OnQTECompleteSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BCR_OnQTECompleteSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BCR, nullptr, "OnQTECompleteSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BCR_OnQTECompleteSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCR_OnQTECompleteSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BCR_OnQTECompleteSignature__DelegateSignature_Statics::_Script_BCR_eventOnQTECompleteSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCR_OnQTECompleteSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BCR_OnQTECompleteSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_BCR_OnQTECompleteSignature__DelegateSignature_Statics::_Script_BCR_eventOnQTECompleteSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BCR_OnQTECompleteSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BCR_OnQTECompleteSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnQTECompleteSignature_DelegateWrapper(const FMulticastScriptDelegate& OnQTECompleteSignature, bool bSuccess)
{
	struct _Script_BCR_eventOnQTECompleteSignature_Parms
	{
		bool bSuccess;
	};
	_Script_BCR_eventOnQTECompleteSignature_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	OnQTECompleteSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnQTECompleteSignature

// Begin Class UQTE_System Function SetQTEPaused
struct Z_Construct_UFunction_UQTE_System_SetQTEPaused_Statics
{
	struct QTE_System_eventSetQTEPaused_Parms
	{
		bool bPaused;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "QTE" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTE_System.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bPaused_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPaused;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UQTE_System_SetQTEPaused_Statics::NewProp_bPaused_SetBit(void* Obj)
{
	((QTE_System_eventSetQTEPaused_Parms*)Obj)->bPaused = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQTE_System_SetQTEPaused_Statics::NewProp_bPaused = { "bPaused", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(QTE_System_eventSetQTEPaused_Parms), &Z_Construct_UFunction_UQTE_System_SetQTEPaused_Statics::NewProp_bPaused_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQTE_System_SetQTEPaused_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQTE_System_SetQTEPaused_Statics::NewProp_bPaused,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQTE_System_SetQTEPaused_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQTE_System_SetQTEPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQTE_System, nullptr, "SetQTEPaused", nullptr, nullptr, Z_Construct_UFunction_UQTE_System_SetQTEPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQTE_System_SetQTEPaused_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQTE_System_SetQTEPaused_Statics::QTE_System_eventSetQTEPaused_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQTE_System_SetQTEPaused_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQTE_System_SetQTEPaused_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQTE_System_SetQTEPaused_Statics::QTE_System_eventSetQTEPaused_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQTE_System_SetQTEPaused()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQTE_System_SetQTEPaused_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQTE_System::execSetQTEPaused)
{
	P_GET_UBOOL(Z_Param_bPaused);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetQTEPaused(Z_Param_bPaused);
	P_NATIVE_END;
}
// End Class UQTE_System Function SetQTEPaused

// Begin Class UQTE_System Function StartQTE
struct Z_Construct_UFunction_UQTE_System_StartQTE_Statics
{
	struct QTE_System_eventStartQTE_Parms
	{
		FQTEConfiguration Config;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "QTE" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////// METHODS ////////\n/// QTE Execution flow\n" },
#endif
		{ "ModuleRelativePath", "Headers/System/QTE/QTE_System.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "METHODS\nQTE Execution flow" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQTE_System_StartQTE_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QTE_System_eventStartQTE_Parms, Config), Z_Construct_UScriptStruct_FQTEConfiguration, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 3649445843
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQTE_System_StartQTE_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQTE_System_StartQTE_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQTE_System_StartQTE_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQTE_System_StartQTE_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQTE_System, nullptr, "StartQTE", nullptr, nullptr, Z_Construct_UFunction_UQTE_System_StartQTE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQTE_System_StartQTE_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQTE_System_StartQTE_Statics::QTE_System_eventStartQTE_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQTE_System_StartQTE_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQTE_System_StartQTE_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQTE_System_StartQTE_Statics::QTE_System_eventStartQTE_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQTE_System_StartQTE()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQTE_System_StartQTE_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQTE_System::execStartQTE)
{
	P_GET_STRUCT_REF(FQTEConfiguration,Z_Param_Out_Config);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartQTE(Z_Param_Out_Config);
	P_NATIVE_END;
}
// End Class UQTE_System Function StartQTE

// Begin Class UQTE_System Function StopQTE
struct Z_Construct_UFunction_UQTE_System_StopQTE_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "QTE" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTE_System.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQTE_System_StopQTE_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQTE_System, nullptr, "StopQTE", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQTE_System_StopQTE_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQTE_System_StopQTE_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UQTE_System_StopQTE()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQTE_System_StopQTE_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQTE_System::execStopQTE)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopQTE();
	P_NATIVE_END;
}
// End Class UQTE_System Function StopQTE

// Begin Class UQTE_System
void UQTE_System::StaticRegisterNativesUQTE_System()
{
	UClass* Class = UQTE_System::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetQTEPaused", &UQTE_System::execSetQTEPaused },
		{ "StartQTE", &UQTE_System::execStartQTE },
		{ "StopQTE", &UQTE_System::execStopQTE },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQTE_System);
UClass* Z_Construct_UClass_UQTE_System_NoRegister()
{
	return UQTE_System::StaticClass();
}
struct Z_Construct_UClass_UQTE_System_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n * QTE System that manages cooperative quick time events between players\n * Handles input validation, sequence progression, and timing\n */" },
#endif
		{ "IncludePath", "Headers/System/QTE/QTE_System.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTE_System.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "QTE System that manages cooperative quick time events between players\nHandles input validation, sequence progression, and timing" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerSubSequenceComplete_MetaData[] = {
		{ "Category", "QTE" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////// DELEGATES ////////\n//// QTE Event delegates\n" },
#endif
		{ "ModuleRelativePath", "Headers/System/QTE/QTE_System.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DELEGATES\n/ QTE Event delegates" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerSubSequenceFailed_MetaData[] = {
		{ "Category", "QTE" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTE_System.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSequenceComplete_MetaData[] = {
		{ "Category", "QTE" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTE_System.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSequenceFailed_MetaData[] = {
		{ "Category", "QTE" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTE_System.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnQTEComplete_MetaData[] = {
		{ "Category", "QTE" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTE_System.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerSubSequenceComplete;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerSubSequenceFailed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSequenceComplete;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSequenceFailed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQTEComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UQTE_System_SetQTEPaused, "SetQTEPaused" }, // 3077488815
		{ &Z_Construct_UFunction_UQTE_System_StartQTE, "StartQTE" }, // 440176842
		{ &Z_Construct_UFunction_UQTE_System_StopQTE, "StopQTE" }, // 4000964844
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQTE_System>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQTE_System_Statics::NewProp_OnPlayerSubSequenceComplete = { "OnPlayerSubSequenceComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQTE_System, OnPlayerSubSequenceComplete), Z_Construct_UDelegateFunction_BCR_OnPlayerSubSequenceCompleteSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayerSubSequenceComplete_MetaData), NewProp_OnPlayerSubSequenceComplete_MetaData) }; // 1658395676
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQTE_System_Statics::NewProp_OnPlayerSubSequenceFailed = { "OnPlayerSubSequenceFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQTE_System, OnPlayerSubSequenceFailed), Z_Construct_UDelegateFunction_BCR_OnPlayerSubSequenceFailedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayerSubSequenceFailed_MetaData), NewProp_OnPlayerSubSequenceFailed_MetaData) }; // 668196791
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQTE_System_Statics::NewProp_OnSequenceComplete = { "OnSequenceComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQTE_System, OnSequenceComplete), Z_Construct_UDelegateFunction_BCR_OnSequenceCompleteSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSequenceComplete_MetaData), NewProp_OnSequenceComplete_MetaData) }; // 339958565
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQTE_System_Statics::NewProp_OnSequenceFailed = { "OnSequenceFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQTE_System, OnSequenceFailed), Z_Construct_UDelegateFunction_BCR_OnSequenceFailedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSequenceFailed_MetaData), NewProp_OnSequenceFailed_MetaData) }; // 1789997991
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQTE_System_Statics::NewProp_OnQTEComplete = { "OnQTEComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQTE_System, OnQTEComplete), Z_Construct_UDelegateFunction_BCR_OnQTECompleteSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnQTEComplete_MetaData), NewProp_OnQTEComplete_MetaData) }; // 198194420
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQTE_System_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQTE_System_Statics::NewProp_OnPlayerSubSequenceComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQTE_System_Statics::NewProp_OnPlayerSubSequenceFailed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQTE_System_Statics::NewProp_OnSequenceComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQTE_System_Statics::NewProp_OnSequenceFailed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQTE_System_Statics::NewProp_OnQTEComplete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQTE_System_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UQTE_System_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BCR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQTE_System_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQTE_System_Statics::ClassParams = {
	&UQTE_System::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UQTE_System_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UQTE_System_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQTE_System_Statics::Class_MetaDataParams), Z_Construct_UClass_UQTE_System_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQTE_System()
{
	if (!Z_Registration_Info_UClass_UQTE_System.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQTE_System.OuterSingleton, Z_Construct_UClass_UQTE_System_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQTE_System.OuterSingleton;
}
template<> BCR_API UClass* StaticClass<UQTE_System>()
{
	return UQTE_System::StaticClass();
}
UQTE_System::UQTE_System(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQTE_System);
UQTE_System::~UQTE_System() {}
// End Class UQTE_System

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_QTE_QTE_System_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQTE_System, UQTE_System::StaticClass, TEXT("UQTE_System"), &Z_Registration_Info_UClass_UQTE_System, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQTE_System), 377055321U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_QTE_QTE_System_h_1952917073(TEXT("/Script/BCR"),
	Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_QTE_QTE_System_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_QTE_QTE_System_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
