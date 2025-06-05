// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Headers/Player/MainPlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BCR_MainPlayer_generated_h
#error "MainPlayer.generated.h already included, missing '#pragma once' in MainPlayer.h"
#endif
#define BCR_MainPlayer_generated_h

#define FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_Player_MainPlayer_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPickUp);


#define FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_Player_MainPlayer_h_22_CALLBACK_WRAPPERS
#define FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_Player_MainPlayer_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainPlayer(); \
	friend struct Z_Construct_UClass_AMainPlayer_Statics; \
public: \
	DECLARE_CLASS(AMainPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BCR"), NO_API) \
	DECLARE_SERIALIZER(AMainPlayer) \
	virtual UObject* _getUObject() const override { return const_cast<AMainPlayer*>(this); }


#define FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_Player_MainPlayer_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMainPlayer(AMainPlayer&&); \
	AMainPlayer(const AMainPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainPlayer) \
	NO_API virtual ~AMainPlayer();


#define FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_Player_MainPlayer_h_19_PROLOG
#define FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_Player_MainPlayer_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_Player_MainPlayer_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_Player_MainPlayer_h_22_CALLBACK_WRAPPERS \
	FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_Player_MainPlayer_h_22_INCLASS_NO_PURE_DECLS \
	FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_Player_MainPlayer_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BCR_API UClass* StaticClass<class AMainPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Shadow_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_Player_MainPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
