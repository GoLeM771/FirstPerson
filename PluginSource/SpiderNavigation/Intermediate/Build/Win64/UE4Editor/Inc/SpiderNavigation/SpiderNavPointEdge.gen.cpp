// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SpiderNavPointEdge.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpiderNavPointEdge() {}
// Cross Module References
	SPIDERNAVIGATION_API UClass* Z_Construct_UClass_ASpiderNavPointEdge_NoRegister();
	SPIDERNAVIGATION_API UClass* Z_Construct_UClass_ASpiderNavPointEdge();
	SPIDERNAVIGATION_API UClass* Z_Construct_UClass_ASpiderNavPoint();
	UPackage* Z_Construct_UPackage__Script_SpiderNavigation();
// End Cross Module References
	void ASpiderNavPointEdge::StaticRegisterNativesASpiderNavPointEdge()
	{
	}
	UClass* Z_Construct_UClass_ASpiderNavPointEdge_NoRegister()
	{
		return ASpiderNavPointEdge::StaticClass();
	}
	UClass* Z_Construct_UClass_ASpiderNavPointEdge()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ASpiderNavPoint,
				(UObject* (*)())Z_Construct_UPackage__Script_SpiderNavigation,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "SpiderNavPointEdge.h" },
				{ "ModuleRelativePath", "Public/SpiderNavPointEdge.h" },
				{ "ToolTip", "Actor for navigation point on edge of objects. Using during grid building process." },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASpiderNavPointEdge>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASpiderNavPointEdge::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpiderNavPointEdge, 4174689310);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpiderNavPointEdge(Z_Construct_UClass_ASpiderNavPointEdge, &ASpiderNavPointEdge::StaticClass, TEXT("/Script/SpiderNavigation"), TEXT("ASpiderNavPointEdge"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpiderNavPointEdge);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
