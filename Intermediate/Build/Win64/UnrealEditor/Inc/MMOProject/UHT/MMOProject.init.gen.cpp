// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMOProject_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MMOProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MMOProject()
	{
		if (!Z_Registration_Info_UPackage__Script_MMOProject.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MMOProject",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x86D35B1D,
				0x55C1A438,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MMOProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MMOProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MMOProject(Z_Construct_UPackage__Script_MMOProject, TEXT("/Script/MMOProject"), Z_Registration_Info_UPackage__Script_MMOProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x86D35B1D, 0x55C1A438));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
