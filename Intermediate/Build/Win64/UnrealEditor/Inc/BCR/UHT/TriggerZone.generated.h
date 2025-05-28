// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Headers/System/Event/TriggerZone.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef BCR_TriggerZone_generated_h
#error "TriggerZone.generated.h already included, missing '#pragma once' in TriggerZone.h"
#endif
#define BCR_TriggerZone_generated_h

#define FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_Event_TriggerZone_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTriggerData_Statics; \
	BCR_API static class UScriptStruct* StaticStruct();


template<> BCR_API UScriptStruct* StaticStruct<struct FTriggerData>();

#define FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_Event_TriggerZone_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnActorExitOuterZone); \
	DECLARE_FUNCTION(execOnActorExitInnerZone); \
	DECLARE_FUNCTION(execOnActorEnterOuterZone); \
	DECLARE_FUNCTION(execOnActorEnterInnerZone);


#define FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_Event_TriggerZone_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTriggerZone(); \
	friend struct Z_Construct_UClass_UTriggerZone_Statics; \
public: \
	DECLARE_CLASS(UTriggerZone, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BCR"), NO_API) \
	DECLARE_SERIALIZER(UTriggerZone)


#define FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_Event_TriggerZone_h_59_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTriggerZone(UTriggerZone&&); \
	UTriggerZone(const UTriggerZone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerZone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerZone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTriggerZone) \
	NO_API virtual ~UTriggerZone();


#define FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_Event_TriggerZone_h_56_PROLOG
#define FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_Event_TriggerZone_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_Event_TriggerZone_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_Event_TriggerZone_h_59_INCLASS_NO_PURE_DECLS \
	FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_Event_TriggerZone_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BCR_API UClass* StaticClass<class UTriggerZone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_Event_TriggerZone_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
