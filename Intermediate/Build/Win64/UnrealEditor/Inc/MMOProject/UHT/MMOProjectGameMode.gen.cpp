// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MMOProject/MMOProjectGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMOProjectGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	MMOPROJECT_API UClass* Z_Construct_UClass_AMMOProjectGameMode();
	MMOPROJECT_API UClass* Z_Construct_UClass_AMMOProjectGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MMOProject();
// End Cross Module References
	void AMMOProjectGameMode::StaticRegisterNativesAMMOProjectGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMMOProjectGameMode);
	UClass* Z_Construct_UClass_AMMOProjectGameMode_NoRegister()
	{
		return AMMOProjectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMMOProjectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMMOProjectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MMOProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMMOProjectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MMOProjectGameMode.h" },
		{ "ModuleRelativePath", "MMOProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMMOProjectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMMOProjectGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMMOProjectGameMode_Statics::ClassParams = {
		&AMMOProjectGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMMOProjectGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMMOProjectGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMMOProjectGameMode()
	{
		if (!Z_Registration_Info_UClass_AMMOProjectGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMMOProjectGameMode.OuterSingleton, Z_Construct_UClass_AMMOProjectGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMMOProjectGameMode.OuterSingleton;
	}
	template<> MMOPROJECT_API UClass* StaticClass<AMMOProjectGameMode>()
	{
		return AMMOProjectGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMMOProjectGameMode);
	AMMOProjectGameMode::~AMMOProjectGameMode() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_MMOProject_Source_MMOProject_MMOProjectGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_MMOProject_Source_MMOProject_MMOProjectGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMMOProjectGameMode, AMMOProjectGameMode::StaticClass, TEXT("AMMOProjectGameMode"), &Z_Registration_Info_UClass_AMMOProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMMOProjectGameMode), 4026625267U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_MMOProject_Source_MMOProject_MMOProjectGameMode_h_3383037284(TEXT("/Script/MMOProject"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_MMOProject_Source_MMOProject_MMOProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_MMOProject_Source_MMOProject_MMOProjectGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
