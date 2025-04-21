// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_l01/BloqueElectrico.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueElectrico() {}
// Cross Module References
	BOMBERMAN_L01_API UClass* Z_Construct_UClass_ABloqueElectrico_NoRegister();
	BOMBERMAN_L01_API UClass* Z_Construct_UClass_ABloqueElectrico();
	BOMBERMAN_L01_API UClass* Z_Construct_UClass_ABloque();
	UPackage* Z_Construct_UPackage__Script_Bomberman_l01();
// End Cross Module References
	void ABloqueElectrico::StaticRegisterNativesABloqueElectrico()
	{
	}
	UClass* Z_Construct_UClass_ABloqueElectrico_NoRegister()
	{
		return ABloqueElectrico::StaticClass();
	}
	struct Z_Construct_UClass_ABloqueElectrico_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABloqueElectrico_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABloque,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_l01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloqueElectrico_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BloqueElectrico.h" },
		{ "ModuleRelativePath", "BloqueElectrico.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABloqueElectrico_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueElectrico>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABloqueElectrico_Statics::ClassParams = {
		&ABloqueElectrico::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABloqueElectrico_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueElectrico_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABloqueElectrico()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABloqueElectrico_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABloqueElectrico, 3255700262);
	template<> BOMBERMAN_L01_API UClass* StaticClass<ABloqueElectrico>()
	{
		return ABloqueElectrico::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABloqueElectrico(Z_Construct_UClass_ABloqueElectrico, &ABloqueElectrico::StaticClass, TEXT("/Script/Bomberman_l01"), TEXT("ABloqueElectrico"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueElectrico);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
