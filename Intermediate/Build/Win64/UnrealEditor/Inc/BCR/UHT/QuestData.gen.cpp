// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCR/Headers/System/UI_Quest/QuestData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestData() {}

// Begin Cross Module References
BCR_API UClass* Z_Construct_UClass_UQuestData();
BCR_API UClass* Z_Construct_UClass_UQuestData_NoRegister();
BCR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestLineStruct();
BCR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestStruct();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
UPackage* Z_Construct_UPackage__Script_BCR();
// End Cross Module References

// Begin ScriptStruct FQuestStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QuestStruct;
class UScriptStruct* FQuestStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QuestStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QuestStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestStruct, (UObject*)Z_Construct_UPackage__Script_BCR(), TEXT("QuestStruct"));
	}
	return Z_Registration_Info_UScriptStruct_QuestStruct.OuterSingleton;
}
template<> BCR_API UScriptStruct* StaticStruct<FQuestStruct>()
{
	return FQuestStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FQuestStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief Individual quest information and progression data\n * @details Contains quest identification, description, completion requirements, and chain linking\n */" },
#endif
		{ "ModuleRelativePath", "Headers/System/UI_Quest/QuestData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Individual quest information and progression data\n@details Contains quest identification, description, completion requirements, and chain linking" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "Category", "Quest|Info" },
		{ "ModuleRelativePath", "Headers/System/UI_Quest/QuestData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Desc_MetaData[] = {
		{ "Category", "Quest|Info" },
		{ "ModuleRelativePath", "Headers/System/UI_Quest/QuestData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[] = {
		{ "Category", "Quest|Info" },
		{ "ModuleRelativePath", "Headers/System/UI_Quest/QuestData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextQuestTag_MetaData[] = {
		{ "Category", "Quest|Info" },
		{ "ModuleRelativePath", "Headers/System/UI_Quest/QuestData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousQuestTag_MetaData[] = {
		{ "Category", "Quest|Info" },
		{ "ModuleRelativePath", "Headers/System/UI_Quest/QuestData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Desc;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NextQuestTag;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PreviousQuestTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestStruct, Tag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_Desc = { "Desc", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestStruct, Desc), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Desc_MetaData), NewProp_Desc_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestStruct, Amount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amount_MetaData), NewProp_Amount_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_NextQuestTag = { "NextQuestTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestStruct, NextQuestTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextQuestTag_MetaData), NewProp_NextQuestTag_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_PreviousQuestTag = { "PreviousQuestTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestStruct, PreviousQuestTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousQuestTag_MetaData), NewProp_PreviousQuestTag_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_Desc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_NextQuestTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_PreviousQuestTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BCR,
	nullptr,
	&NewStructOps,
	"QuestStruct",
	Z_Construct_UScriptStruct_FQuestStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestStruct_Statics::PropPointers),
	sizeof(FQuestStruct),
	alignof(FQuestStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQuestStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FQuestStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QuestStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QuestStruct.InnerSingleton, Z_Construct_UScriptStruct_FQuestStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_QuestStruct.InnerSingleton;
}
// End ScriptStruct FQuestStruct

// Begin ScriptStruct FQuestLineStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QuestLineStruct;
class UScriptStruct* FQuestLineStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QuestLineStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QuestLineStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestLineStruct, (UObject*)Z_Construct_UPackage__Script_BCR(), TEXT("QuestLineStruct"));
	}
	return Z_Registration_Info_UScriptStruct_QuestLineStruct.OuterSingleton;
}
template<> BCR_API UScriptStruct* StaticStruct<FQuestLineStruct>()
{
	return FQuestLineStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FQuestLineStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief Complete quest line containing multiple linked quests\n * @details Represents a sequence of related quests with shared narrative or gameplay theme\n */" },
#endif
		{ "ModuleRelativePath", "Headers/System/UI_Quest/QuestData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Complete quest line containing multiple linked quests\n@details Represents a sequence of related quests with shared narrative or gameplay theme" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "Category", "QuestLine|Info" },
		{ "ModuleRelativePath", "Headers/System/UI_Quest/QuestData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestLineData_MetaData[] = {
		{ "Category", "QuestLine|Info" },
		{ "ModuleRelativePath", "Headers/System/UI_Quest/QuestData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QuestLineData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_QuestLineData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestLineStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuestLineStruct_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestLineStruct, Tag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestLineStruct_Statics::NewProp_QuestLineData_Inner = { "QuestLineData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FQuestStruct, METADATA_PARAMS(0, nullptr) }; // 3577498120
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestLineStruct_Statics::NewProp_QuestLineData = { "QuestLineData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestLineStruct, QuestLineData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestLineData_MetaData), NewProp_QuestLineData_MetaData) }; // 3577498120
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestLineStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestLineStruct_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestLineStruct_Statics::NewProp_QuestLineData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestLineStruct_Statics::NewProp_QuestLineData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestLineStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestLineStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BCR,
	nullptr,
	&NewStructOps,
	"QuestLineStruct",
	Z_Construct_UScriptStruct_FQuestLineStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestLineStruct_Statics::PropPointers),
	sizeof(FQuestLineStruct),
	alignof(FQuestLineStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestLineStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQuestLineStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FQuestLineStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QuestLineStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QuestLineStruct.InnerSingleton, Z_Construct_UScriptStruct_FQuestLineStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_QuestLineStruct.InnerSingleton;
}
// End ScriptStruct FQuestLineStruct

// Begin Class UQuestData
void UQuestData::StaticRegisterNativesUQuestData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestData);
UClass* Z_Construct_UClass_UQuestData_NoRegister()
{
	return UQuestData::StaticClass();
}
struct Z_Construct_UClass_UQuestData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief Data asset container for quest line configurations\n * @details Provides designer-friendly interface for creating and managing quest sequences\n */" },
#endif
		{ "IncludePath", "Headers/System/UI_Quest/QuestData.h" },
		{ "ModuleRelativePath", "Headers/System/UI_Quest/QuestData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Data asset container for quest line configurations\n@details Provides designer-friendly interface for creating and managing quest sequences" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConfigurationName_MetaData[] = {
		{ "Category", "Quest|Info" },
		{ "ModuleRelativePath", "Headers/System/UI_Quest/QuestData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Quest|Info" },
		{ "ModuleRelativePath", "Headers/System/UI_Quest/QuestData.h" },
		{ "MultiLine", "TRUE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestLine_MetaData[] = {
		{ "Category", "Quest|QuestLine" },
		{ "ModuleRelativePath", "Headers/System/UI_Quest/QuestData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConfigurationName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QuestLine;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UQuestData_Statics::NewProp_ConfigurationName = { "ConfigurationName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestData, ConfigurationName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConfigurationName_MetaData), NewProp_ConfigurationName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UQuestData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestData, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestData_Statics::NewProp_QuestLine = { "QuestLine", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestData, QuestLine), Z_Construct_UScriptStruct_FQuestLineStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestLine_MetaData), NewProp_QuestLine_MetaData) }; // 3197539372
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestData_Statics::NewProp_ConfigurationName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestData_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestData_Statics::NewProp_QuestLine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UQuestData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_BCR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestData_Statics::ClassParams = {
	&UQuestData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UQuestData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UQuestData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestData_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQuestData()
{
	if (!Z_Registration_Info_UClass_UQuestData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestData.OuterSingleton, Z_Construct_UClass_UQuestData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuestData.OuterSingleton;
}
template<> BCR_API UClass* StaticClass<UQuestData>()
{
	return UQuestData::StaticClass();
}
UQuestData::UQuestData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestData);
UQuestData::~UQuestData() {}
// End Class UQuestData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_UI_Quest_QuestData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FQuestStruct::StaticStruct, Z_Construct_UScriptStruct_FQuestStruct_Statics::NewStructOps, TEXT("QuestStruct"), &Z_Registration_Info_UScriptStruct_QuestStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuestStruct), 3577498120U) },
		{ FQuestLineStruct::StaticStruct, Z_Construct_UScriptStruct_FQuestLineStruct_Statics::NewStructOps, TEXT("QuestLineStruct"), &Z_Registration_Info_UScriptStruct_QuestLineStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuestLineStruct), 3197539372U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQuestData, UQuestData::StaticClass, TEXT("UQuestData"), &Z_Registration_Info_UClass_UQuestData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestData), 3888548738U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_UI_Quest_QuestData_h_1169607237(TEXT("/Script/BCR"),
	Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_UI_Quest_QuestData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_UI_Quest_QuestData_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_UI_Quest_QuestData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_UI_Quest_QuestData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
