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

#define FID_Users_Shadow_Documents_GitHub_M2_Project_Source_BCR_Headers_System_QTE_QTETypes_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQTEProgressData_Statics; \
	BCR_API static class UScriptStruct* StaticStruct();


template<> BCR_API UScriptStruct* StaticStruct<struct FQTEProgressData>();

#define FID_Users_Shadow_Documents_GitHub_M2_Project_Source_BCR_Headers_System_QTE_QTETypes_h_71_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSnapPointConfig_Statics; \
	static class UScriptStruct* StaticStruct();


template<> BCR_API UScriptStruct* StaticStruct<struct FSnapPointConfig>();

#define FID_Users_Shadow_Documents_GitHub_M2_Project_Source_BCR_Headers_System_QTE_QTETypes_h_98_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQTEConfiguration_Statics; \
	static class UScriptStruct* StaticStruct();


template<> BCR_API UScriptStruct* StaticStruct<struct FQTEConfiguration>();

#define FID_Users_Shadow_Documents_GitHub_M2_Project_Source_BCR_Headers_System_QTE_QTETypes_h_125_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQTEActionProgress_Statics; \
	static class UScriptStruct* StaticStruct();


template<> BCR_API UScriptStruct* StaticStruct<struct FQTEActionProgress>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Shadow_Documents_GitHub_M2_Project_Source_BCR_Headers_System_QTE_QTETypes_h


#define FOREACH_ENUM_EQTERESULT(op) \
	op(EQTEResult::None) \
	op(EQTEResult::Success) \
	op(EQTEResult::Failure) 

enum class EQTEResult : uint8;
template<> struct TIsUEnumClass<EQTEResult> { enum { Value = true }; };
template<> BCR_API UEnum* StaticEnum<EQTEResult>();

#define FOREACH_ENUM_EQTEACTIONTYPE(op) \
	op(EQTEActionType::None) \
	op(EQTEActionType::Press) \
	op(EQTEActionType::Hold) \
	op(EQTEActionType::Release) \
	op(EQTEActionType::Rotate) 

enum class EQTEActionType : uint8;
template<> struct TIsUEnumClass<EQTEActionType> { enum { Value = true }; };
template<> BCR_API UEnum* StaticEnum<EQTEActionType>();

#define FOREACH_ENUM_EQTESTATE(op) \
	op(EQTEState::Inactive) \
	op(EQTEState::WaitingForPlayers) \
	op(EQTEState::Running) \
	op(EQTEState::Paused) \
	op(EQTEState::Completed) \
	op(EQTEState::Failed) 

enum class EQTEState : uint8;
template<> struct TIsUEnumClass<EQTEState> { enum { Value = true }; };
template<> BCR_API UEnum* StaticEnum<EQTEState>();

#define FOREACH_ENUM_ESNAPPOINTTYPE(op) \
	op(ESnapPointType::First) \
	op(ESnapPointType::Second) 

enum class ESnapPointType : uint8;
template<> struct TIsUEnumClass<ESnapPointType> { enum { Value = true }; };
template<> BCR_API UEnum* StaticEnum<ESnapPointType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
