// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCR/Headers/Interfaces/IPickable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIPickable() {}

// Begin Cross Module References
BCR_API UClass* Z_Construct_UClass_UIPickable();
BCR_API UClass* Z_Construct_UClass_UIPickable_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_BCR();
// End Cross Module References

// Begin Interface UIPickable Function Drop
struct IPickable_eventDrop_Parms
{
	AActor* Player;
	AActor* Object;
};
void IIPickable::Drop(AActor* Player, AActor* Object)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Drop instead.");
}
static FName NAME_UIPickable_Drop = FName(TEXT("Drop"));
void IIPickable::Execute_Drop(UObject* O, AActor* Player, AActor* Object)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UIPickable::StaticClass()));
	IPickable_eventDrop_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UIPickable_Drop);
	if (Func)
	{
		Parms.Player=Player;
		Parms.Object=Object;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IIPickable*)(O->GetNativeInterfaceAddress(UIPickable::StaticClass())))
	{
		I->Drop_Implementation(Player,Object);
	}
}
struct Z_Construct_UFunction_UIPickable_Drop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Drop interaction\n" },
#endif
		{ "ModuleRelativePath", "Headers/Interfaces/IPickable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Drop interaction" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIPickable_Drop_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IPickable_eventDrop_Parms, Player), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIPickable_Drop_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IPickable_eventDrop_Parms, Object), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIPickable_Drop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIPickable_Drop_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIPickable_Drop_Statics::NewProp_Object,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIPickable_Drop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIPickable_Drop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIPickable, nullptr, "Drop", nullptr, nullptr, Z_Construct_UFunction_UIPickable_Drop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIPickable_Drop_Statics::PropPointers), sizeof(IPickable_eventDrop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIPickable_Drop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIPickable_Drop_Statics::Function_MetaDataParams) };
static_assert(sizeof(IPickable_eventDrop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIPickable_Drop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIPickable_Drop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IIPickable::execDrop)
{
	P_GET_OBJECT(AActor,Z_Param_Player);
	P_GET_OBJECT(AActor,Z_Param_Object);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Drop_Implementation(Z_Param_Player,Z_Param_Object);
	P_NATIVE_END;
}
// End Interface UIPickable Function Drop

// Begin Interface UIPickable Function PickedUp
struct IPickable_eventPickedUp_Parms
{
	AActor* Player;
	AActor* Object;
};
void IIPickable::PickedUp(AActor* Player, AActor* Object)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PickedUp instead.");
}
static FName NAME_UIPickable_PickedUp = FName(TEXT("PickedUp"));
void IIPickable::Execute_PickedUp(UObject* O, AActor* Player, AActor* Object)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UIPickable::StaticClass()));
	IPickable_eventPickedUp_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UIPickable_PickedUp);
	if (Func)
	{
		Parms.Player=Player;
		Parms.Object=Object;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IIPickable*)(O->GetNativeInterfaceAddress(UIPickable::StaticClass())))
	{
		I->PickedUp_Implementation(Player,Object);
	}
}
struct Z_Construct_UFunction_UIPickable_PickedUp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////// PICKUP SYSTEM ////////\n/// Pickup interaction\n" },
#endif
		{ "ModuleRelativePath", "Headers/Interfaces/IPickable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PICKUP SYSTEM\nPickup interaction" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIPickable_PickedUp_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IPickable_eventPickedUp_Parms, Player), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIPickable_PickedUp_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IPickable_eventPickedUp_Parms, Object), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIPickable_PickedUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIPickable_PickedUp_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIPickable_PickedUp_Statics::NewProp_Object,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIPickable_PickedUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIPickable_PickedUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIPickable, nullptr, "PickedUp", nullptr, nullptr, Z_Construct_UFunction_UIPickable_PickedUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIPickable_PickedUp_Statics::PropPointers), sizeof(IPickable_eventPickedUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIPickable_PickedUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIPickable_PickedUp_Statics::Function_MetaDataParams) };
static_assert(sizeof(IPickable_eventPickedUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIPickable_PickedUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIPickable_PickedUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IIPickable::execPickedUp)
{
	P_GET_OBJECT(AActor,Z_Param_Player);
	P_GET_OBJECT(AActor,Z_Param_Object);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PickedUp_Implementation(Z_Param_Player,Z_Param_Object);
	P_NATIVE_END;
}
// End Interface UIPickable Function PickedUp

// Begin Interface UIPickable
void UIPickable::StaticRegisterNativesUIPickable()
{
	UClass* Class = UIPickable::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Drop", &IIPickable::execDrop },
		{ "PickedUp", &IIPickable::execPickedUp },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIPickable);
UClass* Z_Construct_UClass_UIPickable_NoRegister()
{
	return UIPickable::StaticClass();
}
struct Z_Construct_UClass_UIPickable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Headers/Interfaces/IPickable.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIPickable_Drop, "Drop" }, // 255385020
		{ &Z_Construct_UFunction_UIPickable_PickedUp, "PickedUp" }, // 2452717663
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIPickable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIPickable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BCR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIPickable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIPickable_Statics::ClassParams = {
	&UIPickable::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIPickable_Statics::Class_MetaDataParams), Z_Construct_UClass_UIPickable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIPickable()
{
	if (!Z_Registration_Info_UClass_UIPickable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIPickable.OuterSingleton, Z_Construct_UClass_UIPickable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIPickable.OuterSingleton;
}
template<> BCR_API UClass* StaticClass<UIPickable>()
{
	return UIPickable::StaticClass();
}
UIPickable::UIPickable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIPickable);
UIPickable::~UIPickable() {}
// End Interface UIPickable

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_mathi_Documents_GitHub_M2_Project_Source_BCR_Headers_Interfaces_IPickable_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIPickable, UIPickable::StaticClass, TEXT("UIPickable"), &Z_Registration_Info_UClass_UIPickable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIPickable), 23792606U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mathi_Documents_GitHub_M2_Project_Source_BCR_Headers_Interfaces_IPickable_h_34521094(TEXT("/Script/BCR"),
	Z_CompiledInDeferFile_FID_Users_mathi_Documents_GitHub_M2_Project_Source_BCR_Headers_Interfaces_IPickable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mathi_Documents_GitHub_M2_Project_Source_BCR_Headers_Interfaces_IPickable_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
