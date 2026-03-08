// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject5/MyProject5GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyProject5GameMode() {}
// Cross Module References
	MYPROJECT5_API UClass* Z_Construct_UClass_AMyProject5GameMode_NoRegister();
	MYPROJECT5_API UClass* Z_Construct_UClass_AMyProject5GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MyProject5();
// End Cross Module References
	void AMyProject5GameMode::StaticRegisterNativesAMyProject5GameMode()
	{
	}
	UClass* Z_Construct_UClass_AMyProject5GameMode_NoRegister()
	{
		return AMyProject5GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMyProject5GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyProject5GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject5,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProject5GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MyProject5GameMode.h" },
		{ "ModuleRelativePath", "MyProject5GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyProject5GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyProject5GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyProject5GameMode_Statics::ClassParams = {
		&AMyProject5GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMyProject5GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProject5GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyProject5GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyProject5GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyProject5GameMode, 2402242518);
	template<> MYPROJECT5_API UClass* StaticClass<AMyProject5GameMode>()
	{
		return AMyProject5GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyProject5GameMode(Z_Construct_UClass_AMyProject5GameMode, &AMyProject5GameMode::StaticClass, TEXT("/Script/MyProject5"), TEXT("AMyProject5GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyProject5GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
