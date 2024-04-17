// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AryaGame/Gladys.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGladys() {}
// Cross Module References
	ARYAGAME_API UClass* Z_Construct_UClass_AGladys();
	ARYAGAME_API UClass* Z_Construct_UClass_AGladys_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_AryaGame();
// End Cross Module References
	void AGladys::StaticRegisterNativesAGladys()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGladys);
	UClass* Z_Construct_UClass_AGladys_NoRegister()
	{
		return AGladys::StaticClass();
	}
	struct Z_Construct_UClass_AGladys_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGladys_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_AryaGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGladys_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGladys_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Gladys.h" },
		{ "ModuleRelativePath", "Gladys.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGladys_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGladys>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGladys_Statics::ClassParams = {
		&AGladys::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGladys_Statics::Class_MetaDataParams), Z_Construct_UClass_AGladys_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AGladys()
	{
		if (!Z_Registration_Info_UClass_AGladys.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGladys.OuterSingleton, Z_Construct_UClass_AGladys_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGladys.OuterSingleton;
	}
	template<> ARYAGAME_API UClass* StaticClass<AGladys>()
	{
		return AGladys::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGladys);
	AGladys::~AGladys() {}
	struct Z_CompiledInDeferFile_FID_Projet_AryaGame_AryaGame_Source_AryaGame_Gladys_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projet_AryaGame_AryaGame_Source_AryaGame_Gladys_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGladys, AGladys::StaticClass, TEXT("AGladys"), &Z_Registration_Info_UClass_AGladys, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGladys), 2844885731U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projet_AryaGame_AryaGame_Source_AryaGame_Gladys_h_433385873(TEXT("/Script/AryaGame"),
		Z_CompiledInDeferFile_FID_Projet_AryaGame_AryaGame_Source_AryaGame_Gladys_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projet_AryaGame_AryaGame_Source_AryaGame_Gladys_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
