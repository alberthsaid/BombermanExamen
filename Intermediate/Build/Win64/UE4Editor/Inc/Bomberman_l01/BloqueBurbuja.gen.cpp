// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_l01/BloqueBurbuja.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueBurbuja() {}
// Cross Module References
	BOMBERMAN_L01_API UClass* Z_Construct_UClass_ABloqueBurbuja_NoRegister();
	BOMBERMAN_L01_API UClass* Z_Construct_UClass_ABloqueBurbuja();
	BOMBERMAN_L01_API UClass* Z_Construct_UClass_ABloque();
	UPackage* Z_Construct_UPackage__Script_Bomberman_l01();
// End Cross Module References
	void ABloqueBurbuja::StaticRegisterNativesABloqueBurbuja()
	{
	}
	UClass* Z_Construct_UClass_ABloqueBurbuja_NoRegister()
	{
		return ABloqueBurbuja::StaticClass();
	}
	struct Z_Construct_UClass_ABloqueBurbuja_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABloqueBurbuja_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABloque,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_l01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloqueBurbuja_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BloqueBurbuja.h" },
		{ "ModuleRelativePath", "BloqueBurbuja.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABloqueBurbuja_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueBurbuja>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABloqueBurbuja_Statics::ClassParams = {
		&ABloqueBurbuja::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABloqueBurbuja_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueBurbuja_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABloqueBurbuja()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABloqueBurbuja_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABloqueBurbuja, 3643655079);
	template<> BOMBERMAN_L01_API UClass* StaticClass<ABloqueBurbuja>()
	{
		return ABloqueBurbuja::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABloqueBurbuja(Z_Construct_UClass_ABloqueBurbuja, &ABloqueBurbuja::StaticClass, TEXT("/Script/Bomberman_l01"), TEXT("ABloqueBurbuja"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueBurbuja);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
