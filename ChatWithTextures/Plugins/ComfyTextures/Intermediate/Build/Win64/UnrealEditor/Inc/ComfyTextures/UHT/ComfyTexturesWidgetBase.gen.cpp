// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComfyTextures/Public/ComfyTexturesWidgetBase.h"
#include "../../Source/Runtime/Engine/Classes/Camera/CameraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComfyTexturesWidgetBase() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
	COMFYTEXTURES_API UClass* Z_Construct_UClass_UComfyTexturesSettings();
	COMFYTEXTURES_API UClass* Z_Construct_UClass_UComfyTexturesSettings_NoRegister();
	COMFYTEXTURES_API UClass* Z_Construct_UClass_UComfyTexturesWidgetBase();
	COMFYTEXTURES_API UClass* Z_Construct_UClass_UComfyTexturesWidgetBase_NoRegister();
	COMFYTEXTURES_API UEnum* Z_Construct_UEnum_ComfyTextures_EComfyTexturesCameraMode();
	COMFYTEXTURES_API UEnum* Z_Construct_UEnum_ComfyTextures_EComfyTexturesEditMaskMode();
	COMFYTEXTURES_API UEnum* Z_Construct_UEnum_ComfyTextures_EComfyTexturesMode();
	COMFYTEXTURES_API UEnum* Z_Construct_UEnum_ComfyTextures_EComfyTexturesRenderState();
	COMFYTEXTURES_API UEnum* Z_Construct_UEnum_ComfyTextures_EComfyTexturesRenderTextureMode();
	COMFYTEXTURES_API UEnum* Z_Construct_UEnum_ComfyTextures_EComfyTexturesState();
	COMFYTEXTURES_API UScriptStruct* Z_Construct_UScriptStruct_FComfyTexturesCaptureOutput();
	COMFYTEXTURES_API UScriptStruct* Z_Construct_UScriptStruct_FComfyTexturesImageData();
	COMFYTEXTURES_API UScriptStruct* Z_Construct_UScriptStruct_FComfyTexturesPrepareOptions();
	COMFYTEXTURES_API UScriptStruct* Z_Construct_UScriptStruct_FComfyTexturesRenderData();
	COMFYTEXTURES_API UScriptStruct* Z_Construct_UScriptStruct_FComfyTexturesRenderOptions();
	COMFYTEXTURES_API UScriptStruct* Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMinimalViewInfo();
	UPackage* Z_Construct_UPackage__Script_ComfyTextures();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EComfyTexturesState;
	static UEnum* EComfyTexturesState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EComfyTexturesState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EComfyTexturesState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ComfyTextures_EComfyTexturesState, (UObject*)Z_Construct_UPackage__Script_ComfyTextures(), TEXT("EComfyTexturesState"));
		}
		return Z_Registration_Info_UEnum_EComfyTexturesState.OuterSingleton;
	}
	template<> COMFYTEXTURES_API UEnum* StaticEnum<EComfyTexturesState>()
	{
		return EComfyTexturesState_StaticEnum();
	}
	struct Z_Construct_UEnum_ComfyTextures_EComfyTexturesState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ComfyTextures_EComfyTexturesState_Statics::Enumerators[] = {
		{ "EComfyTexturesState::Disconnected", (int64)EComfyTexturesState::Disconnected },
		{ "EComfyTexturesState::Reconnecting", (int64)EComfyTexturesState::Reconnecting },
		{ "EComfyTexturesState::Idle", (int64)EComfyTexturesState::Idle },
		{ "EComfyTexturesState::Rendering", (int64)EComfyTexturesState::Rendering },
		{ "EComfyTexturesState::Processing", (int64)EComfyTexturesState::Processing },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ComfyTextures_EComfyTexturesState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Disconnected.Name", "EComfyTexturesState::Disconnected" },
		{ "Idle.Name", "EComfyTexturesState::Idle" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
		{ "Processing.Name", "EComfyTexturesState::Processing" },
		{ "Reconnecting.Name", "EComfyTexturesState::Reconnecting" },
		{ "Rendering.Name", "EComfyTexturesState::Rendering" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ComfyTextures_EComfyTexturesState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ComfyTextures,
		nullptr,
		"EComfyTexturesState",
		"EComfyTexturesState",
		Z_Construct_UEnum_ComfyTextures_EComfyTexturesState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ComfyTextures_EComfyTexturesState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ComfyTextures_EComfyTexturesState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ComfyTextures_EComfyTexturesState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ComfyTextures_EComfyTexturesState()
	{
		if (!Z_Registration_Info_UEnum_EComfyTexturesState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EComfyTexturesState.InnerSingleton, Z_Construct_UEnum_ComfyTextures_EComfyTexturesState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EComfyTexturesState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EComfyTexturesRenderState;
	static UEnum* EComfyTexturesRenderState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EComfyTexturesRenderState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EComfyTexturesRenderState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ComfyTextures_EComfyTexturesRenderState, (UObject*)Z_Construct_UPackage__Script_ComfyTextures(), TEXT("EComfyTexturesRenderState"));
		}
		return Z_Registration_Info_UEnum_EComfyTexturesRenderState.OuterSingleton;
	}
	template<> COMFYTEXTURES_API UEnum* StaticEnum<EComfyTexturesRenderState>()
	{
		return EComfyTexturesRenderState_StaticEnum();
	}
	struct Z_Construct_UEnum_ComfyTextures_EComfyTexturesRenderState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ComfyTextures_EComfyTexturesRenderState_Statics::Enumerators[] = {
		{ "EComfyTexturesRenderState::Pending", (int64)EComfyTexturesRenderState::Pending },
		{ "EComfyTexturesRenderState::Started", (int64)EComfyTexturesRenderState::Started },
		{ "EComfyTexturesRenderState::Finished", (int64)EComfyTexturesRenderState::Finished },
		{ "EComfyTexturesRenderState::Failed", (int64)EComfyTexturesRenderState::Failed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ComfyTextures_EComfyTexturesRenderState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Failed.Name", "EComfyTexturesRenderState::Failed" },
		{ "Finished.Name", "EComfyTexturesRenderState::Finished" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
		{ "Pending.Name", "EComfyTexturesRenderState::Pending" },
		{ "Started.Name", "EComfyTexturesRenderState::Started" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ComfyTextures_EComfyTexturesRenderState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ComfyTextures,
		nullptr,
		"EComfyTexturesRenderState",
		"EComfyTexturesRenderState",
		Z_Construct_UEnum_ComfyTextures_EComfyTexturesRenderState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ComfyTextures_EComfyTexturesRenderState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ComfyTextures_EComfyTexturesRenderState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ComfyTextures_EComfyTexturesRenderState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ComfyTextures_EComfyTexturesRenderState()
	{
		if (!Z_Registration_Info_UEnum_EComfyTexturesRenderState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EComfyTexturesRenderState.InnerSingleton, Z_Construct_UEnum_ComfyTextures_EComfyTexturesRenderState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EComfyTexturesRenderState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EComfyTexturesMode;
	static UEnum* EComfyTexturesMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EComfyTexturesMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EComfyTexturesMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ComfyTextures_EComfyTexturesMode, (UObject*)Z_Construct_UPackage__Script_ComfyTextures(), TEXT("EComfyTexturesMode"));
		}
		return Z_Registration_Info_UEnum_EComfyTexturesMode.OuterSingleton;
	}
	template<> COMFYTEXTURES_API UEnum* StaticEnum<EComfyTexturesMode>()
	{
		return EComfyTexturesMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ComfyTextures_EComfyTexturesMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ComfyTextures_EComfyTexturesMode_Statics::Enumerators[] = {
		{ "EComfyTexturesMode::Create", (int64)EComfyTexturesMode::Create },
		{ "EComfyTexturesMode::Edit", (int64)EComfyTexturesMode::Edit },
		{ "EComfyTexturesMode::Refine", (int64)EComfyTexturesMode::Refine },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ComfyTextures_EComfyTexturesMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Create.Name", "EComfyTexturesMode::Create" },
		{ "Edit.Name", "EComfyTexturesMode::Edit" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
		{ "Refine.Name", "EComfyTexturesMode::Refine" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ComfyTextures_EComfyTexturesMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ComfyTextures,
		nullptr,
		"EComfyTexturesMode",
		"EComfyTexturesMode",
		Z_Construct_UEnum_ComfyTextures_EComfyTexturesMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ComfyTextures_EComfyTexturesMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ComfyTextures_EComfyTexturesMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ComfyTextures_EComfyTexturesMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ComfyTextures_EComfyTexturesMode()
	{
		if (!Z_Registration_Info_UEnum_EComfyTexturesMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EComfyTexturesMode.InnerSingleton, Z_Construct_UEnum_ComfyTextures_EComfyTexturesMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EComfyTexturesMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EComfyTexturesEditMaskMode;
	static UEnum* EComfyTexturesEditMaskMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EComfyTexturesEditMaskMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EComfyTexturesEditMaskMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ComfyTextures_EComfyTexturesEditMaskMode, (UObject*)Z_Construct_UPackage__Script_ComfyTextures(), TEXT("EComfyTexturesEditMaskMode"));
		}
		return Z_Registration_Info_UEnum_EComfyTexturesEditMaskMode.OuterSingleton;
	}
	template<> COMFYTEXTURES_API UEnum* StaticEnum<EComfyTexturesEditMaskMode>()
	{
		return EComfyTexturesEditMaskMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ComfyTextures_EComfyTexturesEditMaskMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ComfyTextures_EComfyTexturesEditMaskMode_Statics::Enumerators[] = {
		{ "EComfyTexturesEditMaskMode::FromTexture", (int64)EComfyTexturesEditMaskMode::FromTexture },
		{ "EComfyTexturesEditMaskMode::FromObject", (int64)EComfyTexturesEditMaskMode::FromObject },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ComfyTextures_EComfyTexturesEditMaskMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FromObject.Name", "EComfyTexturesEditMaskMode::FromObject" },
		{ "FromTexture.Name", "EComfyTexturesEditMaskMode::FromTexture" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ComfyTextures_EComfyTexturesEditMaskMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ComfyTextures,
		nullptr,
		"EComfyTexturesEditMaskMode",
		"EComfyTexturesEditMaskMode",
		Z_Construct_UEnum_ComfyTextures_EComfyTexturesEditMaskMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ComfyTextures_EComfyTexturesEditMaskMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ComfyTextures_EComfyTexturesEditMaskMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ComfyTextures_EComfyTexturesEditMaskMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ComfyTextures_EComfyTexturesEditMaskMode()
	{
		if (!Z_Registration_Info_UEnum_EComfyTexturesEditMaskMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EComfyTexturesEditMaskMode.InnerSingleton, Z_Construct_UEnum_ComfyTextures_EComfyTexturesEditMaskMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EComfyTexturesEditMaskMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EComfyTexturesRenderTextureMode;
	static UEnum* EComfyTexturesRenderTextureMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EComfyTexturesRenderTextureMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EComfyTexturesRenderTextureMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ComfyTextures_EComfyTexturesRenderTextureMode, (UObject*)Z_Construct_UPackage__Script_ComfyTextures(), TEXT("EComfyTexturesRenderTextureMode"));
		}
		return Z_Registration_Info_UEnum_EComfyTexturesRenderTextureMode.OuterSingleton;
	}
	template<> COMFYTEXTURES_API UEnum* StaticEnum<EComfyTexturesRenderTextureMode>()
	{
		return EComfyTexturesRenderTextureMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ComfyTextures_EComfyTexturesRenderTextureMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ComfyTextures_EComfyTexturesRenderTextureMode_Statics::Enumerators[] = {
		{ "EComfyTexturesRenderTextureMode::Depth", (int64)EComfyTexturesRenderTextureMode::Depth },
		{ "EComfyTexturesRenderTextureMode::RawDepth", (int64)EComfyTexturesRenderTextureMode::RawDepth },
		{ "EComfyTexturesRenderTextureMode::Normals", (int64)EComfyTexturesRenderTextureMode::Normals },
		{ "EComfyTexturesRenderTextureMode::Color", (int64)EComfyTexturesRenderTextureMode::Color },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ComfyTextures_EComfyTexturesRenderTextureMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Color.Name", "EComfyTexturesRenderTextureMode::Color" },
		{ "Depth.Name", "EComfyTexturesRenderTextureMode::Depth" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
		{ "Normals.Name", "EComfyTexturesRenderTextureMode::Normals" },
		{ "RawDepth.Name", "EComfyTexturesRenderTextureMode::RawDepth" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ComfyTextures_EComfyTexturesRenderTextureMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ComfyTextures,
		nullptr,
		"EComfyTexturesRenderTextureMode",
		"EComfyTexturesRenderTextureMode",
		Z_Construct_UEnum_ComfyTextures_EComfyTexturesRenderTextureMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ComfyTextures_EComfyTexturesRenderTextureMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ComfyTextures_EComfyTexturesRenderTextureMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ComfyTextures_EComfyTexturesRenderTextureMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ComfyTextures_EComfyTexturesRenderTextureMode()
	{
		if (!Z_Registration_Info_UEnum_EComfyTexturesRenderTextureMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EComfyTexturesRenderTextureMode.InnerSingleton, Z_Construct_UEnum_ComfyTextures_EComfyTexturesRenderTextureMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EComfyTexturesRenderTextureMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EComfyTexturesCameraMode;
	static UEnum* EComfyTexturesCameraMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EComfyTexturesCameraMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EComfyTexturesCameraMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ComfyTextures_EComfyTexturesCameraMode, (UObject*)Z_Construct_UPackage__Script_ComfyTextures(), TEXT("EComfyTexturesCameraMode"));
		}
		return Z_Registration_Info_UEnum_EComfyTexturesCameraMode.OuterSingleton;
	}
	template<> COMFYTEXTURES_API UEnum* StaticEnum<EComfyTexturesCameraMode>()
	{
		return EComfyTexturesCameraMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ComfyTextures_EComfyTexturesCameraMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ComfyTextures_EComfyTexturesCameraMode_Statics::Enumerators[] = {
		{ "EComfyTexturesCameraMode::EditorCamera", (int64)EComfyTexturesCameraMode::EditorCamera },
		{ "EComfyTexturesCameraMode::ExistingCamera", (int64)EComfyTexturesCameraMode::ExistingCamera },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ComfyTextures_EComfyTexturesCameraMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EditorCamera.Name", "EComfyTexturesCameraMode::EditorCamera" },
		{ "ExistingCamera.Name", "EComfyTexturesCameraMode::ExistingCamera" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ComfyTextures_EComfyTexturesCameraMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ComfyTextures,
		nullptr,
		"EComfyTexturesCameraMode",
		"EComfyTexturesCameraMode",
		Z_Construct_UEnum_ComfyTextures_EComfyTexturesCameraMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ComfyTextures_EComfyTexturesCameraMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ComfyTextures_EComfyTexturesCameraMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ComfyTextures_EComfyTexturesCameraMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ComfyTextures_EComfyTexturesCameraMode()
	{
		if (!Z_Registration_Info_UEnum_EComfyTexturesCameraMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EComfyTexturesCameraMode.InnerSingleton, Z_Construct_UEnum_ComfyTextures_EComfyTexturesCameraMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EComfyTexturesCameraMode.InnerSingleton;
	}
	void UComfyTexturesSettings::StaticRegisterNativesUComfyTexturesSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComfyTexturesSettings);
	UClass* Z_Construct_UClass_UComfyTexturesSettings_NoRegister()
	{
		return UComfyTexturesSettings::StaticClass();
	}
	struct Z_Construct_UClass_UComfyTexturesSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComfyUrl_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ComfyUrl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLimitEditorFps_MetaData[];
#endif
		static void NewProp_bLimitEditorFps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitEditorFps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinTextureSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinTextureSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTextureSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTextureSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureQualityMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TextureQualityMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CaptureSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UploadSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UploadSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComfyTexturesSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ComfyTextures,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComfyTexturesSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComfyTexturesSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ComfyTexturesWidgetBase.h" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComfyTexturesSettings_Statics::NewProp_ComfyUrl_MetaData[] = {
		{ "Category", "General" },
		{ "DisplayName", "ComfyUI URL" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "URL of your ComfyUI server, leave as is if running locally" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UComfyTexturesSettings_Statics::NewProp_ComfyUrl = { "ComfyUrl", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComfyTexturesSettings, ComfyUrl), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComfyTexturesSettings_Statics::NewProp_ComfyUrl_MetaData), Z_Construct_UClass_UComfyTexturesSettings_Statics::NewProp_ComfyUrl_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComfyTexturesSettings_Statics::NewProp_bLimitEditorFps_MetaData[] = {
		{ "Category", "General" },
		{ "DisplayName", "Limit Editor FPS" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Limit the editor frames per second while rendering" },
#endif
	};
#endif
	void Z_Construct_UClass_UComfyTexturesSettings_Statics::NewProp_bLimitEditorFps_SetBit(void* Obj)
	{
		((UComfyTexturesSettings*)Obj)->bLimitEditorFps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComfyTexturesSettings_Statics::NewProp_bLimitEditorFps = { "bLimitEditorFps", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UComfyTexturesSettings), &Z_Construct_UClass_UComfyTexturesSettings_Statics::NewProp_bLimitEditorFps_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComfyTexturesSettings_Statics::NewProp_bLimitEditorFps_MetaData), Z_Construct_UClass_UComfyTexturesSettings_Statics::NewProp_bLimitEditorFps_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComfyTexturesSettings_Statics::NewProp_MinTextureSize_MetaData[] = {
		{ "Category", "General" },
		{ "DisplayName", "Min. Texture Size" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum texture size for generated textures, should be a power of 2" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UComfyTexturesSettings_Statics::NewProp_MinTextureSize = { "MinTextureSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComfyTexturesSettings, MinTextureSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComfyTexturesSettings_Statics::NewProp_MinTextureSize_MetaData), Z_Construct_UClass_UComfyTexturesSettings_Statics::NewProp_MinTextureSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComfyTexturesSettings_Statics::NewProp_MaxTextureSize_MetaData[] = {
		{ "Category", "General" },
		{ "DisplayName", "Max. Texture Size" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum texture size for generated textures, should be a power of 2" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UComfyTexturesSettings_Statics::NewProp_MaxTextureSize = { "MaxTextureSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComfyTexturesSettings, MaxTextureSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComfyTexturesSettings_Statics::NewProp_MaxTextureSize_MetaData), Z_Construct_UClass_UComfyTexturesSettings_Statics::NewProp_MaxTextureSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComfyTexturesSettings_Statics::NewProp_TextureQualityMultiplier_MetaData[] = {
		{ "Category", "General" },
		{ "DisplayName", "Texture Quality Multiplier" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multiplier for texture quality, higher is better" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UComfyTexturesSettings_Statics::NewProp_TextureQualityMultiplier = { "TextureQualityMultiplier", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComfyTexturesSettings, TextureQualityMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComfyTexturesSettings_Statics::NewProp_TextureQualityMultiplier_MetaData), Z_Construct_UClass_UComfyTexturesSettings_Statics::NewProp_TextureQualityMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComfyTexturesSettings_Statics::NewProp_CaptureSize_MetaData[] = {
		{ "Category", "General" },
		{ "DisplayName", "Capture Size" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of the scene capture textures, should be a power of 2" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UComfyTexturesSettings_Statics::NewProp_CaptureSize = { "CaptureSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComfyTexturesSettings, CaptureSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComfyTexturesSettings_Statics::NewProp_CaptureSize_MetaData), Z_Construct_UClass_UComfyTexturesSettings_Statics::NewProp_CaptureSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComfyTexturesSettings_Statics::NewProp_UploadSize_MetaData[] = {
		{ "Category", "General" },
		{ "DisplayName", "Upload Size" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of images uploaded to ComfyUI as workflow inputs" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UComfyTexturesSettings_Statics::NewProp_UploadSize = { "UploadSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComfyTexturesSettings, UploadSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComfyTexturesSettings_Statics::NewProp_UploadSize_MetaData), Z_Construct_UClass_UComfyTexturesSettings_Statics::NewProp_UploadSize_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComfyTexturesSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComfyTexturesSettings_Statics::NewProp_ComfyUrl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComfyTexturesSettings_Statics::NewProp_bLimitEditorFps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComfyTexturesSettings_Statics::NewProp_MinTextureSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComfyTexturesSettings_Statics::NewProp_MaxTextureSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComfyTexturesSettings_Statics::NewProp_TextureQualityMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComfyTexturesSettings_Statics::NewProp_CaptureSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComfyTexturesSettings_Statics::NewProp_UploadSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComfyTexturesSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComfyTexturesSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComfyTexturesSettings_Statics::ClassParams = {
		&UComfyTexturesSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UComfyTexturesSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UComfyTexturesSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComfyTexturesSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UComfyTexturesSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComfyTexturesSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UComfyTexturesSettings()
	{
		if (!Z_Registration_Info_UClass_UComfyTexturesSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComfyTexturesSettings.OuterSingleton, Z_Construct_UClass_UComfyTexturesSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComfyTexturesSettings.OuterSingleton;
	}
	template<> COMFYTEXTURES_API UClass* StaticClass<UComfyTexturesSettings>()
	{
		return UComfyTexturesSettings::StaticClass();
	}
	UComfyTexturesSettings::UComfyTexturesSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComfyTexturesSettings);
	UComfyTexturesSettings::~UComfyTexturesSettings() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComfyTexturesImageData;
class UScriptStruct* FComfyTexturesImageData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComfyTexturesImageData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComfyTexturesImageData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComfyTexturesImageData, (UObject*)Z_Construct_UPackage__Script_ComfyTextures(), TEXT("ComfyTexturesImageData"));
	}
	return Z_Registration_Info_UScriptStruct_ComfyTexturesImageData.OuterSingleton;
}
template<> COMFYTEXTURES_API UScriptStruct* StaticStruct<FComfyTexturesImageData>()
{
	return FComfyTexturesImageData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComfyTexturesImageData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pixels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pixels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Pixels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComfyTexturesImageData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComfyTexturesImageData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComfyTexturesImageData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComfyTexturesImageData_Statics::NewProp_Pixels_Inner = { "Pixels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComfyTexturesImageData_Statics::NewProp_Pixels_MetaData[] = {
		{ "Category", "ComfyTexturesImageData" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComfyTexturesImageData_Statics::NewProp_Pixels = { "Pixels", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComfyTexturesImageData, Pixels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesImageData_Statics::NewProp_Pixels_MetaData), Z_Construct_UScriptStruct_FComfyTexturesImageData_Statics::NewProp_Pixels_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComfyTexturesImageData_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "ComfyTexturesImageData" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FComfyTexturesImageData_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComfyTexturesImageData, Width), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesImageData_Statics::NewProp_Width_MetaData), Z_Construct_UScriptStruct_FComfyTexturesImageData_Statics::NewProp_Width_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComfyTexturesImageData_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "ComfyTexturesImageData" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FComfyTexturesImageData_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComfyTexturesImageData, Height), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesImageData_Statics::NewProp_Height_MetaData), Z_Construct_UScriptStruct_FComfyTexturesImageData_Statics::NewProp_Height_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComfyTexturesImageData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComfyTexturesImageData_Statics::NewProp_Pixels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComfyTexturesImageData_Statics::NewProp_Pixels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComfyTexturesImageData_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComfyTexturesImageData_Statics::NewProp_Height,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComfyTexturesImageData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ComfyTextures,
		nullptr,
		&NewStructOps,
		"ComfyTexturesImageData",
		Z_Construct_UScriptStruct_FComfyTexturesImageData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesImageData_Statics::PropPointers),
		sizeof(FComfyTexturesImageData),
		alignof(FComfyTexturesImageData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesImageData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComfyTexturesImageData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesImageData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FComfyTexturesImageData()
	{
		if (!Z_Registration_Info_UScriptStruct_ComfyTexturesImageData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComfyTexturesImageData.InnerSingleton, Z_Construct_UScriptStruct_FComfyTexturesImageData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComfyTexturesImageData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComfyTexturesRenderData;
class UScriptStruct* FComfyTexturesRenderData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComfyTexturesRenderData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComfyTexturesRenderData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComfyTexturesRenderData, (UObject*)Z_Construct_UPackage__Script_ComfyTextures(), TEXT("ComfyTexturesRenderData"));
	}
	return Z_Registration_Info_UScriptStruct_ComfyTexturesRenderData.OuterSingleton;
}
template<> COMFYTEXTURES_API UScriptStruct* StaticStruct<FComfyTexturesRenderData>()
{
	return FComfyTexturesRenderData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComfyTexturesRenderData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PromptId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PromptId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutputFileNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputFileNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputFileNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Progress_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Progress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentNodeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentNodeIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComfyTexturesRenderData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComfyTexturesRenderData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComfyTexturesRenderData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComfyTexturesRenderData_Statics::NewProp_PromptId_MetaData[] = {
		{ "Category", "ComfyTexturesRenderData" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FComfyTexturesRenderData_Statics::NewProp_PromptId = { "PromptId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComfyTexturesRenderData, PromptId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesRenderData_Statics::NewProp_PromptId_MetaData), Z_Construct_UScriptStruct_FComfyTexturesRenderData_Statics::NewProp_PromptId_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FComfyTexturesRenderData_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComfyTexturesRenderData_Statics::NewProp_State_MetaData[] = {
		{ "Category", "ComfyTexturesRenderData" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FComfyTexturesRenderData_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComfyTexturesRenderData, State), Z_Construct_UEnum_ComfyTextures_EComfyTexturesRenderState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesRenderData_Statics::NewProp_State_MetaData), Z_Construct_UScriptStruct_FComfyTexturesRenderData_Statics::NewProp_State_MetaData) }; // 239302195
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FComfyTexturesRenderData_Statics::NewProp_OutputFileNames_Inner = { "OutputFileNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComfyTexturesRenderData_Statics::NewProp_OutputFileNames_MetaData[] = {
		{ "Category", "ComfyTexturesRenderData" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComfyTexturesRenderData_Statics::NewProp_OutputFileNames = { "OutputFileNames", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComfyTexturesRenderData, OutputFileNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesRenderData_Statics::NewProp_OutputFileNames_MetaData), Z_Construct_UScriptStruct_FComfyTexturesRenderData_Statics::NewProp_OutputFileNames_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComfyTexturesRenderData_Statics::NewProp_Progress_MetaData[] = {
		{ "Category", "ComfyTexturesRenderData" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FComfyTexturesRenderData_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComfyTexturesRenderData, Progress), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesRenderData_Statics::NewProp_Progress_MetaData), Z_Construct_UScriptStruct_FComfyTexturesRenderData_Statics::NewProp_Progress_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComfyTexturesRenderData_Statics::NewProp_CurrentNodeIndex_MetaData[] = {
		{ "Category", "ComfyTexturesRenderData" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FComfyTexturesRenderData_Statics::NewProp_CurrentNodeIndex = { "CurrentNodeIndex", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComfyTexturesRenderData, CurrentNodeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesRenderData_Statics::NewProp_CurrentNodeIndex_MetaData), Z_Construct_UScriptStruct_FComfyTexturesRenderData_Statics::NewProp_CurrentNodeIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComfyTexturesRenderData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComfyTexturesRenderData_Statics::NewProp_PromptId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComfyTexturesRenderData_Statics::NewProp_State_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComfyTexturesRenderData_Statics::NewProp_State,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComfyTexturesRenderData_Statics::NewProp_OutputFileNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComfyTexturesRenderData_Statics::NewProp_OutputFileNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComfyTexturesRenderData_Statics::NewProp_Progress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComfyTexturesRenderData_Statics::NewProp_CurrentNodeIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComfyTexturesRenderData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ComfyTextures,
		nullptr,
		&NewStructOps,
		"ComfyTexturesRenderData",
		Z_Construct_UScriptStruct_FComfyTexturesRenderData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesRenderData_Statics::PropPointers),
		sizeof(FComfyTexturesRenderData),
		alignof(FComfyTexturesRenderData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesRenderData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComfyTexturesRenderData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesRenderData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FComfyTexturesRenderData()
	{
		if (!Z_Registration_Info_UScriptStruct_ComfyTexturesRenderData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComfyTexturesRenderData.InnerSingleton, Z_Construct_UScriptStruct_FComfyTexturesRenderData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComfyTexturesRenderData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComfyTexturesWorkflowParams;
class UScriptStruct* FComfyTexturesWorkflowParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComfyTexturesWorkflowParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComfyTexturesWorkflowParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams, (UObject*)Z_Construct_UPackage__Script_ComfyTextures(), TEXT("ComfyTexturesWorkflowParams"));
	}
	return Z_Registration_Info_UScriptStruct_ComfyTexturesWorkflowParams.OuterSingleton;
}
template<> COMFYTEXTURES_API UScriptStruct* StaticStruct<FComfyTexturesWorkflowParams>()
{
	return FComfyTexturesWorkflowParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositivePrompt_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PositivePrompt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NegativePrompt_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NegativePrompt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cfg_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Cfg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Steps_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Steps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RefinerSteps_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RefinerSteps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DenoiseStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DenoiseStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlDepthStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ControlDepthStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlCannyStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ControlCannyStrength;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EditMaskMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditMaskMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EditMaskMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComfyTexturesWorkflowParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_PositivePrompt_MetaData[] = {
		{ "Category", "ComfyTexturesWorkflowParams" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_PositivePrompt = { "PositivePrompt", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComfyTexturesWorkflowParams, PositivePrompt), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_PositivePrompt_MetaData), Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_PositivePrompt_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_NegativePrompt_MetaData[] = {
		{ "Category", "ComfyTexturesWorkflowParams" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_NegativePrompt = { "NegativePrompt", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComfyTexturesWorkflowParams, NegativePrompt), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_NegativePrompt_MetaData), Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_NegativePrompt_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_Seed_MetaData[] = {
		{ "Category", "ComfyTexturesWorkflowParams" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComfyTexturesWorkflowParams, Seed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_Seed_MetaData), Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_Seed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_Cfg_MetaData[] = {
		{ "Category", "ComfyTexturesWorkflowParams" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_Cfg = { "Cfg", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComfyTexturesWorkflowParams, Cfg), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_Cfg_MetaData), Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_Cfg_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_Steps_MetaData[] = {
		{ "Category", "ComfyTexturesWorkflowParams" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_Steps = { "Steps", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComfyTexturesWorkflowParams, Steps), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_Steps_MetaData), Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_Steps_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_RefinerSteps_MetaData[] = {
		{ "Category", "ComfyTexturesWorkflowParams" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_RefinerSteps = { "RefinerSteps", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComfyTexturesWorkflowParams, RefinerSteps), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_RefinerSteps_MetaData), Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_RefinerSteps_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_DenoiseStrength_MetaData[] = {
		{ "Category", "ComfyTexturesWorkflowParams" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_DenoiseStrength = { "DenoiseStrength", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComfyTexturesWorkflowParams, DenoiseStrength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_DenoiseStrength_MetaData), Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_DenoiseStrength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_ControlDepthStrength_MetaData[] = {
		{ "Category", "ComfyTexturesWorkflowParams" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_ControlDepthStrength = { "ControlDepthStrength", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComfyTexturesWorkflowParams, ControlDepthStrength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_ControlDepthStrength_MetaData), Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_ControlDepthStrength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_ControlCannyStrength_MetaData[] = {
		{ "Category", "ComfyTexturesWorkflowParams" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_ControlCannyStrength = { "ControlCannyStrength", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComfyTexturesWorkflowParams, ControlCannyStrength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_ControlCannyStrength_MetaData), Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_ControlCannyStrength_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_EditMaskMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_EditMaskMode_MetaData[] = {
		{ "Category", "ComfyTexturesWorkflowParams" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_EditMaskMode = { "EditMaskMode", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComfyTexturesWorkflowParams, EditMaskMode), Z_Construct_UEnum_ComfyTextures_EComfyTexturesEditMaskMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_EditMaskMode_MetaData), Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_EditMaskMode_MetaData) }; // 1768208180
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_PositivePrompt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_NegativePrompt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_Cfg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_Steps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_RefinerSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_DenoiseStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_ControlDepthStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_ControlCannyStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_EditMaskMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewProp_EditMaskMode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ComfyTextures,
		nullptr,
		&NewStructOps,
		"ComfyTexturesWorkflowParams",
		Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::PropPointers),
		sizeof(FComfyTexturesWorkflowParams),
		alignof(FComfyTexturesWorkflowParams),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams()
	{
		if (!Z_Registration_Info_UScriptStruct_ComfyTexturesWorkflowParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComfyTexturesWorkflowParams.InnerSingleton, Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComfyTexturesWorkflowParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComfyTexturesRenderOptions;
class UScriptStruct* FComfyTexturesRenderOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComfyTexturesRenderOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComfyTexturesRenderOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComfyTexturesRenderOptions, (UObject*)Z_Construct_UPackage__Script_ComfyTextures(), TEXT("ComfyTexturesRenderOptions"));
	}
	return Z_Registration_Info_UScriptStruct_ComfyTexturesRenderOptions.OuterSingleton;
}
template<> COMFYTEXTURES_API UScriptStruct* StaticStruct<FComfyTexturesRenderOptions>()
{
	return FComfyTexturesRenderOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CameraMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CameraMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExistingCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExistingCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreserveExisting_MetaData[];
#endif
		static void NewProp_bPreserveExisting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreserveExisting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreserveThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PreserveThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComfyTexturesRenderOptions>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "ComfyTexturesRenderOptions" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComfyTexturesRenderOptions, Mode), Z_Construct_UEnum_ComfyTextures_EComfyTexturesMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics::NewProp_Mode_MetaData), Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics::NewProp_Mode_MetaData) }; // 936032683
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics::NewProp_Params_MetaData[] = {
		{ "Category", "ComfyTexturesRenderOptions" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComfyTexturesRenderOptions, Params), Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics::NewProp_Params_MetaData), Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics::NewProp_Params_MetaData) }; // 2077684728
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics::NewProp_CameraMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics::NewProp_CameraMode_MetaData[] = {
		{ "Category", "ComfyTexturesRenderOptions" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics::NewProp_CameraMode = { "CameraMode", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComfyTexturesRenderOptions, CameraMode), Z_Construct_UEnum_ComfyTextures_EComfyTexturesCameraMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics::NewProp_CameraMode_MetaData), Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics::NewProp_CameraMode_MetaData) }; // 692236791
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics::NewProp_ExistingCamera_MetaData[] = {
		{ "Category", "ComfyTexturesRenderOptions" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics::NewProp_ExistingCamera = { "ExistingCamera", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComfyTexturesRenderOptions, ExistingCamera), Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics::NewProp_ExistingCamera_MetaData), Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics::NewProp_ExistingCamera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics::NewProp_bPreserveExisting_MetaData[] = {
		{ "Category", "ComfyTexturesRenderOptions" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics::NewProp_bPreserveExisting_SetBit(void* Obj)
	{
		((FComfyTexturesRenderOptions*)Obj)->bPreserveExisting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics::NewProp_bPreserveExisting = { "bPreserveExisting", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FComfyTexturesRenderOptions), &Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics::NewProp_bPreserveExisting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics::NewProp_bPreserveExisting_MetaData), Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics::NewProp_bPreserveExisting_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics::NewProp_PreserveThreshold_MetaData[] = {
		{ "Category", "ComfyTexturesRenderOptions" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics::NewProp_PreserveThreshold = { "PreserveThreshold", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComfyTexturesRenderOptions, PreserveThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics::NewProp_PreserveThreshold_MetaData), Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics::NewProp_PreserveThreshold_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics::NewProp_CameraMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics::NewProp_CameraMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics::NewProp_ExistingCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics::NewProp_bPreserveExisting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics::NewProp_PreserveThreshold,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ComfyTextures,
		nullptr,
		&NewStructOps,
		"ComfyTexturesRenderOptions",
		Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics::PropPointers),
		sizeof(FComfyTexturesRenderOptions),
		alignof(FComfyTexturesRenderOptions),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FComfyTexturesRenderOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_ComfyTexturesRenderOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComfyTexturesRenderOptions.InnerSingleton, Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComfyTexturesRenderOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComfyTexturesCaptureOutput;
class UScriptStruct* FComfyTexturesCaptureOutput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComfyTexturesCaptureOutput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComfyTexturesCaptureOutput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComfyTexturesCaptureOutput, (UObject*)Z_Construct_UPackage__Script_ComfyTextures(), TEXT("ComfyTexturesCaptureOutput"));
	}
	return Z_Registration_Info_UScriptStruct_ComfyTexturesCaptureOutput.OuterSingleton;
}
template<> COMFYTEXTURES_API UScriptStruct* StaticStruct<FComfyTexturesCaptureOutput>()
{
	return FComfyTexturesCaptureOutput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComfyTexturesCaptureOutput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawDepth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RawDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Depth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditMask_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EdgeMask_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeMask;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComfyTexturesCaptureOutput_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComfyTexturesCaptureOutput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComfyTexturesCaptureOutput>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComfyTexturesCaptureOutput_Statics::NewProp_RawDepth_MetaData[] = {
		{ "Category", "ComfyTexturesCaptureOutput" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComfyTexturesCaptureOutput_Statics::NewProp_RawDepth = { "RawDepth", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComfyTexturesCaptureOutput, RawDepth), Z_Construct_UScriptStruct_FComfyTexturesImageData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesCaptureOutput_Statics::NewProp_RawDepth_MetaData), Z_Construct_UScriptStruct_FComfyTexturesCaptureOutput_Statics::NewProp_RawDepth_MetaData) }; // 2129184421
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComfyTexturesCaptureOutput_Statics::NewProp_Depth_MetaData[] = {
		{ "Category", "ComfyTexturesCaptureOutput" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComfyTexturesCaptureOutput_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComfyTexturesCaptureOutput, Depth), Z_Construct_UScriptStruct_FComfyTexturesImageData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesCaptureOutput_Statics::NewProp_Depth_MetaData), Z_Construct_UScriptStruct_FComfyTexturesCaptureOutput_Statics::NewProp_Depth_MetaData) }; // 2129184421
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComfyTexturesCaptureOutput_Statics::NewProp_Normals_MetaData[] = {
		{ "Category", "ComfyTexturesCaptureOutput" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComfyTexturesCaptureOutput_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComfyTexturesCaptureOutput, Normals), Z_Construct_UScriptStruct_FComfyTexturesImageData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesCaptureOutput_Statics::NewProp_Normals_MetaData), Z_Construct_UScriptStruct_FComfyTexturesCaptureOutput_Statics::NewProp_Normals_MetaData) }; // 2129184421
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComfyTexturesCaptureOutput_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "ComfyTexturesCaptureOutput" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComfyTexturesCaptureOutput_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComfyTexturesCaptureOutput, Color), Z_Construct_UScriptStruct_FComfyTexturesImageData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesCaptureOutput_Statics::NewProp_Color_MetaData), Z_Construct_UScriptStruct_FComfyTexturesCaptureOutput_Statics::NewProp_Color_MetaData) }; // 2129184421
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComfyTexturesCaptureOutput_Statics::NewProp_EditMask_MetaData[] = {
		{ "Category", "ComfyTexturesCaptureOutput" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComfyTexturesCaptureOutput_Statics::NewProp_EditMask = { "EditMask", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComfyTexturesCaptureOutput, EditMask), Z_Construct_UScriptStruct_FComfyTexturesImageData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesCaptureOutput_Statics::NewProp_EditMask_MetaData), Z_Construct_UScriptStruct_FComfyTexturesCaptureOutput_Statics::NewProp_EditMask_MetaData) }; // 2129184421
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComfyTexturesCaptureOutput_Statics::NewProp_EdgeMask_MetaData[] = {
		{ "Category", "ComfyTexturesCaptureOutput" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComfyTexturesCaptureOutput_Statics::NewProp_EdgeMask = { "EdgeMask", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComfyTexturesCaptureOutput, EdgeMask), Z_Construct_UScriptStruct_FComfyTexturesImageData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesCaptureOutput_Statics::NewProp_EdgeMask_MetaData), Z_Construct_UScriptStruct_FComfyTexturesCaptureOutput_Statics::NewProp_EdgeMask_MetaData) }; // 2129184421
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComfyTexturesCaptureOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComfyTexturesCaptureOutput_Statics::NewProp_RawDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComfyTexturesCaptureOutput_Statics::NewProp_Depth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComfyTexturesCaptureOutput_Statics::NewProp_Normals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComfyTexturesCaptureOutput_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComfyTexturesCaptureOutput_Statics::NewProp_EditMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComfyTexturesCaptureOutput_Statics::NewProp_EdgeMask,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComfyTexturesCaptureOutput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ComfyTextures,
		nullptr,
		&NewStructOps,
		"ComfyTexturesCaptureOutput",
		Z_Construct_UScriptStruct_FComfyTexturesCaptureOutput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesCaptureOutput_Statics::PropPointers),
		sizeof(FComfyTexturesCaptureOutput),
		alignof(FComfyTexturesCaptureOutput),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesCaptureOutput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComfyTexturesCaptureOutput_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesCaptureOutput_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FComfyTexturesCaptureOutput()
	{
		if (!Z_Registration_Info_UScriptStruct_ComfyTexturesCaptureOutput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComfyTexturesCaptureOutput.InnerSingleton, Z_Construct_UScriptStruct_FComfyTexturesCaptureOutput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComfyTexturesCaptureOutput.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComfyTexturesPrepareOptions;
class UScriptStruct* FComfyTexturesPrepareOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComfyTexturesPrepareOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComfyTexturesPrepareOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComfyTexturesPrepareOptions, (UObject*)Z_Construct_UPackage__Script_ComfyTextures(), TEXT("ComfyTexturesPrepareOptions"));
	}
	return Z_Registration_Info_UScriptStruct_ComfyTexturesPrepareOptions.OuterSingleton;
}
template<> COMFYTEXTURES_API UScriptStruct* StaticStruct<FComfyTexturesPrepareOptions>()
{
	return FComfyTexturesPrepareOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComfyTexturesPrepareOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReferenceTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComfyTexturesPrepareOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComfyTexturesPrepareOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComfyTexturesPrepareOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComfyTexturesPrepareOptions_Statics::NewProp_BaseMaterial_MetaData[] = {
		{ "Category", "ComfyTexturesPrepareOptions" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FComfyTexturesPrepareOptions_Statics::NewProp_BaseMaterial = { "BaseMaterial", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComfyTexturesPrepareOptions, BaseMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesPrepareOptions_Statics::NewProp_BaseMaterial_MetaData), Z_Construct_UScriptStruct_FComfyTexturesPrepareOptions_Statics::NewProp_BaseMaterial_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComfyTexturesPrepareOptions_Statics::NewProp_ReferenceTexture_MetaData[] = {
		{ "Category", "ComfyTexturesPrepareOptions" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FComfyTexturesPrepareOptions_Statics::NewProp_ReferenceTexture = { "ReferenceTexture", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComfyTexturesPrepareOptions, ReferenceTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesPrepareOptions_Statics::NewProp_ReferenceTexture_MetaData), Z_Construct_UScriptStruct_FComfyTexturesPrepareOptions_Statics::NewProp_ReferenceTexture_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComfyTexturesPrepareOptions_Statics::NewProp_ViewInfo_MetaData[] = {
		{ "Category", "ComfyTexturesPrepareOptions" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComfyTexturesPrepareOptions_Statics::NewProp_ViewInfo = { "ViewInfo", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComfyTexturesPrepareOptions, ViewInfo), Z_Construct_UScriptStruct_FMinimalViewInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesPrepareOptions_Statics::NewProp_ViewInfo_MetaData), Z_Construct_UScriptStruct_FComfyTexturesPrepareOptions_Statics::NewProp_ViewInfo_MetaData) }; // 3100370771
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComfyTexturesPrepareOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComfyTexturesPrepareOptions_Statics::NewProp_BaseMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComfyTexturesPrepareOptions_Statics::NewProp_ReferenceTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComfyTexturesPrepareOptions_Statics::NewProp_ViewInfo,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComfyTexturesPrepareOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ComfyTextures,
		nullptr,
		&NewStructOps,
		"ComfyTexturesPrepareOptions",
		Z_Construct_UScriptStruct_FComfyTexturesPrepareOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesPrepareOptions_Statics::PropPointers),
		sizeof(FComfyTexturesPrepareOptions),
		alignof(FComfyTexturesPrepareOptions),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesPrepareOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComfyTexturesPrepareOptions_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComfyTexturesPrepareOptions_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FComfyTexturesPrepareOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_ComfyTexturesPrepareOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComfyTexturesPrepareOptions.InnerSingleton, Z_Construct_UScriptStruct_FComfyTexturesPrepareOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComfyTexturesPrepareOptions.InnerSingleton;
	}
	DEFINE_FUNCTION(UComfyTexturesWidgetBase::execGetParams)
	{
		P_GET_ENUM(EComfyTexturesMode,Z_Param_Mode);
		P_GET_STRUCT_REF(FComfyTexturesWorkflowParams,Z_Param_Out_OutParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetParams(EComfyTexturesMode(Z_Param_Mode),Z_Param_Out_OutParams);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComfyTexturesWidgetBase::execSetParams)
	{
		P_GET_ENUM(EComfyTexturesMode,Z_Param_Mode);
		P_GET_STRUCT_REF(FComfyTexturesWorkflowParams,Z_Param_Out_InParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParams(EComfyTexturesMode(Z_Param_Mode),Z_Param_Out_InParams);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComfyTexturesWidgetBase::execSaveParams)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SaveParams();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComfyTexturesWidgetBase::execLoadParams)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LoadParams();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComfyTexturesWidgetBase::execGetFlattenedSelectionSetWithChildren)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetFlattenedSelectionSetWithChildren(Z_Param_Out_OutActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComfyTexturesWidgetBase::execSetEditorFrameRate)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Fps);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEditorFrameRate(Z_Param_Fps);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComfyTexturesWidgetBase::execGetWorkflowJsonPath)
	{
		P_GET_ENUM(EComfyTexturesMode,Z_Param_Mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetWorkflowJsonPath(EComfyTexturesMode(Z_Param_Mode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComfyTexturesWidgetBase::execParseWorkflowJson)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonPath);
		P_GET_STRUCT_REF(FComfyTexturesWorkflowParams,Z_Param_Out_OutParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ParseWorkflowJson(Z_Param_JsonPath,Z_Param_Out_OutParams);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComfyTexturesWidgetBase::execPrepareActors)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actor);
		P_GET_STRUCT_REF(FComfyTexturesPrepareOptions,Z_Param_Out_PrepareOpts);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PrepareActors(Z_Param_Out_Actor,Z_Param_Out_PrepareOpts);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComfyTexturesWidgetBase::execFreeComfyMemory)
	{
		P_GET_UBOOL(Z_Param_bUnloadModels);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FreeComfyMemory(Z_Param_bUnloadModels);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComfyTexturesWidgetBase::execClearRenderQueue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearRenderQueue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComfyTexturesWidgetBase::execInterruptRender)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InterruptRender();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComfyTexturesWidgetBase::execQueueRender)
	{
		P_GET_STRUCT_REF(FComfyTexturesRenderOptions,Z_Param_Out_RenderOpts);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_RequestIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->QueueRender(Z_Param_Out_RenderOpts,Z_Param_Out_RequestIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComfyTexturesWidgetBase::execCancelJob)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelJob();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComfyTexturesWidgetBase::execProcessRenderResults)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ProcessRenderResults();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComfyTexturesWidgetBase::execProcessMultipleActors)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors);
		P_GET_STRUCT_REF(FComfyTexturesRenderOptions,Z_Param_Out_RenderOpts);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ProcessMultipleActors(Z_Param_Out_Actors,Z_Param_Out_RenderOpts);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComfyTexturesWidgetBase::execValidateAllRequestsSucceeded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ValidateAllRequestsSucceeded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComfyTexturesWidgetBase::execHasPendingRequests)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasPendingRequests();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComfyTexturesWidgetBase::execGetNumPendingRequests)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumPendingRequests();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComfyTexturesWidgetBase::execIsConnected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsConnected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComfyTexturesWidgetBase::execConnect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Connect();
		P_NATIVE_END;
	}
	struct ComfyTexturesWidgetBase_eventOnRenderStateChanged_Parms
	{
		FString PromptId;
		FComfyTexturesRenderData Data;
	};
	struct ComfyTexturesWidgetBase_eventOnStateChanged_Parms
	{
		EComfyTexturesState NewState;
	};
	static FName NAME_UComfyTexturesWidgetBase_OnRenderStateChanged = FName(TEXT("OnRenderStateChanged"));
	void UComfyTexturesWidgetBase::OnRenderStateChanged(const FString& PromptId, FComfyTexturesRenderData const& Data)
	{
		ComfyTexturesWidgetBase_eventOnRenderStateChanged_Parms Parms;
		Parms.PromptId=PromptId;
		Parms.Data=Data;
		ProcessEvent(FindFunctionChecked(NAME_UComfyTexturesWidgetBase_OnRenderStateChanged),&Parms);
	}
	static FName NAME_UComfyTexturesWidgetBase_OnStateChanged = FName(TEXT("OnStateChanged"));
	void UComfyTexturesWidgetBase::OnStateChanged(EComfyTexturesState NewState)
	{
		ComfyTexturesWidgetBase_eventOnStateChanged_Parms Parms;
		Parms.NewState=NewState;
		ProcessEvent(FindFunctionChecked(NAME_UComfyTexturesWidgetBase_OnStateChanged),&Parms);
	}
	void UComfyTexturesWidgetBase::StaticRegisterNativesUComfyTexturesWidgetBase()
	{
		UClass* Class = UComfyTexturesWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelJob", &UComfyTexturesWidgetBase::execCancelJob },
			{ "ClearRenderQueue", &UComfyTexturesWidgetBase::execClearRenderQueue },
			{ "Connect", &UComfyTexturesWidgetBase::execConnect },
			{ "FreeComfyMemory", &UComfyTexturesWidgetBase::execFreeComfyMemory },
			{ "GetFlattenedSelectionSetWithChildren", &UComfyTexturesWidgetBase::execGetFlattenedSelectionSetWithChildren },
			{ "GetNumPendingRequests", &UComfyTexturesWidgetBase::execGetNumPendingRequests },
			{ "GetParams", &UComfyTexturesWidgetBase::execGetParams },
			{ "GetWorkflowJsonPath", &UComfyTexturesWidgetBase::execGetWorkflowJsonPath },
			{ "HasPendingRequests", &UComfyTexturesWidgetBase::execHasPendingRequests },
			{ "InterruptRender", &UComfyTexturesWidgetBase::execInterruptRender },
			{ "IsConnected", &UComfyTexturesWidgetBase::execIsConnected },
			{ "LoadParams", &UComfyTexturesWidgetBase::execLoadParams },
			{ "ParseWorkflowJson", &UComfyTexturesWidgetBase::execParseWorkflowJson },
			{ "PrepareActors", &UComfyTexturesWidgetBase::execPrepareActors },
			{ "ProcessMultipleActors", &UComfyTexturesWidgetBase::execProcessMultipleActors },
			{ "ProcessRenderResults", &UComfyTexturesWidgetBase::execProcessRenderResults },
			{ "QueueRender", &UComfyTexturesWidgetBase::execQueueRender },
			{ "SaveParams", &UComfyTexturesWidgetBase::execSaveParams },
			{ "SetEditorFrameRate", &UComfyTexturesWidgetBase::execSetEditorFrameRate },
			{ "SetParams", &UComfyTexturesWidgetBase::execSetParams },
			{ "ValidateAllRequestsSucceeded", &UComfyTexturesWidgetBase::execValidateAllRequestsSucceeded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UComfyTexturesWidgetBase_CancelJob_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComfyTexturesWidgetBase_CancelJob_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComfyTextures" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComfyTexturesWidgetBase_CancelJob_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComfyTexturesWidgetBase, nullptr, "CancelJob", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_CancelJob_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComfyTexturesWidgetBase_CancelJob_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UComfyTexturesWidgetBase_CancelJob()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComfyTexturesWidgetBase_CancelJob_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComfyTexturesWidgetBase_ClearRenderQueue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComfyTexturesWidgetBase_ClearRenderQueue_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComfyTextures" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComfyTexturesWidgetBase_ClearRenderQueue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComfyTexturesWidgetBase, nullptr, "ClearRenderQueue", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_ClearRenderQueue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComfyTexturesWidgetBase_ClearRenderQueue_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UComfyTexturesWidgetBase_ClearRenderQueue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComfyTexturesWidgetBase_ClearRenderQueue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComfyTexturesWidgetBase_Connect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComfyTexturesWidgetBase_Connect_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComfyTextures" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComfyTexturesWidgetBase_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComfyTexturesWidgetBase, nullptr, "Connect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_Connect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComfyTexturesWidgetBase_Connect_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UComfyTexturesWidgetBase_Connect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComfyTexturesWidgetBase_Connect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComfyTexturesWidgetBase_FreeComfyMemory_Statics
	{
		struct ComfyTexturesWidgetBase_eventFreeComfyMemory_Parms
		{
			bool bUnloadModels;
		};
		static void NewProp_bUnloadModels_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUnloadModels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UComfyTexturesWidgetBase_FreeComfyMemory_Statics::NewProp_bUnloadModels_SetBit(void* Obj)
	{
		((ComfyTexturesWidgetBase_eventFreeComfyMemory_Parms*)Obj)->bUnloadModels = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComfyTexturesWidgetBase_FreeComfyMemory_Statics::NewProp_bUnloadModels = { "bUnloadModels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ComfyTexturesWidgetBase_eventFreeComfyMemory_Parms), &Z_Construct_UFunction_UComfyTexturesWidgetBase_FreeComfyMemory_Statics::NewProp_bUnloadModels_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComfyTexturesWidgetBase_FreeComfyMemory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComfyTexturesWidgetBase_FreeComfyMemory_Statics::NewProp_bUnloadModels,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComfyTexturesWidgetBase_FreeComfyMemory_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComfyTextures" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComfyTexturesWidgetBase_FreeComfyMemory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComfyTexturesWidgetBase, nullptr, "FreeComfyMemory", nullptr, nullptr, Z_Construct_UFunction_UComfyTexturesWidgetBase_FreeComfyMemory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_FreeComfyMemory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComfyTexturesWidgetBase_FreeComfyMemory_Statics::ComfyTexturesWidgetBase_eventFreeComfyMemory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_FreeComfyMemory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComfyTexturesWidgetBase_FreeComfyMemory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_FreeComfyMemory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComfyTexturesWidgetBase_FreeComfyMemory_Statics::ComfyTexturesWidgetBase_eventFreeComfyMemory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComfyTexturesWidgetBase_FreeComfyMemory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComfyTexturesWidgetBase_FreeComfyMemory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComfyTexturesWidgetBase_GetFlattenedSelectionSetWithChildren_Statics
	{
		struct ComfyTexturesWidgetBase_eventGetFlattenedSelectionSetWithChildren_Parms
		{
			TArray<AActor*> OutActors;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComfyTexturesWidgetBase_GetFlattenedSelectionSetWithChildren_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UComfyTexturesWidgetBase_GetFlattenedSelectionSetWithChildren_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComfyTexturesWidgetBase_eventGetFlattenedSelectionSetWithChildren_Parms, OutActors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComfyTexturesWidgetBase_GetFlattenedSelectionSetWithChildren_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComfyTexturesWidgetBase_GetFlattenedSelectionSetWithChildren_Statics::NewProp_OutActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComfyTexturesWidgetBase_GetFlattenedSelectionSetWithChildren_Statics::NewProp_OutActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComfyTexturesWidgetBase_GetFlattenedSelectionSetWithChildren_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComfyTextures" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComfyTexturesWidgetBase_GetFlattenedSelectionSetWithChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComfyTexturesWidgetBase, nullptr, "GetFlattenedSelectionSetWithChildren", nullptr, nullptr, Z_Construct_UFunction_UComfyTexturesWidgetBase_GetFlattenedSelectionSetWithChildren_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_GetFlattenedSelectionSetWithChildren_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComfyTexturesWidgetBase_GetFlattenedSelectionSetWithChildren_Statics::ComfyTexturesWidgetBase_eventGetFlattenedSelectionSetWithChildren_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_GetFlattenedSelectionSetWithChildren_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComfyTexturesWidgetBase_GetFlattenedSelectionSetWithChildren_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_GetFlattenedSelectionSetWithChildren_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComfyTexturesWidgetBase_GetFlattenedSelectionSetWithChildren_Statics::ComfyTexturesWidgetBase_eventGetFlattenedSelectionSetWithChildren_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComfyTexturesWidgetBase_GetFlattenedSelectionSetWithChildren()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComfyTexturesWidgetBase_GetFlattenedSelectionSetWithChildren_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComfyTexturesWidgetBase_GetNumPendingRequests_Statics
	{
		struct ComfyTexturesWidgetBase_eventGetNumPendingRequests_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UComfyTexturesWidgetBase_GetNumPendingRequests_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComfyTexturesWidgetBase_eventGetNumPendingRequests_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComfyTexturesWidgetBase_GetNumPendingRequests_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComfyTexturesWidgetBase_GetNumPendingRequests_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComfyTexturesWidgetBase_GetNumPendingRequests_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComfyTextures" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComfyTexturesWidgetBase_GetNumPendingRequests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComfyTexturesWidgetBase, nullptr, "GetNumPendingRequests", nullptr, nullptr, Z_Construct_UFunction_UComfyTexturesWidgetBase_GetNumPendingRequests_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_GetNumPendingRequests_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComfyTexturesWidgetBase_GetNumPendingRequests_Statics::ComfyTexturesWidgetBase_eventGetNumPendingRequests_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_GetNumPendingRequests_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComfyTexturesWidgetBase_GetNumPendingRequests_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_GetNumPendingRequests_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComfyTexturesWidgetBase_GetNumPendingRequests_Statics::ComfyTexturesWidgetBase_eventGetNumPendingRequests_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComfyTexturesWidgetBase_GetNumPendingRequests()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComfyTexturesWidgetBase_GetNumPendingRequests_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComfyTexturesWidgetBase_GetParams_Statics
	{
		struct ComfyTexturesWidgetBase_eventGetParams_Parms
		{
			EComfyTexturesMode Mode;
			FComfyTexturesWorkflowParams OutParams;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UComfyTexturesWidgetBase_GetParams_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UComfyTexturesWidgetBase_GetParams_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComfyTexturesWidgetBase_eventGetParams_Parms, Mode), Z_Construct_UEnum_ComfyTextures_EComfyTexturesMode, METADATA_PARAMS(0, nullptr) }; // 936032683
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComfyTexturesWidgetBase_GetParams_Statics::NewProp_OutParams = { "OutParams", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComfyTexturesWidgetBase_eventGetParams_Parms, OutParams), Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams, METADATA_PARAMS(0, nullptr) }; // 2077684728
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComfyTexturesWidgetBase_GetParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComfyTexturesWidgetBase_GetParams_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComfyTexturesWidgetBase_GetParams_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComfyTexturesWidgetBase_GetParams_Statics::NewProp_OutParams,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComfyTexturesWidgetBase_GetParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComfyTextures" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComfyTexturesWidgetBase_GetParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComfyTexturesWidgetBase, nullptr, "GetParams", nullptr, nullptr, Z_Construct_UFunction_UComfyTexturesWidgetBase_GetParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_GetParams_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComfyTexturesWidgetBase_GetParams_Statics::ComfyTexturesWidgetBase_eventGetParams_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_GetParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComfyTexturesWidgetBase_GetParams_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_GetParams_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComfyTexturesWidgetBase_GetParams_Statics::ComfyTexturesWidgetBase_eventGetParams_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComfyTexturesWidgetBase_GetParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComfyTexturesWidgetBase_GetParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComfyTexturesWidgetBase_GetWorkflowJsonPath_Statics
	{
		struct ComfyTexturesWidgetBase_eventGetWorkflowJsonPath_Parms
		{
			EComfyTexturesMode Mode;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UComfyTexturesWidgetBase_GetWorkflowJsonPath_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UComfyTexturesWidgetBase_GetWorkflowJsonPath_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComfyTexturesWidgetBase_eventGetWorkflowJsonPath_Parms, Mode), Z_Construct_UEnum_ComfyTextures_EComfyTexturesMode, METADATA_PARAMS(0, nullptr) }; // 936032683
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UComfyTexturesWidgetBase_GetWorkflowJsonPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComfyTexturesWidgetBase_eventGetWorkflowJsonPath_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComfyTexturesWidgetBase_GetWorkflowJsonPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComfyTexturesWidgetBase_GetWorkflowJsonPath_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComfyTexturesWidgetBase_GetWorkflowJsonPath_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComfyTexturesWidgetBase_GetWorkflowJsonPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComfyTexturesWidgetBase_GetWorkflowJsonPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComfyTextures" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComfyTexturesWidgetBase_GetWorkflowJsonPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComfyTexturesWidgetBase, nullptr, "GetWorkflowJsonPath", nullptr, nullptr, Z_Construct_UFunction_UComfyTexturesWidgetBase_GetWorkflowJsonPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_GetWorkflowJsonPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComfyTexturesWidgetBase_GetWorkflowJsonPath_Statics::ComfyTexturesWidgetBase_eventGetWorkflowJsonPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_GetWorkflowJsonPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComfyTexturesWidgetBase_GetWorkflowJsonPath_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_GetWorkflowJsonPath_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComfyTexturesWidgetBase_GetWorkflowJsonPath_Statics::ComfyTexturesWidgetBase_eventGetWorkflowJsonPath_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComfyTexturesWidgetBase_GetWorkflowJsonPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComfyTexturesWidgetBase_GetWorkflowJsonPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComfyTexturesWidgetBase_HasPendingRequests_Statics
	{
		struct ComfyTexturesWidgetBase_eventHasPendingRequests_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UComfyTexturesWidgetBase_HasPendingRequests_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ComfyTexturesWidgetBase_eventHasPendingRequests_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComfyTexturesWidgetBase_HasPendingRequests_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ComfyTexturesWidgetBase_eventHasPendingRequests_Parms), &Z_Construct_UFunction_UComfyTexturesWidgetBase_HasPendingRequests_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComfyTexturesWidgetBase_HasPendingRequests_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComfyTexturesWidgetBase_HasPendingRequests_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComfyTexturesWidgetBase_HasPendingRequests_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComfyTextures" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComfyTexturesWidgetBase_HasPendingRequests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComfyTexturesWidgetBase, nullptr, "HasPendingRequests", nullptr, nullptr, Z_Construct_UFunction_UComfyTexturesWidgetBase_HasPendingRequests_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_HasPendingRequests_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComfyTexturesWidgetBase_HasPendingRequests_Statics::ComfyTexturesWidgetBase_eventHasPendingRequests_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_HasPendingRequests_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComfyTexturesWidgetBase_HasPendingRequests_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_HasPendingRequests_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComfyTexturesWidgetBase_HasPendingRequests_Statics::ComfyTexturesWidgetBase_eventHasPendingRequests_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComfyTexturesWidgetBase_HasPendingRequests()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComfyTexturesWidgetBase_HasPendingRequests_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComfyTexturesWidgetBase_InterruptRender_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComfyTexturesWidgetBase_InterruptRender_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComfyTextures" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComfyTexturesWidgetBase_InterruptRender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComfyTexturesWidgetBase, nullptr, "InterruptRender", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_InterruptRender_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComfyTexturesWidgetBase_InterruptRender_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UComfyTexturesWidgetBase_InterruptRender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComfyTexturesWidgetBase_InterruptRender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComfyTexturesWidgetBase_IsConnected_Statics
	{
		struct ComfyTexturesWidgetBase_eventIsConnected_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UComfyTexturesWidgetBase_IsConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ComfyTexturesWidgetBase_eventIsConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComfyTexturesWidgetBase_IsConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ComfyTexturesWidgetBase_eventIsConnected_Parms), &Z_Construct_UFunction_UComfyTexturesWidgetBase_IsConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComfyTexturesWidgetBase_IsConnected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComfyTexturesWidgetBase_IsConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComfyTexturesWidgetBase_IsConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComfyTextures" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComfyTexturesWidgetBase_IsConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComfyTexturesWidgetBase, nullptr, "IsConnected", nullptr, nullptr, Z_Construct_UFunction_UComfyTexturesWidgetBase_IsConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_IsConnected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComfyTexturesWidgetBase_IsConnected_Statics::ComfyTexturesWidgetBase_eventIsConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_IsConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComfyTexturesWidgetBase_IsConnected_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_IsConnected_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComfyTexturesWidgetBase_IsConnected_Statics::ComfyTexturesWidgetBase_eventIsConnected_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComfyTexturesWidgetBase_IsConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComfyTexturesWidgetBase_IsConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComfyTexturesWidgetBase_LoadParams_Statics
	{
		struct ComfyTexturesWidgetBase_eventLoadParams_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UComfyTexturesWidgetBase_LoadParams_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ComfyTexturesWidgetBase_eventLoadParams_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComfyTexturesWidgetBase_LoadParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ComfyTexturesWidgetBase_eventLoadParams_Parms), &Z_Construct_UFunction_UComfyTexturesWidgetBase_LoadParams_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComfyTexturesWidgetBase_LoadParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComfyTexturesWidgetBase_LoadParams_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComfyTexturesWidgetBase_LoadParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComfyTextures" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComfyTexturesWidgetBase_LoadParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComfyTexturesWidgetBase, nullptr, "LoadParams", nullptr, nullptr, Z_Construct_UFunction_UComfyTexturesWidgetBase_LoadParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_LoadParams_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComfyTexturesWidgetBase_LoadParams_Statics::ComfyTexturesWidgetBase_eventLoadParams_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_LoadParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComfyTexturesWidgetBase_LoadParams_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_LoadParams_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComfyTexturesWidgetBase_LoadParams_Statics::ComfyTexturesWidgetBase_eventLoadParams_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComfyTexturesWidgetBase_LoadParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComfyTexturesWidgetBase_LoadParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComfyTexturesWidgetBase_OnRenderStateChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PromptId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PromptId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComfyTexturesWidgetBase_OnRenderStateChanged_Statics::NewProp_PromptId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UComfyTexturesWidgetBase_OnRenderStateChanged_Statics::NewProp_PromptId = { "PromptId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComfyTexturesWidgetBase_eventOnRenderStateChanged_Parms, PromptId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_OnRenderStateChanged_Statics::NewProp_PromptId_MetaData), Z_Construct_UFunction_UComfyTexturesWidgetBase_OnRenderStateChanged_Statics::NewProp_PromptId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComfyTexturesWidgetBase_OnRenderStateChanged_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComfyTexturesWidgetBase_OnRenderStateChanged_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComfyTexturesWidgetBase_eventOnRenderStateChanged_Parms, Data), Z_Construct_UScriptStruct_FComfyTexturesRenderData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_OnRenderStateChanged_Statics::NewProp_Data_MetaData), Z_Construct_UFunction_UComfyTexturesWidgetBase_OnRenderStateChanged_Statics::NewProp_Data_MetaData) }; // 579237669
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComfyTexturesWidgetBase_OnRenderStateChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComfyTexturesWidgetBase_OnRenderStateChanged_Statics::NewProp_PromptId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComfyTexturesWidgetBase_OnRenderStateChanged_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComfyTexturesWidgetBase_OnRenderStateChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComfyTextures" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComfyTexturesWidgetBase_OnRenderStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComfyTexturesWidgetBase, nullptr, "OnRenderStateChanged", nullptr, nullptr, Z_Construct_UFunction_UComfyTexturesWidgetBase_OnRenderStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_OnRenderStateChanged_Statics::PropPointers), sizeof(ComfyTexturesWidgetBase_eventOnRenderStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_OnRenderStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComfyTexturesWidgetBase_OnRenderStateChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_OnRenderStateChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(ComfyTexturesWidgetBase_eventOnRenderStateChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComfyTexturesWidgetBase_OnRenderStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComfyTexturesWidgetBase_OnRenderStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComfyTexturesWidgetBase_OnStateChanged_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UComfyTexturesWidgetBase_OnStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UComfyTexturesWidgetBase_OnStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComfyTexturesWidgetBase_eventOnStateChanged_Parms, NewState), Z_Construct_UEnum_ComfyTextures_EComfyTexturesState, METADATA_PARAMS(0, nullptr) }; // 1850936278
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComfyTexturesWidgetBase_OnStateChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComfyTexturesWidgetBase_OnStateChanged_Statics::NewProp_NewState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComfyTexturesWidgetBase_OnStateChanged_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComfyTexturesWidgetBase_OnStateChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComfyTextures" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComfyTexturesWidgetBase_OnStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComfyTexturesWidgetBase, nullptr, "OnStateChanged", nullptr, nullptr, Z_Construct_UFunction_UComfyTexturesWidgetBase_OnStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_OnStateChanged_Statics::PropPointers), sizeof(ComfyTexturesWidgetBase_eventOnStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_OnStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComfyTexturesWidgetBase_OnStateChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_OnStateChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(ComfyTexturesWidgetBase_eventOnStateChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComfyTexturesWidgetBase_OnStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComfyTexturesWidgetBase_OnStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComfyTexturesWidgetBase_ParseWorkflowJson_Statics
	{
		struct ComfyTexturesWidgetBase_eventParseWorkflowJson_Parms
		{
			FString JsonPath;
			FComfyTexturesWorkflowParams OutParams;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonPath;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutParams;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComfyTexturesWidgetBase_ParseWorkflowJson_Statics::NewProp_JsonPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UComfyTexturesWidgetBase_ParseWorkflowJson_Statics::NewProp_JsonPath = { "JsonPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComfyTexturesWidgetBase_eventParseWorkflowJson_Parms, JsonPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_ParseWorkflowJson_Statics::NewProp_JsonPath_MetaData), Z_Construct_UFunction_UComfyTexturesWidgetBase_ParseWorkflowJson_Statics::NewProp_JsonPath_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComfyTexturesWidgetBase_ParseWorkflowJson_Statics::NewProp_OutParams = { "OutParams", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComfyTexturesWidgetBase_eventParseWorkflowJson_Parms, OutParams), Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams, METADATA_PARAMS(0, nullptr) }; // 2077684728
	void Z_Construct_UFunction_UComfyTexturesWidgetBase_ParseWorkflowJson_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ComfyTexturesWidgetBase_eventParseWorkflowJson_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComfyTexturesWidgetBase_ParseWorkflowJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ComfyTexturesWidgetBase_eventParseWorkflowJson_Parms), &Z_Construct_UFunction_UComfyTexturesWidgetBase_ParseWorkflowJson_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComfyTexturesWidgetBase_ParseWorkflowJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComfyTexturesWidgetBase_ParseWorkflowJson_Statics::NewProp_JsonPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComfyTexturesWidgetBase_ParseWorkflowJson_Statics::NewProp_OutParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComfyTexturesWidgetBase_ParseWorkflowJson_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComfyTexturesWidgetBase_ParseWorkflowJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComfyTextures" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComfyTexturesWidgetBase_ParseWorkflowJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComfyTexturesWidgetBase, nullptr, "ParseWorkflowJson", nullptr, nullptr, Z_Construct_UFunction_UComfyTexturesWidgetBase_ParseWorkflowJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_ParseWorkflowJson_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComfyTexturesWidgetBase_ParseWorkflowJson_Statics::ComfyTexturesWidgetBase_eventParseWorkflowJson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_ParseWorkflowJson_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComfyTexturesWidgetBase_ParseWorkflowJson_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_ParseWorkflowJson_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComfyTexturesWidgetBase_ParseWorkflowJson_Statics::ComfyTexturesWidgetBase_eventParseWorkflowJson_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComfyTexturesWidgetBase_ParseWorkflowJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComfyTexturesWidgetBase_ParseWorkflowJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComfyTexturesWidgetBase_PrepareActors_Statics
	{
		struct ComfyTexturesWidgetBase_eventPrepareActors_Parms
		{
			TArray<AActor*> Actor;
			FComfyTexturesPrepareOptions PrepareOpts;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrepareOpts_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrepareOpts;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComfyTexturesWidgetBase_PrepareActors_Statics::NewProp_Actor_Inner = { "Actor", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComfyTexturesWidgetBase_PrepareActors_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UComfyTexturesWidgetBase_PrepareActors_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComfyTexturesWidgetBase_eventPrepareActors_Parms, Actor), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_PrepareActors_Statics::NewProp_Actor_MetaData), Z_Construct_UFunction_UComfyTexturesWidgetBase_PrepareActors_Statics::NewProp_Actor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComfyTexturesWidgetBase_PrepareActors_Statics::NewProp_PrepareOpts_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComfyTexturesWidgetBase_PrepareActors_Statics::NewProp_PrepareOpts = { "PrepareOpts", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComfyTexturesWidgetBase_eventPrepareActors_Parms, PrepareOpts), Z_Construct_UScriptStruct_FComfyTexturesPrepareOptions, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_PrepareActors_Statics::NewProp_PrepareOpts_MetaData), Z_Construct_UFunction_UComfyTexturesWidgetBase_PrepareActors_Statics::NewProp_PrepareOpts_MetaData) }; // 2819072355
	void Z_Construct_UFunction_UComfyTexturesWidgetBase_PrepareActors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ComfyTexturesWidgetBase_eventPrepareActors_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComfyTexturesWidgetBase_PrepareActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ComfyTexturesWidgetBase_eventPrepareActors_Parms), &Z_Construct_UFunction_UComfyTexturesWidgetBase_PrepareActors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComfyTexturesWidgetBase_PrepareActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComfyTexturesWidgetBase_PrepareActors_Statics::NewProp_Actor_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComfyTexturesWidgetBase_PrepareActors_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComfyTexturesWidgetBase_PrepareActors_Statics::NewProp_PrepareOpts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComfyTexturesWidgetBase_PrepareActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComfyTexturesWidgetBase_PrepareActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComfyTextures" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComfyTexturesWidgetBase_PrepareActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComfyTexturesWidgetBase, nullptr, "PrepareActors", nullptr, nullptr, Z_Construct_UFunction_UComfyTexturesWidgetBase_PrepareActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_PrepareActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComfyTexturesWidgetBase_PrepareActors_Statics::ComfyTexturesWidgetBase_eventPrepareActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_PrepareActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComfyTexturesWidgetBase_PrepareActors_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_PrepareActors_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComfyTexturesWidgetBase_PrepareActors_Statics::ComfyTexturesWidgetBase_eventPrepareActors_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComfyTexturesWidgetBase_PrepareActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComfyTexturesWidgetBase_PrepareActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComfyTexturesWidgetBase_ProcessMultipleActors_Statics
	{
		struct ComfyTexturesWidgetBase_eventProcessMultipleActors_Parms
		{
			TArray<AActor*> Actors;
			FComfyTexturesRenderOptions RenderOpts;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderOpts_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RenderOpts;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComfyTexturesWidgetBase_ProcessMultipleActors_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComfyTexturesWidgetBase_ProcessMultipleActors_Statics::NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UComfyTexturesWidgetBase_ProcessMultipleActors_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComfyTexturesWidgetBase_eventProcessMultipleActors_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_ProcessMultipleActors_Statics::NewProp_Actors_MetaData), Z_Construct_UFunction_UComfyTexturesWidgetBase_ProcessMultipleActors_Statics::NewProp_Actors_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComfyTexturesWidgetBase_ProcessMultipleActors_Statics::NewProp_RenderOpts_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComfyTexturesWidgetBase_ProcessMultipleActors_Statics::NewProp_RenderOpts = { "RenderOpts", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComfyTexturesWidgetBase_eventProcessMultipleActors_Parms, RenderOpts), Z_Construct_UScriptStruct_FComfyTexturesRenderOptions, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_ProcessMultipleActors_Statics::NewProp_RenderOpts_MetaData), Z_Construct_UFunction_UComfyTexturesWidgetBase_ProcessMultipleActors_Statics::NewProp_RenderOpts_MetaData) }; // 787208575
	void Z_Construct_UFunction_UComfyTexturesWidgetBase_ProcessMultipleActors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ComfyTexturesWidgetBase_eventProcessMultipleActors_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComfyTexturesWidgetBase_ProcessMultipleActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ComfyTexturesWidgetBase_eventProcessMultipleActors_Parms), &Z_Construct_UFunction_UComfyTexturesWidgetBase_ProcessMultipleActors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComfyTexturesWidgetBase_ProcessMultipleActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComfyTexturesWidgetBase_ProcessMultipleActors_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComfyTexturesWidgetBase_ProcessMultipleActors_Statics::NewProp_Actors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComfyTexturesWidgetBase_ProcessMultipleActors_Statics::NewProp_RenderOpts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComfyTexturesWidgetBase_ProcessMultipleActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComfyTexturesWidgetBase_ProcessMultipleActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComfyTextures" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComfyTexturesWidgetBase_ProcessMultipleActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComfyTexturesWidgetBase, nullptr, "ProcessMultipleActors", nullptr, nullptr, Z_Construct_UFunction_UComfyTexturesWidgetBase_ProcessMultipleActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_ProcessMultipleActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComfyTexturesWidgetBase_ProcessMultipleActors_Statics::ComfyTexturesWidgetBase_eventProcessMultipleActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_ProcessMultipleActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComfyTexturesWidgetBase_ProcessMultipleActors_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_ProcessMultipleActors_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComfyTexturesWidgetBase_ProcessMultipleActors_Statics::ComfyTexturesWidgetBase_eventProcessMultipleActors_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComfyTexturesWidgetBase_ProcessMultipleActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComfyTexturesWidgetBase_ProcessMultipleActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComfyTexturesWidgetBase_ProcessRenderResults_Statics
	{
		struct ComfyTexturesWidgetBase_eventProcessRenderResults_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UComfyTexturesWidgetBase_ProcessRenderResults_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ComfyTexturesWidgetBase_eventProcessRenderResults_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComfyTexturesWidgetBase_ProcessRenderResults_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ComfyTexturesWidgetBase_eventProcessRenderResults_Parms), &Z_Construct_UFunction_UComfyTexturesWidgetBase_ProcessRenderResults_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComfyTexturesWidgetBase_ProcessRenderResults_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComfyTexturesWidgetBase_ProcessRenderResults_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComfyTexturesWidgetBase_ProcessRenderResults_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComfyTextures" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComfyTexturesWidgetBase_ProcessRenderResults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComfyTexturesWidgetBase, nullptr, "ProcessRenderResults", nullptr, nullptr, Z_Construct_UFunction_UComfyTexturesWidgetBase_ProcessRenderResults_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_ProcessRenderResults_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComfyTexturesWidgetBase_ProcessRenderResults_Statics::ComfyTexturesWidgetBase_eventProcessRenderResults_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_ProcessRenderResults_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComfyTexturesWidgetBase_ProcessRenderResults_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_ProcessRenderResults_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComfyTexturesWidgetBase_ProcessRenderResults_Statics::ComfyTexturesWidgetBase_eventProcessRenderResults_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComfyTexturesWidgetBase_ProcessRenderResults()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComfyTexturesWidgetBase_ProcessRenderResults_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComfyTexturesWidgetBase_QueueRender_Statics
	{
		struct ComfyTexturesWidgetBase_eventQueueRender_Parms
		{
			FComfyTexturesRenderOptions RenderOpts;
			int32 RequestIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderOpts_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RenderOpts;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RequestIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComfyTexturesWidgetBase_QueueRender_Statics::NewProp_RenderOpts_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComfyTexturesWidgetBase_QueueRender_Statics::NewProp_RenderOpts = { "RenderOpts", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComfyTexturesWidgetBase_eventQueueRender_Parms, RenderOpts), Z_Construct_UScriptStruct_FComfyTexturesRenderOptions, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_QueueRender_Statics::NewProp_RenderOpts_MetaData), Z_Construct_UFunction_UComfyTexturesWidgetBase_QueueRender_Statics::NewProp_RenderOpts_MetaData) }; // 787208575
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UComfyTexturesWidgetBase_QueueRender_Statics::NewProp_RequestIndex = { "RequestIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComfyTexturesWidgetBase_eventQueueRender_Parms, RequestIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UComfyTexturesWidgetBase_QueueRender_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ComfyTexturesWidgetBase_eventQueueRender_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComfyTexturesWidgetBase_QueueRender_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ComfyTexturesWidgetBase_eventQueueRender_Parms), &Z_Construct_UFunction_UComfyTexturesWidgetBase_QueueRender_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComfyTexturesWidgetBase_QueueRender_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComfyTexturesWidgetBase_QueueRender_Statics::NewProp_RenderOpts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComfyTexturesWidgetBase_QueueRender_Statics::NewProp_RequestIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComfyTexturesWidgetBase_QueueRender_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComfyTexturesWidgetBase_QueueRender_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComfyTextures" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComfyTexturesWidgetBase_QueueRender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComfyTexturesWidgetBase, nullptr, "QueueRender", nullptr, nullptr, Z_Construct_UFunction_UComfyTexturesWidgetBase_QueueRender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_QueueRender_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComfyTexturesWidgetBase_QueueRender_Statics::ComfyTexturesWidgetBase_eventQueueRender_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_QueueRender_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComfyTexturesWidgetBase_QueueRender_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_QueueRender_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComfyTexturesWidgetBase_QueueRender_Statics::ComfyTexturesWidgetBase_eventQueueRender_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComfyTexturesWidgetBase_QueueRender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComfyTexturesWidgetBase_QueueRender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComfyTexturesWidgetBase_SaveParams_Statics
	{
		struct ComfyTexturesWidgetBase_eventSaveParams_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UComfyTexturesWidgetBase_SaveParams_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ComfyTexturesWidgetBase_eventSaveParams_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComfyTexturesWidgetBase_SaveParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ComfyTexturesWidgetBase_eventSaveParams_Parms), &Z_Construct_UFunction_UComfyTexturesWidgetBase_SaveParams_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComfyTexturesWidgetBase_SaveParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComfyTexturesWidgetBase_SaveParams_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComfyTexturesWidgetBase_SaveParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComfyTextures" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComfyTexturesWidgetBase_SaveParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComfyTexturesWidgetBase, nullptr, "SaveParams", nullptr, nullptr, Z_Construct_UFunction_UComfyTexturesWidgetBase_SaveParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_SaveParams_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComfyTexturesWidgetBase_SaveParams_Statics::ComfyTexturesWidgetBase_eventSaveParams_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_SaveParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComfyTexturesWidgetBase_SaveParams_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_SaveParams_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComfyTexturesWidgetBase_SaveParams_Statics::ComfyTexturesWidgetBase_eventSaveParams_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComfyTexturesWidgetBase_SaveParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComfyTexturesWidgetBase_SaveParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComfyTexturesWidgetBase_SetEditorFrameRate_Statics
	{
		struct ComfyTexturesWidgetBase_eventSetEditorFrameRate_Parms
		{
			int32 Fps;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Fps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UComfyTexturesWidgetBase_SetEditorFrameRate_Statics::NewProp_Fps = { "Fps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComfyTexturesWidgetBase_eventSetEditorFrameRate_Parms, Fps), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComfyTexturesWidgetBase_SetEditorFrameRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComfyTexturesWidgetBase_SetEditorFrameRate_Statics::NewProp_Fps,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComfyTexturesWidgetBase_SetEditorFrameRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComfyTextures" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComfyTexturesWidgetBase_SetEditorFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComfyTexturesWidgetBase, nullptr, "SetEditorFrameRate", nullptr, nullptr, Z_Construct_UFunction_UComfyTexturesWidgetBase_SetEditorFrameRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_SetEditorFrameRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComfyTexturesWidgetBase_SetEditorFrameRate_Statics::ComfyTexturesWidgetBase_eventSetEditorFrameRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_SetEditorFrameRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComfyTexturesWidgetBase_SetEditorFrameRate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_SetEditorFrameRate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComfyTexturesWidgetBase_SetEditorFrameRate_Statics::ComfyTexturesWidgetBase_eventSetEditorFrameRate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComfyTexturesWidgetBase_SetEditorFrameRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComfyTexturesWidgetBase_SetEditorFrameRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComfyTexturesWidgetBase_SetParams_Statics
	{
		struct ComfyTexturesWidgetBase_eventSetParams_Parms
		{
			EComfyTexturesMode Mode;
			FComfyTexturesWorkflowParams InParams;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UComfyTexturesWidgetBase_SetParams_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UComfyTexturesWidgetBase_SetParams_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComfyTexturesWidgetBase_eventSetParams_Parms, Mode), Z_Construct_UEnum_ComfyTextures_EComfyTexturesMode, METADATA_PARAMS(0, nullptr) }; // 936032683
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComfyTexturesWidgetBase_SetParams_Statics::NewProp_InParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComfyTexturesWidgetBase_SetParams_Statics::NewProp_InParams = { "InParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComfyTexturesWidgetBase_eventSetParams_Parms, InParams), Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_SetParams_Statics::NewProp_InParams_MetaData), Z_Construct_UFunction_UComfyTexturesWidgetBase_SetParams_Statics::NewProp_InParams_MetaData) }; // 2077684728
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComfyTexturesWidgetBase_SetParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComfyTexturesWidgetBase_SetParams_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComfyTexturesWidgetBase_SetParams_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComfyTexturesWidgetBase_SetParams_Statics::NewProp_InParams,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComfyTexturesWidgetBase_SetParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComfyTextures" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComfyTexturesWidgetBase_SetParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComfyTexturesWidgetBase, nullptr, "SetParams", nullptr, nullptr, Z_Construct_UFunction_UComfyTexturesWidgetBase_SetParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_SetParams_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComfyTexturesWidgetBase_SetParams_Statics::ComfyTexturesWidgetBase_eventSetParams_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_SetParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComfyTexturesWidgetBase_SetParams_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_SetParams_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComfyTexturesWidgetBase_SetParams_Statics::ComfyTexturesWidgetBase_eventSetParams_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComfyTexturesWidgetBase_SetParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComfyTexturesWidgetBase_SetParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComfyTexturesWidgetBase_ValidateAllRequestsSucceeded_Statics
	{
		struct ComfyTexturesWidgetBase_eventValidateAllRequestsSucceeded_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UComfyTexturesWidgetBase_ValidateAllRequestsSucceeded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ComfyTexturesWidgetBase_eventValidateAllRequestsSucceeded_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComfyTexturesWidgetBase_ValidateAllRequestsSucceeded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ComfyTexturesWidgetBase_eventValidateAllRequestsSucceeded_Parms), &Z_Construct_UFunction_UComfyTexturesWidgetBase_ValidateAllRequestsSucceeded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComfyTexturesWidgetBase_ValidateAllRequestsSucceeded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComfyTexturesWidgetBase_ValidateAllRequestsSucceeded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComfyTexturesWidgetBase_ValidateAllRequestsSucceeded_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComfyTextures" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComfyTexturesWidgetBase_ValidateAllRequestsSucceeded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComfyTexturesWidgetBase, nullptr, "ValidateAllRequestsSucceeded", nullptr, nullptr, Z_Construct_UFunction_UComfyTexturesWidgetBase_ValidateAllRequestsSucceeded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_ValidateAllRequestsSucceeded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComfyTexturesWidgetBase_ValidateAllRequestsSucceeded_Statics::ComfyTexturesWidgetBase_eventValidateAllRequestsSucceeded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_ValidateAllRequestsSucceeded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComfyTexturesWidgetBase_ValidateAllRequestsSucceeded_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComfyTexturesWidgetBase_ValidateAllRequestsSucceeded_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComfyTexturesWidgetBase_ValidateAllRequestsSucceeded_Statics::ComfyTexturesWidgetBase_eventValidateAllRequestsSucceeded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComfyTexturesWidgetBase_ValidateAllRequestsSucceeded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComfyTexturesWidgetBase_ValidateAllRequestsSucceeded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComfyTexturesWidgetBase);
	UClass* Z_Construct_UClass_UComfyTexturesWidgetBase_NoRegister()
	{
		return UComfyTexturesWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UComfyTexturesWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComfyTexturesWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ComfyTextures,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComfyTexturesWidgetBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UComfyTexturesWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UComfyTexturesWidgetBase_CancelJob, "CancelJob" }, // 3110359729
		{ &Z_Construct_UFunction_UComfyTexturesWidgetBase_ClearRenderQueue, "ClearRenderQueue" }, // 2492883644
		{ &Z_Construct_UFunction_UComfyTexturesWidgetBase_Connect, "Connect" }, // 2149405648
		{ &Z_Construct_UFunction_UComfyTexturesWidgetBase_FreeComfyMemory, "FreeComfyMemory" }, // 1020017878
		{ &Z_Construct_UFunction_UComfyTexturesWidgetBase_GetFlattenedSelectionSetWithChildren, "GetFlattenedSelectionSetWithChildren" }, // 2569810071
		{ &Z_Construct_UFunction_UComfyTexturesWidgetBase_GetNumPendingRequests, "GetNumPendingRequests" }, // 3197612592
		{ &Z_Construct_UFunction_UComfyTexturesWidgetBase_GetParams, "GetParams" }, // 952874691
		{ &Z_Construct_UFunction_UComfyTexturesWidgetBase_GetWorkflowJsonPath, "GetWorkflowJsonPath" }, // 2630800760
		{ &Z_Construct_UFunction_UComfyTexturesWidgetBase_HasPendingRequests, "HasPendingRequests" }, // 2381838577
		{ &Z_Construct_UFunction_UComfyTexturesWidgetBase_InterruptRender, "InterruptRender" }, // 859448143
		{ &Z_Construct_UFunction_UComfyTexturesWidgetBase_IsConnected, "IsConnected" }, // 914672754
		{ &Z_Construct_UFunction_UComfyTexturesWidgetBase_LoadParams, "LoadParams" }, // 1858859450
		{ &Z_Construct_UFunction_UComfyTexturesWidgetBase_OnRenderStateChanged, "OnRenderStateChanged" }, // 3295902344
		{ &Z_Construct_UFunction_UComfyTexturesWidgetBase_OnStateChanged, "OnStateChanged" }, // 1663051472
		{ &Z_Construct_UFunction_UComfyTexturesWidgetBase_ParseWorkflowJson, "ParseWorkflowJson" }, // 3261223653
		{ &Z_Construct_UFunction_UComfyTexturesWidgetBase_PrepareActors, "PrepareActors" }, // 3273593676
		{ &Z_Construct_UFunction_UComfyTexturesWidgetBase_ProcessMultipleActors, "ProcessMultipleActors" }, // 2818740759
		{ &Z_Construct_UFunction_UComfyTexturesWidgetBase_ProcessRenderResults, "ProcessRenderResults" }, // 2888933639
		{ &Z_Construct_UFunction_UComfyTexturesWidgetBase_QueueRender, "QueueRender" }, // 3472872708
		{ &Z_Construct_UFunction_UComfyTexturesWidgetBase_SaveParams, "SaveParams" }, // 1475435436
		{ &Z_Construct_UFunction_UComfyTexturesWidgetBase_SetEditorFrameRate, "SetEditorFrameRate" }, // 392597235
		{ &Z_Construct_UFunction_UComfyTexturesWidgetBase_SetParams, "SetParams" }, // 2328042921
		{ &Z_Construct_UFunction_UComfyTexturesWidgetBase_ValidateAllRequestsSucceeded, "ValidateAllRequestsSucceeded" }, // 742573527
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComfyTexturesWidgetBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComfyTexturesWidgetBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "ComfyTexturesWidgetBase.h" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UComfyTexturesWidgetBase_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComfyTexturesWidgetBase_Statics::NewProp_State_MetaData[] = {
		{ "Category", "ComfyTextures" },
		{ "ModuleRelativePath", "Public/ComfyTexturesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UComfyTexturesWidgetBase_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComfyTexturesWidgetBase, State), Z_Construct_UEnum_ComfyTextures_EComfyTexturesState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComfyTexturesWidgetBase_Statics::NewProp_State_MetaData), Z_Construct_UClass_UComfyTexturesWidgetBase_Statics::NewProp_State_MetaData) }; // 1850936278
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComfyTexturesWidgetBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComfyTexturesWidgetBase_Statics::NewProp_State_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComfyTexturesWidgetBase_Statics::NewProp_State,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComfyTexturesWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComfyTexturesWidgetBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComfyTexturesWidgetBase_Statics::ClassParams = {
		&UComfyTexturesWidgetBase::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UComfyTexturesWidgetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UComfyTexturesWidgetBase_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComfyTexturesWidgetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UComfyTexturesWidgetBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComfyTexturesWidgetBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UComfyTexturesWidgetBase()
	{
		if (!Z_Registration_Info_UClass_UComfyTexturesWidgetBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComfyTexturesWidgetBase.OuterSingleton, Z_Construct_UClass_UComfyTexturesWidgetBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComfyTexturesWidgetBase.OuterSingleton;
	}
	template<> COMFYTEXTURES_API UClass* StaticClass<UComfyTexturesWidgetBase>()
	{
		return UComfyTexturesWidgetBase::StaticClass();
	}
	UComfyTexturesWidgetBase::UComfyTexturesWidgetBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComfyTexturesWidgetBase);
	UComfyTexturesWidgetBase::~UComfyTexturesWidgetBase() {}
	struct Z_CompiledInDeferFile_FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_Statics::EnumInfo[] = {
		{ EComfyTexturesState_StaticEnum, TEXT("EComfyTexturesState"), &Z_Registration_Info_UEnum_EComfyTexturesState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1850936278U) },
		{ EComfyTexturesRenderState_StaticEnum, TEXT("EComfyTexturesRenderState"), &Z_Registration_Info_UEnum_EComfyTexturesRenderState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 239302195U) },
		{ EComfyTexturesMode_StaticEnum, TEXT("EComfyTexturesMode"), &Z_Registration_Info_UEnum_EComfyTexturesMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 936032683U) },
		{ EComfyTexturesEditMaskMode_StaticEnum, TEXT("EComfyTexturesEditMaskMode"), &Z_Registration_Info_UEnum_EComfyTexturesEditMaskMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1768208180U) },
		{ EComfyTexturesRenderTextureMode_StaticEnum, TEXT("EComfyTexturesRenderTextureMode"), &Z_Registration_Info_UEnum_EComfyTexturesRenderTextureMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3725827293U) },
		{ EComfyTexturesCameraMode_StaticEnum, TEXT("EComfyTexturesCameraMode"), &Z_Registration_Info_UEnum_EComfyTexturesCameraMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 692236791U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_Statics::ScriptStructInfo[] = {
		{ FComfyTexturesImageData::StaticStruct, Z_Construct_UScriptStruct_FComfyTexturesImageData_Statics::NewStructOps, TEXT("ComfyTexturesImageData"), &Z_Registration_Info_UScriptStruct_ComfyTexturesImageData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComfyTexturesImageData), 2129184421U) },
		{ FComfyTexturesRenderData::StaticStruct, Z_Construct_UScriptStruct_FComfyTexturesRenderData_Statics::NewStructOps, TEXT("ComfyTexturesRenderData"), &Z_Registration_Info_UScriptStruct_ComfyTexturesRenderData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComfyTexturesRenderData), 579237669U) },
		{ FComfyTexturesWorkflowParams::StaticStruct, Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics::NewStructOps, TEXT("ComfyTexturesWorkflowParams"), &Z_Registration_Info_UScriptStruct_ComfyTexturesWorkflowParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComfyTexturesWorkflowParams), 2077684728U) },
		{ FComfyTexturesRenderOptions::StaticStruct, Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics::NewStructOps, TEXT("ComfyTexturesRenderOptions"), &Z_Registration_Info_UScriptStruct_ComfyTexturesRenderOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComfyTexturesRenderOptions), 787208575U) },
		{ FComfyTexturesCaptureOutput::StaticStruct, Z_Construct_UScriptStruct_FComfyTexturesCaptureOutput_Statics::NewStructOps, TEXT("ComfyTexturesCaptureOutput"), &Z_Registration_Info_UScriptStruct_ComfyTexturesCaptureOutput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComfyTexturesCaptureOutput), 1759277152U) },
		{ FComfyTexturesPrepareOptions::StaticStruct, Z_Construct_UScriptStruct_FComfyTexturesPrepareOptions_Statics::NewStructOps, TEXT("ComfyTexturesPrepareOptions"), &Z_Registration_Info_UScriptStruct_ComfyTexturesPrepareOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComfyTexturesPrepareOptions), 2819072355U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComfyTexturesSettings, UComfyTexturesSettings::StaticClass, TEXT("UComfyTexturesSettings"), &Z_Registration_Info_UClass_UComfyTexturesSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComfyTexturesSettings), 1362369626U) },
		{ Z_Construct_UClass_UComfyTexturesWidgetBase, UComfyTexturesWidgetBase::StaticClass, TEXT("UComfyTexturesWidgetBase"), &Z_Registration_Info_UClass_UComfyTexturesWidgetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComfyTexturesWidgetBase), 3511464277U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_2523853152(TEXT("/Script/ComfyTextures"),
		Z_CompiledInDeferFile_FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
