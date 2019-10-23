// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPIDERNAVIGATION_SpiderNavGridBuilder_generated_h
#error "SpiderNavGridBuilder.generated.h already included, missing '#pragma once' in SpiderNavGridBuilder.h"
#endif
#define SPIDERNAVIGATION_SpiderNavGridBuilder_generated_h

#define PluginTest_Plugins_SpiderNavigation_Source_SpiderNavigation_Public_SpiderNavGridBuilder_h_43_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSaveGrid) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SaveGrid(); \
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
	DECLARE_FUNCTION(execBuildGrid) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->BuildGrid(); \
		P_NATIVE_END; \
	}


#define PluginTest_Plugins_SpiderNavigation_Source_SpiderNavigation_Public_SpiderNavGridBuilder_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSaveGrid) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SaveGrid(); \
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
	DECLARE_FUNCTION(execBuildGrid) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->BuildGrid(); \
		P_NATIVE_END; \
	}


#define PluginTest_Plugins_SpiderNavigation_Source_SpiderNavigation_Public_SpiderNavGridBuilder_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpiderNavGridBuilder(); \
	friend struct Z_Construct_UClass_ASpiderNavGridBuilder_Statics; \
public: \
	DECLARE_CLASS(ASpiderNavGridBuilder, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpiderNavigation"), NO_API) \
	DECLARE_SERIALIZER(ASpiderNavGridBuilder)


#define PluginTest_Plugins_SpiderNavigation_Source_SpiderNavigation_Public_SpiderNavGridBuilder_h_43_INCLASS \
private: \
	static void StaticRegisterNativesASpiderNavGridBuilder(); \
	friend struct Z_Construct_UClass_ASpiderNavGridBuilder_Statics; \
public: \
	DECLARE_CLASS(ASpiderNavGridBuilder, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpiderNavigation"), NO_API) \
	DECLARE_SERIALIZER(ASpiderNavGridBuilder)


#define PluginTest_Plugins_SpiderNavigation_Source_SpiderNavigation_Public_SpiderNavGridBuilder_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpiderNavGridBuilder(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpiderNavGridBuilder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpiderNavGridBuilder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpiderNavGridBuilder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpiderNavGridBuilder(ASpiderNavGridBuilder&&); \
	NO_API ASpiderNavGridBuilder(const ASpiderNavGridBuilder&); \
public:


#define PluginTest_Plugins_SpiderNavigation_Source_SpiderNavigation_Public_SpiderNavGridBuilder_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpiderNavGridBuilder(ASpiderNavGridBuilder&&); \
	NO_API ASpiderNavGridBuilder(const ASpiderNavGridBuilder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpiderNavGridBuilder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpiderNavGridBuilder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpiderNavGridBuilder)


#define PluginTest_Plugins_SpiderNavigation_Source_SpiderNavigation_Public_SpiderNavGridBuilder_h_43_PRIVATE_PROPERTY_OFFSET
#define PluginTest_Plugins_SpiderNavigation_Source_SpiderNavigation_Public_SpiderNavGridBuilder_h_40_PROLOG
#define PluginTest_Plugins_SpiderNavigation_Source_SpiderNavigation_Public_SpiderNavGridBuilder_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginTest_Plugins_SpiderNavigation_Source_SpiderNavigation_Public_SpiderNavGridBuilder_h_43_PRIVATE_PROPERTY_OFFSET \
	PluginTest_Plugins_SpiderNavigation_Source_SpiderNavigation_Public_SpiderNavGridBuilder_h_43_RPC_WRAPPERS \
	PluginTest_Plugins_SpiderNavigation_Source_SpiderNavigation_Public_SpiderNavGridBuilder_h_43_INCLASS \
	PluginTest_Plugins_SpiderNavigation_Source_SpiderNavigation_Public_SpiderNavGridBuilder_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginTest_Plugins_SpiderNavigation_Source_SpiderNavigation_Public_SpiderNavGridBuilder_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginTest_Plugins_SpiderNavigation_Source_SpiderNavigation_Public_SpiderNavGridBuilder_h_43_PRIVATE_PROPERTY_OFFSET \
	PluginTest_Plugins_SpiderNavigation_Source_SpiderNavigation_Public_SpiderNavGridBuilder_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginTest_Plugins_SpiderNavigation_Source_SpiderNavigation_Public_SpiderNavGridBuilder_h_43_INCLASS_NO_PURE_DECLS \
	PluginTest_Plugins_SpiderNavigation_Source_SpiderNavigation_Public_SpiderNavGridBuilder_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPIDERNAVIGATION_API UClass* StaticClass<class ASpiderNavGridBuilder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginTest_Plugins_SpiderNavigation_Source_SpiderNavigation_Public_SpiderNavGridBuilder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
