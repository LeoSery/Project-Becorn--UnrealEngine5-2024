// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Headers/System/MainCamera.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
#ifdef BCR_MainCamera_generated_h
#error "MainCamera.generated.h already included, missing '#pragma once' in MainCamera.h"
#endif
#define BCR_MainCamera_generated_h

#define FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_MainCamera_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetPlayers);


#define FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_MainCamera_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainCamera(); \
	friend struct Z_Construct_UClass_AMainCamera_Statics; \
public: \
	DECLARE_CLASS(AMainCamera, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BCR"), NO_API) \
	DECLARE_SERIALIZER(AMainCamera)


#define FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_MainCamera_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMainCamera(AMainCamera&&); \
	AMainCamera(const AMainCamera&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCamera); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainCamera) \
	NO_API virtual ~AMainCamera();


#define FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_MainCamera_h_12_PROLOG
#define FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_MainCamera_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_MainCamera_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_MainCamera_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_MainCamera_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BCR_API UClass* StaticClass<class AMainCamera>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_MainCamera_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
