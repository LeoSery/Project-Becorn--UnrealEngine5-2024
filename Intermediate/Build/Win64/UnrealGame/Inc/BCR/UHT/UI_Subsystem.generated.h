// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Headers/System/UI_Quest/UI_Subsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UQuestData;
#ifdef BCR_UI_Subsystem_generated_h
#error "UI_Subsystem.generated.h already included, missing '#pragma once' in UI_Subsystem.h"
#endif
#define BCR_UI_Subsystem_generated_h

#define FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_UI_Quest_UI_Subsystem_h_10_DELEGATE \
BCR_API void FOnQuestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnQuestCompleted, const FString& tag);


#define FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_UI_Quest_UI_Subsystem_h_11_DELEGATE \
BCR_API void FOnQuestLineCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnQuestLineCompleted, const FString& tag);


#define FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_UI_Quest_UI_Subsystem_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCurrentQuestProgress); \
	DECLARE_FUNCTION(execGetCurrentQuestAmount); \
	DECLARE_FUNCTION(execGetCurrentQuestTag); \
	DECLARE_FUNCTION(execGetCurrentQuestDesc); \
	DECLARE_FUNCTION(execProgressQuest); \
	DECLARE_FUNCTION(execCompleteQuest); \
	DECLARE_FUNCTION(execLoadQuestLine);


#define FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_UI_Quest_UI_Subsystem_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuest_Subsystem(); \
	friend struct Z_Construct_UClass_UQuest_Subsystem_Statics; \
public: \
	DECLARE_CLASS(UQuest_Subsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BCR"), NO_API) \
	DECLARE_SERIALIZER(UQuest_Subsystem)


#define FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_UI_Quest_UI_Subsystem_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuest_Subsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UQuest_Subsystem(UQuest_Subsystem&&); \
	UQuest_Subsystem(const UQuest_Subsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuest_Subsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuest_Subsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UQuest_Subsystem) \
	NO_API virtual ~UQuest_Subsystem();


#define FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_UI_Quest_UI_Subsystem_h_19_PROLOG
#define FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_UI_Quest_UI_Subsystem_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_UI_Quest_UI_Subsystem_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_UI_Quest_UI_Subsystem_h_22_INCLASS_NO_PURE_DECLS \
	FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_UI_Quest_UI_Subsystem_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BCR_API UClass* StaticClass<class UQuest_Subsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_UI_Quest_UI_Subsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
