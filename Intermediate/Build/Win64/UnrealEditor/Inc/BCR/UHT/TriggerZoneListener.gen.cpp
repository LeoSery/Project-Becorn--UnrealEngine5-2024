// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCR/Headers/System/Event/TriggerZoneListener.h"
#include "BCR/Headers/System/Event/TriggerZone.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerZoneListener() {}

// Begin Cross Module References
BCR_API UClass* Z_Construct_UClass_UTriggerZoneListener();
BCR_API UClass* Z_Construct_UClass_UTriggerZoneListener_NoRegister();
BCR_API UScriptStruct* Z_Construct_UScriptStruct_FTriggerData();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_BCR();
// End Cross Module References

// Begin Interface UTriggerZoneListener Function OnOnePlayerEnterInnerZone
struct TriggerZoneListener_eventOnOnePlayerEnterInnerZone_Parms
{
	FTriggerData TriggerData;
};
void ITriggerZoneListener::OnOnePlayerEnterInnerZone(FTriggerData const& TriggerData)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnOnePlayerEnterInnerZone instead.");
}
static FName NAME_UTriggerZoneListener_OnOnePlayerEnterInnerZone = FName(TEXT("OnOnePlayerEnterInnerZone"));
void ITriggerZoneListener::Execute_OnOnePlayerEnterInnerZone(UObject* O, FTriggerData const& TriggerData)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UTriggerZoneListener::StaticClass()));
	TriggerZoneListener_eventOnOnePlayerEnterInnerZone_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UTriggerZoneListener_OnOnePlayerEnterInnerZone);
	if (Func)
	{
		Parms.TriggerData=TriggerData;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ITriggerZoneListener*)(O->GetNativeInterfaceAddress(UTriggerZoneListener::StaticClass())))
	{
		I->OnOnePlayerEnterInnerZone_Implementation(TriggerData);
	}
}
struct Z_Construct_UFunction_UTriggerZoneListener_OnOnePlayerEnterInnerZone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////// INNER ZONE EVENTS ////////\n/// Enter\n" },
#endif
		{ "ModuleRelativePath", "Headers/System/Event/TriggerZoneListener.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "INNER ZONE EVENTS\nEnter" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TriggerData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerZoneListener_OnOnePlayerEnterInnerZone_Statics::NewProp_TriggerData = { "TriggerData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerZoneListener_eventOnOnePlayerEnterInnerZone_Parms, TriggerData), Z_Construct_UScriptStruct_FTriggerData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerData_MetaData), NewProp_TriggerData_MetaData) }; // 1974293367
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerZoneListener_OnOnePlayerEnterInnerZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerZoneListener_OnOnePlayerEnterInnerZone_Statics::NewProp_TriggerData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerZoneListener_OnOnePlayerEnterInnerZone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerZoneListener_OnOnePlayerEnterInnerZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerZoneListener, nullptr, "OnOnePlayerEnterInnerZone", nullptr, nullptr, Z_Construct_UFunction_UTriggerZoneListener_OnOnePlayerEnterInnerZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerZoneListener_OnOnePlayerEnterInnerZone_Statics::PropPointers), sizeof(TriggerZoneListener_eventOnOnePlayerEnterInnerZone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerZoneListener_OnOnePlayerEnterInnerZone_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTriggerZoneListener_OnOnePlayerEnterInnerZone_Statics::Function_MetaDataParams) };
static_assert(sizeof(TriggerZoneListener_eventOnOnePlayerEnterInnerZone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTriggerZoneListener_OnOnePlayerEnterInnerZone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTriggerZoneListener_OnOnePlayerEnterInnerZone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITriggerZoneListener::execOnOnePlayerEnterInnerZone)
{
	P_GET_STRUCT_REF(FTriggerData,Z_Param_Out_TriggerData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOnePlayerEnterInnerZone_Implementation(Z_Param_Out_TriggerData);
	P_NATIVE_END;
}
// End Interface UTriggerZoneListener Function OnOnePlayerEnterInnerZone

// Begin Interface UTriggerZoneListener Function OnOnePlayerEnterOuterZone
struct TriggerZoneListener_eventOnOnePlayerEnterOuterZone_Parms
{
	FTriggerData TriggerData;
};
void ITriggerZoneListener::OnOnePlayerEnterOuterZone(FTriggerData const& TriggerData)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnOnePlayerEnterOuterZone instead.");
}
static FName NAME_UTriggerZoneListener_OnOnePlayerEnterOuterZone = FName(TEXT("OnOnePlayerEnterOuterZone"));
void ITriggerZoneListener::Execute_OnOnePlayerEnterOuterZone(UObject* O, FTriggerData const& TriggerData)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UTriggerZoneListener::StaticClass()));
	TriggerZoneListener_eventOnOnePlayerEnterOuterZone_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UTriggerZoneListener_OnOnePlayerEnterOuterZone);
	if (Func)
	{
		Parms.TriggerData=TriggerData;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ITriggerZoneListener*)(O->GetNativeInterfaceAddress(UTriggerZoneListener::StaticClass())))
	{
		I->OnOnePlayerEnterOuterZone_Implementation(TriggerData);
	}
}
struct Z_Construct_UFunction_UTriggerZoneListener_OnOnePlayerEnterOuterZone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////// OUTER ZONE EVENTS ////////\n/// Enter\n" },
#endif
		{ "ModuleRelativePath", "Headers/System/Event/TriggerZoneListener.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "OUTER ZONE EVENTS\nEnter" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TriggerData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerZoneListener_OnOnePlayerEnterOuterZone_Statics::NewProp_TriggerData = { "TriggerData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerZoneListener_eventOnOnePlayerEnterOuterZone_Parms, TriggerData), Z_Construct_UScriptStruct_FTriggerData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerData_MetaData), NewProp_TriggerData_MetaData) }; // 1974293367
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerZoneListener_OnOnePlayerEnterOuterZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerZoneListener_OnOnePlayerEnterOuterZone_Statics::NewProp_TriggerData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerZoneListener_OnOnePlayerEnterOuterZone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerZoneListener_OnOnePlayerEnterOuterZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerZoneListener, nullptr, "OnOnePlayerEnterOuterZone", nullptr, nullptr, Z_Construct_UFunction_UTriggerZoneListener_OnOnePlayerEnterOuterZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerZoneListener_OnOnePlayerEnterOuterZone_Statics::PropPointers), sizeof(TriggerZoneListener_eventOnOnePlayerEnterOuterZone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerZoneListener_OnOnePlayerEnterOuterZone_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTriggerZoneListener_OnOnePlayerEnterOuterZone_Statics::Function_MetaDataParams) };
static_assert(sizeof(TriggerZoneListener_eventOnOnePlayerEnterOuterZone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTriggerZoneListener_OnOnePlayerEnterOuterZone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTriggerZoneListener_OnOnePlayerEnterOuterZone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITriggerZoneListener::execOnOnePlayerEnterOuterZone)
{
	P_GET_STRUCT_REF(FTriggerData,Z_Param_Out_TriggerData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOnePlayerEnterOuterZone_Implementation(Z_Param_Out_TriggerData);
	P_NATIVE_END;
}
// End Interface UTriggerZoneListener Function OnOnePlayerEnterOuterZone

// Begin Interface UTriggerZoneListener Function OnPlayersExitInnerZone
struct TriggerZoneListener_eventOnPlayersExitInnerZone_Parms
{
	FTriggerData TriggerData;
};
void ITriggerZoneListener::OnPlayersExitInnerZone(FTriggerData const& TriggerData)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnPlayersExitInnerZone instead.");
}
static FName NAME_UTriggerZoneListener_OnPlayersExitInnerZone = FName(TEXT("OnPlayersExitInnerZone"));
void ITriggerZoneListener::Execute_OnPlayersExitInnerZone(UObject* O, FTriggerData const& TriggerData)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UTriggerZoneListener::StaticClass()));
	TriggerZoneListener_eventOnPlayersExitInnerZone_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UTriggerZoneListener_OnPlayersExitInnerZone);
	if (Func)
	{
		Parms.TriggerData=TriggerData;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ITriggerZoneListener*)(O->GetNativeInterfaceAddress(UTriggerZoneListener::StaticClass())))
	{
		I->OnPlayersExitInnerZone_Implementation(TriggerData);
	}
}
struct Z_Construct_UFunction_UTriggerZoneListener_OnPlayersExitInnerZone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Exit\n" },
#endif
		{ "ModuleRelativePath", "Headers/System/Event/TriggerZoneListener.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Exit" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TriggerData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerZoneListener_OnPlayersExitInnerZone_Statics::NewProp_TriggerData = { "TriggerData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerZoneListener_eventOnPlayersExitInnerZone_Parms, TriggerData), Z_Construct_UScriptStruct_FTriggerData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerData_MetaData), NewProp_TriggerData_MetaData) }; // 1974293367
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerZoneListener_OnPlayersExitInnerZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerZoneListener_OnPlayersExitInnerZone_Statics::NewProp_TriggerData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerZoneListener_OnPlayersExitInnerZone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerZoneListener_OnPlayersExitInnerZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerZoneListener, nullptr, "OnPlayersExitInnerZone", nullptr, nullptr, Z_Construct_UFunction_UTriggerZoneListener_OnPlayersExitInnerZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerZoneListener_OnPlayersExitInnerZone_Statics::PropPointers), sizeof(TriggerZoneListener_eventOnPlayersExitInnerZone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerZoneListener_OnPlayersExitInnerZone_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTriggerZoneListener_OnPlayersExitInnerZone_Statics::Function_MetaDataParams) };
static_assert(sizeof(TriggerZoneListener_eventOnPlayersExitInnerZone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTriggerZoneListener_OnPlayersExitInnerZone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTriggerZoneListener_OnPlayersExitInnerZone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITriggerZoneListener::execOnPlayersExitInnerZone)
{
	P_GET_STRUCT_REF(FTriggerData,Z_Param_Out_TriggerData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayersExitInnerZone_Implementation(Z_Param_Out_TriggerData);
	P_NATIVE_END;
}
// End Interface UTriggerZoneListener Function OnPlayersExitInnerZone

// Begin Interface UTriggerZoneListener Function OnPlayersExitOuterZone
struct TriggerZoneListener_eventOnPlayersExitOuterZone_Parms
{
	FTriggerData TriggerData;
};
void ITriggerZoneListener::OnPlayersExitOuterZone(FTriggerData const& TriggerData)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnPlayersExitOuterZone instead.");
}
static FName NAME_UTriggerZoneListener_OnPlayersExitOuterZone = FName(TEXT("OnPlayersExitOuterZone"));
void ITriggerZoneListener::Execute_OnPlayersExitOuterZone(UObject* O, FTriggerData const& TriggerData)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UTriggerZoneListener::StaticClass()));
	TriggerZoneListener_eventOnPlayersExitOuterZone_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UTriggerZoneListener_OnPlayersExitOuterZone);
	if (Func)
	{
		Parms.TriggerData=TriggerData;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ITriggerZoneListener*)(O->GetNativeInterfaceAddress(UTriggerZoneListener::StaticClass())))
	{
		I->OnPlayersExitOuterZone_Implementation(TriggerData);
	}
}
struct Z_Construct_UFunction_UTriggerZoneListener_OnPlayersExitOuterZone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Exit\n" },
#endif
		{ "ModuleRelativePath", "Headers/System/Event/TriggerZoneListener.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Exit" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TriggerData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerZoneListener_OnPlayersExitOuterZone_Statics::NewProp_TriggerData = { "TriggerData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerZoneListener_eventOnPlayersExitOuterZone_Parms, TriggerData), Z_Construct_UScriptStruct_FTriggerData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerData_MetaData), NewProp_TriggerData_MetaData) }; // 1974293367
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerZoneListener_OnPlayersExitOuterZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerZoneListener_OnPlayersExitOuterZone_Statics::NewProp_TriggerData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerZoneListener_OnPlayersExitOuterZone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerZoneListener_OnPlayersExitOuterZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerZoneListener, nullptr, "OnPlayersExitOuterZone", nullptr, nullptr, Z_Construct_UFunction_UTriggerZoneListener_OnPlayersExitOuterZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerZoneListener_OnPlayersExitOuterZone_Statics::PropPointers), sizeof(TriggerZoneListener_eventOnPlayersExitOuterZone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerZoneListener_OnPlayersExitOuterZone_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTriggerZoneListener_OnPlayersExitOuterZone_Statics::Function_MetaDataParams) };
static_assert(sizeof(TriggerZoneListener_eventOnPlayersExitOuterZone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTriggerZoneListener_OnPlayersExitOuterZone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTriggerZoneListener_OnPlayersExitOuterZone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITriggerZoneListener::execOnPlayersExitOuterZone)
{
	P_GET_STRUCT_REF(FTriggerData,Z_Param_Out_TriggerData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayersExitOuterZone_Implementation(Z_Param_Out_TriggerData);
	P_NATIVE_END;
}
// End Interface UTriggerZoneListener Function OnPlayersExitOuterZone

// Begin Interface UTriggerZoneListener Function OnTwoPlayersEnterInnerZone
struct TriggerZoneListener_eventOnTwoPlayersEnterInnerZone_Parms
{
	FTriggerData TriggerData;
};
void ITriggerZoneListener::OnTwoPlayersEnterInnerZone(FTriggerData const& TriggerData)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnTwoPlayersEnterInnerZone instead.");
}
static FName NAME_UTriggerZoneListener_OnTwoPlayersEnterInnerZone = FName(TEXT("OnTwoPlayersEnterInnerZone"));
void ITriggerZoneListener::Execute_OnTwoPlayersEnterInnerZone(UObject* O, FTriggerData const& TriggerData)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UTriggerZoneListener::StaticClass()));
	TriggerZoneListener_eventOnTwoPlayersEnterInnerZone_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UTriggerZoneListener_OnTwoPlayersEnterInnerZone);
	if (Func)
	{
		Parms.TriggerData=TriggerData;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ITriggerZoneListener*)(O->GetNativeInterfaceAddress(UTriggerZoneListener::StaticClass())))
	{
		I->OnTwoPlayersEnterInnerZone_Implementation(TriggerData);
	}
}
struct Z_Construct_UFunction_UTriggerZoneListener_OnTwoPlayersEnterInnerZone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Headers/System/Event/TriggerZoneListener.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TriggerData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerZoneListener_OnTwoPlayersEnterInnerZone_Statics::NewProp_TriggerData = { "TriggerData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerZoneListener_eventOnTwoPlayersEnterInnerZone_Parms, TriggerData), Z_Construct_UScriptStruct_FTriggerData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerData_MetaData), NewProp_TriggerData_MetaData) }; // 1974293367
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerZoneListener_OnTwoPlayersEnterInnerZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerZoneListener_OnTwoPlayersEnterInnerZone_Statics::NewProp_TriggerData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerZoneListener_OnTwoPlayersEnterInnerZone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerZoneListener_OnTwoPlayersEnterInnerZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerZoneListener, nullptr, "OnTwoPlayersEnterInnerZone", nullptr, nullptr, Z_Construct_UFunction_UTriggerZoneListener_OnTwoPlayersEnterInnerZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerZoneListener_OnTwoPlayersEnterInnerZone_Statics::PropPointers), sizeof(TriggerZoneListener_eventOnTwoPlayersEnterInnerZone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerZoneListener_OnTwoPlayersEnterInnerZone_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTriggerZoneListener_OnTwoPlayersEnterInnerZone_Statics::Function_MetaDataParams) };
static_assert(sizeof(TriggerZoneListener_eventOnTwoPlayersEnterInnerZone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTriggerZoneListener_OnTwoPlayersEnterInnerZone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTriggerZoneListener_OnTwoPlayersEnterInnerZone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITriggerZoneListener::execOnTwoPlayersEnterInnerZone)
{
	P_GET_STRUCT_REF(FTriggerData,Z_Param_Out_TriggerData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTwoPlayersEnterInnerZone_Implementation(Z_Param_Out_TriggerData);
	P_NATIVE_END;
}
// End Interface UTriggerZoneListener Function OnTwoPlayersEnterInnerZone

// Begin Interface UTriggerZoneListener Function OnTwoPlayersEnterOuterZone
struct TriggerZoneListener_eventOnTwoPlayersEnterOuterZone_Parms
{
	FTriggerData TriggerData;
};
void ITriggerZoneListener::OnTwoPlayersEnterOuterZone(FTriggerData const& TriggerData)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnTwoPlayersEnterOuterZone instead.");
}
static FName NAME_UTriggerZoneListener_OnTwoPlayersEnterOuterZone = FName(TEXT("OnTwoPlayersEnterOuterZone"));
void ITriggerZoneListener::Execute_OnTwoPlayersEnterOuterZone(UObject* O, FTriggerData const& TriggerData)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UTriggerZoneListener::StaticClass()));
	TriggerZoneListener_eventOnTwoPlayersEnterOuterZone_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UTriggerZoneListener_OnTwoPlayersEnterOuterZone);
	if (Func)
	{
		Parms.TriggerData=TriggerData;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ITriggerZoneListener*)(O->GetNativeInterfaceAddress(UTriggerZoneListener::StaticClass())))
	{
		I->OnTwoPlayersEnterOuterZone_Implementation(TriggerData);
	}
}
struct Z_Construct_UFunction_UTriggerZoneListener_OnTwoPlayersEnterOuterZone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Headers/System/Event/TriggerZoneListener.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TriggerData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerZoneListener_OnTwoPlayersEnterOuterZone_Statics::NewProp_TriggerData = { "TriggerData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerZoneListener_eventOnTwoPlayersEnterOuterZone_Parms, TriggerData), Z_Construct_UScriptStruct_FTriggerData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerData_MetaData), NewProp_TriggerData_MetaData) }; // 1974293367
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerZoneListener_OnTwoPlayersEnterOuterZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerZoneListener_OnTwoPlayersEnterOuterZone_Statics::NewProp_TriggerData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerZoneListener_OnTwoPlayersEnterOuterZone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerZoneListener_OnTwoPlayersEnterOuterZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerZoneListener, nullptr, "OnTwoPlayersEnterOuterZone", nullptr, nullptr, Z_Construct_UFunction_UTriggerZoneListener_OnTwoPlayersEnterOuterZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerZoneListener_OnTwoPlayersEnterOuterZone_Statics::PropPointers), sizeof(TriggerZoneListener_eventOnTwoPlayersEnterOuterZone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerZoneListener_OnTwoPlayersEnterOuterZone_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTriggerZoneListener_OnTwoPlayersEnterOuterZone_Statics::Function_MetaDataParams) };
static_assert(sizeof(TriggerZoneListener_eventOnTwoPlayersEnterOuterZone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTriggerZoneListener_OnTwoPlayersEnterOuterZone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTriggerZoneListener_OnTwoPlayersEnterOuterZone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITriggerZoneListener::execOnTwoPlayersEnterOuterZone)
{
	P_GET_STRUCT_REF(FTriggerData,Z_Param_Out_TriggerData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTwoPlayersEnterOuterZone_Implementation(Z_Param_Out_TriggerData);
	P_NATIVE_END;
}
// End Interface UTriggerZoneListener Function OnTwoPlayersEnterOuterZone

// Begin Interface UTriggerZoneListener
void UTriggerZoneListener::StaticRegisterNativesUTriggerZoneListener()
{
	UClass* Class = UTriggerZoneListener::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnOnePlayerEnterInnerZone", &ITriggerZoneListener::execOnOnePlayerEnterInnerZone },
		{ "OnOnePlayerEnterOuterZone", &ITriggerZoneListener::execOnOnePlayerEnterOuterZone },
		{ "OnPlayersExitInnerZone", &ITriggerZoneListener::execOnPlayersExitInnerZone },
		{ "OnPlayersExitOuterZone", &ITriggerZoneListener::execOnPlayersExitOuterZone },
		{ "OnTwoPlayersEnterInnerZone", &ITriggerZoneListener::execOnTwoPlayersEnterInnerZone },
		{ "OnTwoPlayersEnterOuterZone", &ITriggerZoneListener::execOnTwoPlayersEnterOuterZone },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTriggerZoneListener);
UClass* Z_Construct_UClass_UTriggerZoneListener_NoRegister()
{
	return UTriggerZoneListener::StaticClass();
}
struct Z_Construct_UClass_UTriggerZoneListener_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Headers/System/Event/TriggerZoneListener.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerZoneListener_OnOnePlayerEnterInnerZone, "OnOnePlayerEnterInnerZone" }, // 3962415870
		{ &Z_Construct_UFunction_UTriggerZoneListener_OnOnePlayerEnterOuterZone, "OnOnePlayerEnterOuterZone" }, // 4231957974
		{ &Z_Construct_UFunction_UTriggerZoneListener_OnPlayersExitInnerZone, "OnPlayersExitInnerZone" }, // 3912209086
		{ &Z_Construct_UFunction_UTriggerZoneListener_OnPlayersExitOuterZone, "OnPlayersExitOuterZone" }, // 3861295403
		{ &Z_Construct_UFunction_UTriggerZoneListener_OnTwoPlayersEnterInnerZone, "OnTwoPlayersEnterInnerZone" }, // 1523422958
		{ &Z_Construct_UFunction_UTriggerZoneListener_OnTwoPlayersEnterOuterZone, "OnTwoPlayersEnterOuterZone" }, // 1063751302
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITriggerZoneListener>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTriggerZoneListener_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BCR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerZoneListener_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTriggerZoneListener_Statics::ClassParams = {
	&UTriggerZoneListener::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerZoneListener_Statics::Class_MetaDataParams), Z_Construct_UClass_UTriggerZoneListener_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTriggerZoneListener()
{
	if (!Z_Registration_Info_UClass_UTriggerZoneListener.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTriggerZoneListener.OuterSingleton, Z_Construct_UClass_UTriggerZoneListener_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTriggerZoneListener.OuterSingleton;
}
template<> BCR_API UClass* StaticClass<UTriggerZoneListener>()
{
	return UTriggerZoneListener::StaticClass();
}
UTriggerZoneListener::UTriggerZoneListener(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerZoneListener);
UTriggerZoneListener::~UTriggerZoneListener() {}
// End Interface UTriggerZoneListener

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_mathi_Documents_GitHub_M2_Project_Source_BCR_Headers_System_Event_TriggerZoneListener_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTriggerZoneListener, UTriggerZoneListener::StaticClass, TEXT("UTriggerZoneListener"), &Z_Registration_Info_UClass_UTriggerZoneListener, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTriggerZoneListener), 1378071258U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mathi_Documents_GitHub_M2_Project_Source_BCR_Headers_System_Event_TriggerZoneListener_h_3011188900(TEXT("/Script/BCR"),
	Z_CompiledInDeferFile_FID_Users_mathi_Documents_GitHub_M2_Project_Source_BCR_Headers_System_Event_TriggerZoneListener_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mathi_Documents_GitHub_M2_Project_Source_BCR_Headers_System_Event_TriggerZoneListener_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
