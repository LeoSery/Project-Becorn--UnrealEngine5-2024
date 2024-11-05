// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BCRCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BCR_BCRCharacter_generated_h
#error "BCRCharacter.generated.h already included, missing '#pragma once' in BCRCharacter.h"
#endif
#define BCR_BCRCharacter_generated_h

#define FID_M2_Project_Source_BCR_BCRCharacter_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABCRCharacter(); \
	friend struct Z_Construct_UClass_ABCRCharacter_Statics; \
public: \
	DECLARE_CLASS(ABCRCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BCR"), NO_API) \
	DECLARE_SERIALIZER(ABCRCharacter)


#define FID_M2_Project_Source_BCR_BCRCharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABCRCharacter(ABCRCharacter&&); \
	ABCRCharacter(const ABCRCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABCRCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABCRCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABCRCharacter) \
	NO_API virtual ~ABCRCharacter();


#define FID_M2_Project_Source_BCR_BCRCharacter_h_16_PROLOG
#define FID_M2_Project_Source_BCR_BCRCharacter_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_M2_Project_Source_BCR_BCRCharacter_h_19_INCLASS_NO_PURE_DECLS \
	FID_M2_Project_Source_BCR_BCRCharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BCR_API UClass* StaticClass<class ABCRCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_M2_Project_Source_BCR_BCRCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
