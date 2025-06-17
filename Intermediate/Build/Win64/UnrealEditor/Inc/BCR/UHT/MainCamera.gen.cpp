// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCR/Headers/System/MainCamera.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainCamera() {}

// Begin Cross Module References
BCR_API UClass* Z_Construct_UClass_AMainCamera();
BCR_API UClass* Z_Construct_UClass_AMainCamera_NoRegister();
CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BCR();
// End Cross Module References

// Begin Class AMainCamera Function SetPlayers
struct Z_Construct_UFunction_AMainCamera_SetPlayers_Statics
{
	struct MainCamera_eventSetPlayers_Parms
	{
		ACharacter* Player1;
		ACharacter* Player2;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////// PLAYER MANAGEMENT ////////\n/// Player assignment\n" },
#endif
		{ "ModuleRelativePath", "Headers/System/MainCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PLAYER MANAGEMENT\nPlayer assignment" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player2;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMainCamera_SetPlayers_Statics::NewProp_Player1 = { "Player1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainCamera_eventSetPlayers_Parms, Player1), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMainCamera_SetPlayers_Statics::NewProp_Player2 = { "Player2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainCamera_eventSetPlayers_Parms, Player2), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainCamera_SetPlayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainCamera_SetPlayers_Statics::NewProp_Player1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainCamera_SetPlayers_Statics::NewProp_Player2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCamera_SetPlayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCamera_SetPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCamera, nullptr, "SetPlayers", nullptr, nullptr, Z_Construct_UFunction_AMainCamera_SetPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCamera_SetPlayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMainCamera_SetPlayers_Statics::MainCamera_eventSetPlayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCamera_SetPlayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainCamera_SetPlayers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMainCamera_SetPlayers_Statics::MainCamera_eventSetPlayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMainCamera_SetPlayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainCamera_SetPlayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainCamera::execSetPlayers)
{
	P_GET_OBJECT(ACharacter,Z_Param_Player1);
	P_GET_OBJECT(ACharacter,Z_Param_Player2);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlayers(Z_Param_Player1,Z_Param_Player2);
	P_NATIVE_END;
}
// End Class AMainCamera Function SetPlayers

// Begin Class AMainCamera
void AMainCamera::StaticRegisterNativesAMainCamera()
{
	UClass* Class = AMainCamera::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetPlayers", &AMainCamera::execSetPlayers },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainCamera);
UClass* Z_Construct_UClass_AMainCamera_NoRegister()
{
	return AMainCamera::StaticClass();
}
struct Z_Construct_UClass_AMainCamera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief Dynamic cooperative camera system for two-player gameplay\n * @details Automatically adjusts position, distance, angle, and effects based on player positioning\n */" },
#endif
		{ "IncludePath", "Headers/System/MainCamera.h" },
		{ "ModuleRelativePath", "Headers/System/MainCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Dynamic cooperative camera system for two-player gameplay\n@details Automatically adjusts position, distance, angle, and effects based on player positioning" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugLocation_MetaData[] = {
		{ "Category", "Parameters|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////// DEBUG PARAMETERS ////////\n/// Debug configuration\n" },
#endif
		{ "ModuleRelativePath", "Headers/System/MainCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEBUG PARAMETERS\nDebug configuration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugVariables_MetaData[] = {
		{ "Category", "Parameters|Debug" },
		{ "ModuleRelativePath", "Headers/System/MainCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableVerticalMovement_MetaData[] = {
		{ "Category", "Parameters|Translation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////// TRANSLATION PARAMETERS ////////\n/// Position behavior\n" },
#endif
		{ "ModuleRelativePath", "Headers/System/MainCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TRANSLATION PARAMETERS\nPosition behavior" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalOffset_MetaData[] = {
		{ "Category", "Parameters|Translation" },
		{ "ModuleRelativePath", "Headers/System/MainCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumArmLength_MetaData[] = {
		{ "Category", "Parameters|Distance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////// DISTANCE PARAMETERS ////////\n/// Camera distance configuration\n" },
#endif
		{ "ModuleRelativePath", "Headers/System/MainCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DISTANCE PARAMETERS\nCamera distance configuration" },
#endif
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumArmLength_MetaData[] = {
		{ "Category", "Parameters|Distance" },
		{ "ModuleRelativePath", "Headers/System/MainCamera.h" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DepthBuffer_MetaData[] = {
		{ "Category", "Parameters|Distance" },
		{ "ModuleRelativePath", "Headers/System/MainCamera.h" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalBuffer_MetaData[] = {
		{ "Category", "Parameters|Distance" },
		{ "ModuleRelativePath", "Headers/System/MainCamera.h" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseAngleChange_MetaData[] = {
		{ "Category", "Parameters|Angle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////// ANGLE PARAMETERS ////////\n/// Camera angle configuration\n" },
#endif
		{ "ModuleRelativePath", "Headers/System/MainCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ANGLE PARAMETERS\nCamera angle configuration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinAngleReachedAtArmLength_MetaData[] = {
		{ "Category", "Parameters|Angle" },
		{ "ModuleRelativePath", "Headers/System/MainCamera.h" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAngleReachedAtArmLength_MetaData[] = {
		{ "Category", "Parameters|Angle" },
		{ "ModuleRelativePath", "Headers/System/MainCamera.h" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinArmAngle_MetaData[] = {
		{ "Category", "Parameters|Angle" },
		{ "ModuleRelativePath", "Headers/System/MainCamera.h" },
		{ "UIMax", "90.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxArmAngle_MetaData[] = {
		{ "Category", "Parameters|Angle" },
		{ "ModuleRelativePath", "Headers/System/MainCamera.h" },
		{ "UIMax", "90.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EasingAngleExp_MetaData[] = {
		{ "Category", "Parameters|Angle" },
		{ "ModuleRelativePath", "Headers/System/MainCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinFStop_MetaData[] = {
		{ "Category", "Parameters|Tilt shift" },
		{ "ModuleRelativePath", "Headers/System/MainCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxFStop_MetaData[] = {
		{ "Category", "Parameters|Tilt shift" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////// TILT SHIFT PARAMETERS ////////\n/// Depth of field configuration\n" },
#endif
		{ "ModuleRelativePath", "Headers/System/MainCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TILT SHIFT PARAMETERS\nDepth of field configuration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxBlurAtDistance_MetaData[] = {
		{ "Category", "Parameters|Tilt shift" },
		{ "ModuleRelativePath", "Headers/System/MainCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinBlurAtDistance_MetaData[] = {
		{ "Category", "Parameters|Tilt shift" },
		{ "ModuleRelativePath", "Headers/System/MainCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlurMultiplier_MetaData[] = {
		{ "Category", "Parameters|Tilt shift" },
		{ "ModuleRelativePath", "Headers/System/MainCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FogDistanceToPlayer_MetaData[] = {
		{ "Category", "Parameters|Fog" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////// FOG PARAMETERS ////////\n/// Atmospheric effects\n" },
#endif
		{ "ModuleRelativePath", "Headers/System/MainCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FOG PARAMETERS\nAtmospheric effects" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultRootComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////// COMPONENTS ////////\n/// Camera components\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Headers/System/MainCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "COMPONENTS\nCamera components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Headers/System/MainCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Headers/System/MainCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugSphere_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Headers/System/MainCamera.h" },
	};
#endif // WITH_METADATA
	static void NewProp_DebugLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DebugLocation;
	static void NewProp_DebugVariables_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DebugVariables;
	static void NewProp_EnableVerticalMovement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableVerticalMovement;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumArmLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumArmLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DepthBuffer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalBuffer;
	static void NewProp_UseAngleChange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseAngleChange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinAngleReachedAtArmLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAngleReachedAtArmLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinArmAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxArmAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EasingAngleExp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinFStop;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxFStop;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxBlurAtDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinBlurAtDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlurMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FogDistanceToPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultRootComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DebugSphere;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMainCamera_SetPlayers, "SetPlayers" }, // 2139884864
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainCamera>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AMainCamera_Statics::NewProp_DebugLocation_SetBit(void* Obj)
{
	((AMainCamera*)Obj)->DebugLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMainCamera_Statics::NewProp_DebugLocation = { "DebugLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMainCamera), &Z_Construct_UClass_AMainCamera_Statics::NewProp_DebugLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugLocation_MetaData), NewProp_DebugLocation_MetaData) };
void Z_Construct_UClass_AMainCamera_Statics::NewProp_DebugVariables_SetBit(void* Obj)
{
	((AMainCamera*)Obj)->DebugVariables = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMainCamera_Statics::NewProp_DebugVariables = { "DebugVariables", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMainCamera), &Z_Construct_UClass_AMainCamera_Statics::NewProp_DebugVariables_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugVariables_MetaData), NewProp_DebugVariables_MetaData) };
void Z_Construct_UClass_AMainCamera_Statics::NewProp_EnableVerticalMovement_SetBit(void* Obj)
{
	((AMainCamera*)Obj)->EnableVerticalMovement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMainCamera_Statics::NewProp_EnableVerticalMovement = { "EnableVerticalMovement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMainCamera), &Z_Construct_UClass_AMainCamera_Statics::NewProp_EnableVerticalMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableVerticalMovement_MetaData), NewProp_EnableVerticalMovement_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainCamera_Statics::NewProp_VerticalOffset = { "VerticalOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCamera, VerticalOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalOffset_MetaData), NewProp_VerticalOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainCamera_Statics::NewProp_MinimumArmLength = { "MinimumArmLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCamera, MinimumArmLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumArmLength_MetaData), NewProp_MinimumArmLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainCamera_Statics::NewProp_MaximumArmLength = { "MaximumArmLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCamera, MaximumArmLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumArmLength_MetaData), NewProp_MaximumArmLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainCamera_Statics::NewProp_DepthBuffer = { "DepthBuffer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCamera, DepthBuffer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DepthBuffer_MetaData), NewProp_DepthBuffer_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainCamera_Statics::NewProp_HorizontalBuffer = { "HorizontalBuffer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCamera, HorizontalBuffer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalBuffer_MetaData), NewProp_HorizontalBuffer_MetaData) };
void Z_Construct_UClass_AMainCamera_Statics::NewProp_UseAngleChange_SetBit(void* Obj)
{
	((AMainCamera*)Obj)->UseAngleChange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMainCamera_Statics::NewProp_UseAngleChange = { "UseAngleChange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMainCamera), &Z_Construct_UClass_AMainCamera_Statics::NewProp_UseAngleChange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseAngleChange_MetaData), NewProp_UseAngleChange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainCamera_Statics::NewProp_MinAngleReachedAtArmLength = { "MinAngleReachedAtArmLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCamera, MinAngleReachedAtArmLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinAngleReachedAtArmLength_MetaData), NewProp_MinAngleReachedAtArmLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainCamera_Statics::NewProp_MaxAngleReachedAtArmLength = { "MaxAngleReachedAtArmLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCamera, MaxAngleReachedAtArmLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAngleReachedAtArmLength_MetaData), NewProp_MaxAngleReachedAtArmLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainCamera_Statics::NewProp_MinArmAngle = { "MinArmAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCamera, MinArmAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinArmAngle_MetaData), NewProp_MinArmAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainCamera_Statics::NewProp_MaxArmAngle = { "MaxArmAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCamera, MaxArmAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxArmAngle_MetaData), NewProp_MaxArmAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainCamera_Statics::NewProp_EasingAngleExp = { "EasingAngleExp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCamera, EasingAngleExp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EasingAngleExp_MetaData), NewProp_EasingAngleExp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainCamera_Statics::NewProp_MinFStop = { "MinFStop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCamera, MinFStop), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinFStop_MetaData), NewProp_MinFStop_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainCamera_Statics::NewProp_MaxFStop = { "MaxFStop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCamera, MaxFStop), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxFStop_MetaData), NewProp_MaxFStop_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainCamera_Statics::NewProp_MaxBlurAtDistance = { "MaxBlurAtDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCamera, MaxBlurAtDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxBlurAtDistance_MetaData), NewProp_MaxBlurAtDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainCamera_Statics::NewProp_MinBlurAtDistance = { "MinBlurAtDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCamera, MinBlurAtDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinBlurAtDistance_MetaData), NewProp_MinBlurAtDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainCamera_Statics::NewProp_BlurMultiplier = { "BlurMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCamera, BlurMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlurMultiplier_MetaData), NewProp_BlurMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainCamera_Statics::NewProp_FogDistanceToPlayer = { "FogDistanceToPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCamera, FogDistanceToPlayer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FogDistanceToPlayer_MetaData), NewProp_FogDistanceToPlayer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCamera_Statics::NewProp_DefaultRootComponent = { "DefaultRootComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCamera, DefaultRootComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultRootComponent_MetaData), NewProp_DefaultRootComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCamera_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCamera, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCamera_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCamera, FollowCamera), Z_Construct_UClass_UCineCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCamera_Statics::NewProp_DebugSphere = { "DebugSphere", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCamera, DebugSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugSphere_MetaData), NewProp_DebugSphere_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCamera_Statics::NewProp_DebugLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCamera_Statics::NewProp_DebugVariables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCamera_Statics::NewProp_EnableVerticalMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCamera_Statics::NewProp_VerticalOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCamera_Statics::NewProp_MinimumArmLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCamera_Statics::NewProp_MaximumArmLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCamera_Statics::NewProp_DepthBuffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCamera_Statics::NewProp_HorizontalBuffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCamera_Statics::NewProp_UseAngleChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCamera_Statics::NewProp_MinAngleReachedAtArmLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCamera_Statics::NewProp_MaxAngleReachedAtArmLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCamera_Statics::NewProp_MinArmAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCamera_Statics::NewProp_MaxArmAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCamera_Statics::NewProp_EasingAngleExp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCamera_Statics::NewProp_MinFStop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCamera_Statics::NewProp_MaxFStop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCamera_Statics::NewProp_MaxBlurAtDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCamera_Statics::NewProp_MinBlurAtDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCamera_Statics::NewProp_BlurMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCamera_Statics::NewProp_FogDistanceToPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCamera_Statics::NewProp_DefaultRootComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCamera_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCamera_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCamera_Statics::NewProp_DebugSphere,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCamera_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMainCamera_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BCR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCamera_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainCamera_Statics::ClassParams = {
	&AMainCamera::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMainCamera_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMainCamera_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCamera_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainCamera_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMainCamera()
{
	if (!Z_Registration_Info_UClass_AMainCamera.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainCamera.OuterSingleton, Z_Construct_UClass_AMainCamera_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMainCamera.OuterSingleton;
}
template<> BCR_API UClass* StaticClass<AMainCamera>()
{
	return AMainCamera::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMainCamera);
AMainCamera::~AMainCamera() {}
// End Class AMainCamera

// Begin Registration
struct Z_CompiledInDeferFile_FID_M2_Project_Source_BCR_Headers_System_MainCamera_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMainCamera, AMainCamera::StaticClass, TEXT("AMainCamera"), &Z_Registration_Info_UClass_AMainCamera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainCamera), 695461510U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_M2_Project_Source_BCR_Headers_System_MainCamera_h_2213115451(TEXT("/Script/BCR"),
	Z_CompiledInDeferFile_FID_M2_Project_Source_BCR_Headers_System_MainCamera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_M2_Project_Source_BCR_Headers_System_MainCamera_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
