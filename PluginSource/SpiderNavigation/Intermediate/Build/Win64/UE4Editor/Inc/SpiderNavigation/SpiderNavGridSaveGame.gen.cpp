// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SpiderNavGridSaveGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpiderNavGridSaveGame() {}
// Cross Module References
	SPIDERNAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FSpiderNavRelations();
	UPackage* Z_Construct_UPackage__Script_SpiderNavigation();
	SPIDERNAVIGATION_API UClass* Z_Construct_UClass_USpiderNavGridSaveGame_NoRegister();
	SPIDERNAVIGATION_API UClass* Z_Construct_UClass_USpiderNavGridSaveGame();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FSpiderNavRelations::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SPIDERNAVIGATION_API uint32 Get_Z_Construct_UScriptStruct_FSpiderNavRelations_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpiderNavRelations, Z_Construct_UPackage__Script_SpiderNavigation(), TEXT("SpiderNavRelations"), sizeof(FSpiderNavRelations), Get_Z_Construct_UScriptStruct_FSpiderNavRelations_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpiderNavRelations(FSpiderNavRelations::StaticStruct, TEXT("/Script/SpiderNavigation"), TEXT("SpiderNavRelations"), false, nullptr, nullptr);
static struct FScriptStruct_SpiderNavigation_StaticRegisterNativesFSpiderNavRelations
{
	FScriptStruct_SpiderNavigation_StaticRegisterNativesFSpiderNavRelations()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SpiderNavRelations")),new UScriptStruct::TCppStructOps<FSpiderNavRelations>);
	}
} ScriptStruct_SpiderNavigation_StaticRegisterNativesFSpiderNavRelations;
	UScriptStruct* Z_Construct_UScriptStruct_FSpiderNavRelations()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpiderNavRelations_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SpiderNavigation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpiderNavRelations"), sizeof(FSpiderNavRelations), Get_Z_Construct_UScriptStruct_FSpiderNavRelations_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SpiderNavGridSaveGame.h" },
				{ "ToolTip", "Describes relations between navigation points" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpiderNavRelations>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Neighbors_MetaData[] = {
				{ "ModuleRelativePath", "Public/SpiderNavGridSaveGame.h" },
				{ "ToolTip", "Array of indexes of neighboring navigtaion points" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Neighbors = { UE4CodeGen_Private::EPropertyClass::Array, "Neighbors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSpiderNavRelations, Neighbors), METADATA_PARAMS(NewProp_Neighbors_MetaData, ARRAY_COUNT(NewProp_Neighbors_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Neighbors_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "Neighbors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Neighbors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Neighbors_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SpiderNavigation,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SpiderNavRelations",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FSpiderNavRelations),
				alignof(FSpiderNavRelations),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpiderNavRelations_CRC() { return 2178008094U; }
	void USpiderNavGridSaveGame::StaticRegisterNativesUSpiderNavGridSaveGame()
	{
	}
	UClass* Z_Construct_UClass_USpiderNavGridSaveGame_NoRegister()
	{
		return USpiderNavGridSaveGame::StaticClass();
	}
	UClass* Z_Construct_UClass_USpiderNavGridSaveGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USaveGame,
				(UObject* (*)())Z_Construct_UPackage__Script_SpiderNavigation,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "SpiderNavGridSaveGame.h" },
				{ "ModuleRelativePath", "Public/SpiderNavGridSaveGame.h" },
				{ "ToolTip", "A USaveGame's extension to store navigation" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[] = {
				{ "ModuleRelativePath", "Public/SpiderNavGridSaveGame.h" },
				{ "ToolTip", "UserIndex to store navigation grid" },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_UserIndex = { UE4CodeGen_Private::EPropertyClass::UInt32, "UserIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(USpiderNavGridSaveGame, UserIndex), METADATA_PARAMS(NewProp_UserIndex_MetaData, ARRAY_COUNT(NewProp_UserIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveSlotName_MetaData[] = {
				{ "ModuleRelativePath", "Public/SpiderNavGridSaveGame.h" },
				{ "ToolTip", "Name of save slot to store navigation grid" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveSlotName = { UE4CodeGen_Private::EPropertyClass::Str, "SaveSlotName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(USpiderNavGridSaveGame, SaveSlotName), METADATA_PARAMS(NewProp_SaveSlotName_MetaData, ARRAY_COUNT(NewProp_SaveSlotName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavRelations_MetaData[] = {
				{ "ModuleRelativePath", "Public/SpiderNavGridSaveGame.h" },
				{ "ToolTip", "Relations between navigation points" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_NavRelations = { UE4CodeGen_Private::EPropertyClass::Map, "NavRelations", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(USpiderNavGridSaveGame, NavRelations), METADATA_PARAMS(NewProp_NavRelations_MetaData, ARRAY_COUNT(NewProp_NavRelations_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NavRelations_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Int, "NavRelations_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavRelations_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "NavRelations", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FSpiderNavRelations, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavNormals_MetaData[] = {
				{ "ModuleRelativePath", "Public/SpiderNavGridSaveGame.h" },
				{ "ToolTip", "Normals of navigation points" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_NavNormals = { UE4CodeGen_Private::EPropertyClass::Map, "NavNormals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(USpiderNavGridSaveGame, NavNormals), METADATA_PARAMS(NewProp_NavNormals_MetaData, ARRAY_COUNT(NewProp_NavNormals_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NavNormals_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Int, "NavNormals_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavNormals_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "NavNormals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavLocations_MetaData[] = {
				{ "ModuleRelativePath", "Public/SpiderNavGridSaveGame.h" },
				{ "ToolTip", "Locations of navigation points" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_NavLocations = { UE4CodeGen_Private::EPropertyClass::Map, "NavLocations", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(USpiderNavGridSaveGame, NavLocations), METADATA_PARAMS(NewProp_NavLocations_MetaData, ARRAY_COUNT(NewProp_NavLocations_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NavLocations_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Int, "NavLocations_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavLocations_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "NavLocations", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UserIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SaveSlotName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NavRelations,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NavRelations_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NavRelations_ValueProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NavNormals,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NavNormals_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NavNormals_ValueProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NavLocations,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NavLocations_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NavLocations_ValueProp,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USpiderNavGridSaveGame>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USpiderNavGridSaveGame::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpiderNavGridSaveGame, 4089432995);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpiderNavGridSaveGame(Z_Construct_UClass_USpiderNavGridSaveGame, &USpiderNavGridSaveGame::StaticClass, TEXT("/Script/SpiderNavigation"), TEXT("USpiderNavGridSaveGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpiderNavGridSaveGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
