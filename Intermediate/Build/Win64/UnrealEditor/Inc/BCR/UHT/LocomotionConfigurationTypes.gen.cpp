// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCR/Headers/System/MiniGame/LocomotionConfigurationTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocomotionConfigurationTypes() {}

// Begin Cross Module References
BCR_API UClass* Z_Construct_UClass_ULocomotionConfigurationAsset();
BCR_API UClass* Z_Construct_UClass_ULocomotionConfigurationAsset_NoRegister();
BCR_API UEnum* Z_Construct_UEnum_BCR_ELocomotionMode();
BCR_API UScriptStruct* Z_Construct_UScriptStruct_FLocomotionConfiguration();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
UPackage* Z_Construct_UPackage__Script_BCR();
// End Cross Module References

// Begin Enum ELocomotionMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELocomotionMode;
static UEnum* ELocomotionMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELocomotionMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELocomotionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BCR_ELocomotionMode, (UObject*)Z_Construct_UPackage__Script_BCR(), TEXT("ELocomotionMode"));
	}
	return Z_Registration_Info_UEnum_ELocomotionMode.OuterSingleton;
}
template<> BCR_API UEnum* StaticEnum<ELocomotionMode>()
{
	return ELocomotionMode_StaticEnum();
}
struct Z_Construct_UEnum_BCR_ELocomotionMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Basic.DisplayName", "Basic" },
		{ "Basic.Name", "ELocomotionMode::Basic" },
		{ "BlueprintType", "true" },
		{ "Climb.DisplayName", "Climb" },
		{ "Climb.Name", "ELocomotionMode::Climb" },
		{ "HoldingBox.DisplayName", "HoldingBox" },
		{ "HoldingBox.Name", "ELocomotionMode::HoldingBox" },
		{ "ModuleRelativePath", "Headers/System/MiniGame/LocomotionConfigurationTypes.h" },
		{ "MushroomSaw.DisplayName", "MushroomSaw" },
		{ "MushroomSaw.Name", "ELocomotionMode::MushroomSaw" },
		{ "Push.DisplayName", "Push" },
		{ "Push.Name", "ELocomotionMode::Push" },
		{ "Sap.DisplayName", "Sap" },
		{ "Sap.Name", "ELocomotionMode::Sap" },
		{ "Test.DisplayName", "Test" },
		{ "Test.Name", "ELocomotionMode::Test" },
		{ "WoodCuttingCrank.DisplayName", "WoodCutting_Crank" },
		{ "WoodCuttingCrank.Name", "ELocomotionMode::WoodCuttingCrank" },
		{ "WoodCuttingRope.DisplayName", "WoodCutting_Rope" },
		{ "WoodCuttingRope.Name", "ELocomotionMode::WoodCuttingRope" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELocomotionMode::Basic", (int64)ELocomotionMode::Basic },
		{ "ELocomotionMode::HoldingBox", (int64)ELocomotionMode::HoldingBox },
		{ "ELocomotionMode::WoodCuttingCrank", (int64)ELocomotionMode::WoodCuttingCrank },
		{ "ELocomotionMode::WoodCuttingRope", (int64)ELocomotionMode::WoodCuttingRope },
		{ "ELocomotionMode::MushroomSaw", (int64)ELocomotionMode::MushroomSaw },
		{ "ELocomotionMode::Sap", (int64)ELocomotionMode::Sap },
		{ "ELocomotionMode::Push", (int64)ELocomotionMode::Push },
		{ "ELocomotionMode::Climb", (int64)ELocomotionMode::Climb },
		{ "ELocomotionMode::Test", (int64)ELocomotionMode::Test },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BCR_ELocomotionMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BCR,
	nullptr,
	"ELocomotionMode",
	"ELocomotionMode",
	Z_Construct_UEnum_BCR_ELocomotionMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BCR_ELocomotionMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BCR_ELocomotionMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BCR_ELocomotionMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BCR_ELocomotionMode()
{
	if (!Z_Registration_Info_UEnum_ELocomotionMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELocomotionMode.InnerSingleton, Z_Construct_UEnum_BCR_ELocomotionMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELocomotionMode.InnerSingleton;
}
// End Enum ELocomotionMode

// Begin ScriptStruct FLocomotionConfiguration
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LocomotionConfiguration;
class UScriptStruct* FLocomotionConfiguration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LocomotionConfiguration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LocomotionConfiguration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocomotionConfiguration, (UObject*)Z_Construct_UPackage__Script_BCR(), TEXT("LocomotionConfiguration"));
	}
	return Z_Registration_Info_UScriptStruct_LocomotionConfiguration.OuterSingleton;
}
template<> BCR_API UScriptStruct* StaticStruct<FLocomotionConfiguration>()
{
	return FLocomotionConfiguration::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLocomotionConfiguration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Headers/System/MiniGame/LocomotionConfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionToGo_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Headers/System/MiniGame/LocomotionConfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartAnimToPlay_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Headers/System/MiniGame/LocomotionConfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartMontageSection_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Headers/System/MiniGame/LocomotionConfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndAnimToPlay_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Headers/System/MiniGame/LocomotionConfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Headers/System/MiniGame/LocomotionConfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockCapsuleOrientation_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Headers/System/MiniGame/LocomotionConfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsePhysicalAnim_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Headers/System/MiniGame/LocomotionConfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSpecificAnim_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Headers/System/MiniGame/LocomotionConfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Headers/System/MiniGame/LocomotionConfigurationTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PositionToGo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartAnimToPlay;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StartMontageSection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EndAnimToPlay;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static void NewProp_bLockCapsuleOrientation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockCapsuleOrientation;
	static void NewProp_bUsePhysicalAnim_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePhysicalAnim;
	static void NewProp_bUseSpecificAnim_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSpecificAnim;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocomotionConfiguration>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocomotionConfiguration_Statics::NewProp_PositionToGo = { "PositionToGo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocomotionConfiguration, PositionToGo), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionToGo_MetaData), NewProp_PositionToGo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLocomotionConfiguration_Statics::NewProp_StartAnimToPlay = { "StartAnimToPlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocomotionConfiguration, StartAnimToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartAnimToPlay_MetaData), NewProp_StartAnimToPlay_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLocomotionConfiguration_Statics::NewProp_StartMontageSection = { "StartMontageSection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocomotionConfiguration, StartMontageSection), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartMontageSection_MetaData), NewProp_StartMontageSection_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLocomotionConfiguration_Statics::NewProp_EndAnimToPlay = { "EndAnimToPlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocomotionConfiguration, EndAnimToPlay), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndAnimToPlay_MetaData), NewProp_EndAnimToPlay_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLocomotionConfiguration_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLocomotionConfiguration_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocomotionConfiguration, Mode), Z_Construct_UEnum_BCR_ELocomotionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 2945942732
void Z_Construct_UScriptStruct_FLocomotionConfiguration_Statics::NewProp_bLockCapsuleOrientation_SetBit(void* Obj)
{
	((FLocomotionConfiguration*)Obj)->bLockCapsuleOrientation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLocomotionConfiguration_Statics::NewProp_bLockCapsuleOrientation = { "bLockCapsuleOrientation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLocomotionConfiguration), &Z_Construct_UScriptStruct_FLocomotionConfiguration_Statics::NewProp_bLockCapsuleOrientation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockCapsuleOrientation_MetaData), NewProp_bLockCapsuleOrientation_MetaData) };
void Z_Construct_UScriptStruct_FLocomotionConfiguration_Statics::NewProp_bUsePhysicalAnim_SetBit(void* Obj)
{
	((FLocomotionConfiguration*)Obj)->bUsePhysicalAnim = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLocomotionConfiguration_Statics::NewProp_bUsePhysicalAnim = { "bUsePhysicalAnim", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLocomotionConfiguration), &Z_Construct_UScriptStruct_FLocomotionConfiguration_Statics::NewProp_bUsePhysicalAnim_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsePhysicalAnim_MetaData), NewProp_bUsePhysicalAnim_MetaData) };
void Z_Construct_UScriptStruct_FLocomotionConfiguration_Statics::NewProp_bUseSpecificAnim_SetBit(void* Obj)
{
	((FLocomotionConfiguration*)Obj)->bUseSpecificAnim = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLocomotionConfiguration_Statics::NewProp_bUseSpecificAnim = { "bUseSpecificAnim", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLocomotionConfiguration), &Z_Construct_UScriptStruct_FLocomotionConfiguration_Statics::NewProp_bUseSpecificAnim_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSpecificAnim_MetaData), NewProp_bUseSpecificAnim_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLocomotionConfiguration_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocomotionConfiguration, MaxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpeed_MetaData), NewProp_MaxSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocomotionConfiguration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocomotionConfiguration_Statics::NewProp_PositionToGo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocomotionConfiguration_Statics::NewProp_StartAnimToPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocomotionConfiguration_Statics::NewProp_StartMontageSection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocomotionConfiguration_Statics::NewProp_EndAnimToPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocomotionConfiguration_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocomotionConfiguration_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocomotionConfiguration_Statics::NewProp_bLockCapsuleOrientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocomotionConfiguration_Statics::NewProp_bUsePhysicalAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocomotionConfiguration_Statics::NewProp_bUseSpecificAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocomotionConfiguration_Statics::NewProp_MaxSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocomotionConfiguration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocomotionConfiguration_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BCR,
	nullptr,
	&NewStructOps,
	"LocomotionConfiguration",
	Z_Construct_UScriptStruct_FLocomotionConfiguration_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocomotionConfiguration_Statics::PropPointers),
	sizeof(FLocomotionConfiguration),
	alignof(FLocomotionConfiguration),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocomotionConfiguration_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLocomotionConfiguration_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLocomotionConfiguration()
{
	if (!Z_Registration_Info_UScriptStruct_LocomotionConfiguration.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LocomotionConfiguration.InnerSingleton, Z_Construct_UScriptStruct_FLocomotionConfiguration_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LocomotionConfiguration.InnerSingleton;
}
// End ScriptStruct FLocomotionConfiguration

// Begin Class ULocomotionConfigurationAsset
void ULocomotionConfigurationAsset::StaticRegisterNativesULocomotionConfigurationAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULocomotionConfigurationAsset);
UClass* Z_Construct_UClass_ULocomotionConfigurationAsset_NoRegister()
{
	return ULocomotionConfigurationAsset::StaticClass();
}
struct Z_Construct_UClass_ULocomotionConfigurationAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Headers/System/MiniGame/LocomotionConfigurationTypes.h" },
		{ "ModuleRelativePath", "Headers/System/MiniGame/LocomotionConfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConfigurationName_MetaData[] = {
		{ "Category", "Locomotion|Info" },
		{ "ModuleRelativePath", "Headers/System/MiniGame/LocomotionConfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Locomotion|Info" },
		{ "ModuleRelativePath", "Headers/System/MiniGame/LocomotionConfigurationTypes.h" },
		{ "MultiLine", "TRUE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Configuration_MetaData[] = {
		{ "Category", "Locomotion|Configuration" },
		{ "ModuleRelativePath", "Headers/System/MiniGame/LocomotionConfigurationTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConfigurationName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Configuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocomotionConfigurationAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULocomotionConfigurationAsset_Statics::NewProp_ConfigurationName = { "ConfigurationName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULocomotionConfigurationAsset, ConfigurationName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConfigurationName_MetaData), NewProp_ConfigurationName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULocomotionConfigurationAsset_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULocomotionConfigurationAsset, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULocomotionConfigurationAsset_Statics::NewProp_Configuration = { "Configuration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULocomotionConfigurationAsset, Configuration), Z_Construct_UScriptStruct_FLocomotionConfiguration, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Configuration_MetaData), NewProp_Configuration_MetaData) }; // 2286805939
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULocomotionConfigurationAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionConfigurationAsset_Statics::NewProp_ConfigurationName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionConfigurationAsset_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionConfigurationAsset_Statics::NewProp_Configuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionConfigurationAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULocomotionConfigurationAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_BCR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionConfigurationAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULocomotionConfigurationAsset_Statics::ClassParams = {
	&ULocomotionConfigurationAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULocomotionConfigurationAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionConfigurationAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionConfigurationAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_ULocomotionConfigurationAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULocomotionConfigurationAsset()
{
	if (!Z_Registration_Info_UClass_ULocomotionConfigurationAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULocomotionConfigurationAsset.OuterSingleton, Z_Construct_UClass_ULocomotionConfigurationAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULocomotionConfigurationAsset.OuterSingleton;
}
template<> BCR_API UClass* StaticClass<ULocomotionConfigurationAsset>()
{
	return ULocomotionConfigurationAsset::StaticClass();
}
ULocomotionConfigurationAsset::ULocomotionConfigurationAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULocomotionConfigurationAsset);
ULocomotionConfigurationAsset::~ULocomotionConfigurationAsset() {}
// End Class ULocomotionConfigurationAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_MiniGame_LocomotionConfigurationTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELocomotionMode_StaticEnum, TEXT("ELocomotionMode"), &Z_Registration_Info_UEnum_ELocomotionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2945942732U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLocomotionConfiguration::StaticStruct, Z_Construct_UScriptStruct_FLocomotionConfiguration_Statics::NewStructOps, TEXT("LocomotionConfiguration"), &Z_Registration_Info_UScriptStruct_LocomotionConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLocomotionConfiguration), 2286805939U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULocomotionConfigurationAsset, ULocomotionConfigurationAsset::StaticClass, TEXT("ULocomotionConfigurationAsset"), &Z_Registration_Info_UClass_ULocomotionConfigurationAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULocomotionConfigurationAsset), 3320476499U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_MiniGame_LocomotionConfigurationTypes_h_1306525614(TEXT("/Script/BCR"),
	Z_CompiledInDeferFile_FID_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_MiniGame_LocomotionConfigurationTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_MiniGame_LocomotionConfigurationTypes_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_MiniGame_LocomotionConfigurationTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_MiniGame_LocomotionConfigurationTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_MiniGame_LocomotionConfigurationTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_MiniGame_LocomotionConfigurationTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
