// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCR/Headers/System/DeliveryPoint.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeliveryPoint() {}

// Begin Cross Module References
BCR_API UClass* Z_Construct_UClass_ADeliveryPoint();
BCR_API UClass* Z_Construct_UClass_ADeliveryPoint_NoRegister();
BCR_API UClass* Z_Construct_UClass_APickableItem_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_BCR();
// End Cross Module References

// Begin Class ADeliveryPoint Function OnOverlapBegin
struct Z_Construct_UFunction_ADeliveryPoint_OnOverlapBegin_Statics
{
	struct DeliveryPoint_eventOnOverlapBegin_Parms
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
		{ "ModuleRelativePath", "Headers/System/DeliveryPoint.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADeliveryPoint_OnOverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DeliveryPoint_eventOnOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADeliveryPoint_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DeliveryPoint_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADeliveryPoint_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DeliveryPoint_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADeliveryPoint_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DeliveryPoint_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ADeliveryPoint_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((DeliveryPoint_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADeliveryPoint_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DeliveryPoint_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_ADeliveryPoint_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADeliveryPoint_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DeliveryPoint_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADeliveryPoint_OnOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADeliveryPoint_OnOverlapBegin_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADeliveryPoint_OnOverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADeliveryPoint_OnOverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADeliveryPoint_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADeliveryPoint_OnOverlapBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADeliveryPoint_OnOverlapBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADeliveryPoint_OnOverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADeliveryPoint_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADeliveryPoint, nullptr, "OnOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_ADeliveryPoint_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeliveryPoint_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADeliveryPoint_OnOverlapBegin_Statics::DeliveryPoint_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADeliveryPoint_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADeliveryPoint_OnOverlapBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADeliveryPoint_OnOverlapBegin_Statics::DeliveryPoint_eventOnOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADeliveryPoint_OnOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADeliveryPoint_OnOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADeliveryPoint::execOnOverlapBegin)
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
// End Class ADeliveryPoint Function OnOverlapBegin

// Begin Class ADeliveryPoint
void ADeliveryPoint::StaticRegisterNativesADeliveryPoint()
{
	UClass* Class = ADeliveryPoint::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnOverlapBegin", &ADeliveryPoint::execOnOverlapBegin },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADeliveryPoint);
UClass* Z_Construct_UClass_ADeliveryPoint_NoRegister()
{
	return ADeliveryPoint::StaticClass();
}
struct Z_Construct_UClass_ADeliveryPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Headers/System/DeliveryPoint.h" },
		{ "ModuleRelativePath", "Headers/System/DeliveryPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColliderBox_MetaData[] = {
		{ "Category", "DeliveryPoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Headers/System/DeliveryPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[] = {
		{ "Category", "DeliveryPoint" },
		{ "ModuleRelativePath", "Headers/System/DeliveryPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectToSpawn_MetaData[] = {
		{ "Category", "DeliveryPoint" },
		{ "ModuleRelativePath", "Headers/System/DeliveryPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPoint_MetaData[] = {
		{ "Category", "DeliveryPoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Headers/System/DeliveryPoint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ColliderBox;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemType;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ObjectToSpawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADeliveryPoint_OnOverlapBegin, "OnOverlapBegin" }, // 3445865841
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADeliveryPoint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADeliveryPoint_Statics::NewProp_ColliderBox = { "ColliderBox", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADeliveryPoint, ColliderBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColliderBox_MetaData), NewProp_ColliderBox_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADeliveryPoint_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADeliveryPoint, ItemType), Z_Construct_UClass_UClass, Z_Construct_UClass_APickableItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemType_MetaData), NewProp_ItemType_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADeliveryPoint_Statics::NewProp_ObjectToSpawn = { "ObjectToSpawn", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADeliveryPoint, ObjectToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_APickableItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectToSpawn_MetaData), NewProp_ObjectToSpawn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADeliveryPoint_Statics::NewProp_WorldPoint = { "WorldPoint", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADeliveryPoint, WorldPoint), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPoint_MetaData), NewProp_WorldPoint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADeliveryPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeliveryPoint_Statics::NewProp_ColliderBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeliveryPoint_Statics::NewProp_ItemType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeliveryPoint_Statics::NewProp_ObjectToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeliveryPoint_Statics::NewProp_WorldPoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADeliveryPoint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADeliveryPoint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BCR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADeliveryPoint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADeliveryPoint_Statics::ClassParams = {
	&ADeliveryPoint::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADeliveryPoint_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADeliveryPoint_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADeliveryPoint_Statics::Class_MetaDataParams), Z_Construct_UClass_ADeliveryPoint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADeliveryPoint()
{
	if (!Z_Registration_Info_UClass_ADeliveryPoint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADeliveryPoint.OuterSingleton, Z_Construct_UClass_ADeliveryPoint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADeliveryPoint.OuterSingleton;
}
template<> BCR_API UClass* StaticClass<ADeliveryPoint>()
{
	return ADeliveryPoint::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADeliveryPoint);
ADeliveryPoint::~ADeliveryPoint() {}
// End Class ADeliveryPoint

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_DeliveryPoint_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADeliveryPoint, ADeliveryPoint::StaticClass, TEXT("ADeliveryPoint"), &Z_Registration_Info_UClass_ADeliveryPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADeliveryPoint), 3063282139U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_DeliveryPoint_h_3242745039(TEXT("/Script/BCR"),
	Z_CompiledInDeferFile_FID_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_DeliveryPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_DeliveryPoint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
