// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SpiderNavigation.h"
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
		extern SPIDERNAVIGATION_API uint32 Get_Z_Construct_UScriptStruct_FSpiderNavNode_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpiderNavNode, Z_Construct_UPackage__Script_SpiderNavigation(), TEXT("SpiderNavNode"), sizeof(FSpiderNavNode), Get_Z_Construct_UScriptStruct_FSpiderNavNode_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpiderNavNode(FSpiderNavNode::StaticStruct, TEXT("/Script/SpiderNavigation"), TEXT("SpiderNavNode"), false, nullptr, nullptr);
static struct FScriptStruct_SpiderNavigation_StaticRegisterNativesFSpiderNavNode
{
	FScriptStruct_SpiderNavigation_StaticRegisterNativesFSpiderNavNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SpiderNavNode")),new UScriptStruct::TCppStructOps<FSpiderNavNode>);
	}
} ScriptStruct_SpiderNavigation_StaticRegisterNativesFSpiderNavNode;
	UScriptStruct* Z_Construct_UScriptStruct_FSpiderNavNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpiderNavNode_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SpiderNavigation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpiderNavNode"), sizeof(FSpiderNavNode), Get_Z_Construct_UScriptStruct_FSpiderNavNode_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SpiderNavigation.h" },
				{ "ToolTip", "Describes navigation point in grid" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpiderNavNode>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
				{ "ModuleRelativePath", "Public/SpiderNavigation.h" },
				{ "ToolTip", "Index (id) of node" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSpiderNavNode, Index), METADATA_PARAMS(NewProp_Index_MetaData, ARRAY_COUNT(NewProp_Index_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
				{ "ModuleRelativePath", "Public/SpiderNavigation.h" },
				{ "ToolTip", "Normal of node from nearest world object with collision" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal = { UE4CodeGen_Private::EPropertyClass::Struct, "Normal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSpiderNavNode, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Normal_MetaData, ARRAY_COUNT(NewProp_Normal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
				{ "ModuleRelativePath", "Public/SpiderNavigation.h" },
				{ "ToolTip", "Location of node" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSpiderNavNode, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Location_MetaData, ARRAY_COUNT(NewProp_Location_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Index,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Normal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SpiderNavigation,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SpiderNavNode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FSpiderNavNode),
				alignof(FSpiderNavNode),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpiderNavNode_CRC() { return 135732650U; }
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
	UFunction* Z_Construct_UFunction_ASpiderNavigation_DrawDebugRelations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SpiderNavigation" },
				{ "ModuleRelativePath", "Public/SpiderNavigation.h" },
				{ "ToolTip", "Draws debug lines between connected nodes" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpiderNavigation, "DrawDebugRelations", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASpiderNavigation_FindClosestNodeLocation()
	{
		struct SpiderNavigation_eventFindClosestNodeLocation_Parms
		{
			FVector Location;
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SpiderNavigation_eventFindClosestNodeLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SpiderNavigation_eventFindClosestNodeLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SpiderNavigation" },
				{ "ModuleRelativePath", "Public/SpiderNavigation.h" },
				{ "ToolTip", "Finds closest node's location in grid to specified location" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpiderNavigation, "FindClosestNodeLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(SpiderNavigation_eventFindClosestNodeLocation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASpiderNavigation_FindClosestNodeNormal()
	{
		struct SpiderNavigation_eventFindClosestNodeNormal_Parms
		{
			FVector Location;
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SpiderNavigation_eventFindClosestNodeNormal_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SpiderNavigation_eventFindClosestNodeNormal_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SpiderNavigation" },
				{ "ModuleRelativePath", "Public/SpiderNavigation.h" },
				{ "ToolTip", "Finds closest node's normal in grid to specified location" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpiderNavigation, "FindClosestNodeNormal", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(SpiderNavigation_eventFindClosestNodeNormal_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASpiderNavigation_FindNextLocationAndNormal()
	{
		struct SpiderNavigation_eventFindNextLocationAndNormal_Parms
		{
			FVector CurrentLocation;
			FVector TargetLocation;
			FVector NextLocation;
			FVector Normal;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((SpiderNavigation_eventFindNextLocationAndNormal_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SpiderNavigation_eventFindNextLocationAndNormal_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal = { UE4CodeGen_Private::EPropertyClass::Struct, "Normal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(SpiderNavigation_eventFindNextLocationAndNormal_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NextLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "NextLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(SpiderNavigation_eventFindNextLocationAndNormal_Parms, NextLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "TargetLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SpiderNavigation_eventFindNextLocationAndNormal_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "CurrentLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SpiderNavigation_eventFindNextLocationAndNormal_Parms, CurrentLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Normal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NextLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentLocation,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SpiderNavigation" },
				{ "ModuleRelativePath", "Public/SpiderNavigation.h" },
				{ "ToolTip", "Finds path between current location and target location and returns location and normal of the next fisrt node in navigation grid" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpiderNavigation, "FindNextLocationAndNormal", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(SpiderNavigation_eventFindNextLocationAndNormal_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASpiderNavigation_FindPath()
	{
		struct SpiderNavigation_eventFindPath_Parms
		{
			FVector Start;
			FVector End;
			bool bFoundCompletePath;
			TArray<FVector> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SpiderNavigation_eventFindPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bFoundCompletePath_SetBit = [](void* Obj){ ((SpiderNavigation_eventFindPath_Parms*)Obj)->bFoundCompletePath = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFoundCompletePath = { UE4CodeGen_Private::EPropertyClass::Bool, "bFoundCompletePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SpiderNavigation_eventFindPath_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFoundCompletePath_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_End = { UE4CodeGen_Private::EPropertyClass::Struct, "End", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SpiderNavigation_eventFindPath_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Start = { UE4CodeGen_Private::EPropertyClass::Struct, "Start", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SpiderNavigation_eventFindPath_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFoundCompletePath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_End,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Start,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SpiderNavigation" },
				{ "ModuleRelativePath", "Public/SpiderNavigation.h" },
				{ "ToolTip", "Finds path in grid. Returns array of nodes" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpiderNavigation, "FindPath", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(SpiderNavigation_eventFindPath_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASpiderNavigation_GetNavNodesCount()
	{
		struct SpiderNavigation_eventGetNavNodesCount_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SpiderNavigation_eventGetNavNodesCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SpiderNavigation" },
				{ "ModuleRelativePath", "Public/SpiderNavigation.h" },
				{ "ToolTip", "Returns number of navigation nodes" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpiderNavigation, "GetNavNodesCount", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SpiderNavigation_eventGetNavNodesCount_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASpiderNavigation_LoadGrid()
	{
		struct SpiderNavigation_eventLoadGrid_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((SpiderNavigation_eventLoadGrid_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SpiderNavigation_eventLoadGrid_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SpiderNavigation" },
				{ "ModuleRelativePath", "Public/SpiderNavigation.h" },
				{ "ToolTip", "Loads navigation grid from file" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpiderNavigation, "LoadGrid", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SpiderNavigation_eventLoadGrid_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASpiderNavigation_NoRegister()
	{
		return ASpiderNavigation::StaticClass();
	}
	UClass* Z_Construct_UClass_ASpiderNavigation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_SpiderNavigation,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ASpiderNavigation_DrawDebugRelations, "DrawDebugRelations" }, // 621038583
				{ &Z_Construct_UFunction_ASpiderNavigation_FindClosestNodeLocation, "FindClosestNodeLocation" }, // 2976898844
				{ &Z_Construct_UFunction_ASpiderNavigation_FindClosestNodeNormal, "FindClosestNodeNormal" }, // 1897351288
				{ &Z_Construct_UFunction_ASpiderNavigation_FindNextLocationAndNormal, "FindNextLocationAndNormal" }, // 7952029
				{ &Z_Construct_UFunction_ASpiderNavigation_FindPath, "FindPath" }, // 235367316
				{ &Z_Construct_UFunction_ASpiderNavigation_GetNavNodesCount, "GetNavNodesCount" }, // 3510202297
				{ &Z_Construct_UFunction_ASpiderNavigation_LoadGrid, "LoadGrid" }, // 2569636746
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "SpiderNavigation.h" },
				{ "ModuleRelativePath", "Public/SpiderNavigation.h" },
				{ "ToolTip", "Class for navigation between nodes with A-star" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugLinesThickness_MetaData[] = {
				{ "Category", "SpiderNavGridBuilder" },
				{ "ModuleRelativePath", "Public/SpiderNavigation.h" },
				{ "ToolTip", "Thickness of debug lines" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DebugLinesThickness = { UE4CodeGen_Private::EPropertyClass::Float, "DebugLinesThickness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASpiderNavigation, DebugLinesThickness), METADATA_PARAMS(NewProp_DebugLinesThickness_MetaData, ARRAY_COUNT(NewProp_DebugLinesThickness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoLoadGrid_MetaData[] = {
				{ "Category", "SpiderNavigation" },
				{ "ModuleRelativePath", "Public/SpiderNavigation.h" },
				{ "ToolTip", "Whether to load the navigation grid on BeginPlay" },
			};
#endif
			auto NewProp_bAutoLoadGrid_SetBit = [](void* Obj){ ((ASpiderNavigation*)Obj)->bAutoLoadGrid = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoLoadGrid = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoLoadGrid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ASpiderNavigation), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAutoLoadGrid_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAutoLoadGrid_MetaData, ARRAY_COUNT(NewProp_bAutoLoadGrid_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DebugLinesThickness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAutoLoadGrid,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASpiderNavigation>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASpiderNavigation::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(ASpiderNavigation, 3434033857);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpiderNavigation(Z_Construct_UClass_ASpiderNavigation, &ASpiderNavigation::StaticClass, TEXT("/Script/SpiderNavigation"), TEXT("ASpiderNavigation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpiderNavigation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
