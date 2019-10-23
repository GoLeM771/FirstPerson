// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpiderNavigation/Public/SpiderNavPointEdge.h"
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
	struct Z_Construct_UClass_ASpiderNavPointEdge_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpiderNavPointEdge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASpiderNavPoint,
		(UObject* (*)())Z_Construct_UPackage__Script_SpiderNavigation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpiderNavPointEdge_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpiderNavPointEdge.h" },
		{ "ModuleRelativePath", "Public/SpiderNavPointEdge.h" },
		{ "ToolTip", "Actor for navigation point on edge of objects. Using during grid building process." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpiderNavPointEdge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpiderNavPointEdge>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpiderNavPointEdge_Statics::ClassParams = {
		&ASpiderNavPointEdge::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASpiderNavPointEdge_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASpiderNavPointEdge_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpiderNavPointEdge()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpiderNavPointEdge_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpiderNavPointEdge, 1571197681);
	template<> SPIDERNAVIGATION_API UClass* StaticClass<ASpiderNavPointEdge>()
	{
		return ASpiderNavPointEdge::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpiderNavPointEdge(Z_Construct_UClass_ASpiderNavPointEdge, &ASpiderNavPointEdge::StaticClass, TEXT("/Script/SpiderNavigation"), TEXT("ASpiderNavPointEdge"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpiderNavPointEdge);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
