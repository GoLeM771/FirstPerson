// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpiderNavigation/Public/SpiderNavGridSaveGame.h"
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
		extern SPIDERNAVIGATION_API uint32 Get_Z_Construct_UScriptStruct_FSpiderNavRelations_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpiderNavRelations, Z_Construct_UPackage__Script_SpiderNavigation(), TEXT("SpiderNavRelations"), sizeof(FSpiderNavRelations), Get_Z_Construct_UScriptStruct_FSpiderNavRelations_Hash());
	}
	return Singleton;
}
template<> SPIDERNAVIGATION_API UScriptStruct* StaticStruct<FSpiderNavRelations>()
{
	return FSpiderNavRelations::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpiderNavRelations(FSpiderNavRelations::StaticStruct, TEXT("/Script/SpiderNavigation"), TEXT("SpiderNavRelations"), false, nullptr, nullptr);
static struct FScriptStruct_SpiderNavigation_StaticRegisterNativesFSpiderNavRelations
{
	FScriptStruct_SpiderNavigation_StaticRegisterNativesFSpiderNavRelations()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SpiderNavRelations")),new UScriptStruct::TCppStructOps<FSpiderNavRelations>);
	}
} ScriptStruct_SpiderNavigation_StaticRegisterNativesFSpiderNavRelations;
	struct Z_Construct_UScriptStruct_FSpiderNavRelations_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Neighbors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Neighbors;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Neighbors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpiderNavRelations_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpiderNavGridSaveGame.h" },
		{ "ToolTip", "Describes relations between navigation points" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpiderNavRelations_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpiderNavRelations>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpiderNavRelations_Statics::NewProp_Neighbors_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpiderNavGridSaveGame.h" },
		{ "ToolTip", "Array of indexes of neighboring navigtaion points" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpiderNavRelations_Statics::NewProp_Neighbors = { "Neighbors", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpiderNavRelations, Neighbors), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpiderNavRelations_Statics::NewProp_Neighbors_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSpiderNavRelations_Statics::NewProp_Neighbors_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpiderNavRelations_Statics::NewProp_Neighbors_Inner = { "Neighbors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpiderNavRelations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpiderNavRelations_Statics::NewProp_Neighbors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpiderNavRelations_Statics::NewProp_Neighbors_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpiderNavRelations_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SpiderNavigation,
		nullptr,
		&NewStructOps,
		"SpiderNavRelations",
		sizeof(FSpiderNavRelations),
		alignof(FSpiderNavRelations),
		Z_Construct_UScriptStruct_FSpiderNavRelations_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSpiderNavRelations_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpiderNavRelations_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSpiderNavRelations_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpiderNavRelations()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpiderNavRelations_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SpiderNavigation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpiderNavRelations"), sizeof(FSpiderNavRelations), Get_Z_Construct_UScriptStruct_FSpiderNavRelations_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpiderNavRelations_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpiderNavRelations_Hash() { return 3172313853U; }
	void USpiderNavGridSaveGame::StaticRegisterNativesUSpiderNavGridSaveGame()
	{
	}
	UClass* Z_Construct_UClass_USpiderNavGridSaveGame_NoRegister()
	{
		return USpiderNavGridSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_USpiderNavGridSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_UserIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveSlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveSlotName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavRelations_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_NavRelations;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NavRelations_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavRelations_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavNormals_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_NavNormals;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NavNormals_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavNormals_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavLocations_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_NavLocations;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NavLocations_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavLocations_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpiderNavGridSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_SpiderNavigation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiderNavGridSaveGame_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpiderNavGridSaveGame.h" },
		{ "ModuleRelativePath", "Public/SpiderNavGridSaveGame.h" },
		{ "ToolTip", "A USaveGame's extension to store navigation" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiderNavGridSaveGame_Statics::NewProp_UserIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpiderNavGridSaveGame.h" },
		{ "ToolTip", "UserIndex to store navigation grid" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USpiderNavGridSaveGame_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpiderNavGridSaveGame, UserIndex), METADATA_PARAMS(Z_Construct_UClass_USpiderNavGridSaveGame_Statics::NewProp_UserIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpiderNavGridSaveGame_Statics::NewProp_UserIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiderNavGridSaveGame_Statics::NewProp_SaveSlotName_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpiderNavGridSaveGame.h" },
		{ "ToolTip", "Name of save slot to store navigation grid" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpiderNavGridSaveGame_Statics::NewProp_SaveSlotName = { "SaveSlotName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpiderNavGridSaveGame, SaveSlotName), METADATA_PARAMS(Z_Construct_UClass_USpiderNavGridSaveGame_Statics::NewProp_SaveSlotName_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpiderNavGridSaveGame_Statics::NewProp_SaveSlotName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiderNavGridSaveGame_Statics::NewProp_NavRelations_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpiderNavGridSaveGame.h" },
		{ "ToolTip", "Relations between navigation points" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USpiderNavGridSaveGame_Statics::NewProp_NavRelations = { "NavRelations", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpiderNavGridSaveGame, NavRelations), METADATA_PARAMS(Z_Construct_UClass_USpiderNavGridSaveGame_Statics::NewProp_NavRelations_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpiderNavGridSaveGame_Statics::NewProp_NavRelations_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpiderNavGridSaveGame_Statics::NewProp_NavRelations_Key_KeyProp = { "NavRelations_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpiderNavGridSaveGame_Statics::NewProp_NavRelations_ValueProp = { "NavRelations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSpiderNavRelations, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiderNavGridSaveGame_Statics::NewProp_NavNormals_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpiderNavGridSaveGame.h" },
		{ "ToolTip", "Normals of navigation points" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USpiderNavGridSaveGame_Statics::NewProp_NavNormals = { "NavNormals", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpiderNavGridSaveGame, NavNormals), METADATA_PARAMS(Z_Construct_UClass_USpiderNavGridSaveGame_Statics::NewProp_NavNormals_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpiderNavGridSaveGame_Statics::NewProp_NavNormals_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpiderNavGridSaveGame_Statics::NewProp_NavNormals_Key_KeyProp = { "NavNormals_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpiderNavGridSaveGame_Statics::NewProp_NavNormals_ValueProp = { "NavNormals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiderNavGridSaveGame_Statics::NewProp_NavLocations_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpiderNavGridSaveGame.h" },
		{ "ToolTip", "Locations of navigation points" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USpiderNavGridSaveGame_Statics::NewProp_NavLocations = { "NavLocations", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpiderNavGridSaveGame, NavLocations), METADATA_PARAMS(Z_Construct_UClass_USpiderNavGridSaveGame_Statics::NewProp_NavLocations_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpiderNavGridSaveGame_Statics::NewProp_NavLocations_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpiderNavGridSaveGame_Statics::NewProp_NavLocations_Key_KeyProp = { "NavLocations_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpiderNavGridSaveGame_Statics::NewProp_NavLocations_ValueProp = { "NavLocations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpiderNavGridSaveGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpiderNavGridSaveGame_Statics::NewProp_UserIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpiderNavGridSaveGame_Statics::NewProp_SaveSlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpiderNavGridSaveGame_Statics::NewProp_NavRelations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpiderNavGridSaveGame_Statics::NewProp_NavRelations_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpiderNavGridSaveGame_Statics::NewProp_NavRelations_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpiderNavGridSaveGame_Statics::NewProp_NavNormals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpiderNavGridSaveGame_Statics::NewProp_NavNormals_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpiderNavGridSaveGame_Statics::NewProp_NavNormals_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpiderNavGridSaveGame_Statics::NewProp_NavLocations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpiderNavGridSaveGame_Statics::NewProp_NavLocations_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpiderNavGridSaveGame_Statics::NewProp_NavLocations_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpiderNavGridSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpiderNavGridSaveGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpiderNavGridSaveGame_Statics::ClassParams = {
		&USpiderNavGridSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpiderNavGridSaveGame_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USpiderNavGridSaveGame_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USpiderNavGridSaveGame_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USpiderNavGridSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpiderNavGridSaveGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpiderNavGridSaveGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpiderNavGridSaveGame, 2468947419);
	template<> SPIDERNAVIGATION_API UClass* StaticClass<USpiderNavGridSaveGame>()
	{
		return USpiderNavGridSaveGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpiderNavGridSaveGame(Z_Construct_UClass_USpiderNavGridSaveGame, &USpiderNavGridSaveGame::StaticClass, TEXT("/Script/SpiderNavigation"), TEXT("USpiderNavGridSaveGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpiderNavGridSaveGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
