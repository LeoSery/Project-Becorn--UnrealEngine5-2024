// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Headers/System/MiniGame/MiniGameSystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BCR_MiniGameSystem_generated_h
#error "MiniGameSystem.generated.h already included, missing '#pragma once' in MiniGameSystem.h"
#endif
#define BCR_MiniGameSystem_generated_h

#define FID_M2_Project_Source_BCR_Headers_System_MiniGame_MiniGameSystem_h_11_DELEGATE \
BCR_API void FOnEndQTESignature_DelegateWrapper(const FMulticastScriptDelegate& OnEndQTESignature, bool _resultStatus);


#define FID_M2_Project_Source_BCR_Headers_System_MiniGame_MiniGameSystem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMiniGameSystem(); \
	friend struct Z_Construct_UClass_AMiniGameSystem_Statics; \
public: \
	DECLARE_CLASS(AMiniGameSystem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BCR"), NO_API) \
	DECLARE_SERIALIZER(AMiniGameSystem)


#define FID_M2_Project_Source_BCR_Headers_System_MiniGame_MiniGameSystem_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMiniGameSystem(AMiniGameSystem&&); \
	AMiniGameSystem(const AMiniGameSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMiniGameSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMiniGameSystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMiniGameSystem) \
	NO_API virtual ~AMiniGameSystem();


#define FID_M2_Project_Source_BCR_Headers_System_MiniGame_MiniGameSystem_h_13_PROLOG
#define FID_M2_Project_Source_BCR_Headers_System_MiniGame_MiniGameSystem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_M2_Project_Source_BCR_Headers_System_MiniGame_MiniGameSystem_h_16_INCLASS_NO_PURE_DECLS \
	FID_M2_Project_Source_BCR_Headers_System_MiniGame_MiniGameSystem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BCR_API UClass* StaticClass<class AMiniGameSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_M2_Project_Source_BCR_Headers_System_MiniGame_MiniGameSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
