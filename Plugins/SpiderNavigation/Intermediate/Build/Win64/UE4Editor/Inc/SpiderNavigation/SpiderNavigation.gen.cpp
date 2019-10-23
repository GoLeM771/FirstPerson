// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpiderNavigation/Public/SpiderNavigation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpiderNavigation() {}
// Cross Module References
	SPIDERNAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FSpiderNavNode();
	UPackage* Z_Construct_UPackage__Script_SpiderNavigation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	SPIDERNAVIGATION_API UClass* Z_Construct_UClass_ASpiderNavigation_NoRegister();
	SPIDERNAVIGATION_API UClass* Z_Construct_UClass_ASpiderNavigation();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SPIDERNAVIGATION_API UFunction* Z_Construct_UFunction_ASpiderNavigation_DrawDebugRelations();
	SPIDERNAVIGATION_API UFunction* Z_Construct_UFunction_ASpiderNavigation_FindClosestNodeLocation();
	SPIDERNAVIGATION_API UFunction* Z_Construct_UFunction_ASpiderNavigation_FindClosestNodeNormal();
	SPIDERNAVIGATION_API UFunction* Z_Construct_UFunction_ASpiderNavigation_FindNextLocationAndNormal();
	SPIDERNAVIGATION_API UFunction* Z_Construct_UFunction_ASpiderNavigation_FindPath();
	SPIDERNAVIGATION_API UFunction* Z_Construct_UFunction_ASpiderNavigation_GetNavNodesCount();
	SPIDERNAVIGATION_API UFunction* Z_Construct_UFunction_ASpiderNavigation_LoadGrid();
// End Cross Module References
class UScriptStruct* FSpiderNavNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SPIDERNAVIGATION_API uint32 Get_Z_Construct_UScriptStruct_FSpiderNavNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpiderNavNode, Z_Construct_UPackage__Script_SpiderNavigation(), TEXT("SpiderNavNode"), sizeof(FSpiderNavNode), Get_Z_Construct_UScriptStruct_FSpiderNavNode_Hash());
	}
	return Singleton;
}
template<> SPIDERNAVIGATION_API UScriptStruct* StaticStruct<FSpiderNavNode>()
{
	return FSpiderNavNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpiderNavNode(FSpiderNavNode::StaticStruct, TEXT("/Script/SpiderNavigation"), TEXT("SpiderNavNode"), false, nullptr, nullptr);
static struct FScriptStruct_SpiderNavigation_StaticRegisterNativesFSpiderNavNode
{
	FScriptStruct_SpiderNavigation_StaticRegisterNativesFSpiderNavNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SpiderNavNode")),new UScriptStruct::TCppStructOps<FSpiderNavNode>);
	}
} ScriptStruct_SpiderNavigation_StaticRegisterNativesFSpiderNavNode;
	struct Z_Construct_UScriptStruct_FSpiderNavNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpiderNavNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpiderNavigation.h" },
		{ "ToolTip", "Describes navigation point in grid" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpiderNavNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpiderNavNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpiderNavNode_Statics::NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpiderNavigation.h" },
		{ "ToolTip", "Index (id) of node" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpiderNavNode_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpiderNavNode, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpiderNavNode_Statics::NewProp_Index_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSpiderNavNode_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpiderNavNode_Statics::NewProp_Normal_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpiderNavigation.h" },
		{ "ToolTip", "Normal of node from nearest world object with collision" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpiderNavNode_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpiderNavNode, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpiderNavNode_Statics::NewProp_Normal_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSpiderNavNode_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpiderNavNode_Statics::NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpiderNavigation.h" },
		{ "ToolTip", "Location of node" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpiderNavNode_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpiderNavNode, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpiderNavNode_Statics::NewProp_Location_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSpiderNavNode_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpiderNavNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpiderNavNode_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpiderNavNode_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpiderNavNode_Statics::NewProp_Location,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpiderNavNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SpiderNavigation,
		nullptr,
		&NewStructOps,
		"SpiderNavNode",
		sizeof(FSpiderNavNode),
		alignof(FSpiderNavNode),
		Z_Construct_UScriptStruct_FSpiderNavNode_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSpiderNavNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpiderNavNode_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSpiderNavNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpiderNavNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpiderNavNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SpiderNavigation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpiderNavNode"), sizeof(FSpiderNavNode), Get_Z_Construct_UScriptStruct_FSpiderNavNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpiderNavNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpiderNavNode_Hash() { return 1913749192U; }
	void ASpiderNavigation::StaticRegisterNativesASpiderNavigation()
	{
		UClass* Class = ASpiderNavigation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DrawDebugRelations", &ASpiderNavigation::execDrawDebugRelations },
			{ "FindClosestNodeLocation", &ASpiderNavigation::execFindClosestNodeLocation },
			{ "FindClosestNodeNormal", &ASpiderNavigation::execFindClosestNodeNormal },
			{ "FindNextLocationAndNormal", &ASpiderNavigation::execFindNextLocationAndNormal },
			{ "FindPath", &ASpiderNavigation::execFindPath },
			{ "GetNavNodesCount", &ASpiderNavigation::execGetNavNodesCount },
			{ "LoadGrid", &ASpiderNavigation::execLoadGrid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASpiderNavigation_DrawDebugRelations_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpiderNavigation_DrawDebugRelations_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpiderNavigation" },
		{ "ModuleRelativePath", "Public/SpiderNavigation.h" },
		{ "ToolTip", "Draws debug lines between connected nodes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpiderNavigation_DrawDebugRelations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpiderNavigation, nullptr, "DrawDebugRelations", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpiderNavigation_DrawDebugRelations_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASpiderNavigation_DrawDebugRelations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpiderNavigation_DrawDebugRelations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpiderNavigation_DrawDebugRelations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpiderNavigation_FindClosestNodeLocation_Statics
	{
		struct SpiderNavigation_eventFindClosestNodeLocation_Parms
		{
			FVector Location;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpiderNavigation_FindClosestNodeLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpiderNavigation_eventFindClosestNodeLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpiderNavigation_FindClosestNodeLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpiderNavigation_eventFindClosestNodeLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpiderNavigation_FindClosestNodeLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpiderNavigation_FindClosestNodeLocation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpiderNavigation_FindClosestNodeLocation_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpiderNavigation_FindClosestNodeLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpiderNavigation" },
		{ "ModuleRelativePath", "Public/SpiderNavigation.h" },
		{ "ToolTip", "Finds closest node's location in grid to specified location" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpiderNavigation_FindClosestNodeLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpiderNavigation, nullptr, "FindClosestNodeLocation", sizeof(SpiderNavigation_eventFindClosestNodeLocation_Parms), Z_Construct_UFunction_ASpiderNavigation_FindClosestNodeLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASpiderNavigation_FindClosestNodeLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpiderNavigation_FindClosestNodeLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASpiderNavigation_FindClosestNodeLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpiderNavigation_FindClosestNodeLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpiderNavigation_FindClosestNodeLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpiderNavigation_FindClosestNodeNormal_Statics
	{
		struct SpiderNavigation_eventFindClosestNodeNormal_Parms
		{
			FVector Location;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpiderNavigation_FindClosestNodeNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpiderNavigation_eventFindClosestNodeNormal_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpiderNavigation_FindClosestNodeNormal_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpiderNavigation_eventFindClosestNodeNormal_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpiderNavigation_FindClosestNodeNormal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpiderNavigation_FindClosestNodeNormal_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpiderNavigation_FindClosestNodeNormal_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpiderNavigation_FindClosestNodeNormal_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpiderNavigation" },
		{ "ModuleRelativePath", "Public/SpiderNavigation.h" },
		{ "ToolTip", "Finds closest node's normal in grid to specified location" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpiderNavigation_FindClosestNodeNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpiderNavigation, nullptr, "FindClosestNodeNormal", sizeof(SpiderNavigation_eventFindClosestNodeNormal_Parms), Z_Construct_UFunction_ASpiderNavigation_FindClosestNodeNormal_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASpiderNavigation_FindClosestNodeNormal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpiderNavigation_FindClosestNodeNormal_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASpiderNavigation_FindClosestNodeNormal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpiderNavigation_FindClosestNodeNormal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpiderNavigation_FindClosestNodeNormal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpiderNavigation_FindNextLocationAndNormal_Statics
	{
		struct SpiderNavigation_eventFindNextLocationAndNormal_Parms
		{
			FVector CurrentLocation;
			FVector TargetLocation;
			FVector NextLocation;
			FVector Normal;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NextLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASpiderNavigation_FindNextLocationAndNormal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpiderNavigation_eventFindNextLocationAndNormal_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASpiderNavigation_FindNextLocationAndNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpiderNavigation_eventFindNextLocationAndNormal_Parms), &Z_Construct_UFunction_ASpiderNavigation_FindNextLocationAndNormal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpiderNavigation_FindNextLocationAndNormal_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpiderNavigation_eventFindNextLocationAndNormal_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpiderNavigation_FindNextLocationAndNormal_Statics::NewProp_NextLocation = { "NextLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpiderNavigation_eventFindNextLocationAndNormal_Parms, NextLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpiderNavigation_FindNextLocationAndNormal_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpiderNavigation_eventFindNextLocationAndNormal_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpiderNavigation_FindNextLocationAndNormal_Statics::NewProp_CurrentLocation = { "CurrentLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpiderNavigation_eventFindNextLocationAndNormal_Parms, CurrentLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpiderNavigation_FindNextLocationAndNormal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpiderNavigation_FindNextLocationAndNormal_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpiderNavigation_FindNextLocationAndNormal_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpiderNavigation_FindNextLocationAndNormal_Statics::NewProp_NextLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpiderNavigation_FindNextLocationAndNormal_Statics::NewProp_TargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpiderNavigation_FindNextLocationAndNormal_Statics::NewProp_CurrentLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpiderNavigation_FindNextLocationAndNormal_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpiderNavigation" },
		{ "ModuleRelativePath", "Public/SpiderNavigation.h" },
		{ "ToolTip", "Finds path between current location and target location and returns location and normal of the next fisrt node in navigation grid" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpiderNavigation_FindNextLocationAndNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpiderNavigation, nullptr, "FindNextLocationAndNormal", sizeof(SpiderNavigation_eventFindNextLocationAndNormal_Parms), Z_Construct_UFunction_ASpiderNavigation_FindNextLocationAndNormal_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASpiderNavigation_FindNextLocationAndNormal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpiderNavigation_FindNextLocationAndNormal_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASpiderNavigation_FindNextLocationAndNormal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpiderNavigation_FindNextLocationAndNormal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpiderNavigation_FindNextLocationAndNormal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpiderNavigation_FindPath_Statics
	{
		struct SpiderNavigation_eventFindPath_Parms
		{
			FVector Start;
			FVector End;
			bool bFoundCompletePath;
			TArray<FVector> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static void NewProp_bFoundCompletePath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFoundCompletePath;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_End;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Start;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASpiderNavigation_FindPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpiderNavigation_eventFindPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpiderNavigation_FindPath_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASpiderNavigation_FindPath_Statics::NewProp_bFoundCompletePath_SetBit(void* Obj)
	{
		((SpiderNavigation_eventFindPath_Parms*)Obj)->bFoundCompletePath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASpiderNavigation_FindPath_Statics::NewProp_bFoundCompletePath = { "bFoundCompletePath", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpiderNavigation_eventFindPath_Parms), &Z_Construct_UFunction_ASpiderNavigation_FindPath_Statics::NewProp_bFoundCompletePath_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpiderNavigation_FindPath_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpiderNavigation_eventFindPath_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpiderNavigation_FindPath_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpiderNavigation_eventFindPath_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpiderNavigation_FindPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpiderNavigation_FindPath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpiderNavigation_FindPath_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpiderNavigation_FindPath_Statics::NewProp_bFoundCompletePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpiderNavigation_FindPath_Statics::NewProp_End,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpiderNavigation_FindPath_Statics::NewProp_Start,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpiderNavigation_FindPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpiderNavigation" },
		{ "ModuleRelativePath", "Public/SpiderNavigation.h" },
		{ "ToolTip", "Finds path in grid. Returns array of nodes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpiderNavigation_FindPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpiderNavigation, nullptr, "FindPath", sizeof(SpiderNavigation_eventFindPath_Parms), Z_Construct_UFunction_ASpiderNavigation_FindPath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASpiderNavigation_FindPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpiderNavigation_FindPath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASpiderNavigation_FindPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpiderNavigation_FindPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpiderNavigation_FindPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpiderNavigation_GetNavNodesCount_Statics
	{
		struct SpiderNavigation_eventGetNavNodesCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASpiderNavigation_GetNavNodesCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpiderNavigation_eventGetNavNodesCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpiderNavigation_GetNavNodesCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpiderNavigation_GetNavNodesCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpiderNavigation_GetNavNodesCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpiderNavigation" },
		{ "ModuleRelativePath", "Public/SpiderNavigation.h" },
		{ "ToolTip", "Returns number of navigation nodes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpiderNavigation_GetNavNodesCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpiderNavigation, nullptr, "GetNavNodesCount", sizeof(SpiderNavigation_eventGetNavNodesCount_Parms), Z_Construct_UFunction_ASpiderNavigation_GetNavNodesCount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASpiderNavigation_GetNavNodesCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpiderNavigation_GetNavNodesCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASpiderNavigation_GetNavNodesCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpiderNavigation_GetNavNodesCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpiderNavigation_GetNavNodesCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpiderNavigation_LoadGrid_Statics
	{
		struct SpiderNavigation_eventLoadGrid_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASpiderNavigation_LoadGrid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpiderNavigation_eventLoadGrid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASpiderNavigation_LoadGrid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpiderNavigation_eventLoadGrid_Parms), &Z_Construct_UFunction_ASpiderNavigation_LoadGrid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpiderNavigation_LoadGrid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpiderNavigation_LoadGrid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpiderNavigation_LoadGrid_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpiderNavigation" },
		{ "ModuleRelativePath", "Public/SpiderNavigation.h" },
		{ "ToolTip", "Loads navigation grid from file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpiderNavigation_LoadGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpiderNavigation, nullptr, "LoadGrid", sizeof(SpiderNavigation_eventLoadGrid_Parms), Z_Construct_UFunction_ASpiderNavigation_LoadGrid_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASpiderNavigation_LoadGrid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpiderNavigation_LoadGrid_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASpiderNavigation_LoadGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpiderNavigation_LoadGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpiderNavigation_LoadGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASpiderNavigation_NoRegister()
	{
		return ASpiderNavigation::StaticClass();
	}
	struct Z_Construct_UClass_ASpiderNavigation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugLinesThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DebugLinesThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoLoadGrid_MetaData[];
#endif
		static void NewProp_bAutoLoadGrid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoLoadGrid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpiderNavigation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SpiderNavigation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASpiderNavigation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpiderNavigation_DrawDebugRelations, "DrawDebugRelations" }, // 3419855229
		{ &Z_Construct_UFunction_ASpiderNavigation_FindClosestNodeLocation, "FindClosestNodeLocation" }, // 2425330747
		{ &Z_Construct_UFunction_ASpiderNavigation_FindClosestNodeNormal, "FindClosestNodeNormal" }, // 1614143489
		{ &Z_Construct_UFunction_ASpiderNavigation_FindNextLocationAndNormal, "FindNextLocationAndNormal" }, // 3555672256
		{ &Z_Construct_UFunction_ASpiderNavigation_FindPath, "FindPath" }, // 3507082472
		{ &Z_Construct_UFunction_ASpiderNavigation_GetNavNodesCount, "GetNavNodesCount" }, // 2140442267
		{ &Z_Construct_UFunction_ASpiderNavigation_LoadGrid, "LoadGrid" }, // 937220615
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpiderNavigation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpiderNavigation.h" },
		{ "ModuleRelativePath", "Public/SpiderNavigation.h" },
		{ "ToolTip", "Class for navigation between nodes with A-star" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpiderNavigation_Statics::NewProp_DebugLinesThickness_MetaData[] = {
		{ "Category", "SpiderNavGridBuilder" },
		{ "ModuleRelativePath", "Public/SpiderNavigation.h" },
		{ "ToolTip", "Thickness of debug lines" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpiderNavigation_Statics::NewProp_DebugLinesThickness = { "DebugLinesThickness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpiderNavigation, DebugLinesThickness), METADATA_PARAMS(Z_Construct_UClass_ASpiderNavigation_Statics::NewProp_DebugLinesThickness_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASpiderNavigation_Statics::NewProp_DebugLinesThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpiderNavigation_Statics::NewProp_bAutoLoadGrid_MetaData[] = {
		{ "Category", "SpiderNavigation" },
		{ "ModuleRelativePath", "Public/SpiderNavigation.h" },
		{ "ToolTip", "Whether to load the navigation grid on BeginPlay" },
	};
#endif
	void Z_Construct_UClass_ASpiderNavigation_Statics::NewProp_bAutoLoadGrid_SetBit(void* Obj)
	{
		((ASpiderNavigation*)Obj)->bAutoLoadGrid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpiderNavigation_Statics::NewProp_bAutoLoadGrid = { "bAutoLoadGrid", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASpiderNavigation), &Z_Construct_UClass_ASpiderNavigation_Statics::NewProp_bAutoLoadGrid_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASpiderNavigation_Statics::NewProp_bAutoLoadGrid_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASpiderNavigation_Statics::NewProp_bAutoLoadGrid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpiderNavigation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpiderNavigation_Statics::NewProp_DebugLinesThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpiderNavigation_Statics::NewProp_bAutoLoadGrid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpiderNavigation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpiderNavigation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpiderNavigation_Statics::ClassParams = {
		&ASpiderNavigation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASpiderNavigation_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ASpiderNavigation_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASpiderNavigation_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASpiderNavigation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpiderNavigation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpiderNavigation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpiderNavigation, 4123612229);
	template<> SPIDERNAVIGATION_API UClass* StaticClass<ASpiderNavigation>()
	{
		return ASpiderNavigation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpiderNavigation(Z_Construct_UClass_ASpiderNavigation, &ASpiderNavigation::StaticClass, TEXT("/Script/SpiderNavigation"), TEXT("ASpiderNavigation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpiderNavigation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
