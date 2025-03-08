// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "bomberman/bombermanGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodebombermanGameMode() {}

// Begin Cross Module References
BOMBERMAN_API UClass* Z_Construct_UClass_AbombermanGameMode();
BOMBERMAN_API UClass* Z_Construct_UClass_AbombermanGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_bomberman();
// End Cross Module References

// Begin Class AbombermanGameMode
void AbombermanGameMode::StaticRegisterNativesAbombermanGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AbombermanGameMode);
UClass* Z_Construct_UClass_AbombermanGameMode_NoRegister()
{
	return AbombermanGameMode::StaticClass();
}
struct Z_Construct_UClass_AbombermanGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "bombermanGameMode.h" },
		{ "ModuleRelativePath", "bombermanGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AbombermanGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AbombermanGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_bomberman,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AbombermanGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AbombermanGameMode_Statics::ClassParams = {
	&AbombermanGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AbombermanGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AbombermanGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AbombermanGameMode()
{
	if (!Z_Registration_Info_UClass_AbombermanGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AbombermanGameMode.OuterSingleton, Z_Construct_UClass_AbombermanGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AbombermanGameMode.OuterSingleton;
}
template<> BOMBERMAN_API UClass* StaticClass<AbombermanGameMode>()
{
	return AbombermanGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AbombermanGameMode);
AbombermanGameMode::~AbombermanGameMode() {}
// End Class AbombermanGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Walter_Vera_USFX_bomberman_Source_bomberman_bombermanGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AbombermanGameMode, AbombermanGameMode::StaticClass, TEXT("AbombermanGameMode"), &Z_Registration_Info_UClass_AbombermanGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AbombermanGameMode), 2951145159U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Walter_Vera_USFX_bomberman_Source_bomberman_bombermanGameMode_h_1986775767(TEXT("/Script/bomberman"),
	Z_CompiledInDeferFile_FID_Walter_Vera_USFX_bomberman_Source_bomberman_bombermanGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Walter_Vera_USFX_bomberman_Source_bomberman_bombermanGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
