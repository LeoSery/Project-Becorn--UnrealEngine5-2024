// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Headers/System/FurnitureAssembler.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
struct FRecipiesInfo;
#ifdef BCR_FurnitureAssembler_generated_h
#error "FurnitureAssembler.generated.h already included, missing '#pragma once' in FurnitureAssembler.h"
#endif
#define BCR_FurnitureAssembler_generated_h

#define FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_FurnitureAssembler_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRecipiesInfo_Statics; \
	BCR_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> BCR_API UScriptStruct* StaticStruct<struct FRecipiesInfo>();

#define FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_FurnitureAssembler_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetActualRecipiesInfo); \
	DECLARE_FUNCTION(execOnElementDropOnAssembler); \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execCraftFurniture);


#define FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_FurnitureAssembler_h_30_CALLBACK_WRAPPERS
#define FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_FurnitureAssembler_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFurnitureAssembler(); \
	friend struct Z_Construct_UClass_AFurnitureAssembler_Statics; \
public: \
	DECLARE_CLASS(AFurnitureAssembler, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BCR"), NO_API) \
	DECLARE_SERIALIZER(AFurnitureAssembler) \
	virtual UObject* _getUObject() const override { return const_cast<AFurnitureAssembler*>(this); }


#define FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_FurnitureAssembler_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFurnitureAssembler(AFurnitureAssembler&&); \
	AFurnitureAssembler(const AFurnitureAssembler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFurnitureAssembler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFurnitureAssembler); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFurnitureAssembler) \
	NO_API virtual ~AFurnitureAssembler();


#define FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_FurnitureAssembler_h_27_PROLOG
#define FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_FurnitureAssembler_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_FurnitureAssembler_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_FurnitureAssembler_h_30_CALLBACK_WRAPPERS \
	FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_FurnitureAssembler_h_30_INCLASS_NO_PURE_DECLS \
	FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_FurnitureAssembler_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BCR_API UClass* StaticClass<class AFurnitureAssembler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_FurnitureAssembler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
