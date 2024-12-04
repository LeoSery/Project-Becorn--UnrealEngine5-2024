// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Headers/System/QTE/QTE_System.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMainPlayer;
struct FQTEConfiguration;
#ifdef BCR_QTE_System_generated_h
#error "QTE_System.generated.h already included, missing '#pragma once' in QTE_System.h"
#endif
#define BCR_QTE_System_generated_h

#define FID_Users_fieng_OneDrive_Documents_GitHub_M2_Project_Source_BCR_Headers_System_QTE_QTE_System_h_12_DELEGATE \
BCR_API void FOnPlayerSubSequenceCompleteSignature_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerSubSequenceCompleteSignature, AMainPlayer* Player, int32 SequenceIndex);


#define FID_Users_fieng_OneDrive_Documents_GitHub_M2_Project_Source_BCR_Headers_System_QTE_QTE_System_h_14_DELEGATE \
BCR_API void FOnPlayerSubSequenceFailedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerSubSequenceFailedSignature, AMainPlayer* Player, int32 SequenceIndex);


#define FID_Users_fieng_OneDrive_Documents_GitHub_M2_Project_Source_BCR_Headers_System_QTE_QTE_System_h_16_DELEGATE \
BCR_API void FOnSequenceCompleteSignature_DelegateWrapper(const FMulticastScriptDelegate& OnSequenceCompleteSignature, int32 SequenceIndex);


#define FID_Users_fieng_OneDrive_Documents_GitHub_M2_Project_Source_BCR_Headers_System_QTE_QTE_System_h_18_DELEGATE \
BCR_API void FOnSequenceFailedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnSequenceFailedSignature, int32 SequenceIndex);


#define FID_Users_fieng_OneDrive_Documents_GitHub_M2_Project_Source_BCR_Headers_System_QTE_QTE_System_h_20_DELEGATE \
BCR_API void FOnQTECompleteSignature_DelegateWrapper(const FMulticastScriptDelegate& OnQTECompleteSignature, bool bSuccess);


#define FID_Users_fieng_OneDrive_Documents_GitHub_M2_Project_Source_BCR_Headers_System_QTE_QTE_System_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetQTEPaused); \
	DECLARE_FUNCTION(execStopQTE); \
	DECLARE_FUNCTION(execStartQTE);


#define FID_Users_fieng_OneDrive_Documents_GitHub_M2_Project_Source_BCR_Headers_System_QTE_QTE_System_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQTE_System(); \
	friend struct Z_Construct_UClass_UQTE_System_Statics; \
public: \
	DECLARE_CLASS(UQTE_System, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BCR"), NO_API) \
	DECLARE_SERIALIZER(UQTE_System)


#define FID_Users_fieng_OneDrive_Documents_GitHub_M2_Project_Source_BCR_Headers_System_QTE_QTE_System_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQTE_System(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UQTE_System(UQTE_System&&); \
	UQTE_System(const UQTE_System&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQTE_System); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQTE_System); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQTE_System) \
	NO_API virtual ~UQTE_System();


#define FID_Users_fieng_OneDrive_Documents_GitHub_M2_Project_Source_BCR_Headers_System_QTE_QTE_System_h_28_PROLOG
#define FID_Users_fieng_OneDrive_Documents_GitHub_M2_Project_Source_BCR_Headers_System_QTE_QTE_System_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_fieng_OneDrive_Documents_GitHub_M2_Project_Source_BCR_Headers_System_QTE_QTE_System_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_fieng_OneDrive_Documents_GitHub_M2_Project_Source_BCR_Headers_System_QTE_QTE_System_h_31_INCLASS_NO_PURE_DECLS \
	FID_Users_fieng_OneDrive_Documents_GitHub_M2_Project_Source_BCR_Headers_System_QTE_QTE_System_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BCR_API UClass* StaticClass<class UQTE_System>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_fieng_OneDrive_Documents_GitHub_M2_Project_Source_BCR_Headers_System_QTE_QTE_System_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
