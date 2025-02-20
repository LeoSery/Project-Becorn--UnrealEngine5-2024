// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Headers/System/MiniGame/MiniGameSystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APickableItem;
class UQTEConfigurationAsset;
enum class EQTEResult : uint8;
struct FQTEActionProgress;
#ifdef BCR_MiniGameSystem_generated_h
#error "MiniGameSystem.generated.h already included, missing '#pragma once' in MiniGameSystem.h"
#endif
#define BCR_MiniGameSystem_generated_h

#define FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_MiniGame_MiniGameSystem_h_13_DELEGATE \
BCR_API void FOnEndQTESignature_DelegateWrapper(const FMulticastScriptDelegate& OnEndQTESignature, bool _resultStatus);


#define FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_MiniGame_MiniGameSystem_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSecondSnapPointProgress); \
	DECLARE_FUNCTION(execOnFirstSnapPointProgress); \
	DECLARE_FUNCTION(execOnSecondSnapPointResult); \
	DECLARE_FUNCTION(execOnFirstSnapPointResult); \
	DECLARE_FUNCTION(execcheckItemPresent); \
	DECLARE_FUNCTION(execPartialReset); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execSpawnItem); \
	DECLARE_FUNCTION(execFinishExecute); \
	DECLARE_FUNCTION(execCallQTEReader); \
	DECLARE_FUNCTION(execStartExecute); \
	DECLARE_FUNCTION(execSetOutputItem); \
	DECLARE_FUNCTION(execSetQTE); \
	DECLARE_FUNCTION(execSetInputItem);


#define FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_MiniGame_MiniGameSystem_h_18_CALLBACK_WRAPPERS
#define FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_MiniGame_MiniGameSystem_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMiniGameSystem(); \
	friend struct Z_Construct_UClass_AMiniGameSystem_Statics; \
public: \
	DECLARE_CLASS(AMiniGameSystem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BCR"), NO_API) \
	DECLARE_SERIALIZER(AMiniGameSystem) \
	virtual UObject* _getUObject() const override { return const_cast<AMiniGameSystem*>(this); }


#define FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_MiniGame_MiniGameSystem_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMiniGameSystem(AMiniGameSystem&&); \
	AMiniGameSystem(const AMiniGameSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMiniGameSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMiniGameSystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMiniGameSystem) \
	NO_API virtual ~AMiniGameSystem();


#define FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_MiniGame_MiniGameSystem_h_15_PROLOG
#define FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_MiniGame_MiniGameSystem_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_MiniGame_MiniGameSystem_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_MiniGame_MiniGameSystem_h_18_CALLBACK_WRAPPERS \
	FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_MiniGame_MiniGameSystem_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_MiniGame_MiniGameSystem_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BCR_API UClass* StaticClass<class AMiniGameSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_MiniGame_MiniGameSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
