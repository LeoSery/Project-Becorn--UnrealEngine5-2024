// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCR_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_BCR;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_BCR()
	{
		if (!Z_Registration_Info_UPackage__Script_BCR.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/BCR",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x3C4E9C54,
				0xE13D8476,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_BCR.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_BCR.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_BCR(Z_Construct_UPackage__Script_BCR, TEXT("/Script/BCR"), Z_Registration_Info_UPackage__Script_BCR, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x3C4E9C54, 0xE13D8476));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
