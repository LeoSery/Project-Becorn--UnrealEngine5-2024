// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCR/Headers/System/QTE/QTE_Subsystem.h"
#include "BCR/Headers/System/QTE/QTETypes.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQTE_Subsystem() {}

// Begin Cross Module References
BCR_API UClass* Z_Construct_UClass_AMainPlayer_NoRegister();
BCR_API UClass* Z_Construct_UClass_UQTE_Subsystem();
BCR_API UClass* Z_Construct_UClass_UQTE_Subsystem_NoRegister();
BCR_API UClass* Z_Construct_UClass_UQTEConfigurationAsset_NoRegister();
BCR_API UEnum* Z_Construct_UEnum_BCR_ESnapPointType();
BCR_API UFunction* Z_Construct_UDelegateFunction_BCR_OnQTEActionProgress__DelegateSignature();
BCR_API UFunction* Z_Construct_UDelegateFunction_BCR_OnQTEComplete__DelegateSignature();
BCR_API UFunction* Z_Construct_UDelegateFunction_BCR_OnSnapPointQTEResult__DelegateSignature();
BCR_API UScriptStruct* Z_Construct_UScriptStruct_FQTEActionProgress();
BCR_API UScriptStruct* Z_Construct_UScriptStruct_FQTEConfiguration();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
UPackage* Z_Construct_UPackage__Script_BCR();
// End Cross Module References

// Begin Delegate FOnSnapPointQTEResult
struct Z_Construct_UDelegateFunction_BCR_OnSnapPointQTEResult__DelegateSignature_Statics
{
	struct _Script_BCR_eventOnSnapPointQTEResult_Parms
	{
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// D\xc3\xa9l\xc3\xa9gu\xc3\xa9s pour communiquer les r\xc3\xa9sultats\n" },
#endif
		{ "ModuleRelativePath", "Headers/System/QTE/QTE_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "D\xc3\xa9l\xc3\xa9gu\xc3\xa9s pour communiquer les r\xc3\xa9sultats" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_BCR_OnSnapPointQTEResult__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_BCR_eventOnSnapPointQTEResult_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_BCR_OnSnapPointQTEResult__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_BCR_eventOnSnapPointQTEResult_Parms), &Z_Construct_UDelegateFunction_BCR_OnSnapPointQTEResult__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BCR_OnSnapPointQTEResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BCR_OnSnapPointQTEResult__DelegateSignature_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCR_OnSnapPointQTEResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BCR_OnSnapPointQTEResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BCR, nullptr, "OnSnapPointQTEResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BCR_OnSnapPointQTEResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCR_OnSnapPointQTEResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BCR_OnSnapPointQTEResult__DelegateSignature_Statics::_Script_BCR_eventOnSnapPointQTEResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCR_OnSnapPointQTEResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BCR_OnSnapPointQTEResult__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_BCR_OnSnapPointQTEResult__DelegateSignature_Statics::_Script_BCR_eventOnSnapPointQTEResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BCR_OnSnapPointQTEResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BCR_OnSnapPointQTEResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSnapPointQTEResult_DelegateWrapper(const FMulticastScriptDelegate& OnSnapPointQTEResult, bool bSuccess)
{
	struct _Script_BCR_eventOnSnapPointQTEResult_Parms
	{
		bool bSuccess;
	};
	_Script_BCR_eventOnSnapPointQTEResult_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	OnSnapPointQTEResult.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSnapPointQTEResult

// Begin Delegate FOnQTEComplete
struct Z_Construct_UDelegateFunction_BCR_OnQTEComplete__DelegateSignature_Statics
{
	struct _Script_BCR_eventOnQTEComplete_Parms
	{
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Headers/System/QTE/QTE_Subsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_BCR_OnQTEComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_BCR_eventOnQTEComplete_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_BCR_OnQTEComplete__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_BCR_eventOnQTEComplete_Parms), &Z_Construct_UDelegateFunction_BCR_OnQTEComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BCR_OnQTEComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BCR_OnQTEComplete__DelegateSignature_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCR_OnQTEComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BCR_OnQTEComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BCR, nullptr, "OnQTEComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BCR_OnQTEComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCR_OnQTEComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BCR_OnQTEComplete__DelegateSignature_Statics::_Script_BCR_eventOnQTEComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCR_OnQTEComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BCR_OnQTEComplete__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_BCR_OnQTEComplete__DelegateSignature_Statics::_Script_BCR_eventOnQTEComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BCR_OnQTEComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BCR_OnQTEComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnQTEComplete_DelegateWrapper(const FMulticastScriptDelegate& OnQTEComplete, bool bSuccess)
{
	struct _Script_BCR_eventOnQTEComplete_Parms
	{
		bool bSuccess;
	};
	_Script_BCR_eventOnQTEComplete_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	OnQTEComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnQTEComplete

// Begin Delegate FOnQTEActionProgress
struct Z_Construct_UDelegateFunction_BCR_OnQTEActionProgress__DelegateSignature_Statics
{
	struct _Script_BCR_eventOnQTEActionProgress_Parms
	{
		ESnapPointType SnapPoint;
		FQTEActionProgress Progress;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Headers/System/QTE/QTE_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Progress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SnapPoint_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SnapPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Progress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_BCR_OnQTEActionProgress__DelegateSignature_Statics::NewProp_SnapPoint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_BCR_OnQTEActionProgress__DelegateSignature_Statics::NewProp_SnapPoint = { "SnapPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BCR_eventOnQTEActionProgress_Parms, SnapPoint), Z_Construct_UEnum_BCR_ESnapPointType, METADATA_PARAMS(0, nullptr) }; // 3685084137
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_BCR_OnQTEActionProgress__DelegateSignature_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BCR_eventOnQTEActionProgress_Parms, Progress), Z_Construct_UScriptStruct_FQTEActionProgress, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Progress_MetaData), NewProp_Progress_MetaData) }; // 2649691905
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BCR_OnQTEActionProgress__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BCR_OnQTEActionProgress__DelegateSignature_Statics::NewProp_SnapPoint_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BCR_OnQTEActionProgress__DelegateSignature_Statics::NewProp_SnapPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BCR_OnQTEActionProgress__DelegateSignature_Statics::NewProp_Progress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCR_OnQTEActionProgress__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BCR_OnQTEActionProgress__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BCR, nullptr, "OnQTEActionProgress__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BCR_OnQTEActionProgress__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCR_OnQTEActionProgress__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BCR_OnQTEActionProgress__DelegateSignature_Statics::_Script_BCR_eventOnQTEActionProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCR_OnQTEActionProgress__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BCR_OnQTEActionProgress__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_BCR_OnQTEActionProgress__DelegateSignature_Statics::_Script_BCR_eventOnQTEActionProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BCR_OnQTEActionProgress__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BCR_OnQTEActionProgress__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnQTEActionProgress_DelegateWrapper(const FMulticastScriptDelegate& OnQTEActionProgress, ESnapPointType SnapPoint, FQTEActionProgress const& Progress)
{
	struct _Script_BCR_eventOnQTEActionProgress_Parms
	{
		ESnapPointType SnapPoint;
		FQTEActionProgress Progress;
	};
	_Script_BCR_eventOnQTEActionProgress_Parms Parms;
	Parms.SnapPoint=SnapPoint;
	Parms.Progress=Progress;
	OnQTEActionProgress.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnQTEActionProgress

// Begin Class UQTE_Subsystem Function OnPlayerEnterSnapPoint
struct Z_Construct_UFunction_UQTE_Subsystem_OnPlayerEnterSnapPoint_Statics
{
	struct QTE_Subsystem_eventOnPlayerEnterSnapPoint_Parms
	{
		AMainPlayer* Player;
		ESnapPointType SnapPoint;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "QTE" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gestion des joueurs aux snap points\n" },
#endif
		{ "ModuleRelativePath", "Headers/System/QTE/QTE_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gestion des joueurs aux snap points" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SnapPoint_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SnapPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQTE_Subsystem_OnPlayerEnterSnapPoint_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QTE_Subsystem_eventOnPlayerEnterSnapPoint_Parms, Player), Z_Construct_UClass_AMainPlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQTE_Subsystem_OnPlayerEnterSnapPoint_Statics::NewProp_SnapPoint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQTE_Subsystem_OnPlayerEnterSnapPoint_Statics::NewProp_SnapPoint = { "SnapPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QTE_Subsystem_eventOnPlayerEnterSnapPoint_Parms, SnapPoint), Z_Construct_UEnum_BCR_ESnapPointType, METADATA_PARAMS(0, nullptr) }; // 3685084137
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQTE_Subsystem_OnPlayerEnterSnapPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQTE_Subsystem_OnPlayerEnterSnapPoint_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQTE_Subsystem_OnPlayerEnterSnapPoint_Statics::NewProp_SnapPoint_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQTE_Subsystem_OnPlayerEnterSnapPoint_Statics::NewProp_SnapPoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQTE_Subsystem_OnPlayerEnterSnapPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQTE_Subsystem_OnPlayerEnterSnapPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQTE_Subsystem, nullptr, "OnPlayerEnterSnapPoint", nullptr, nullptr, Z_Construct_UFunction_UQTE_Subsystem_OnPlayerEnterSnapPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQTE_Subsystem_OnPlayerEnterSnapPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQTE_Subsystem_OnPlayerEnterSnapPoint_Statics::QTE_Subsystem_eventOnPlayerEnterSnapPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQTE_Subsystem_OnPlayerEnterSnapPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQTE_Subsystem_OnPlayerEnterSnapPoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQTE_Subsystem_OnPlayerEnterSnapPoint_Statics::QTE_Subsystem_eventOnPlayerEnterSnapPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQTE_Subsystem_OnPlayerEnterSnapPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQTE_Subsystem_OnPlayerEnterSnapPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQTE_Subsystem::execOnPlayerEnterSnapPoint)
{
	P_GET_OBJECT(AMainPlayer,Z_Param_Player);
	P_GET_ENUM(ESnapPointType,Z_Param_SnapPoint);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayerEnterSnapPoint(Z_Param_Player,ESnapPointType(Z_Param_SnapPoint));
	P_NATIVE_END;
}
// End Class UQTE_Subsystem Function OnPlayerEnterSnapPoint

// Begin Class UQTE_Subsystem Function OnPlayerLeaveSnapPoint
struct Z_Construct_UFunction_UQTE_Subsystem_OnPlayerLeaveSnapPoint_Statics
{
	struct QTE_Subsystem_eventOnPlayerLeaveSnapPoint_Parms
	{
		AMainPlayer* Player;
		ESnapPointType SnapPoint;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "QTE" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTE_Subsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SnapPoint_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SnapPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQTE_Subsystem_OnPlayerLeaveSnapPoint_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QTE_Subsystem_eventOnPlayerLeaveSnapPoint_Parms, Player), Z_Construct_UClass_AMainPlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQTE_Subsystem_OnPlayerLeaveSnapPoint_Statics::NewProp_SnapPoint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQTE_Subsystem_OnPlayerLeaveSnapPoint_Statics::NewProp_SnapPoint = { "SnapPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QTE_Subsystem_eventOnPlayerLeaveSnapPoint_Parms, SnapPoint), Z_Construct_UEnum_BCR_ESnapPointType, METADATA_PARAMS(0, nullptr) }; // 3685084137
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQTE_Subsystem_OnPlayerLeaveSnapPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQTE_Subsystem_OnPlayerLeaveSnapPoint_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQTE_Subsystem_OnPlayerLeaveSnapPoint_Statics::NewProp_SnapPoint_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQTE_Subsystem_OnPlayerLeaveSnapPoint_Statics::NewProp_SnapPoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQTE_Subsystem_OnPlayerLeaveSnapPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQTE_Subsystem_OnPlayerLeaveSnapPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQTE_Subsystem, nullptr, "OnPlayerLeaveSnapPoint", nullptr, nullptr, Z_Construct_UFunction_UQTE_Subsystem_OnPlayerLeaveSnapPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQTE_Subsystem_OnPlayerLeaveSnapPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQTE_Subsystem_OnPlayerLeaveSnapPoint_Statics::QTE_Subsystem_eventOnPlayerLeaveSnapPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQTE_Subsystem_OnPlayerLeaveSnapPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQTE_Subsystem_OnPlayerLeaveSnapPoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQTE_Subsystem_OnPlayerLeaveSnapPoint_Statics::QTE_Subsystem_eventOnPlayerLeaveSnapPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQTE_Subsystem_OnPlayerLeaveSnapPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQTE_Subsystem_OnPlayerLeaveSnapPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQTE_Subsystem::execOnPlayerLeaveSnapPoint)
{
	P_GET_OBJECT(AMainPlayer,Z_Param_Player);
	P_GET_ENUM(ESnapPointType,Z_Param_SnapPoint);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayerLeaveSnapPoint(Z_Param_Player,ESnapPointType(Z_Param_SnapPoint));
	P_NATIVE_END;
}
// End Class UQTE_Subsystem Function OnPlayerLeaveSnapPoint

// Begin Class UQTE_Subsystem Function SetQTEPaused
struct Z_Construct_UFunction_UQTE_Subsystem_SetQTEPaused_Statics
{
	struct QTE_Subsystem_eventSetQTEPaused_Parms
	{
		bool bPaused;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "QTE" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTE_Subsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bPaused_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPaused;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UQTE_Subsystem_SetQTEPaused_Statics::NewProp_bPaused_SetBit(void* Obj)
{
	((QTE_Subsystem_eventSetQTEPaused_Parms*)Obj)->bPaused = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQTE_Subsystem_SetQTEPaused_Statics::NewProp_bPaused = { "bPaused", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(QTE_Subsystem_eventSetQTEPaused_Parms), &Z_Construct_UFunction_UQTE_Subsystem_SetQTEPaused_Statics::NewProp_bPaused_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQTE_Subsystem_SetQTEPaused_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQTE_Subsystem_SetQTEPaused_Statics::NewProp_bPaused,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQTE_Subsystem_SetQTEPaused_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQTE_Subsystem_SetQTEPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQTE_Subsystem, nullptr, "SetQTEPaused", nullptr, nullptr, Z_Construct_UFunction_UQTE_Subsystem_SetQTEPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQTE_Subsystem_SetQTEPaused_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQTE_Subsystem_SetQTEPaused_Statics::QTE_Subsystem_eventSetQTEPaused_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQTE_Subsystem_SetQTEPaused_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQTE_Subsystem_SetQTEPaused_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQTE_Subsystem_SetQTEPaused_Statics::QTE_Subsystem_eventSetQTEPaused_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQTE_Subsystem_SetQTEPaused()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQTE_Subsystem_SetQTEPaused_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQTE_Subsystem::execSetQTEPaused)
{
	P_GET_UBOOL(Z_Param_bPaused);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetQTEPaused(Z_Param_bPaused);
	P_NATIVE_END;
}
// End Class UQTE_Subsystem Function SetQTEPaused

// Begin Class UQTE_Subsystem Function StartQTE
struct Z_Construct_UFunction_UQTE_Subsystem_StartQTE_Statics
{
	struct QTE_Subsystem_eventStartQTE_Parms
	{
		FQTEConfiguration Config;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "QTE" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTE_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQTE_Subsystem_StartQTE_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QTE_Subsystem_eventStartQTE_Parms, Config), Z_Construct_UScriptStruct_FQTEConfiguration, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 2591637879
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQTE_Subsystem_StartQTE_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQTE_Subsystem_StartQTE_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQTE_Subsystem_StartQTE_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQTE_Subsystem_StartQTE_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQTE_Subsystem, nullptr, "StartQTE", nullptr, nullptr, Z_Construct_UFunction_UQTE_Subsystem_StartQTE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQTE_Subsystem_StartQTE_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQTE_Subsystem_StartQTE_Statics::QTE_Subsystem_eventStartQTE_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQTE_Subsystem_StartQTE_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQTE_Subsystem_StartQTE_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQTE_Subsystem_StartQTE_Statics::QTE_Subsystem_eventStartQTE_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQTE_Subsystem_StartQTE()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQTE_Subsystem_StartQTE_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQTE_Subsystem::execStartQTE)
{
	P_GET_STRUCT(FQTEConfiguration,Z_Param_Config);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartQTE(Z_Param_Config);
	P_NATIVE_END;
}
// End Class UQTE_Subsystem Function StartQTE

// Begin Class UQTE_Subsystem Function StartQTEFromAsset
struct Z_Construct_UFunction_UQTE_Subsystem_StartQTEFromAsset_Statics
{
	struct QTE_Subsystem_eventStartQTEFromAsset_Parms
	{
		const UQTEConfigurationAsset* Config;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "QTE" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Contr\xc3\xb4le du QTE\n" },
#endif
		{ "ModuleRelativePath", "Headers/System/QTE/QTE_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contr\xc3\xb4le du QTE" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQTE_Subsystem_StartQTEFromAsset_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QTE_Subsystem_eventStartQTEFromAsset_Parms, Config), Z_Construct_UClass_UQTEConfigurationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQTE_Subsystem_StartQTEFromAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQTE_Subsystem_StartQTEFromAsset_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQTE_Subsystem_StartQTEFromAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQTE_Subsystem_StartQTEFromAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQTE_Subsystem, nullptr, "StartQTEFromAsset", nullptr, nullptr, Z_Construct_UFunction_UQTE_Subsystem_StartQTEFromAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQTE_Subsystem_StartQTEFromAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQTE_Subsystem_StartQTEFromAsset_Statics::QTE_Subsystem_eventStartQTEFromAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQTE_Subsystem_StartQTEFromAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQTE_Subsystem_StartQTEFromAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQTE_Subsystem_StartQTEFromAsset_Statics::QTE_Subsystem_eventStartQTEFromAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQTE_Subsystem_StartQTEFromAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQTE_Subsystem_StartQTEFromAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQTE_Subsystem::execStartQTEFromAsset)
{
	P_GET_OBJECT(UQTEConfigurationAsset,Z_Param_Config);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartQTEFromAsset(Z_Param_Config);
	P_NATIVE_END;
}
// End Class UQTE_Subsystem Function StartQTEFromAsset

// Begin Class UQTE_Subsystem Function StopQTE
struct Z_Construct_UFunction_UQTE_Subsystem_StopQTE_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "QTE" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTE_Subsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQTE_Subsystem_StopQTE_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQTE_Subsystem, nullptr, "StopQTE", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQTE_Subsystem_StopQTE_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQTE_Subsystem_StopQTE_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UQTE_Subsystem_StopQTE()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQTE_Subsystem_StopQTE_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQTE_Subsystem::execStopQTE)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopQTE();
	P_NATIVE_END;
}
// End Class UQTE_Subsystem Function StopQTE

// Begin Class UQTE_Subsystem
void UQTE_Subsystem::StaticRegisterNativesUQTE_Subsystem()
{
	UClass* Class = UQTE_Subsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnPlayerEnterSnapPoint", &UQTE_Subsystem::execOnPlayerEnterSnapPoint },
		{ "OnPlayerLeaveSnapPoint", &UQTE_Subsystem::execOnPlayerLeaveSnapPoint },
		{ "SetQTEPaused", &UQTE_Subsystem::execSetQTEPaused },
		{ "StartQTE", &UQTE_Subsystem::execStartQTE },
		{ "StartQTEFromAsset", &UQTE_Subsystem::execStartQTEFromAsset },
		{ "StopQTE", &UQTE_Subsystem::execStopQTE },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQTE_Subsystem);
UClass* Z_Construct_UClass_UQTE_Subsystem_NoRegister()
{
	return UQTE_Subsystem::StaticClass();
}
struct Z_Construct_UClass_UQTE_Subsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Headers/System/QTE/QTE_Subsystem.h" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTE_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSnapPointFirstResult_MetaData[] = {
		{ "Category", "QTE" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// D\xc3\xa9l\xc3\xa9gu\xc3\xa9s pour les \xc3\xa9v\xc3\xa9nements\n" },
#endif
		{ "ModuleRelativePath", "Headers/System/QTE/QTE_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "D\xc3\xa9l\xc3\xa9gu\xc3\xa9s pour les \xc3\xa9v\xc3\xa9nements" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSnapPointSecondResult_MetaData[] = {
		{ "Category", "QTE" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTE_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnQTEComplete_MetaData[] = {
		{ "Category", "QTE" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTE_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnQTEActionProgress_MetaData[] = {
		{ "Category", "QTE" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTE_Subsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSnapPointFirstResult;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSnapPointSecondResult;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQTEComplete;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQTEActionProgress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UQTE_Subsystem_OnPlayerEnterSnapPoint, "OnPlayerEnterSnapPoint" }, // 1513008500
		{ &Z_Construct_UFunction_UQTE_Subsystem_OnPlayerLeaveSnapPoint, "OnPlayerLeaveSnapPoint" }, // 251110589
		{ &Z_Construct_UFunction_UQTE_Subsystem_SetQTEPaused, "SetQTEPaused" }, // 172507476
		{ &Z_Construct_UFunction_UQTE_Subsystem_StartQTE, "StartQTE" }, // 3348586932
		{ &Z_Construct_UFunction_UQTE_Subsystem_StartQTEFromAsset, "StartQTEFromAsset" }, // 48419788
		{ &Z_Construct_UFunction_UQTE_Subsystem_StopQTE, "StopQTE" }, // 909222509
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQTE_Subsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQTE_Subsystem_Statics::NewProp_OnSnapPointFirstResult = { "OnSnapPointFirstResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQTE_Subsystem, OnSnapPointFirstResult), Z_Construct_UDelegateFunction_BCR_OnSnapPointQTEResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSnapPointFirstResult_MetaData), NewProp_OnSnapPointFirstResult_MetaData) }; // 1957522923
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQTE_Subsystem_Statics::NewProp_OnSnapPointSecondResult = { "OnSnapPointSecondResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQTE_Subsystem, OnSnapPointSecondResult), Z_Construct_UDelegateFunction_BCR_OnSnapPointQTEResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSnapPointSecondResult_MetaData), NewProp_OnSnapPointSecondResult_MetaData) }; // 1957522923
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQTE_Subsystem_Statics::NewProp_OnQTEComplete = { "OnQTEComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQTE_Subsystem, OnQTEComplete), Z_Construct_UDelegateFunction_BCR_OnQTEComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnQTEComplete_MetaData), NewProp_OnQTEComplete_MetaData) }; // 2962707613
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQTE_Subsystem_Statics::NewProp_OnQTEActionProgress = { "OnQTEActionProgress", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQTE_Subsystem, OnQTEActionProgress), Z_Construct_UDelegateFunction_BCR_OnQTEActionProgress__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnQTEActionProgress_MetaData), NewProp_OnQTEActionProgress_MetaData) }; // 1380251383
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQTE_Subsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQTE_Subsystem_Statics::NewProp_OnSnapPointFirstResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQTE_Subsystem_Statics::NewProp_OnSnapPointSecondResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQTE_Subsystem_Statics::NewProp_OnQTEComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQTE_Subsystem_Statics::NewProp_OnQTEActionProgress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQTE_Subsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UQTE_Subsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_BCR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQTE_Subsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQTE_Subsystem_Statics::ClassParams = {
	&UQTE_Subsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UQTE_Subsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UQTE_Subsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQTE_Subsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UQTE_Subsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQTE_Subsystem()
{
	if (!Z_Registration_Info_UClass_UQTE_Subsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQTE_Subsystem.OuterSingleton, Z_Construct_UClass_UQTE_Subsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQTE_Subsystem.OuterSingleton;
}
template<> BCR_API UClass* StaticClass<UQTE_Subsystem>()
{
	return UQTE_Subsystem::StaticClass();
}
UQTE_Subsystem::UQTE_Subsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQTE_Subsystem);
UQTE_Subsystem::~UQTE_Subsystem() {}
// End Class UQTE_Subsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_mathi_Documents_GitHub_M2_Project_Source_BCR_Headers_System_QTE_QTE_Subsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQTE_Subsystem, UQTE_Subsystem::StaticClass, TEXT("UQTE_Subsystem"), &Z_Registration_Info_UClass_UQTE_Subsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQTE_Subsystem), 1501368836U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mathi_Documents_GitHub_M2_Project_Source_BCR_Headers_System_QTE_QTE_Subsystem_h_1325284193(TEXT("/Script/BCR"),
	Z_CompiledInDeferFile_FID_Users_mathi_Documents_GitHub_M2_Project_Source_BCR_Headers_System_QTE_QTE_Subsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mathi_Documents_GitHub_M2_Project_Source_BCR_Headers_System_QTE_QTE_Subsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
