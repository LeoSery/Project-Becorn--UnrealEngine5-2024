// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCR_init() {}
	BCR_API UFunction* Z_Construct_UDelegateFunction_BCR_OnEndQTESignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_BCR;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_BCR()
	{
		if (!Z_Registration_Info_UPackage__Script_BCR.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_BCR_OnEndQTESignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/BCR",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xE4BC0B54,
				0x5FA560FD,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_BCR.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_BCR.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_BCR(Z_Construct_UPackage__Script_BCR, TEXT("/Script/BCR"), Z_Registration_Info_UPackage__Script_BCR, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE4BC0B54, 0x5FA560FD));
PRAGMA_ENABLE_DEPRECATION_WARNINGS