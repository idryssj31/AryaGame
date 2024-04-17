// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAryaGame_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AryaGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AryaGame()
	{
		if (!Z_Registration_Info_UPackage__Script_AryaGame.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AryaGame",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x6D1458B0,
				0xE60F9570,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AryaGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AryaGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AryaGame(Z_Construct_UPackage__Script_AryaGame, TEXT("/Script/AryaGame"), Z_Registration_Info_UPackage__Script_AryaGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x6D1458B0, 0xE60F9570));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
