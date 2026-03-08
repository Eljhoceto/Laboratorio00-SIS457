// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT5_MyProject5Pawn_generated_h
#error "MyProject5Pawn.generated.h already included, missing '#pragma once' in MyProject5Pawn.h"
#endif
#define MYPROJECT5_MyProject5Pawn_generated_h

#define MyProject5_Source_MyProject5_MyProject5Pawn_h_11_SPARSE_DATA
#define MyProject5_Source_MyProject5_MyProject5Pawn_h_11_RPC_WRAPPERS
#define MyProject5_Source_MyProject5_MyProject5Pawn_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject5_Source_MyProject5_MyProject5Pawn_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyProject5Pawn(); \
	friend struct Z_Construct_UClass_AMyProject5Pawn_Statics; \
public: \
	DECLARE_CLASS(AMyProject5Pawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject5"), NO_API) \
	DECLARE_SERIALIZER(AMyProject5Pawn)


#define MyProject5_Source_MyProject5_MyProject5Pawn_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAMyProject5Pawn(); \
	friend struct Z_Construct_UClass_AMyProject5Pawn_Statics; \
public: \
	DECLARE_CLASS(AMyProject5Pawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject5"), NO_API) \
	DECLARE_SERIALIZER(AMyProject5Pawn)


#define MyProject5_Source_MyProject5_MyProject5Pawn_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyProject5Pawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyProject5Pawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProject5Pawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProject5Pawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProject5Pawn(AMyProject5Pawn&&); \
	NO_API AMyProject5Pawn(const AMyProject5Pawn&); \
public:


#define MyProject5_Source_MyProject5_MyProject5Pawn_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProject5Pawn(AMyProject5Pawn&&); \
	NO_API AMyProject5Pawn(const AMyProject5Pawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProject5Pawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProject5Pawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyProject5Pawn)


#define MyProject5_Source_MyProject5_MyProject5Pawn_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlaneMesh() { return STRUCT_OFFSET(AMyProject5Pawn, PlaneMesh); } \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(AMyProject5Pawn, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AMyProject5Pawn, Camera); } \
	FORCEINLINE static uint32 __PPO__Acceleration() { return STRUCT_OFFSET(AMyProject5Pawn, Acceleration); } \
	FORCEINLINE static uint32 __PPO__TurnSpeed() { return STRUCT_OFFSET(AMyProject5Pawn, TurnSpeed); } \
	FORCEINLINE static uint32 __PPO__MaxSpeed() { return STRUCT_OFFSET(AMyProject5Pawn, MaxSpeed); } \
	FORCEINLINE static uint32 __PPO__MinSpeed() { return STRUCT_OFFSET(AMyProject5Pawn, MinSpeed); }


#define MyProject5_Source_MyProject5_MyProject5Pawn_h_8_PROLOG
#define MyProject5_Source_MyProject5_MyProject5Pawn_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject5_Source_MyProject5_MyProject5Pawn_h_11_PRIVATE_PROPERTY_OFFSET \
	MyProject5_Source_MyProject5_MyProject5Pawn_h_11_SPARSE_DATA \
	MyProject5_Source_MyProject5_MyProject5Pawn_h_11_RPC_WRAPPERS \
	MyProject5_Source_MyProject5_MyProject5Pawn_h_11_INCLASS \
	MyProject5_Source_MyProject5_MyProject5Pawn_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject5_Source_MyProject5_MyProject5Pawn_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject5_Source_MyProject5_MyProject5Pawn_h_11_PRIVATE_PROPERTY_OFFSET \
	MyProject5_Source_MyProject5_MyProject5Pawn_h_11_SPARSE_DATA \
	MyProject5_Source_MyProject5_MyProject5Pawn_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject5_Source_MyProject5_MyProject5Pawn_h_11_INCLASS_NO_PURE_DECLS \
	MyProject5_Source_MyProject5_MyProject5Pawn_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT5_API UClass* StaticClass<class AMyProject5Pawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject5_Source_MyProject5_MyProject5Pawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
