// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Headers/Interfaces/Interactable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef BCR_Interactable_generated_h
#error "Interactable.generated.h already included, missing '#pragma once' in Interactable.h"
#endif
#define BCR_Interactable_generated_h

#define FID_Users_mathi_Documents_GitHub_M2_Project_Source_BCR_Headers_Interfaces_Interactable_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Interact_Implementation(AActor* Player) {}; \
	DECLARE_FUNCTION(execInteract);


#define FID_Users_mathi_Documents_GitHub_M2_Project_Source_BCR_Headers_Interfaces_Interactable_h_10_CALLBACK_WRAPPERS
#define FID_Users_mathi_Documents_GitHub_M2_Project_Source_BCR_Headers_Interfaces_Interactable_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BCR_API UInteractable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInteractable(UInteractable&&); \
	UInteractable(const UInteractable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BCR_API, UInteractable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractable) \
	BCR_API virtual ~UInteractable();


#define FID_Users_mathi_Documents_GitHub_M2_Project_Source_BCR_Headers_Interfaces_Interactable_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractable(); \
	friend struct Z_Construct_UClass_UInteractable_Statics; \
public: \
	DECLARE_CLASS(UInteractable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BCR"), BCR_API) \
	DECLARE_SERIALIZER(UInteractable)


#define FID_Users_mathi_Documents_GitHub_M2_Project_Source_BCR_Headers_Interfaces_Interactable_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_mathi_Documents_GitHub_M2_Project_Source_BCR_Headers_Interfaces_Interactable_h_10_GENERATED_UINTERFACE_BODY() \
	FID_Users_mathi_Documents_GitHub_M2_Project_Source_BCR_Headers_Interfaces_Interactable_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_mathi_Documents_GitHub_M2_Project_Source_BCR_Headers_Interfaces_Interactable_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractable() {} \
public: \
	typedef UInteractable UClassType; \
	typedef IInteractable ThisClass; \
	static void Execute_Interact(UObject* O, AActor* Player); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_mathi_Documents_GitHub_M2_Project_Source_BCR_Headers_Interfaces_Interactable_h_7_PROLOG
#define FID_Users_mathi_Documents_GitHub_M2_Project_Source_BCR_Headers_Interfaces_Interactable_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_mathi_Documents_GitHub_M2_Project_Source_BCR_Headers_Interfaces_Interactable_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_mathi_Documents_GitHub_M2_Project_Source_BCR_Headers_Interfaces_Interactable_h_10_CALLBACK_WRAPPERS \
	FID_Users_mathi_Documents_GitHub_M2_Project_Source_BCR_Headers_Interfaces_Interactable_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BCR_API UClass* StaticClass<class UInteractable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_mathi_Documents_GitHub_M2_Project_Source_BCR_Headers_Interfaces_Interactable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS