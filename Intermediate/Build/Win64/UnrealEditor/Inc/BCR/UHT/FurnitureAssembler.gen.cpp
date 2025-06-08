// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCR/Headers/System/FurnitureAssembler.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFurnitureAssembler() {}

// Begin Cross Module References
BCR_API UClass* Z_Construct_UClass_ADeliveryPoint_NoRegister();
BCR_API UClass* Z_Construct_UClass_AFurnitureAssembler();
BCR_API UClass* Z_Construct_UClass_AFurnitureAssembler_NoRegister();
BCR_API UClass* Z_Construct_UClass_APickableItem_NoRegister();
BCR_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
BCR_API UScriptStruct* Z_Construct_UScriptStruct_FRecipiesInfo();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
UPackage* Z_Construct_UPackage__Script_BCR();
// End Cross Module References

// Begin ScriptStruct FRecipiesInfo
static_assert(std::is_polymorphic<FRecipiesInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FRecipiesInfo cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RecipiesInfo;
class UScriptStruct* FRecipiesInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RecipiesInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RecipiesInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRecipiesInfo, (UObject*)Z_Construct_UPackage__Script_BCR(), TEXT("RecipiesInfo"));
	}
	return Z_Registration_Info_UScriptStruct_RecipiesInfo.OuterSingleton;
}
template<> BCR_API UScriptStruct* StaticStruct<FRecipiesInfo>()
{
	return FRecipiesInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRecipiesInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Headers/System/FurnitureAssembler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "RecipiesInfo" },
		{ "ModuleRelativePath", "Headers/System/FurnitureAssembler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Out_MetaData[] = {
		{ "Category", "RecipiesInfo" },
		{ "ModuleRelativePath", "Headers/System/FurnitureAssembler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DelivreryPoint_MetaData[] = {
		{ "Category", "RecipiesInfo" },
		{ "ModuleRelativePath", "Headers/System/FurnitureAssembler.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Material_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Material_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Material;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Out;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DelivreryPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRecipiesInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRecipiesInfo_Statics::NewProp_Material_ValueProp = { "Material", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FRecipiesInfo_Statics::NewProp_Material_Key_KeyProp = { "Material_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_APickableItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRecipiesInfo_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecipiesInfo, Material), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FRecipiesInfo_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecipiesInfo, Out), Z_Construct_UClass_UClass, Z_Construct_UClass_APickableItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Out_MetaData), NewProp_Out_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FRecipiesInfo_Statics::NewProp_DelivreryPoint = { "DelivreryPoint", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecipiesInfo, DelivreryPoint), Z_Construct_UClass_UClass, Z_Construct_UClass_ADeliveryPoint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DelivreryPoint_MetaData), NewProp_DelivreryPoint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRecipiesInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecipiesInfo_Statics::NewProp_Material_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecipiesInfo_Statics::NewProp_Material_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecipiesInfo_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecipiesInfo_Statics::NewProp_Out,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecipiesInfo_Statics::NewProp_DelivreryPoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecipiesInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRecipiesInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BCR,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"RecipiesInfo",
	Z_Construct_UScriptStruct_FRecipiesInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecipiesInfo_Statics::PropPointers),
	sizeof(FRecipiesInfo),
	alignof(FRecipiesInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecipiesInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRecipiesInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRecipiesInfo()
{
	if (!Z_Registration_Info_UScriptStruct_RecipiesInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RecipiesInfo.InnerSingleton, Z_Construct_UScriptStruct_FRecipiesInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RecipiesInfo.InnerSingleton;
}
// End ScriptStruct FRecipiesInfo

// Begin Class AFurnitureAssembler Function CraftFurniture
struct Z_Construct_UFunction_AFurnitureAssembler_CraftFurniture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Headers/System/FurnitureAssembler.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFurnitureAssembler_CraftFurniture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFurnitureAssembler, nullptr, "CraftFurniture", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFurnitureAssembler_CraftFurniture_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFurnitureAssembler_CraftFurniture_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFurnitureAssembler_CraftFurniture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFurnitureAssembler_CraftFurniture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFurnitureAssembler::execCraftFurniture)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CraftFurniture();
	P_NATIVE_END;
}
// End Class AFurnitureAssembler Function CraftFurniture

// Begin Class AFurnitureAssembler Function GetActualRecipiesInfo
struct Z_Construct_UFunction_AFurnitureAssembler_GetActualRecipiesInfo_Statics
{
	struct FurnitureAssembler_eventGetActualRecipiesInfo_Parms
	{
		FRecipiesInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Headers/System/FurnitureAssembler.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFurnitureAssembler_GetActualRecipiesInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FurnitureAssembler_eventGetActualRecipiesInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FRecipiesInfo, METADATA_PARAMS(0, nullptr) }; // 1978195637
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFurnitureAssembler_GetActualRecipiesInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFurnitureAssembler_GetActualRecipiesInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFurnitureAssembler_GetActualRecipiesInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFurnitureAssembler_GetActualRecipiesInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFurnitureAssembler, nullptr, "GetActualRecipiesInfo", nullptr, nullptr, Z_Construct_UFunction_AFurnitureAssembler_GetActualRecipiesInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFurnitureAssembler_GetActualRecipiesInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFurnitureAssembler_GetActualRecipiesInfo_Statics::FurnitureAssembler_eventGetActualRecipiesInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFurnitureAssembler_GetActualRecipiesInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFurnitureAssembler_GetActualRecipiesInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFurnitureAssembler_GetActualRecipiesInfo_Statics::FurnitureAssembler_eventGetActualRecipiesInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFurnitureAssembler_GetActualRecipiesInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFurnitureAssembler_GetActualRecipiesInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFurnitureAssembler::execGetActualRecipiesInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRecipiesInfo*)Z_Param__Result=P_THIS->GetActualRecipiesInfo();
	P_NATIVE_END;
}
// End Class AFurnitureAssembler Function GetActualRecipiesInfo

// Begin Class AFurnitureAssembler Function OnElementDropOnAssembler
static FName NAME_AFurnitureAssembler_OnElementDropOnAssembler = FName(TEXT("OnElementDropOnAssembler"));
void AFurnitureAssembler::OnElementDropOnAssembler()
{
	ProcessEvent(FindFunctionChecked(NAME_AFurnitureAssembler_OnElementDropOnAssembler),NULL);
}
struct Z_Construct_UFunction_AFurnitureAssembler_OnElementDropOnAssembler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Headers/System/FurnitureAssembler.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFurnitureAssembler_OnElementDropOnAssembler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFurnitureAssembler, nullptr, "OnElementDropOnAssembler", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFurnitureAssembler_OnElementDropOnAssembler_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFurnitureAssembler_OnElementDropOnAssembler_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFurnitureAssembler_OnElementDropOnAssembler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFurnitureAssembler_OnElementDropOnAssembler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFurnitureAssembler::execOnElementDropOnAssembler)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnElementDropOnAssembler_Implementation();
	P_NATIVE_END;
}
// End Class AFurnitureAssembler Function OnElementDropOnAssembler

// Begin Class AFurnitureAssembler Function OnOverlapBegin
struct Z_Construct_UFunction_AFurnitureAssembler_OnOverlapBegin_Statics
{
	struct FurnitureAssembler_eventOnOverlapBegin_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Headers/System/FurnitureAssembler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFurnitureAssembler_OnOverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FurnitureAssembler_eventOnOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFurnitureAssembler_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FurnitureAssembler_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFurnitureAssembler_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FurnitureAssembler_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFurnitureAssembler_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FurnitureAssembler_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AFurnitureAssembler_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((FurnitureAssembler_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFurnitureAssembler_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FurnitureAssembler_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_AFurnitureAssembler_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFurnitureAssembler_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FurnitureAssembler_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFurnitureAssembler_OnOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFurnitureAssembler_OnOverlapBegin_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFurnitureAssembler_OnOverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFurnitureAssembler_OnOverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFurnitureAssembler_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFurnitureAssembler_OnOverlapBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFurnitureAssembler_OnOverlapBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFurnitureAssembler_OnOverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFurnitureAssembler_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFurnitureAssembler, nullptr, "OnOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_AFurnitureAssembler_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFurnitureAssembler_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFurnitureAssembler_OnOverlapBegin_Statics::FurnitureAssembler_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFurnitureAssembler_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFurnitureAssembler_OnOverlapBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFurnitureAssembler_OnOverlapBegin_Statics::FurnitureAssembler_eventOnOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFurnitureAssembler_OnOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFurnitureAssembler_OnOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFurnitureAssembler::execOnOverlapBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AFurnitureAssembler Function OnOverlapBegin

// Begin Class AFurnitureAssembler
void AFurnitureAssembler::StaticRegisterNativesAFurnitureAssembler()
{
	UClass* Class = AFurnitureAssembler::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CraftFurniture", &AFurnitureAssembler::execCraftFurniture },
		{ "GetActualRecipiesInfo", &AFurnitureAssembler::execGetActualRecipiesInfo },
		{ "OnElementDropOnAssembler", &AFurnitureAssembler::execOnElementDropOnAssembler },
		{ "OnOverlapBegin", &AFurnitureAssembler::execOnOverlapBegin },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFurnitureAssembler);
UClass* Z_Construct_UClass_AFurnitureAssembler_NoRegister()
{
	return AFurnitureAssembler::StaticClass();
}
struct Z_Construct_UClass_AFurnitureAssembler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Headers/System/FurnitureAssembler.h" },
		{ "ModuleRelativePath", "Headers/System/FurnitureAssembler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssemblerZone_MetaData[] = {
		{ "Category", "FurnitureAssembler" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Headers/System/FurnitureAssembler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActualRecipies_MetaData[] = {
		{ "Category", "FurnitureAssembler" },
		{ "ModuleRelativePath", "Headers/System/FurnitureAssembler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayFlowerAnimation_MetaData[] = {
		{ "Category", "FurnitureAssembler" },
		{ "ModuleRelativePath", "Headers/System/FurnitureAssembler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CraftOnce_MetaData[] = {
		{ "Category", "FurnitureAssembler" },
		{ "ModuleRelativePath", "Headers/System/FurnitureAssembler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_requieredMaterials_MetaData[] = {
		{ "Category", "FurnitureAssembler" },
		{ "ModuleRelativePath", "Headers/System/FurnitureAssembler.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssemblerZone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActualRecipies;
	static void NewProp_PlayFlowerAnimation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PlayFlowerAnimation;
	static void NewProp_CraftOnce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CraftOnce;
	static const UECodeGen_Private::FIntPropertyParams NewProp_requieredMaterials;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFurnitureAssembler_CraftFurniture, "CraftFurniture" }, // 313351073
		{ &Z_Construct_UFunction_AFurnitureAssembler_GetActualRecipiesInfo, "GetActualRecipiesInfo" }, // 1053763627
		{ &Z_Construct_UFunction_AFurnitureAssembler_OnElementDropOnAssembler, "OnElementDropOnAssembler" }, // 1437273182
		{ &Z_Construct_UFunction_AFurnitureAssembler_OnOverlapBegin, "OnOverlapBegin" }, // 1080084143
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFurnitureAssembler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFurnitureAssembler_Statics::NewProp_AssemblerZone = { "AssemblerZone", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFurnitureAssembler, AssemblerZone), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssemblerZone_MetaData), NewProp_AssemblerZone_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFurnitureAssembler_Statics::NewProp_ActualRecipies = { "ActualRecipies", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFurnitureAssembler, ActualRecipies), Z_Construct_UScriptStruct_FRecipiesInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActualRecipies_MetaData), NewProp_ActualRecipies_MetaData) }; // 1978195637
void Z_Construct_UClass_AFurnitureAssembler_Statics::NewProp_PlayFlowerAnimation_SetBit(void* Obj)
{
	((AFurnitureAssembler*)Obj)->PlayFlowerAnimation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFurnitureAssembler_Statics::NewProp_PlayFlowerAnimation = { "PlayFlowerAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFurnitureAssembler), &Z_Construct_UClass_AFurnitureAssembler_Statics::NewProp_PlayFlowerAnimation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayFlowerAnimation_MetaData), NewProp_PlayFlowerAnimation_MetaData) };
void Z_Construct_UClass_AFurnitureAssembler_Statics::NewProp_CraftOnce_SetBit(void* Obj)
{
	((AFurnitureAssembler*)Obj)->CraftOnce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFurnitureAssembler_Statics::NewProp_CraftOnce = { "CraftOnce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFurnitureAssembler), &Z_Construct_UClass_AFurnitureAssembler_Statics::NewProp_CraftOnce_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CraftOnce_MetaData), NewProp_CraftOnce_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFurnitureAssembler_Statics::NewProp_requieredMaterials = { "requieredMaterials", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFurnitureAssembler, requieredMaterials), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_requieredMaterials_MetaData), NewProp_requieredMaterials_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFurnitureAssembler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFurnitureAssembler_Statics::NewProp_AssemblerZone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFurnitureAssembler_Statics::NewProp_ActualRecipies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFurnitureAssembler_Statics::NewProp_PlayFlowerAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFurnitureAssembler_Statics::NewProp_CraftOnce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFurnitureAssembler_Statics::NewProp_requieredMaterials,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFurnitureAssembler_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFurnitureAssembler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BCR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFurnitureAssembler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFurnitureAssembler_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractable_NoRegister, (int32)VTABLE_OFFSET(AFurnitureAssembler, IInteractable), false },  // 188668673
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFurnitureAssembler_Statics::ClassParams = {
	&AFurnitureAssembler::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFurnitureAssembler_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFurnitureAssembler_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFurnitureAssembler_Statics::Class_MetaDataParams), Z_Construct_UClass_AFurnitureAssembler_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFurnitureAssembler()
{
	if (!Z_Registration_Info_UClass_AFurnitureAssembler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFurnitureAssembler.OuterSingleton, Z_Construct_UClass_AFurnitureAssembler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFurnitureAssembler.OuterSingleton;
}
template<> BCR_API UClass* StaticClass<AFurnitureAssembler>()
{
	return AFurnitureAssembler::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFurnitureAssembler);
AFurnitureAssembler::~AFurnitureAssembler() {}
// End Class AFurnitureAssembler

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_FurnitureAssembler_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRecipiesInfo::StaticStruct, Z_Construct_UScriptStruct_FRecipiesInfo_Statics::NewStructOps, TEXT("RecipiesInfo"), &Z_Registration_Info_UScriptStruct_RecipiesInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRecipiesInfo), 1978195637U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFurnitureAssembler, AFurnitureAssembler::StaticClass, TEXT("AFurnitureAssembler"), &Z_Registration_Info_UClass_AFurnitureAssembler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFurnitureAssembler), 1986242204U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_FurnitureAssembler_h_1332179244(TEXT("/Script/BCR"),
	Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_FurnitureAssembler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_FurnitureAssembler_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_FurnitureAssembler_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_FurnitureAssembler_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
