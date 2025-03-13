// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Headers/System/Pickable/PickableItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BCR_PickableItem_generated_h
#error "PickableItem.generated.h already included, missing '#pragma once' in PickableItem.h"
#endif
#define BCR_PickableItem_generated_h

#define FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_Pickable_PickableItem_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetItemName);


#define FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_Pickable_PickableItem_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickableItem(); \
	friend struct Z_Construct_UClass_APickableItem_Statics; \
public: \
	DECLARE_CLASS(APickableItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BCR"), NO_API) \
	DECLARE_SERIALIZER(APickableItem) \
	virtual UObject* _getUObject() const override { return const_cast<APickableItem*>(this); }


#define FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_Pickable_PickableItem_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APickableItem(APickableItem&&); \
	APickableItem(const APickableItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickableItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickableItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickableItem) \
	NO_API virtual ~APickableItem();


#define FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_Pickable_PickableItem_h_8_PROLOG
#define FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_Pickable_PickableItem_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_Pickable_PickableItem_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_Pickable_PickableItem_h_11_INCLASS_NO_PURE_DECLS \
	FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_Pickable_PickableItem_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BCR_API UClass* StaticClass<class APickableItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_Pickable_PickableItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
