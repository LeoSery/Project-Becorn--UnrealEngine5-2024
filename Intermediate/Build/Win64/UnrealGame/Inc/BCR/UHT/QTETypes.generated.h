// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Headers/System/QTE/QTETypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BCR_QTETypes_generated_h
#error "QTETypes.generated.h already included, missing '#pragma once' in QTETypes.h"
#endif
#define BCR_QTETypes_generated_h

#define FID_Users_Shadow_Documents_GitHub_M2_Project_Source_BCR_Headers_System_QTE_QTETypes_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQTEInputStep_Statics; \
	static class UScriptStruct* StaticStruct();


template<> BCR_API UScriptStruct* StaticStruct<struct FQTEInputStep>();

#define FID_Users_Shadow_Documents_GitHub_M2_Project_Source_BCR_Headers_System_QTE_QTETypes_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerSubSequence_Statics; \
	static class UScriptStruct* StaticStruct();


template<> BCR_API UScriptStruct* StaticStruct<struct FPlayerSubSequence>();

#define FID_Users_Shadow_Documents_GitHub_M2_Project_Source_BCR_Headers_System_QTE_QTETypes_h_90_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQTESequence_Statics; \
	static class UScriptStruct* StaticStruct();


template<> BCR_API UScriptStruct* StaticStruct<struct FQTESequence>();

#define FID_Users_Shadow_Documents_GitHub_M2_Project_Source_BCR_Headers_System_QTE_QTETypes_h_106_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQTEConfiguration_Statics; \
	static class UScriptStruct* StaticStruct();


template<> BCR_API UScriptStruct* StaticStruct<struct FQTEConfiguration>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Shadow_Documents_GitHub_M2_Project_Source_BCR_Headers_System_QTE_QTETypes_h


#define FOREACH_ENUM_EQTEINPUTTYPE(op) \
	op(EQTEInputType::None) \
	op(EQTEInputType::Tap) \
	op(EQTEInputType::Hold) \
	op(EQTEInputType::Release) \
	op(EQTEInputType::StickMove) 

enum class EQTEInputType : uint8;
template<> struct TIsUEnumClass<EQTEInputType> { enum { Value = true }; };
template<> BCR_API UEnum* StaticEnum<EQTEInputType>();

#define FOREACH_ENUM_EQTESTATE(op) \
	op(EQTEState::Inactive) \
	op(EQTEState::Running) \
	op(EQTEState::Paused) \
	op(EQTEState::Completed) \
	op(EQTEState::Failed) 

enum class EQTEState : uint8;
template<> struct TIsUEnumClass<EQTEState> { enum { Value = true }; };
template<> BCR_API UEnum* StaticEnum<EQTEState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
