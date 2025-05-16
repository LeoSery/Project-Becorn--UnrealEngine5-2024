// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCR/Headers/System/QTE/QTEConfigurationTypes.h"
#include "BCR/Headers/System/QTE/QTETypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQTEConfigurationTypes() {}

// Begin Cross Module References
BCR_API UClass* Z_Construct_UClass_UQTEConfigurationAsset();
BCR_API UClass* Z_Construct_UClass_UQTEConfigurationAsset_NoRegister();
BCR_API UEnum* Z_Construct_UEnum_BCR_ESnapPointType();
BCR_API UScriptStruct* Z_Construct_UScriptStruct_FQTEConfiguration();
BCR_API UScriptStruct* Z_Construct_UScriptStruct_FQTESnapPointData();
BCR_API UScriptStruct* Z_Construct_UScriptStruct_FSnapPointConfig();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
UPackage* Z_Construct_UPackage__Script_BCR();
// End Cross Module References

// Begin ScriptStruct FQTESnapPointData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QTESnapPointData;
class UScriptStruct* FQTESnapPointData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QTESnapPointData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QTESnapPointData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQTESnapPointData, (UObject*)Z_Construct_UPackage__Script_BCR(), TEXT("QTESnapPointData"));
	}
	return Z_Registration_Info_UScriptStruct_QTESnapPointData.OuterSingleton;
}
template<> BCR_API UScriptStruct* StaticStruct<FQTESnapPointData>()
{
	return FQTESnapPointData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FQTESnapPointData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* @brief Configuration d'une s\xc3\xa9quence QTE pour un point d'interaction\n*/" },
#endif
		{ "ModuleRelativePath", "Headers/System/QTE/QTEConfigurationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Configuration d'une s\xc3\xa9quence QTE pour un point d'interaction" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapPoint_MetaData[] = {
		{ "Category", "QTE|Configuration" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTEConfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "QTE|Configuration" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTEConfigurationTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SnapPoint_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SnapPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQTESnapPointData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FQTESnapPointData_Statics::NewProp_SnapPoint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FQTESnapPointData_Statics::NewProp_SnapPoint = { "SnapPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQTESnapPointData, SnapPoint), Z_Construct_UEnum_BCR_ESnapPointType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapPoint_MetaData), NewProp_SnapPoint_MetaData) }; // 3685084137
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQTESnapPointData_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQTESnapPointData, Config), Z_Construct_UScriptStruct_FSnapPointConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 796225583
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQTESnapPointData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQTESnapPointData_Statics::NewProp_SnapPoint_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQTESnapPointData_Statics::NewProp_SnapPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQTESnapPointData_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQTESnapPointData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQTESnapPointData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BCR,
	nullptr,
	&NewStructOps,
	"QTESnapPointData",
	Z_Construct_UScriptStruct_FQTESnapPointData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQTESnapPointData_Statics::PropPointers),
	sizeof(FQTESnapPointData),
	alignof(FQTESnapPointData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQTESnapPointData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQTESnapPointData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FQTESnapPointData()
{
	if (!Z_Registration_Info_UScriptStruct_QTESnapPointData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QTESnapPointData.InnerSingleton, Z_Construct_UScriptStruct_FQTESnapPointData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_QTESnapPointData.InnerSingleton;
}
// End ScriptStruct FQTESnapPointData

// Begin Class UQTEConfigurationAsset
void UQTEConfigurationAsset::StaticRegisterNativesUQTEConfigurationAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQTEConfigurationAsset);
UClass* Z_Construct_UClass_UQTEConfigurationAsset_NoRegister()
{
	return UQTEConfigurationAsset::StaticClass();
}
struct Z_Construct_UClass_UQTEConfigurationAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* @brief Asset de configuration QTE principal\n*/" },
#endif
		{ "IncludePath", "Headers/System/QTE/QTEConfigurationTypes.h" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTEConfigurationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Asset de configuration QTE principal" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConfigurationName_MetaData[] = {
		{ "Category", "QTE|Info" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTEConfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "QTE|Info" },
		{ "ModuleRelativePath", "Headers/System/QTE/QTEConfigurationTypes.h" },
		{ "MultiLine", "TRUE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Configuration_MetaData[] = {
		{ "Category", "QTE|Configuration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// La configuration directement, plus besoin de structures interm\xc3\xa9""diaires\n" },
#endif
		{ "ModuleRelativePath", "Headers/System/QTE/QTEConfigurationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "La configuration directement, plus besoin de structures interm\xc3\xa9""diaires" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConfigurationName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Configuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQTEConfigurationAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UQTEConfigurationAsset_Statics::NewProp_ConfigurationName = { "ConfigurationName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQTEConfigurationAsset, ConfigurationName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConfigurationName_MetaData), NewProp_ConfigurationName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UQTEConfigurationAsset_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQTEConfigurationAsset, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQTEConfigurationAsset_Statics::NewProp_Configuration = { "Configuration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQTEConfigurationAsset, Configuration), Z_Construct_UScriptStruct_FQTEConfiguration, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Configuration_MetaData), NewProp_Configuration_MetaData) }; // 574589230
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQTEConfigurationAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQTEConfigurationAsset_Statics::NewProp_ConfigurationName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQTEConfigurationAsset_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQTEConfigurationAsset_Statics::NewProp_Configuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQTEConfigurationAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UQTEConfigurationAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_BCR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQTEConfigurationAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQTEConfigurationAsset_Statics::ClassParams = {
	&UQTEConfigurationAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UQTEConfigurationAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UQTEConfigurationAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQTEConfigurationAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UQTEConfigurationAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQTEConfigurationAsset()
{
	if (!Z_Registration_Info_UClass_UQTEConfigurationAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQTEConfigurationAsset.OuterSingleton, Z_Construct_UClass_UQTEConfigurationAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQTEConfigurationAsset.OuterSingleton;
}
template<> BCR_API UClass* StaticClass<UQTEConfigurationAsset>()
{
	return UQTEConfigurationAsset::StaticClass();
}
UQTEConfigurationAsset::UQTEConfigurationAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQTEConfigurationAsset);
UQTEConfigurationAsset::~UQTEConfigurationAsset() {}
// End Class UQTEConfigurationAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_CAJOUX_Desktop_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_QTE_QTEConfigurationTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FQTESnapPointData::StaticStruct, Z_Construct_UScriptStruct_FQTESnapPointData_Statics::NewStructOps, TEXT("QTESnapPointData"), &Z_Registration_Info_UScriptStruct_QTESnapPointData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQTESnapPointData), 3425240136U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQTEConfigurationAsset, UQTEConfigurationAsset::StaticClass, TEXT("UQTEConfigurationAsset"), &Z_Registration_Info_UClass_UQTEConfigurationAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQTEConfigurationAsset), 341043737U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_CAJOUX_Desktop_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_QTE_QTEConfigurationTypes_h_2247669842(TEXT("/Script/BCR"),
	Z_CompiledInDeferFile_FID_Users_CAJOUX_Desktop_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_QTE_QTEConfigurationTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_CAJOUX_Desktop_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_QTE_QTEConfigurationTypes_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_CAJOUX_Desktop_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_QTE_QTEConfigurationTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_CAJOUX_Desktop_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_QTE_QTEConfigurationTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
