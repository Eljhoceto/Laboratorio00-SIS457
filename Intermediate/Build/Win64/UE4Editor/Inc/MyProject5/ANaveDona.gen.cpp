// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject5/ANaveDona.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeANaveDona() {}
// Cross Module References
	MYPROJECT5_API UClass* Z_Construct_UClass_AANaveDona_NoRegister();
	MYPROJECT5_API UClass* Z_Construct_UClass_AANaveDona();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProject5();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AANaveDona::StaticRegisterNativesAANaveDona()
	{
	}
	UClass* Z_Construct_UClass_AANaveDona_NoRegister()
	{
		return AANaveDona::StaticClass();
	}
	struct Z_Construct_UClass_AANaveDona_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NaveMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NaveMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AANaveDona_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject5,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AANaveDona_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ANaveDona.h" },
		{ "ModuleRelativePath", "ANaveDona.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AANaveDona_Statics::NewProp_NaveMesh_MetaData[] = {
		{ "Category", "Nave" },
		{ "Comment", "// Propiedad visual\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ANaveDona.h" },
		{ "ToolTip", "Propiedad visual" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AANaveDona_Statics::NewProp_NaveMesh = { "NaveMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AANaveDona, NaveMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AANaveDona_Statics::NewProp_NaveMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AANaveDona_Statics::NewProp_NaveMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AANaveDona_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AANaveDona_Statics::NewProp_NaveMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AANaveDona_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AANaveDona>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AANaveDona_Statics::ClassParams = {
		&AANaveDona::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AANaveDona_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AANaveDona_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AANaveDona_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AANaveDona_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AANaveDona()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AANaveDona_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AANaveDona, 99311911);
	template<> MYPROJECT5_API UClass* StaticClass<AANaveDona>()
	{
		return AANaveDona::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AANaveDona(Z_Construct_UClass_AANaveDona, &AANaveDona::StaticClass, TEXT("/Script/MyProject5"), TEXT("AANaveDona"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AANaveDona);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
