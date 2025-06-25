// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Headers/System/DeliveryPoint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef BCR_DeliveryPoint_generated_h
#error "DeliveryPoint.generated.h already included, missing '#pragma once' in DeliveryPoint.h"
#endif
#define BCR_DeliveryPoint_generated_h

#define FID_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_DeliveryPoint_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_DeliveryPoint_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADeliveryPoint(); \
	friend struct Z_Construct_UClass_ADeliveryPoint_Statics; \
public: \
	DECLARE_CLASS(ADeliveryPoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BCR"), NO_API) \
	DECLARE_SERIALIZER(ADeliveryPoint)


#define FID_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_DeliveryPoint_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADeliveryPoint(ADeliveryPoint&&); \
	ADeliveryPoint(const ADeliveryPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADeliveryPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADeliveryPoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADeliveryPoint) \
	NO_API virtual ~ADeliveryPoint();


#define FID_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_DeliveryPoint_h_15_PROLOG
#define FID_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_DeliveryPoint_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_DeliveryPoint_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_DeliveryPoint_h_18_INCLASS_NO_PURE_DECLS \
	FID_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_DeliveryPoint_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BCR_API UClass* StaticClass<class ADeliveryPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_Becorn__UnrealEngine5_2024_Source_BCR_Headers_System_DeliveryPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
