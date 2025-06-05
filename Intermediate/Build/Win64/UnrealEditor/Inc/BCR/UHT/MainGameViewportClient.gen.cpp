// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCR/Headers/Core/MainGameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainGameViewportClient() {}

// Begin Cross Module References
BCR_API UClass* Z_Construct_UClass_UMainGameViewportClient();
BCR_API UClass* Z_Construct_UClass_UMainGameViewportClient_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameViewportClient();
UPackage* Z_Construct_UPackage__Script_BCR();
// End Cross Module References

// Begin Class UMainGameViewportClient
void UMainGameViewportClient::StaticRegisterNativesUMainGameViewportClient()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMainGameViewportClient);
UClass* Z_Construct_UClass_UMainGameViewportClient_NoRegister()
{
	return UMainGameViewportClient::StaticClass();
}
struct Z_Construct_UClass_UMainGameViewportClient_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Headers/Core/MainGameViewportClient.h" },
		{ "ModuleRelativePath", "Headers/Core/MainGameViewportClient.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainGameViewportClient>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMainGameViewportClient_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameViewportClient,
	(UObject* (*)())Z_Construct_UPackage__Script_BCR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainGameViewportClient_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMainGameViewportClient_Statics::ClassParams = {
	&UMainGameViewportClient::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainGameViewportClient_Statics::Class_MetaDataParams), Z_Construct_UClass_UMainGameViewportClient_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMainGameViewportClient()
{
	if (!Z_Registration_Info_UClass_UMainGameViewportClient.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMainGameViewportClient.OuterSingleton, Z_Construct_UClass_UMainGameViewportClient_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMainGameViewportClient.OuterSingleton;
}
template<> BCR_API UClass* StaticClass<UMainGameViewportClient>()
{
	return UMainGameViewportClient::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMainGameViewportClient);
UMainGameViewportClient::~UMainGameViewportClient() {}
// End Class UMainGameViewportClient

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_Core_MainGameViewportClient_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMainGameViewportClient, UMainGameViewportClient::StaticClass, TEXT("UMainGameViewportClient"), &Z_Registration_Info_UClass_UMainGameViewportClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainGameViewportClient), 3879287204U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_Core_MainGameViewportClient_h_3883377661(TEXT("/Script/BCR"),
	Z_CompiledInDeferFile_FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_Core_MainGameViewportClient_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_Core_MainGameViewportClient_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
