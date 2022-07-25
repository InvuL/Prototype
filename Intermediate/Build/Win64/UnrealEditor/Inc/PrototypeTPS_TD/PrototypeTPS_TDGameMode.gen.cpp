// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrototypeTPS_TD/PrototypeTPS_TDGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrototypeTPS_TDGameMode() {}
// Cross Module References
	PROTOTYPETPS_TD_API UClass* Z_Construct_UClass_APrototypeTPS_TDGameMode_NoRegister();
	PROTOTYPETPS_TD_API UClass* Z_Construct_UClass_APrototypeTPS_TDGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PrototypeTPS_TD();
// End Cross Module References
	void APrototypeTPS_TDGameMode::StaticRegisterNativesAPrototypeTPS_TDGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APrototypeTPS_TDGameMode);
	UClass* Z_Construct_UClass_APrototypeTPS_TDGameMode_NoRegister()
	{
		return APrototypeTPS_TDGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APrototypeTPS_TDGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APrototypeTPS_TDGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PrototypeTPS_TD,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrototypeTPS_TDGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PrototypeTPS_TDGameMode.h" },
		{ "ModuleRelativePath", "PrototypeTPS_TDGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APrototypeTPS_TDGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APrototypeTPS_TDGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APrototypeTPS_TDGameMode_Statics::ClassParams = {
		&APrototypeTPS_TDGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APrototypeTPS_TDGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APrototypeTPS_TDGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APrototypeTPS_TDGameMode()
	{
		if (!Z_Registration_Info_UClass_APrototypeTPS_TDGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APrototypeTPS_TDGameMode.OuterSingleton, Z_Construct_UClass_APrototypeTPS_TDGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APrototypeTPS_TDGameMode.OuterSingleton;
	}
	template<> PROTOTYPETPS_TD_API UClass* StaticClass<APrototypeTPS_TDGameMode>()
	{
		return APrototypeTPS_TDGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APrototypeTPS_TDGameMode);
	struct Z_CompiledInDeferFile_FID_PrototypeTPS_TD_Source_PrototypeTPS_TD_PrototypeTPS_TDGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeTPS_TD_Source_PrototypeTPS_TD_PrototypeTPS_TDGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APrototypeTPS_TDGameMode, APrototypeTPS_TDGameMode::StaticClass, TEXT("APrototypeTPS_TDGameMode"), &Z_Registration_Info_UClass_APrototypeTPS_TDGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APrototypeTPS_TDGameMode), 4200662705U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeTPS_TD_Source_PrototypeTPS_TD_PrototypeTPS_TDGameMode_h_3678704402(TEXT("/Script/PrototypeTPS_TD"),
		Z_CompiledInDeferFile_FID_PrototypeTPS_TD_Source_PrototypeTPS_TD_PrototypeTPS_TDGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PrototypeTPS_TD_Source_PrototypeTPS_TD_PrototypeTPS_TDGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
