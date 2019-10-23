// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpiderNavigation/Public/SpiderNavGridBuilder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpiderNavGridBuilder() {}
// Cross Module References
	SPIDERNAVIGATION_API UClass* Z_Construct_UClass_ASpiderNavGridBuilder_NoRegister();
	SPIDERNAVIGATION_API UClass* Z_Construct_UClass_ASpiderNavGridBuilder();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SpiderNavigation();
	SPIDERNAVIGATION_API UFunction* Z_Construct_UFunction_ASpiderNavGridBuilder_BuildGrid();
	SPIDERNAVIGATION_API UFunction* Z_Construct_UFunction_ASpiderNavGridBuilder_DrawDebugRelations();
	SPIDERNAVIGATION_API UFunction* Z_Construct_UFunction_ASpiderNavGridBuilder_SaveGrid();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SPIDERNAVIGATION_API UClass* Z_Construct_UClass_ASpiderNavPointEdge_NoRegister();
	SPIDERNAVIGATION_API UClass* Z_Construct_UClass_ASpiderNavPoint_NoRegister();
	SPIDERNAVIGATION_API UClass* Z_Construct_UClass_ASpiderNavGridTracer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void ASpiderNavGridBuilder::StaticRegisterNativesASpiderNavGridBuilder()
	{
		UClass* Class = ASpiderNavGridBuilder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BuildGrid", &ASpiderNavGridBuilder::execBuildGrid },
			{ "DrawDebugRelations", &ASpiderNavGridBuilder::execDrawDebugRelations },
			{ "SaveGrid", &ASpiderNavGridBuilder::execSaveGrid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASpiderNavGridBuilder_BuildGrid_Statics
	{
		struct SpiderNavGridBuilder_eventBuildGrid_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASpiderNavGridBuilder_BuildGrid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpiderNavGridBuilder_eventBuildGrid_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpiderNavGridBuilder_BuildGrid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpiderNavGridBuilder_BuildGrid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpiderNavGridBuilder_BuildGrid_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpiderNavGridBuilder" },
		{ "ModuleRelativePath", "Public/SpiderNavGridBuilder.h" },
		{ "ToolTip", "Builds navigation grid. Returs number of navigations points" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpiderNavGridBuilder_BuildGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpiderNavGridBuilder, nullptr, "BuildGrid", sizeof(SpiderNavGridBuilder_eventBuildGrid_Parms), Z_Construct_UFunction_ASpiderNavGridBuilder_BuildGrid_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASpiderNavGridBuilder_BuildGrid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpiderNavGridBuilder_BuildGrid_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASpiderNavGridBuilder_BuildGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpiderNavGridBuilder_BuildGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpiderNavGridBuilder_BuildGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpiderNavGridBuilder_DrawDebugRelations_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpiderNavGridBuilder_DrawDebugRelations_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpiderNavGridBuilder" },
		{ "ModuleRelativePath", "Public/SpiderNavGridBuilder.h" },
		{ "ToolTip", "Draws debug lines between connected navigation points" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpiderNavGridBuilder_DrawDebugRelations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpiderNavGridBuilder, nullptr, "DrawDebugRelations", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpiderNavGridBuilder_DrawDebugRelations_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASpiderNavGridBuilder_DrawDebugRelations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpiderNavGridBuilder_DrawDebugRelations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpiderNavGridBuilder_DrawDebugRelations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpiderNavGridBuilder_SaveGrid_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpiderNavGridBuilder_SaveGrid_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpiderNavGridBuilder" },
		{ "ModuleRelativePath", "Public/SpiderNavGridBuilder.h" },
		{ "ToolTip", "Saves navigation grid to save file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpiderNavGridBuilder_SaveGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpiderNavGridBuilder, nullptr, "SaveGrid", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpiderNavGridBuilder_SaveGrid_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASpiderNavGridBuilder_SaveGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpiderNavGridBuilder_SaveGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpiderNavGridBuilder_SaveGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASpiderNavGridBuilder_NoRegister()
	{
		return ASpiderNavGridBuilder::StaticClass();
	}
	struct Z_Construct_UClass_ASpiderNavGridBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EgdeDeviationModificator_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EgdeDeviationModificator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceDistanceForEdgesModificator_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceDistanceForEdgesModificator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectionSphereRadiusModificator_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConnectionSphereRadiusModificator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClosePointsFilterModificator_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClosePointsFilterModificator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceDistanceModificator_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceDistanceModificator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BounceNavDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BounceNavDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoSaveGrid_MetaData[];
#endif
		static void NewProp_bAutoSaveGrid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoSaveGrid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoRemoveTracers_MetaData[];
#endif
		static void NewProp_bAutoRemoveTracers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoRemoveTracers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseActorBlackList_MetaData[];
#endif
		static void NewProp_bUseActorBlackList_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseActorBlackList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsBlackList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsBlackList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsBlackList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseActorWhiteList_MetaData[];
#endif
		static void NewProp_bUseActorWhiteList_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseActorWhiteList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsWhiteList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsWhiteList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsWhiteList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridStepSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GridStepSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavPointEdgeActorBP_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NavPointEdgeActorBP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavPointActorBP_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NavPointActorBP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TracerActorBP_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TracerActorBP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VolumeBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpiderNavGridBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SpiderNavigation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASpiderNavGridBuilder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpiderNavGridBuilder_BuildGrid, "BuildGrid" }, // 3152765665
		{ &Z_Construct_UFunction_ASpiderNavGridBuilder_DrawDebugRelations, "DrawDebugRelations" }, // 2018525795
		{ &Z_Construct_UFunction_ASpiderNavGridBuilder_SaveGrid, "SaveGrid" }, // 3328085213
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpiderNavGridBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpiderNavGridBuilder.h" },
		{ "ModuleRelativePath", "Public/SpiderNavGridBuilder.h" },
		{ "ToolTip", "Provides settings to configure navigation builder. Builds navigation grid with relations, which can be saved to file" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_EgdeDeviationModificator_MetaData[] = {
		{ "Category", "SpiderNavGridBuilder" },
		{ "ModuleRelativePath", "Public/SpiderNavGridBuilder.h" },
		{ "ToolTip", "How far can be one trace line from other trace line near the point of intersection when checking possible neightbors. Multiplier of GridStepSize" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_EgdeDeviationModificator = { "EgdeDeviationModificator", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpiderNavGridBuilder, EgdeDeviationModificator), METADATA_PARAMS(Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_EgdeDeviationModificator_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_EgdeDeviationModificator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_TraceDistanceForEdgesModificator_MetaData[] = {
		{ "Category", "SpiderNavGridBuilder" },
		{ "ModuleRelativePath", "Public/SpiderNavGridBuilder.h" },
		{ "ToolTip", "How far to trace from each NavPoint to find intersection through egdes of possible neightbors. Multiplier of GridStepSize" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_TraceDistanceForEdgesModificator = { "TraceDistanceForEdgesModificator", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpiderNavGridBuilder, TraceDistanceForEdgesModificator), METADATA_PARAMS(Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_TraceDistanceForEdgesModificator_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_TraceDistanceForEdgesModificator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_ConnectionSphereRadiusModificator_MetaData[] = {
		{ "Category", "SpiderNavGridBuilder" },
		{ "ModuleRelativePath", "Public/SpiderNavGridBuilder.h" },
		{ "ToolTip", "The radius of a sphere to find neighbors of each NavPoint. Multiplier of GridStepSize" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_ConnectionSphereRadiusModificator = { "ConnectionSphereRadiusModificator", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpiderNavGridBuilder, ConnectionSphereRadiusModificator), METADATA_PARAMS(Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_ConnectionSphereRadiusModificator_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_ConnectionSphereRadiusModificator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_ClosePointsFilterModificator_MetaData[] = {
		{ "Category", "SpiderNavGridBuilder" },
		{ "ModuleRelativePath", "Public/SpiderNavGridBuilder.h" },
		{ "ToolTip", "How close navigation points can be to each other. Multiplier of GridStepSize" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_ClosePointsFilterModificator = { "ClosePointsFilterModificator", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpiderNavGridBuilder, ClosePointsFilterModificator), METADATA_PARAMS(Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_ClosePointsFilterModificator_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_ClosePointsFilterModificator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_TraceDistanceModificator_MetaData[] = {
		{ "Category", "SpiderNavGridBuilder" },
		{ "ModuleRelativePath", "Public/SpiderNavGridBuilder.h" },
		{ "ToolTip", "How far to trace from tracers. Multiplier of GridStepSize" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_TraceDistanceModificator = { "TraceDistanceModificator", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpiderNavGridBuilder, TraceDistanceModificator), METADATA_PARAMS(Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_TraceDistanceModificator_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_TraceDistanceModificator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_BounceNavDistance_MetaData[] = {
		{ "Category", "SpiderNavGridBuilder" },
		{ "ModuleRelativePath", "Public/SpiderNavGridBuilder.h" },
		{ "ToolTip", "How far put navigation point from a WorldStatic face" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_BounceNavDistance = { "BounceNavDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpiderNavGridBuilder, BounceNavDistance), METADATA_PARAMS(Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_BounceNavDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_BounceNavDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_bAutoSaveGrid_MetaData[] = {
		{ "Category", "SpiderNavGridBuilder" },
		{ "ModuleRelativePath", "Public/SpiderNavGridBuilder.h" },
		{ "ToolTip", "Whether to save the navigation grid after rebuild" },
	};
#endif
	void Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_bAutoSaveGrid_SetBit(void* Obj)
	{
		((ASpiderNavGridBuilder*)Obj)->bAutoSaveGrid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_bAutoSaveGrid = { "bAutoSaveGrid", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASpiderNavGridBuilder), &Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_bAutoSaveGrid_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_bAutoSaveGrid_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_bAutoSaveGrid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_bAutoRemoveTracers_MetaData[] = {
		{ "Category", "SpiderNavGridBuilder" },
		{ "ModuleRelativePath", "Public/SpiderNavGridBuilder.h" },
		{ "ToolTip", "For debug. If false then all tracers remain on the scene after grid rebuild" },
	};
#endif
	void Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_bAutoRemoveTracers_SetBit(void* Obj)
	{
		((ASpiderNavGridBuilder*)Obj)->bAutoRemoveTracers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_bAutoRemoveTracers = { "bAutoRemoveTracers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASpiderNavGridBuilder), &Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_bAutoRemoveTracers_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_bAutoRemoveTracers_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_bAutoRemoveTracers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_bUseActorBlackList_MetaData[] = {
		{ "Category", "SpiderNavGridBuilder" },
		{ "ModuleRelativePath", "Public/SpiderNavGridBuilder.h" },
		{ "ToolTip", "Whether to use ActorsBlackList" },
	};
#endif
	void Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_bUseActorBlackList_SetBit(void* Obj)
	{
		((ASpiderNavGridBuilder*)Obj)->bUseActorBlackList = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_bUseActorBlackList = { "bUseActorBlackList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASpiderNavGridBuilder), &Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_bUseActorBlackList_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_bUseActorBlackList_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_bUseActorBlackList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_ActorsBlackList_MetaData[] = {
		{ "Category", "SpiderNavGridBuilder" },
		{ "ModuleRelativePath", "Public/SpiderNavGridBuilder.h" },
		{ "ToolTip", "The list of actors which COULD NOT have navigation points on them" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_ActorsBlackList = { "ActorsBlackList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpiderNavGridBuilder, ActorsBlackList), METADATA_PARAMS(Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_ActorsBlackList_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_ActorsBlackList_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_ActorsBlackList_Inner = { "ActorsBlackList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_bUseActorWhiteList_MetaData[] = {
		{ "Category", "SpiderNavGridBuilder" },
		{ "ModuleRelativePath", "Public/SpiderNavGridBuilder.h" },
		{ "ToolTip", "Whether to use ActorsWhiteList" },
	};
#endif
	void Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_bUseActorWhiteList_SetBit(void* Obj)
	{
		((ASpiderNavGridBuilder*)Obj)->bUseActorWhiteList = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_bUseActorWhiteList = { "bUseActorWhiteList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASpiderNavGridBuilder), &Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_bUseActorWhiteList_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_bUseActorWhiteList_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_bUseActorWhiteList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_ActorsWhiteList_MetaData[] = {
		{ "Category", "SpiderNavGridBuilder" },
		{ "ModuleRelativePath", "Public/SpiderNavGridBuilder.h" },
		{ "ToolTip", "The list of actors which could have navigation points on them" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_ActorsWhiteList = { "ActorsWhiteList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpiderNavGridBuilder, ActorsWhiteList), METADATA_PARAMS(Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_ActorsWhiteList_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_ActorsWhiteList_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_ActorsWhiteList_Inner = { "ActorsWhiteList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_GridStepSize_MetaData[] = {
		{ "Category", "SpiderNavGridBuilder" },
		{ "ModuleRelativePath", "Public/SpiderNavGridBuilder.h" },
		{ "ToolTip", "The minimum distance between tracers to fill up scene" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_GridStepSize = { "GridStepSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpiderNavGridBuilder, GridStepSize), METADATA_PARAMS(Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_GridStepSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_GridStepSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_NavPointEdgeActorBP_MetaData[] = {
		{ "Category", "SpiderNavGridBuilder" },
		{ "ModuleRelativePath", "Public/SpiderNavGridBuilder.h" },
		{ "ToolTip", "For debug. Blueprint class which will be used to spawn Navigation Points on egdes when checking possible neightbors" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_NavPointEdgeActorBP = { "NavPointEdgeActorBP", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpiderNavGridBuilder, NavPointEdgeActorBP), Z_Construct_UClass_ASpiderNavPointEdge_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_NavPointEdgeActorBP_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_NavPointEdgeActorBP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_NavPointActorBP_MetaData[] = {
		{ "Category", "SpiderNavGridBuilder" },
		{ "ModuleRelativePath", "Public/SpiderNavGridBuilder.h" },
		{ "ToolTip", "For debug. Blueprint class which will be used to spawn Navigation Points" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_NavPointActorBP = { "NavPointActorBP", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpiderNavGridBuilder, NavPointActorBP), Z_Construct_UClass_ASpiderNavPoint_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_NavPointActorBP_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_NavPointActorBP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_TracerActorBP_MetaData[] = {
		{ "Category", "SpiderNavGridBuilder" },
		{ "ModuleRelativePath", "Public/SpiderNavGridBuilder.h" },
		{ "ToolTip", "For debug. Blueprint class which will be used to spawn actors on scene in specified volume" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_TracerActorBP = { "TracerActorBP", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpiderNavGridBuilder, TracerActorBP), Z_Construct_UClass_ASpiderNavGridTracer_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_TracerActorBP_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_TracerActorBP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_VolumeBox_MetaData[] = {
		{ "Category", "SpiderNavGridBuilder" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpiderNavGridBuilder.h" },
		{ "ToolTip", "Volume where to build navigation" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_VolumeBox = { "VolumeBox", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpiderNavGridBuilder, VolumeBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_VolumeBox_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_VolumeBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpiderNavGridBuilder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_EgdeDeviationModificator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_TraceDistanceForEdgesModificator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_ConnectionSphereRadiusModificator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_ClosePointsFilterModificator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_TraceDistanceModificator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_BounceNavDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_bAutoSaveGrid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_bAutoRemoveTracers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_bUseActorBlackList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_ActorsBlackList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_ActorsBlackList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_bUseActorWhiteList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_ActorsWhiteList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_ActorsWhiteList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_GridStepSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_NavPointEdgeActorBP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_NavPointActorBP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_TracerActorBP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpiderNavGridBuilder_Statics::NewProp_VolumeBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpiderNavGridBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpiderNavGridBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpiderNavGridBuilder_Statics::ClassParams = {
		&ASpiderNavGridBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASpiderNavGridBuilder_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ASpiderNavGridBuilder_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASpiderNavGridBuilder_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASpiderNavGridBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpiderNavGridBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpiderNavGridBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpiderNavGridBuilder, 2766838756);
	template<> SPIDERNAVIGATION_API UClass* StaticClass<ASpiderNavGridBuilder>()
	{
		return ASpiderNavGridBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpiderNavGridBuilder(Z_Construct_UClass_ASpiderNavGridBuilder, &ASpiderNavGridBuilder::StaticClass, TEXT("/Script/SpiderNavigation"), TEXT("ASpiderNavGridBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpiderNavGridBuilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
