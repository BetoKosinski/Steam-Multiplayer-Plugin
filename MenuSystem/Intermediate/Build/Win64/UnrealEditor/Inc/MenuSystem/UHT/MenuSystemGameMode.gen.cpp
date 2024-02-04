// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MenuSystem/MenuSystemGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuSystemGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	MENUSYSTEM_API UClass* Z_Construct_UClass_AMenuSystemGameMode();
	MENUSYSTEM_API UClass* Z_Construct_UClass_AMenuSystemGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MenuSystem();
// End Cross Module References
	void AMenuSystemGameMode::StaticRegisterNativesAMenuSystemGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMenuSystemGameMode);
	UClass* Z_Construct_UClass_AMenuSystemGameMode_NoRegister()
	{
		return AMenuSystemGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMenuSystemGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMenuSystemGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MenuSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMenuSystemGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MenuSystemGameMode.h" },
		{ "ModuleRelativePath", "MenuSystemGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMenuSystemGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMenuSystemGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMenuSystemGameMode_Statics::ClassParams = {
		&AMenuSystemGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMenuSystemGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMenuSystemGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMenuSystemGameMode()
	{
		if (!Z_Registration_Info_UClass_AMenuSystemGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMenuSystemGameMode.OuterSingleton, Z_Construct_UClass_AMenuSystemGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMenuSystemGameMode.OuterSingleton;
	}
	template<> MENUSYSTEM_API UClass* StaticClass<AMenuSystemGameMode>()
	{
		return AMenuSystemGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMenuSystemGameMode);
	AMenuSystemGameMode::~AMenuSystemGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_luisi_OneDrive_Documentos_Unreal_Projects_MenuSystem_Source_MenuSystem_MenuSystemGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_luisi_OneDrive_Documentos_Unreal_Projects_MenuSystem_Source_MenuSystem_MenuSystemGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMenuSystemGameMode, AMenuSystemGameMode::StaticClass, TEXT("AMenuSystemGameMode"), &Z_Registration_Info_UClass_AMenuSystemGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMenuSystemGameMode), 3887223154U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_luisi_OneDrive_Documentos_Unreal_Projects_MenuSystem_Source_MenuSystem_MenuSystemGameMode_h_632174117(TEXT("/Script/MenuSystem"),
		Z_CompiledInDeferFile_FID_Users_luisi_OneDrive_Documentos_Unreal_Projects_MenuSystem_Source_MenuSystem_MenuSystemGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_luisi_OneDrive_Documentos_Unreal_Projects_MenuSystem_Source_MenuSystem_MenuSystemGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
