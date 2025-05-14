// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Headers/System/MiniGame/LocomotionConfigurationTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BCR_LocomotionConfigurationTypes_generated_h
#error "LocomotionConfigurationTypes.generated.h already included, missing '#pragma once' in LocomotionConfigurationTypes.h"
#endif
#define BCR_LocomotionConfigurationTypes_generated_h

#define FID_Users_s_pessin_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_MiniGame_LocomotionConfigurationTypes_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLocomotionConfiguration_Statics; \
	static class UScriptStruct* StaticStruct();


template<> BCR_API UScriptStruct* StaticStruct<struct FLocomotionConfiguration>();

#define FID_Users_s_pessin_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_MiniGame_LocomotionConfigurationTypes_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULocomotionConfigurationAsset(); \
	friend struct Z_Construct_UClass_ULocomotionConfigurationAsset_Statics; \
public: \
	DECLARE_CLASS(ULocomotionConfigurationAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BCR"), NO_API) \
	DECLARE_SERIALIZER(ULocomotionConfigurationAsset)


#define FID_Users_s_pessin_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_MiniGame_LocomotionConfigurationTypes_h_58_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULocomotionConfigurationAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULocomotionConfigurationAsset(ULocomotionConfigurationAsset&&); \
	ULocomotionConfigurationAsset(const ULocomotionConfigurationAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULocomotionConfigurationAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocomotionConfigurationAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocomotionConfigurationAsset) \
	NO_API virtual ~ULocomotionConfigurationAsset();


#define FID_Users_s_pessin_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_MiniGame_LocomotionConfigurationTypes_h_55_PROLOG
#define FID_Users_s_pessin_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_MiniGame_LocomotionConfigurationTypes_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_s_pessin_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_MiniGame_LocomotionConfigurationTypes_h_58_INCLASS_NO_PURE_DECLS \
	FID_Users_s_pessin_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_MiniGame_LocomotionConfigurationTypes_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BCR_API UClass* StaticClass<class ULocomotionConfigurationAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_s_pessin_Documents_GitHub_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_MiniGame_LocomotionConfigurationTypes_h


#define FOREACH_ENUM_ELOCOMOTIONMODE(op) \
	op(ELocomotionMode::Basic) \
	op(ELocomotionMode::HoldingBox) \
	op(ELocomotionMode::WoodCuttingCrank) \
	op(ELocomotionMode::WoodCuttingRope) \
	op(ELocomotionMode::MushroomSaw) \
	op(ELocomotionMode::Sap) \
	op(ELocomotionMode::Push) \
	op(ELocomotionMode::Climb) \
	op(ELocomotionMode::Test) 

enum class ELocomotionMode : uint8;
template<> struct TIsUEnumClass<ELocomotionMode> { enum { Value = true }; };
template<> BCR_API UEnum* StaticEnum<ELocomotionMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
