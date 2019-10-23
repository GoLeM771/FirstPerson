// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef SPIDERNAVIGATION_SpiderNavigation_generated_h
#error "SpiderNavigation.generated.h already included, missing '#pragma once' in SpiderNavigation.h"
#endif
#define SPIDERNAVIGATION_SpiderNavigation_generated_h

#define PluginTest_Plugins_SpiderNavigation_Source_SpiderNavigation_Public_SpiderNavigation_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpiderNavNode_Statics; \
	SPIDERNAVIGATION_API static class UScriptStruct* StaticStruct();


template<> SPIDERNAVIGATION_API UScriptStruct* StaticStruct<struct FSpiderNavNode>();

#define PluginTest_Plugins_SpiderNavigation_Source_SpiderNavigation_Public_SpiderNavigation_h_119_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindNextLocationAndNormal) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_CurrentLocation); \
		P_GET_STRUCT(FVector,Z_Param_TargetLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NextLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Normal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->FindNextLocationAndNormal(Z_Param_CurrentLocation,Z_Param_TargetLocation,Z_Param_Out_NextLocation,Z_Param_Out_Normal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindClosestNodeNormal) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->FindClosestNodeNormal(Z_Param_Location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindClosestNodeLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->FindClosestNodeLocation(Z_Param_Location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebugRelations) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawDebugRelations(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadGrid) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->LoadGrid(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindPath) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_UBOOL_REF(Z_Param_Out_bFoundCompletePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FVector>*)Z_Param__Result=P_THIS->FindPath(Z_Param_Start,Z_Param_End,Z_Param_Out_bFoundCompletePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNavNodesCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNavNodesCount(); \
		P_NATIVE_END; \
	}


#define PluginTest_Plugins_SpiderNavigation_Source_SpiderNavigation_Public_SpiderNavigation_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindNextLocationAndNormal) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_CurrentLocation); \
		P_GET_STRUCT(FVector,Z_Param_TargetLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NextLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Normal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->FindNextLocationAndNormal(Z_Param_CurrentLocation,Z_Param_TargetLocation,Z_Param_Out_NextLocation,Z_Param_Out_Normal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindClosestNodeNormal) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->FindClosestNodeNormal(Z_Param_Location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindClosestNodeLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->FindClosestNodeLocation(Z_Param_Location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebugRelations) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawDebugRelations(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadGrid) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->LoadGrid(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindPath) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_UBOOL_REF(Z_Param_Out_bFoundCompletePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FVector>*)Z_Param__Result=P_THIS->FindPath(Z_Param_Start,Z_Param_End,Z_Param_Out_bFoundCompletePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNavNodesCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNavNodesCount(); \
		P_NATIVE_END; \
	}


#define PluginTest_Plugins_SpiderNavigation_Source_SpiderNavigation_Public_SpiderNavigation_h_119_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpiderNavigation(); \
	friend struct Z_Construct_UClass_ASpiderNavigation_Statics; \
public: \
	DECLARE_CLASS(ASpiderNavigation, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpiderNavigation"), NO_API) \
	DECLARE_SERIALIZER(ASpiderNavigation)


#define PluginTest_Plugins_SpiderNavigation_Source_SpiderNavigation_Public_SpiderNavigation_h_119_INCLASS \
private: \
	static void StaticRegisterNativesASpiderNavigation(); \
	friend struct Z_Construct_UClass_ASpiderNavigation_Statics; \
public: \
	DECLARE_CLASS(ASpiderNavigation, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpiderNavigation"), NO_API) \
	DECLARE_SERIALIZER(ASpiderNavigation)


#define PluginTest_Plugins_SpiderNavigation_Source_SpiderNavigation_Public_SpiderNavigation_h_119_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpiderNavigation(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpiderNavigation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpiderNavigation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpiderNavigation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpiderNavigation(ASpiderNavigation&&); \
	NO_API ASpiderNavigation(const ASpiderNavigation&); \
public:


#define PluginTest_Plugins_SpiderNavigation_Source_SpiderNavigation_Public_SpiderNavigation_h_119_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpiderNavigation(ASpiderNavigation&&); \
	NO_API ASpiderNavigation(const ASpiderNavigation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpiderNavigation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpiderNavigation); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpiderNavigation)


#define PluginTest_Plugins_SpiderNavigation_Source_SpiderNavigation_Public_SpiderNavigation_h_119_PRIVATE_PROPERTY_OFFSET
#define PluginTest_Plugins_SpiderNavigation_Source_SpiderNavigation_Public_SpiderNavigation_h_116_PROLOG
#define PluginTest_Plugins_SpiderNavigation_Source_SpiderNavigation_Public_SpiderNavigation_h_119_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginTest_Plugins_SpiderNavigation_Source_SpiderNavigation_Public_SpiderNavigation_h_119_PRIVATE_PROPERTY_OFFSET \
	PluginTest_Plugins_SpiderNavigation_Source_SpiderNavigation_Public_SpiderNavigation_h_119_RPC_WRAPPERS \
	PluginTest_Plugins_SpiderNavigation_Source_SpiderNavigation_Public_SpiderNavigation_h_119_INCLASS \
	PluginTest_Plugins_SpiderNavigation_Source_SpiderNavigation_Public_SpiderNavigation_h_119_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginTest_Plugins_SpiderNavigation_Source_SpiderNavigation_Public_SpiderNavigation_h_119_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginTest_Plugins_SpiderNavigation_Source_SpiderNavigation_Public_SpiderNavigation_h_119_PRIVATE_PROPERTY_OFFSET \
	PluginTest_Plugins_SpiderNavigation_Source_SpiderNavigation_Public_SpiderNavigation_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginTest_Plugins_SpiderNavigation_Source_SpiderNavigation_Public_SpiderNavigation_h_119_INCLASS_NO_PURE_DECLS \
	PluginTest_Plugins_SpiderNavigation_Source_SpiderNavigation_Public_SpiderNavigation_h_119_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPIDERNAVIGATION_API UClass* StaticClass<class ASpiderNavigation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginTest_Plugins_SpiderNavigation_Source_SpiderNavigation_Public_SpiderNavigation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
