// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCR/Headers/Interfaces/Interactable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractable() {}

// Begin Cross Module References
BCR_API UClass* Z_Construct_UClass_UInteractable();
BCR_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_BCR();
// End Cross Module References

// Begin Interface UInteractable Function Interact
struct Interactable_eventInteract_Parms
{
	AActor* Player;
};
void IInteractable::Interact(AActor* Player)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Interact instead.");
}
static FName NAME_UInteractable_Interact = FName(TEXT("Interact"));
void IInteractable::Execute_Interact(UObject* O, AActor* Player)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractable::StaticClass()));
	Interactable_eventInteract_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInteractable_Interact);
	if (Func)
	{
		Parms.Player=Player;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInteractable*)(O->GetNativeInterfaceAddress(UInteractable::StaticClass())))
	{
		I->Interact_Implementation(Player);
	}
}
struct Z_Construct_UFunction_UInteractable_Interact_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Headers/Interfaces/Interactable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractable_Interact_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Interactable_eventInteract_Parms, Player), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractable_Interact_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractable_Interact_Statics::NewProp_Player,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractable_Interact_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractable_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractable, nullptr, "Interact", nullptr, nullptr, Z_Construct_UFunction_UInteractable_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractable_Interact_Statics::PropPointers), sizeof(Interactable_eventInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractable_Interact_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractable_Interact_Statics::Function_MetaDataParams) };
static_assert(sizeof(Interactable_eventInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractable_Interact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractable_Interact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractable::execInteract)
{
	P_GET_OBJECT(AActor,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Interact_Implementation(Z_Param_Player);
	P_NATIVE_END;
}
// End Interface UInteractable Function Interact

// Begin Interface UInteractable
void UInteractable::StaticRegisterNativesUInteractable()
{
	UClass* Class = UInteractable::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Interact", &IInteractable::execInteract },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractable);
UClass* Z_Construct_UClass_UInteractable_NoRegister()
{
	return UInteractable::StaticClass();
}
struct Z_Construct_UClass_UInteractable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Headers/Interfaces/Interactable.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractable_Interact, "Interact" }, // 241831542
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInteractable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BCR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractable_Statics::ClassParams = {
	&UInteractable::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractable_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractable()
{
	if (!Z_Registration_Info_UClass_UInteractable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractable.OuterSingleton, Z_Construct_UClass_UInteractable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractable.OuterSingleton;
}
template<> BCR_API UClass* StaticClass<UInteractable>()
{
	return UInteractable::StaticClass();
}
UInteractable::UInteractable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractable);
UInteractable::~UInteractable() {}
// End Interface UInteractable

// Begin Registration
struct Z_CompiledInDeferFile_FID_M2_Project_Source_BCR_Headers_Interfaces_Interactable_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractable, UInteractable::StaticClass, TEXT("UInteractable"), &Z_Registration_Info_UClass_UInteractable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractable), 2840894499U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_M2_Project_Source_BCR_Headers_Interfaces_Interactable_h_805401616(TEXT("/Script/BCR"),
	Z_CompiledInDeferFile_FID_M2_Project_Source_BCR_Headers_Interfaces_Interactable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_M2_Project_Source_BCR_Headers_Interfaces_Interactable_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
