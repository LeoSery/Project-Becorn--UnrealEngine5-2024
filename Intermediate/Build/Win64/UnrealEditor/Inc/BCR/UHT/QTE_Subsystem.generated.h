// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Headers/System/QTE/QTE_Subsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMainPlayer;
class UQTEConfigurationAsset;
enum class EQTEResult : uint8;
enum class ESnapPointType : uint8;
struct FQTEActionProgress;
struct FQTEConfiguration;
#ifdef BCR_QTE_Subsystem_generated_h
#error "QTE_Subsystem.generated.h already included, missing '#pragma once' in QTE_Subsystem.h"
#endif
#define BCR_QTE_Subsystem_generated_h

#define FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_QTE_QTE_Subsystem_h_14_DELEGATE \
BCR_API void FOnSnapPointQTEResult_DelegateWrapper(const FMulticastScriptDelegate& OnSnapPointQTEResult, EQTEResult Result);


#define FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_QTE_QTE_Subsystem_h_15_DELEGATE \
BCR_API void FOnQTEComplete_DelegateWrapper(const FMulticastScriptDelegate& OnQTEComplete, bool bSuccess);


#define FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_QTE_QTE_Subsystem_h_16_DELEGATE \
BCR_API void FOnQTEProgress_DelegateWrapper(const FMulticastScriptDelegate& OnQTEProgress, FQTEActionProgress const& Progress);


#define FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_QTE_QTE_Subsystem_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPlayerLeaveSnapPoint); \
	DECLARE_FUNCTION(execOnPlayerEnterSnapPoint); \
	DECLARE_FUNCTION(execSetQTEPaused); \
	DECLARE_FUNCTION(execStopQTE); \
	DECLARE_FUNCTION(execStartQTE); \
	DECLARE_FUNCTION(execStartQTEFromAsset);


#define FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_QTE_QTE_Subsystem_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQTE_Subsystem(); \
	friend struct Z_Construct_UClass_UQTE_Subsystem_Statics; \
public: \
	DECLARE_CLASS(UQTE_Subsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BCR"), NO_API) \
	DECLARE_SERIALIZER(UQTE_Subsystem)


#define FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_QTE_QTE_Subsystem_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQTE_Subsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UQTE_Subsystem(UQTE_Subsystem&&); \
	UQTE_Subsystem(const UQTE_Subsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQTE_Subsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQTE_Subsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UQTE_Subsystem) \
	NO_API virtual ~UQTE_Subsystem();


#define FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_QTE_QTE_Subsystem_h_18_PROLOG
#define FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_QTE_QTE_Subsystem_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_QTE_QTE_Subsystem_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_QTE_QTE_Subsystem_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_QTE_QTE_Subsystem_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BCR_API UClass* StaticClass<class UQTE_Subsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_QTE_QTE_Subsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
