// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Headers/Core/ProjectDataFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BCR_ProjectDataFunctionLibrary_generated_h
#error "ProjectDataFunctionLibrary.generated.h already included, missing '#pragma once' in ProjectDataFunctionLibrary.h"
#endif
#define BCR_ProjectDataFunctionLibrary_generated_h

#define FID_Users_mathi_Documents_GitHub_M2_Project_Source_BCR_Headers_Core_ProjectDataFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetBuildType); \
	DECLARE_FUNCTION(execGetBuildDate); \
	DECLARE_FUNCTION(execGetCurrentPlatform); \
	DECLARE_FUNCTION(execGetProjectName); \
	DECLARE_FUNCTION(execGetProjectVersion); \
	DECLARE_FUNCTION(execGetAppVersion);


#define FID_Users_mathi_Documents_GitHub_M2_Project_Source_BCR_Headers_Core_ProjectDataFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProjectDataFunctionLibrary(); \
	friend struct Z_Construct_UClass_UProjectDataFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UProjectDataFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BCR"), NO_API) \
	DECLARE_SERIALIZER(UProjectDataFunctionLibrary)


#define FID_Users_mathi_Documents_GitHub_M2_Project_Source_BCR_Headers_Core_ProjectDataFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProjectDataFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UProjectDataFunctionLibrary(UProjectDataFunctionLibrary&&); \
	UProjectDataFunctionLibrary(const UProjectDataFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProjectDataFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProjectDataFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProjectDataFunctionLibrary) \
	NO_API virtual ~UProjectDataFunctionLibrary();


#define FID_Users_mathi_Documents_GitHub_M2_Project_Source_BCR_Headers_Core_ProjectDataFunctionLibrary_h_14_PROLOG
#define FID_Users_mathi_Documents_GitHub_M2_Project_Source_BCR_Headers_Core_ProjectDataFunctionLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_mathi_Documents_GitHub_M2_Project_Source_BCR_Headers_Core_ProjectDataFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_mathi_Documents_GitHub_M2_Project_Source_BCR_Headers_Core_ProjectDataFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_mathi_Documents_GitHub_M2_Project_Source_BCR_Headers_Core_ProjectDataFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BCR_API UClass* StaticClass<class UProjectDataFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_mathi_Documents_GitHub_M2_Project_Source_BCR_Headers_Core_ProjectDataFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
