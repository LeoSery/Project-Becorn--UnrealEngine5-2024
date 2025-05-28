// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Headers/Interfaces/IPickable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef BCR_IPickable_generated_h
#error "IPickable.generated.h already included, missing '#pragma once' in IPickable.h"
#endif
#define BCR_IPickable_generated_h

#define FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_Interfaces_IPickable_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDrop); \
	DECLARE_FUNCTION(execPickedUp);


#define FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_Interfaces_IPickable_h_10_CALLBACK_WRAPPERS
#define FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_Interfaces_IPickable_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BCR_API UIPickable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UIPickable(UIPickable&&); \
	UIPickable(const UIPickable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BCR_API, UIPickable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIPickable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIPickable) \
	BCR_API virtual ~UIPickable();


#define FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_Interfaces_IPickable_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIPickable(); \
	friend struct Z_Construct_UClass_UIPickable_Statics; \
public: \
	DECLARE_CLASS(UIPickable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BCR"), BCR_API) \
	DECLARE_SERIALIZER(UIPickable)


#define FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_Interfaces_IPickable_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_Interfaces_IPickable_h_10_GENERATED_UINTERFACE_BODY() \
	FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_Interfaces_IPickable_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_Interfaces_IPickable_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIPickable() {} \
public: \
	typedef UIPickable UClassType; \
	typedef IIPickable ThisClass; \
	static void Execute_Drop(UObject* O, AActor* Player, AActor* Object); \
	static void Execute_PickedUp(UObject* O, AActor* Player, AActor* Object); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_Interfaces_IPickable_h_7_PROLOG
#define FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_Interfaces_IPickable_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_Interfaces_IPickable_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_Interfaces_IPickable_h_10_CALLBACK_WRAPPERS \
	FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_Interfaces_IPickable_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BCR_API UClass* StaticClass<class UIPickable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_Interfaces_IPickable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
