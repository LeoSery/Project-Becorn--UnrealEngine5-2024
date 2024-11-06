// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BCRGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BCR_BCRGameMode_generated_h
#error "BCRGameMode.generated.h already included, missing '#pragma once' in BCRGameMode.h"
#endif
#define BCR_BCRGameMode_generated_h

#define FID_M2_Project_Source_BCR_BCRGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABCRGameMode(); \
	friend struct Z_Construct_UClass_ABCRGameMode_Statics; \
public: \
	DECLARE_CLASS(ABCRGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/BCR"), BCR_API) \
	DECLARE_SERIALIZER(ABCRGameMode)


#define FID_M2_Project_Source_BCR_BCRGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABCRGameMode(ABCRGameMode&&); \
	ABCRGameMode(const ABCRGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BCR_API, ABCRGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABCRGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABCRGameMode) \
	BCR_API virtual ~ABCRGameMode();


#define FID_M2_Project_Source_BCR_BCRGameMode_h_9_PROLOG
#define FID_M2_Project_Source_BCR_BCRGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_M2_Project_Source_BCR_BCRGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_M2_Project_Source_BCR_BCRGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BCR_API UClass* StaticClass<class ABCRGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_M2_Project_Source_BCR_BCRGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
