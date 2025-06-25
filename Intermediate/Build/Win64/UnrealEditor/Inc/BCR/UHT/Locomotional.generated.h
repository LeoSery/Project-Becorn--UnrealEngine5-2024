// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Headers/Interfaces/Locomotional.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULocomotionConfigurationAsset;
struct FLocomotionConfiguration;
#ifdef BCR_Locomotional_generated_h
#error "Locomotional.generated.h already included, missing '#pragma once' in Locomotional.h"
#endif
#define BCR_Locomotional_generated_h

#define FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_Interfaces_Locomotional_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetLocomotionConfig); \
	DECLARE_FUNCTION(execSetLocomotionConfig);


#define FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_Interfaces_Locomotional_h_23_CALLBACK_WRAPPERS
#define FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_Interfaces_Locomotional_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BCR_API ULocomotional(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULocomotional(ULocomotional&&); \
	ULocomotional(const ULocomotional&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BCR_API, ULocomotional); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocomotional); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocomotional) \
	BCR_API virtual ~ULocomotional();


#define FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_Interfaces_Locomotional_h_23_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesULocomotional(); \
	friend struct Z_Construct_UClass_ULocomotional_Statics; \
public: \
	DECLARE_CLASS(ULocomotional, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BCR"), BCR_API) \
	DECLARE_SERIALIZER(ULocomotional)


#define FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_Interfaces_Locomotional_h_23_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_Interfaces_Locomotional_h_23_GENERATED_UINTERFACE_BODY() \
	FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_Interfaces_Locomotional_h_23_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_Interfaces_Locomotional_h_23_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ILocomotional() {} \
public: \
	typedef ULocomotional UClassType; \
	typedef ILocomotional ThisClass; \
	static FLocomotionConfiguration Execute_ResetLocomotionConfig(UObject* O); \
	static FLocomotionConfiguration Execute_SetLocomotionConfig(UObject* O, ULocomotionConfigurationAsset* NewConfig); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_Interfaces_Locomotional_h_20_PROLOG
#define FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_Interfaces_Locomotional_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_Interfaces_Locomotional_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_Interfaces_Locomotional_h_23_CALLBACK_WRAPPERS \
	FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_Interfaces_Locomotional_h_23_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BCR_API UClass* StaticClass<class ULocomotional>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_Interfaces_Locomotional_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
