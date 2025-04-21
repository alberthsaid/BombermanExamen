// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_l01/BloqueAgua.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueAgua() {}
// Cross Module References
	BOMBERMAN_L01_API UClass* Z_Construct_UClass_ABloqueAgua_NoRegister();
	BOMBERMAN_L01_API UClass* Z_Construct_UClass_ABloqueAgua();
	BOMBERMAN_L01_API UClass* Z_Construct_UClass_ABloque();
	UPackage* Z_Construct_UPackage__Script_Bomberman_l01();
// End Cross Module References
	void ABloqueAgua::StaticRegisterNativesABloqueAgua()
	{
	}
	UClass* Z_Construct_UClass_ABloqueAgua_NoRegister()
	{
		return ABloqueAgua::StaticClass();
	}
	struct Z_Construct_UClass_ABloqueAgua_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABloqueAgua_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABloque,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_l01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloqueAgua_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BloqueAgua.h" },
		{ "ModuleRelativePath", "BloqueAgua.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABloqueAgua_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueAgua>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABloqueAgua_Statics::ClassParams = {
		&ABloqueAgua::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABloqueAgua_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueAgua_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABloqueAgua()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABloqueAgua_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABloqueAgua, 3375633679);
	template<> BOMBERMAN_L01_API UClass* StaticClass<ABloqueAgua>()
	{
		return ABloqueAgua::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABloqueAgua(Z_Construct_UClass_ABloqueAgua, &ABloqueAgua::StaticClass, TEXT("/Script/Bomberman_l01"), TEXT("ABloqueAgua"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueAgua);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
