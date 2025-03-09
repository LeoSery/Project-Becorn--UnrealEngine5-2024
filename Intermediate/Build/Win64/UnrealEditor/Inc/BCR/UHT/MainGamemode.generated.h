// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Headers/Core/MainGamemode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BCR_MainGamemode_generated_h
#error "MainGamemode.generated.h already included, missing '#pragma once' in MainGamemode.h"
#endif
#define BCR_MainGamemode_generated_h

#define FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_Core_MainGamemode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateLocalPlayer);


#define FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_Core_MainGamemode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainGamemode(); \
	friend struct Z_Construct_UClass_AMainGamemode_Statics; \
public: \
	DECLARE_CLASS(AMainGamemode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/BCR"), BCR_API) \
	DECLARE_SERIALIZER(AMainGamemode)


#define FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_Core_MainGamemode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMainGamemode(AMainGamemode&&); \
	AMainGamemode(const AMainGamemode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BCR_API, AMainGamemode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainGamemode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainGamemode) \
	BCR_API virtual ~AMainGamemode();


#define FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_Core_MainGamemode_h_9_PROLOG
#define FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_Core_MainGamemode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_Core_MainGamemode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_Core_MainGamemode_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_Core_MainGamemode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BCR_API UClass* StaticClass<class AMainGamemode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_Core_MainGamemode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
