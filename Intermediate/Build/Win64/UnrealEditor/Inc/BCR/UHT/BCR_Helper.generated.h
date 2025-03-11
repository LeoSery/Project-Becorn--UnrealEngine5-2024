// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Headers/Interfaces/BCR_Helper.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BCR_BCR_Helper_generated_h
#error "BCR_Helper.generated.h already included, missing '#pragma once' in BCR_Helper.h"
#endif
#define BCR_BCR_Helper_generated_h

#define FID_Users_fieng_OneDrive_Documents_GitHub_M2_Project_Source_BCR_Headers_Interfaces_BCR_Helper_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BCR_API UBCR_Helper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBCR_Helper(UBCR_Helper&&); \
	UBCR_Helper(const UBCR_Helper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BCR_API, UBCR_Helper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBCR_Helper); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBCR_Helper) \
	BCR_API virtual ~UBCR_Helper();


#define FID_Users_fieng_OneDrive_Documents_GitHub_M2_Project_Source_BCR_Headers_Interfaces_BCR_Helper_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBCR_Helper(); \
	friend struct Z_Construct_UClass_UBCR_Helper_Statics; \
public: \
	DECLARE_CLASS(UBCR_Helper, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BCR"), BCR_API) \
	DECLARE_SERIALIZER(UBCR_Helper)


#define FID_Users_fieng_OneDrive_Documents_GitHub_M2_Project_Source_BCR_Headers_Interfaces_BCR_Helper_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_fieng_OneDrive_Documents_GitHub_M2_Project_Source_BCR_Headers_Interfaces_BCR_Helper_h_10_GENERATED_UINTERFACE_BODY() \
	FID_Users_fieng_OneDrive_Documents_GitHub_M2_Project_Source_BCR_Headers_Interfaces_BCR_Helper_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_fieng_OneDrive_Documents_GitHub_M2_Project_Source_BCR_Headers_Interfaces_BCR_Helper_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBCR_Helper() {} \
public: \
	typedef UBCR_Helper UClassType; \
	typedef IBCR_Helper ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_fieng_OneDrive_Documents_GitHub_M2_Project_Source_BCR_Headers_Interfaces_BCR_Helper_h_7_PROLOG
#define FID_Users_fieng_OneDrive_Documents_GitHub_M2_Project_Source_BCR_Headers_Interfaces_BCR_Helper_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_fieng_OneDrive_Documents_GitHub_M2_Project_Source_BCR_Headers_Interfaces_BCR_Helper_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BCR_API UClass* StaticClass<class UBCR_Helper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_fieng_OneDrive_Documents_GitHub_M2_Project_Source_BCR_Headers_Interfaces_BCR_Helper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
