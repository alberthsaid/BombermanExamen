// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_l01/BloqueVidrio.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueVidrio() {}
// Cross Module References
	BOMBERMAN_L01_API UClass* Z_Construct_UClass_ABloqueVidrio_NoRegister();
	BOMBERMAN_L01_API UClass* Z_Construct_UClass_ABloqueVidrio();
	BOMBERMAN_L01_API UClass* Z_Construct_UClass_ABloque();
	UPackage* Z_Construct_UPackage__Script_Bomberman_l01();
// End Cross Module References
	void ABloqueVidrio::StaticRegisterNativesABloqueVidrio()
	{
	}
	UClass* Z_Construct_UClass_ABloqueVidrio_NoRegister()
	{
		return ABloqueVidrio::StaticClass();
	}
	struct Z_Construct_UClass_ABloqueVidrio_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABloqueVidrio_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABloque,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_l01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloqueVidrio_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BloqueVidrio.h" },
		{ "ModuleRelativePath", "BloqueVidrio.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABloqueVidrio_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueVidrio>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABloqueVidrio_Statics::ClassParams = {
		&ABloqueVidrio::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABloqueVidrio_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueVidrio_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABloqueVidrio()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABloqueVidrio_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABloqueVidrio, 2221839410);
	template<> BOMBERMAN_L01_API UClass* StaticClass<ABloqueVidrio>()
	{
		return ABloqueVidrio::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABloqueVidrio(Z_Construct_UClass_ABloqueVidrio, &ABloqueVidrio::StaticClass, TEXT("/Script/Bomberman_l01"), TEXT("ABloqueVidrio"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueVidrio);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
