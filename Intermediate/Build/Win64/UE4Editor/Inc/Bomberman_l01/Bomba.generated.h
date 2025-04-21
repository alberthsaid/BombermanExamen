// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef BOMBERMAN_L01_Bomba_generated_h
#error "Bomba.generated.h already included, missing '#pragma once' in Bomba.h"
#endif
#define BOMBERMAN_L01_Bomba_generated_h

#define Bomberman_l01_Source_Bomberman_l01_Bomba_h_8_DELEGATE \
struct _Script_Bomberman_l01_eventOnExplota_Parms \
{ \
	FVector PosicionExplosion; \
}; \
static inline void FOnExplota_DelegateWrapper(const FMulticastScriptDelegate& OnExplota, FVector PosicionExplosion) \
{ \
	_Script_Bomberman_l01_eventOnExplota_Parms Parms; \
	Parms.PosicionExplosion=PosicionExplosion; \
	OnExplota.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Bomberman_l01_Source_Bomberman_l01_Bomba_h_12_SPARSE_DATA
#define Bomberman_l01_Source_Bomberman_l01_Bomba_h_12_RPC_WRAPPERS
#define Bomberman_l01_Source_Bomberman_l01_Bomba_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Bomberman_l01_Source_Bomberman_l01_Bomba_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABomba(); \
	friend struct Z_Construct_UClass_ABomba_Statics; \
public: \
	DECLARE_CLASS(ABomba, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bomberman_l01"), NO_API) \
	DECLARE_SERIALIZER(ABomba)


#define Bomberman_l01_Source_Bomberman_l01_Bomba_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABomba(); \
	friend struct Z_Construct_UClass_ABomba_Statics; \
public: \
	DECLARE_CLASS(ABomba, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bomberman_l01"), NO_API) \
	DECLARE_SERIALIZER(ABomba)


#define Bomberman_l01_Source_Bomberman_l01_Bomba_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABomba(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABomba) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABomba); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABomba); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABomba(ABomba&&); \
	NO_API ABomba(const ABomba&); \
public:


#define Bomberman_l01_Source_Bomberman_l01_Bomba_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABomba(ABomba&&); \
	NO_API ABomba(const ABomba&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABomba); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABomba); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABomba)


#define Bomberman_l01_Source_Bomberman_l01_Bomba_h_12_PRIVATE_PROPERTY_OFFSET
#define Bomberman_l01_Source_Bomberman_l01_Bomba_h_9_PROLOG
#define Bomberman_l01_Source_Bomberman_l01_Bomba_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bomberman_l01_Source_Bomberman_l01_Bomba_h_12_PRIVATE_PROPERTY_OFFSET \
	Bomberman_l01_Source_Bomberman_l01_Bomba_h_12_SPARSE_DATA \
	Bomberman_l01_Source_Bomberman_l01_Bomba_h_12_RPC_WRAPPERS \
	Bomberman_l01_Source_Bomberman_l01_Bomba_h_12_INCLASS \
	Bomberman_l01_Source_Bomberman_l01_Bomba_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Bomberman_l01_Source_Bomberman_l01_Bomba_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bomberman_l01_Source_Bomberman_l01_Bomba_h_12_PRIVATE_PROPERTY_OFFSET \
	Bomberman_l01_Source_Bomberman_l01_Bomba_h_12_SPARSE_DATA \
	Bomberman_l01_Source_Bomberman_l01_Bomba_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Bomberman_l01_Source_Bomberman_l01_Bomba_h_12_INCLASS_NO_PURE_DECLS \
	Bomberman_l01_Source_Bomberman_l01_Bomba_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMAN_L01_API UClass* StaticClass<class ABomba>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Bomberman_l01_Source_Bomberman_l01_Bomba_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
