// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ComfyTexturesWidgetBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class EComfyTexturesMode : uint8;
enum class EComfyTexturesState : uint8;
struct FComfyTexturesPrepareOptions;
struct FComfyTexturesRenderData;
struct FComfyTexturesRenderOptions;
struct FComfyTexturesWorkflowParams;
#ifdef COMFYTEXTURES_ComfyTexturesWidgetBase_generated_h
#error "ComfyTexturesWidgetBase.generated.h already included, missing '#pragma once' in ComfyTexturesWidgetBase.h"
#endif
#define COMFYTEXTURES_ComfyTexturesWidgetBase_generated_h

#define FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_67_SPARSE_DATA
#define FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_67_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_67_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_67_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_67_ACCESSORS
#define FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComfyTexturesSettings(); \
	friend struct Z_Construct_UClass_UComfyTexturesSettings_Statics; \
public: \
	DECLARE_CLASS(UComfyTexturesSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/ComfyTextures"), NO_API) \
	DECLARE_SERIALIZER(UComfyTexturesSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_67_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComfyTexturesSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComfyTexturesSettings(UComfyTexturesSettings&&); \
	NO_API UComfyTexturesSettings(const UComfyTexturesSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComfyTexturesSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComfyTexturesSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComfyTexturesSettings) \
	NO_API virtual ~UComfyTexturesSettings();


#define FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_64_PROLOG
#define FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_67_SPARSE_DATA \
	FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_67_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_67_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_67_ACCESSORS \
	FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_67_INCLASS_NO_PURE_DECLS \
	FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_67_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMFYTEXTURES_API UClass* StaticClass<class UComfyTexturesSettings>();

#define FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_95_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FComfyTexturesImageData_Statics; \
	COMFYTEXTURES_API static class UScriptStruct* StaticStruct();


template<> COMFYTEXTURES_API UScriptStruct* StaticStruct<struct FComfyTexturesImageData>();

#define FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_110_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FComfyTexturesRenderData_Statics; \
	COMFYTEXTURES_API static class UScriptStruct* StaticStruct();


template<> COMFYTEXTURES_API UScriptStruct* StaticStruct<struct FComfyTexturesRenderData>();

#define FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_149_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FComfyTexturesWorkflowParams_Statics; \
	COMFYTEXTURES_API static class UScriptStruct* StaticStruct();


template<> COMFYTEXTURES_API UScriptStruct* StaticStruct<struct FComfyTexturesWorkflowParams>();

#define FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_185_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FComfyTexturesRenderOptions_Statics; \
	COMFYTEXTURES_API static class UScriptStruct* StaticStruct();


template<> COMFYTEXTURES_API UScriptStruct* StaticStruct<struct FComfyTexturesRenderOptions>();

#define FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_219_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FComfyTexturesCaptureOutput_Statics; \
	COMFYTEXTURES_API static class UScriptStruct* StaticStruct();


template<> COMFYTEXTURES_API UScriptStruct* StaticStruct<struct FComfyTexturesCaptureOutput>();

#define FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_243_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FComfyTexturesPrepareOptions_Statics; \
	COMFYTEXTURES_API static class UScriptStruct* StaticStruct();


template<> COMFYTEXTURES_API UScriptStruct* StaticStruct<struct FComfyTexturesPrepareOptions>();

#define FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_261_SPARSE_DATA
#define FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_261_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_261_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_261_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetParams); \
	DECLARE_FUNCTION(execSetParams); \
	DECLARE_FUNCTION(execSaveParams); \
	DECLARE_FUNCTION(execLoadParams); \
	DECLARE_FUNCTION(execGetFlattenedSelectionSetWithChildren); \
	DECLARE_FUNCTION(execSetEditorFrameRate); \
	DECLARE_FUNCTION(execGetWorkflowJsonPath); \
	DECLARE_FUNCTION(execParseWorkflowJson); \
	DECLARE_FUNCTION(execPrepareActors); \
	DECLARE_FUNCTION(execFreeComfyMemory); \
	DECLARE_FUNCTION(execClearRenderQueue); \
	DECLARE_FUNCTION(execInterruptRender); \
	DECLARE_FUNCTION(execQueueRender); \
	DECLARE_FUNCTION(execCancelJob); \
	DECLARE_FUNCTION(execProcessRenderResults); \
	DECLARE_FUNCTION(execProcessMultipleActors); \
	DECLARE_FUNCTION(execValidateAllRequestsSucceeded); \
	DECLARE_FUNCTION(execHasPendingRequests); \
	DECLARE_FUNCTION(execGetNumPendingRequests); \
	DECLARE_FUNCTION(execIsConnected); \
	DECLARE_FUNCTION(execConnect);


#define FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_261_ACCESSORS
#define FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_261_CALLBACK_WRAPPERS
#define FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_261_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComfyTexturesWidgetBase(); \
	friend struct Z_Construct_UClass_UComfyTexturesWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UComfyTexturesWidgetBase, UEditorUtilityWidget, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ComfyTextures"), NO_API) \
	DECLARE_SERIALIZER(UComfyTexturesWidgetBase)


#define FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_261_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComfyTexturesWidgetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComfyTexturesWidgetBase(UComfyTexturesWidgetBase&&); \
	NO_API UComfyTexturesWidgetBase(const UComfyTexturesWidgetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComfyTexturesWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComfyTexturesWidgetBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComfyTexturesWidgetBase) \
	NO_API virtual ~UComfyTexturesWidgetBase();


#define FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_258_PROLOG
#define FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_261_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_261_SPARSE_DATA \
	FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_261_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_261_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_261_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_261_ACCESSORS \
	FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_261_CALLBACK_WRAPPERS \
	FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_261_INCLASS_NO_PURE_DECLS \
	FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h_261_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMFYTEXTURES_API UClass* StaticClass<class UComfyTexturesWidgetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ChatWithTextures_Plugins_ComfyTextures_Source_ComfyTextures_Public_ComfyTexturesWidgetBase_h


#define FOREACH_ENUM_ECOMFYTEXTURESSTATE(op) \
	op(EComfyTexturesState::Disconnected) \
	op(EComfyTexturesState::Reconnecting) \
	op(EComfyTexturesState::Idle) \
	op(EComfyTexturesState::Rendering) \
	op(EComfyTexturesState::Processing) 

enum class EComfyTexturesState : uint8;
template<> struct TIsUEnumClass<EComfyTexturesState> { enum { Value = true }; };
template<> COMFYTEXTURES_API UEnum* StaticEnum<EComfyTexturesState>();

#define FOREACH_ENUM_ECOMFYTEXTURESRENDERSTATE(op) \
	op(EComfyTexturesRenderState::Pending) \
	op(EComfyTexturesRenderState::Started) \
	op(EComfyTexturesRenderState::Finished) \
	op(EComfyTexturesRenderState::Failed) 

enum class EComfyTexturesRenderState : uint8;
template<> struct TIsUEnumClass<EComfyTexturesRenderState> { enum { Value = true }; };
template<> COMFYTEXTURES_API UEnum* StaticEnum<EComfyTexturesRenderState>();

#define FOREACH_ENUM_ECOMFYTEXTURESMODE(op) \
	op(EComfyTexturesMode::Create) \
	op(EComfyTexturesMode::Edit) \
	op(EComfyTexturesMode::Refine) 

enum class EComfyTexturesMode : uint8;
template<> struct TIsUEnumClass<EComfyTexturesMode> { enum { Value = true }; };
template<> COMFYTEXTURES_API UEnum* StaticEnum<EComfyTexturesMode>();

#define FOREACH_ENUM_ECOMFYTEXTURESEDITMASKMODE(op) \
	op(EComfyTexturesEditMaskMode::FromTexture) \
	op(EComfyTexturesEditMaskMode::FromObject) 

enum class EComfyTexturesEditMaskMode : uint8;
template<> struct TIsUEnumClass<EComfyTexturesEditMaskMode> { enum { Value = true }; };
template<> COMFYTEXTURES_API UEnum* StaticEnum<EComfyTexturesEditMaskMode>();

#define FOREACH_ENUM_ECOMFYTEXTURESRENDERTEXTUREMODE(op) \
	op(EComfyTexturesRenderTextureMode::Depth) \
	op(EComfyTexturesRenderTextureMode::RawDepth) \
	op(EComfyTexturesRenderTextureMode::Normals) \
	op(EComfyTexturesRenderTextureMode::Color) 

enum class EComfyTexturesRenderTextureMode : uint8;
template<> struct TIsUEnumClass<EComfyTexturesRenderTextureMode> { enum { Value = true }; };
template<> COMFYTEXTURES_API UEnum* StaticEnum<EComfyTexturesRenderTextureMode>();

#define FOREACH_ENUM_ECOMFYTEXTURESCAMERAMODE(op) \
	op(EComfyTexturesCameraMode::EditorCamera) \
	op(EComfyTexturesCameraMode::ExistingCamera) 

enum class EComfyTexturesCameraMode : uint8;
template<> struct TIsUEnumClass<EComfyTexturesCameraMode> { enum { Value = true }; };
template<> COMFYTEXTURES_API UEnum* StaticEnum<EComfyTexturesCameraMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
