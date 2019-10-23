// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SpiderNavGridBuilder.h"
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
	UFunction* Z_Construct_UFunction_ASpiderNavGridBuilder_BuildGrid()
	{
		struct SpiderNavGridBuilder_eventBuildGrid_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SpiderNavGridBuilder_eventBuildGrid_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SpiderNavGridBuilder" },
				{ "ModuleRelativePath", "Public/SpiderNavGridBuilder.h" },
				{ "ToolTip", "Builds navigation grid. Returs number of navigations points" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpiderNavGridBuilder, "BuildGrid", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SpiderNavGridBuilder_eventBuildGrid_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASpiderNavGridBuilder_DrawDebugRelations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SpiderNavGridBuilder" },
				{ "ModuleRelativePath", "Public/SpiderNavGridBuilder.h" },
				{ "ToolTip", "Draws debug lines between connected navigation points" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpiderNavGridBuilder, "DrawDebugRelations", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASpiderNavGridBuilder_SaveGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SpiderNavGridBuilder" },
				{ "ModuleRelativePath", "Public/SpiderNavGridBuilder.h" },
				{ "ToolTip", "Saves navigation grid to save file" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpiderNavGridBuilder, "SaveGrid", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASpiderNavGridBuilder_NoRegister()
	{
		return ASpiderNavGridBuilder::StaticClass();
	}
	UClass* Z_Construct_UClass_ASpiderNavGridBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_SpiderNavigation,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ASpiderNavGridBuilder_BuildGrid, "BuildGrid" }, // 539314883
				{ &Z_Construct_UFunction_ASpiderNavGridBuilder_DrawDebugRelations, "DrawDebugRelations" }, // 476316231
				{ &Z_Construct_UFunction_ASpiderNavGridBuilder_SaveGrid, "SaveGrid" }, // 1874458516
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "SpiderNavGridBuilder.h" },
				{ "ModuleRelativePath", "Public/SpiderNavGridBuilder.h" },
				{ "ToolTip", "Provides settings to configure navigation builder. Builds navigation grid with relations, which can be saved to file" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EgdeDeviationModificator_MetaData[] = {
				{ "Category", "SpiderNavGridBuilder" },
				{ "ModuleRelativePath", "Public/SpiderNavGridBuilder.h" },
				{ "ToolTip", "How far can be one trace line from other trace line near the point of intersection when checking possible neightbors. Multiplier of GridStepSize" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EgdeDeviationModificator = { UE4CodeGen_Private::EPropertyClass::Float, "EgdeDeviationModificator", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASpiderNavGridBuilder, EgdeDeviationModificator), METADATA_PARAMS(NewProp_EgdeDeviationModificator_MetaData, ARRAY_COUNT(NewProp_EgdeDeviationModificator_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceDistanceForEdgesModificator_MetaData[] = {
				{ "Category", "SpiderNavGridBuilder" },
				{ "ModuleRelativePath", "Public/SpiderNavGridBuilder.h" },
				{ "ToolTip", "How far to trace from each NavPoint to find intersection through egdes of possible neightbors. Multiplier of GridStepSize" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceDistanceForEdgesModificator = { UE4CodeGen_Private::EPropertyClass::Float, "TraceDistanceForEdgesModificator", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASpiderNavGridBuilder, TraceDistanceForEdgesModificator), METADATA_PARAMS(NewProp_TraceDistanceForEdgesModificator_MetaData, ARRAY_COUNT(NewProp_TraceDistanceForEdgesModificator_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectionSphereRadiusModificator_MetaData[] = {
				{ "Category", "SpiderNavGridBuilder" },
				{ "ModuleRelativePath", "Public/SpiderNavGridBuilder.h" },
				{ "ToolTip", "The radius of a sphere to find neighbors of each NavPoint. Multiplier of GridStepSize" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConnectionSphereRadiusModificator = { UE4CodeGen_Private::EPropertyClass::Float, "ConnectionSphereRadiusModificator", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASpiderNavGridBuilder, ConnectionSphereRadiusModificator), METADATA_PARAMS(NewProp_ConnectionSphereRadiusModificator_MetaData, ARRAY_COUNT(NewProp_ConnectionSphereRadiusModificator_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClosePointsFilterModificator_MetaData[] = {
				{ "Category", "SpiderNavGridBuilder" },
				{ "ModuleRelativePath", "Public/SpiderNavGridBuilder.h" },
				{ "ToolTip", "How close navigation points can be to each other. Multiplier of GridStepSize" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClosePointsFilterModificator = { UE4CodeGen_Private::EPropertyClass::Float, "ClosePointsFilterModificator", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASpiderNavGridBuilder, ClosePointsFilterModificator), METADATA_PARAMS(NewProp_ClosePointsFilterModificator_MetaData, ARRAY_COUNT(NewProp_ClosePointsFilterModificator_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceDistanceModificator_MetaData[] = {
				{ "Category", "SpiderNavGridBuilder" },
				{ "ModuleRelativePath", "Public/SpiderNavGridBuilder.h" },
				{ "ToolTip", "How far to trace from tracers. Multiplier of GridStepSize" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceDistanceModificator = { UE4CodeGen_Private::EPropertyClass::Float, "TraceDistanceModificator", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASpiderNavGridBuilder, TraceDistanceModificator), METADATA_PARAMS(NewProp_TraceDistanceModificator_MetaData, ARRAY_COUNT(NewProp_TraceDistanceModificator_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BounceNavDistance_MetaData[] = {
				{ "Category", "SpiderNavGridBuilder" },
				{ "ModuleRelativePath", "Public/SpiderNavGridBuilder.h" },
				{ "ToolTip", "How far put navigation point from a WorldStatic face" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BounceNavDistance = { UE4CodeGen_Private::EPropertyClass::Float, "BounceNavDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASpiderNavGridBuilder, BounceNavDistance), METADATA_PARAMS(NewProp_BounceNavDistance_MetaData, ARRAY_COUNT(NewProp_BounceNavDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoSaveGrid_MetaData[] = {
				{ "Category", "SpiderNavGridBuilder" },
				{ "ModuleRelativePath", "Public/SpiderNavGridBuilder.h" },
				{ "ToolTip", "Whether to save the navigation grid after rebuild" },
			};
#endif
			auto NewProp_bAutoSaveGrid_SetBit = [](void* Obj){ ((ASpiderNavGridBuilder*)Obj)->bAutoSaveGrid = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoSaveGrid = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoSaveGrid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ASpiderNavGridBuilder), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAutoSaveGrid_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAutoSaveGrid_MetaData, ARRAY_COUNT(NewProp_bAutoSaveGrid_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoRemoveTracers_MetaData[] = {
				{ "Category", "SpiderNavGridBuilder" },
				{ "ModuleRelativePath", "Public/SpiderNavGridBuilder.h" },
				{ "ToolTip", "For debug. If false then all tracers remain on the scene after grid rebuild" },
			};
#endif
			auto NewProp_bAutoRemoveTracers_SetBit = [](void* Obj){ ((ASpiderNavGridBuilder*)Obj)->bAutoRemoveTracers = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoRemoveTracers = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoRemoveTracers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ASpiderNavGridBuilder), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAutoRemoveTracers_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAutoRemoveTracers_MetaData, ARRAY_COUNT(NewProp_bAutoRemoveTracers_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseActorBlackList_MetaData[] = {
				{ "Category", "SpiderNavGridBuilder" },
				{ "ModuleRelativePath", "Public/SpiderNavGridBuilder.h" },
				{ "ToolTip", "Whether to use ActorsBlackList" },
			};
#endif
			auto NewProp_bUseActorBlackList_SetBit = [](void* Obj){ ((ASpiderNavGridBuilder*)Obj)->bUseActorBlackList = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseActorBlackList = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseActorBlackList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ASpiderNavGridBuilder), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseActorBlackList_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseActorBlackList_MetaData, ARRAY_COUNT(NewProp_bUseActorBlackList_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsBlackList_MetaData[] = {
				{ "Category", "SpiderNavGridBuilder" },
				{ "ModuleRelativePath", "Public/SpiderNavGridBuilder.h" },
				{ "ToolTip", "The list of actors which COULD NOT have navigation points on them" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsBlackList = { UE4CodeGen_Private::EPropertyClass::Array, "ActorsBlackList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASpiderNavGridBuilder, ActorsBlackList), METADATA_PARAMS(NewProp_ActorsBlackList_MetaData, ARRAY_COUNT(NewProp_ActorsBlackList_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsBlackList_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ActorsBlackList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseActorWhiteList_MetaData[] = {
				{ "Category", "SpiderNavGridBuilder" },
				{ "ModuleRelativePath", "Public/SpiderNavGridBuilder.h" },
				{ "ToolTip", "Whether to use ActorsWhiteList" },
			};
#endif
			auto NewProp_bUseActorWhiteList_SetBit = [](void* Obj){ ((ASpiderNavGridBuilder*)Obj)->bUseActorWhiteList = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseActorWhiteList = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseActorWhiteList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ASpiderNavGridBuilder), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseActorWhiteList_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseActorWhiteList_MetaData, ARRAY_COUNT(NewProp_bUseActorWhiteList_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsWhiteList_MetaData[] = {
				{ "Category", "SpiderNavGridBuilder" },
				{ "ModuleRelativePath", "Public/SpiderNavGridBuilder.h" },
				{ "ToolTip", "The list of actors which could have navigation points on them" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsWhiteList = { UE4CodeGen_Private::EPropertyClass::Array, "ActorsWhiteList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASpiderNavGridBuilder, ActorsWhiteList), METADATA_PARAMS(NewProp_ActorsWhiteList_MetaData, ARRAY_COUNT(NewProp_ActorsWhiteList_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsWhiteList_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ActorsWhiteList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridStepSize_MetaData[] = {
				{ "Category", "SpiderNavGridBuilder" },
				{ "ModuleRelativePath", "Public/SpiderNavGridBuilder.h" },
				{ "ToolTip", "The minimum distance between tracers to fill up scene" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GridStepSize = { UE4CodeGen_Private::EPropertyClass::Float, "GridStepSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASpiderNavGridBuilder, GridStepSize), METADATA_PARAMS(NewProp_GridStepSize_MetaData, ARRAY_COUNT(NewProp_GridStepSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavPointEdgeActorBP_MetaData[] = {
				{ "Category", "SpiderNavGridBuilder" },
				{ "ModuleRelativePath", "Public/SpiderNavGridBuilder.h" },
				{ "ToolTip", "For debug. Blueprint class which will be used to spawn Navigation Points on egdes when checking possible neightbors" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_NavPointEdgeActorBP = { UE4CodeGen_Private::EPropertyClass::Class, "NavPointEdgeActorBP", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000005, 1, nullptr, STRUCT_OFFSET(ASpiderNavGridBuilder, NavPointEdgeActorBP), Z_Construct_UClass_ASpiderNavPointEdge_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_NavPointEdgeActorBP_MetaData, ARRAY_COUNT(NewProp_NavPointEdgeActorBP_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavPointActorBP_MetaData[] = {
				{ "Category", "SpiderNavGridBuilder" },
				{ "ModuleRelativePath", "Public/SpiderNavGridBuilder.h" },
				{ "ToolTip", "For debug. Blueprint class which will be used to spawn Navigation Points" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_NavPointActorBP = { UE4CodeGen_Private::EPropertyClass::Class, "NavPointActorBP", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000005, 1, nullptr, STRUCT_OFFSET(ASpiderNavGridBuilder, NavPointActorBP), Z_Construct_UClass_ASpiderNavPoint_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_NavPointActorBP_MetaData, ARRAY_COUNT(NewProp_NavPointActorBP_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TracerActorBP_MetaData[] = {
				{ "Category", "SpiderNavGridBuilder" },
				{ "ModuleRelativePath", "Public/SpiderNavGridBuilder.h" },
				{ "ToolTip", "For debug. Blueprint class which will be used to spawn actors on scene in specified volume" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_TracerActorBP = { UE4CodeGen_Private::EPropertyClass::Class, "TracerActorBP", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000005, 1, nullptr, STRUCT_OFFSET(ASpiderNavGridBuilder, TracerActorBP), Z_Construct_UClass_ASpiderNavGridTracer_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_TracerActorBP_MetaData, ARRAY_COUNT(NewProp_TracerActorBP_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeBox_MetaData[] = {
				{ "Category", "SpiderNavGridBuilder" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/SpiderNavGridBuilder.h" },
				{ "ToolTip", "Volume where to build navigation" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VolumeBox = { UE4CodeGen_Private::EPropertyClass::Object, "VolumeBox", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(ASpiderNavGridBuilder, VolumeBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(NewProp_VolumeBox_MetaData, ARRAY_COUNT(NewProp_VolumeBox_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EgdeDeviationModificator,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TraceDistanceForEdgesModificator,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConnectionSphereRadiusModificator,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClosePointsFilterModificator,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TraceDistanceModificator,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BounceNavDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAutoSaveGrid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAutoRemoveTracers,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseActorBlackList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActorsBlackList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActorsBlackList_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseActorWhiteList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActorsWhiteList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActorsWhiteList_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GridStepSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NavPointEdgeActorBP,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NavPointActorBP,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TracerActorBP,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VolumeBox,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASpiderNavGridBuilder>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASpiderNavGridBuilder::StaticClass,
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
	IMPLEMENT_CLASS(ASpiderNavGridBuilder, 1796970176);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpiderNavGridBuilder(Z_Construct_UClass_ASpiderNavGridBuilder, &ASpiderNavGridBuilder::StaticClass, TEXT("/Script/SpiderNavigation"), TEXT("ASpiderNavGridBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpiderNavGridBuilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
