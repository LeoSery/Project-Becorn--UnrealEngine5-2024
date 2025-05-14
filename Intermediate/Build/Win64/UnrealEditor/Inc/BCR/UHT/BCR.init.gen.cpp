// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCR_init() {}
	BCR_API UFunction* Z_Construct_UDelegateFunction_BCR_OnEndQTESignature__DelegateSignature();
	BCR_API UFunction* Z_Construct_UDelegateFunction_BCR_OnQTEComplete__DelegateSignature();
	BCR_API UFunction* Z_Construct_UDelegateFunction_BCR_OnQTEProgress__DelegateSignature();
	BCR_API UFunction* Z_Construct_UDelegateFunction_BCR_OnSnapPointQTEResult__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_BCR;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_BCR()
	{
		if (!Z_Registration_Info_UPackage__Script_BCR.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_BCR_OnEndQTESignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BCR_OnQTEComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BCR_OnQTEProgress__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BCR_OnSnapPointQTEResult__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/BCR",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xFEC91A5E,
				0x46C75A28,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_BCR.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_BCR.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_BCR(Z_Construct_UPackage__Script_BCR, TEXT("/Script/BCR"), Z_Registration_Info_UPackage__Script_BCR, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xFEC91A5E, 0x46C75A28));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
