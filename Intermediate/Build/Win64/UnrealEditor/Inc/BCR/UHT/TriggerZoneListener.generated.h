// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Headers/System/Event/TriggerZoneListener.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTriggerData;
#ifdef BCR_TriggerZoneListener_generated_h
#error "TriggerZoneListener.generated.h already included, missing '#pragma once' in TriggerZoneListener.h"
#endif
#define BCR_TriggerZoneListener_generated_h

#define FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_Event_TriggerZoneListener_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnPlayersExitOuterZone_Implementation(FTriggerData const& TriggerData) {}; \
	virtual void OnTwoPlayersEnterOuterZone_Implementation(FTriggerData const& TriggerData) {}; \
	virtual void OnOnePlayerEnterOuterZone_Implementation(FTriggerData const& TriggerData) {}; \
	virtual void OnPlayersExitInnerZone_Implementation(FTriggerData const& TriggerData) {}; \
	virtual void OnTwoPlayersEnterInnerZone_Implementation(FTriggerData const& TriggerData) {}; \
	virtual void OnOnePlayerEnterInnerZone_Implementation(FTriggerData const& TriggerData) {}; \
	DECLARE_FUNCTION(execOnPlayersExitOuterZone); \
	DECLARE_FUNCTION(execOnTwoPlayersEnterOuterZone); \
	DECLARE_FUNCTION(execOnOnePlayerEnterOuterZone); \
	DECLARE_FUNCTION(execOnPlayersExitInnerZone); \
	DECLARE_FUNCTION(execOnTwoPlayersEnterInnerZone); \
	DECLARE_FUNCTION(execOnOnePlayerEnterInnerZone);


#define FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_Event_TriggerZoneListener_h_19_CALLBACK_WRAPPERS
#define FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_Event_TriggerZoneListener_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerZoneListener(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTriggerZoneListener(UTriggerZoneListener&&); \
	UTriggerZoneListener(const UTriggerZoneListener&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerZoneListener); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerZoneListener); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerZoneListener) \
	NO_API virtual ~UTriggerZoneListener();


#define FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_Event_TriggerZoneListener_h_19_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTriggerZoneListener(); \
	friend struct Z_Construct_UClass_UTriggerZoneListener_Statics; \
public: \
	DECLARE_CLASS(UTriggerZoneListener, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BCR"), NO_API) \
	DECLARE_SERIALIZER(UTriggerZoneListener)


#define FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_Event_TriggerZoneListener_h_19_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_Event_TriggerZoneListener_h_19_GENERATED_UINTERFACE_BODY() \
	FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_Event_TriggerZoneListener_h_19_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_Event_TriggerZoneListener_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITriggerZoneListener() {} \
public: \
	typedef UTriggerZoneListener UClassType; \
	typedef ITriggerZoneListener ThisClass; \
	static void Execute_OnOnePlayerEnterInnerZone(UObject* O, FTriggerData const& TriggerData); \
	static void Execute_OnOnePlayerEnterOuterZone(UObject* O, FTriggerData const& TriggerData); \
	static void Execute_OnPlayersExitInnerZone(UObject* O, FTriggerData const& TriggerData); \
	static void Execute_OnPlayersExitOuterZone(UObject* O, FTriggerData const& TriggerData); \
	static void Execute_OnTwoPlayersEnterInnerZone(UObject* O, FTriggerData const& TriggerData); \
	static void Execute_OnTwoPlayersEnterOuterZone(UObject* O, FTriggerData const& TriggerData); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_Event_TriggerZoneListener_h_16_PROLOG
#define FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_Event_TriggerZoneListener_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_Event_TriggerZoneListener_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_Event_TriggerZoneListener_h_19_CALLBACK_WRAPPERS \
	FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_Event_TriggerZoneListener_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BCR_API UClass* StaticClass<class UTriggerZoneListener>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_Event_TriggerZoneListener_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
