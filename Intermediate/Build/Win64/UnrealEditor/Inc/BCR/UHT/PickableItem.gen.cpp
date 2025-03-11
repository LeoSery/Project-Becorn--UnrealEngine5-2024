// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCR/Headers/System/Pickable/PickableItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickableItem() {}

// Begin Cross Module References
BCR_API UClass* Z_Construct_UClass_APickableItem();
BCR_API UClass* Z_Construct_UClass_APickableItem_NoRegister();
BCR_API UClass* Z_Construct_UClass_UIPickable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BCR();
// End Cross Module References

// Begin Class APickableItem Function GetItemName
struct Z_Construct_UFunction_APickableItem_GetItemName_Statics
{
	struct PickableItem_eventGetItemName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Headers/System/Pickable/PickableItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APickableItem_GetItemName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PickableItem_eventGetItemName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickableItem_GetItemName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickableItem_GetItemName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APickableItem_GetItemName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickableItem_GetItemName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickableItem, nullptr, "GetItemName", nullptr, nullptr, Z_Construct_UFunction_APickableItem_GetItemName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickableItem_GetItemName_Statics::PropPointers), sizeof(Z_Construct_UFunction_APickableItem_GetItemName_Statics::PickableItem_eventGetItemName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickableItem_GetItemName_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickableItem_GetItemName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APickableItem_GetItemName_Statics::PickableItem_eventGetItemName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APickableItem_GetItemName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickableItem_GetItemName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APickableItem::execGetItemName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetItemName();
	P_NATIVE_END;
}
// End Class APickableItem Function GetItemName

// Begin Class APickableItem
void APickableItem::StaticRegisterNativesAPickableItem()
{
	UClass* Class = APickableItem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetItemName", &APickableItem::execGetItemName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APickableItem);
UClass* Z_Construct_UClass_APickableItem_NoRegister()
{
	return APickableItem::StaticClass();
}
struct Z_Construct_UClass_APickableItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Headers/System/Pickable/PickableItem.h" },
		{ "ModuleRelativePath", "Headers/System/Pickable/PickableItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[] = {
		{ "Category", "PickableItem" },
		{ "ModuleRelativePath", "Headers/System/Pickable/PickableItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APickableItem_GetItemName, "GetItemName" }, // 80634575
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickableItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_APickableItem_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickableItem, name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_name_MetaData), NewProp_name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickableItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickableItem_Statics::NewProp_name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickableItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APickableItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BCR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickableItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APickableItem_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIPickable_NoRegister, (int32)VTABLE_OFFSET(APickableItem, IIPickable), false },  // 3735236945
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_APickableItem_Statics::ClassParams = {
	&APickableItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APickableItem_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APickableItem_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickableItem_Statics::Class_MetaDataParams), Z_Construct_UClass_APickableItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APickableItem()
{
	if (!Z_Registration_Info_UClass_APickableItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APickableItem.OuterSingleton, Z_Construct_UClass_APickableItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APickableItem.OuterSingleton;
}
template<> BCR_API UClass* StaticClass<APickableItem>()
{
	return APickableItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APickableItem);
APickableItem::~APickableItem() {}
// End Class APickableItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Macelie_Documents_Unreal_Projects_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_Pickable_PickableItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APickableItem, APickableItem::StaticClass, TEXT("APickableItem"), &Z_Registration_Info_UClass_APickableItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APickableItem), 314736793U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Macelie_Documents_Unreal_Projects_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_Pickable_PickableItem_h_2696979205(TEXT("/Script/BCR"),
	Z_CompiledInDeferFile_FID_Users_Macelie_Documents_Unreal_Projects_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_Pickable_PickableItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Macelie_Documents_Unreal_Projects_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_Pickable_PickableItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
