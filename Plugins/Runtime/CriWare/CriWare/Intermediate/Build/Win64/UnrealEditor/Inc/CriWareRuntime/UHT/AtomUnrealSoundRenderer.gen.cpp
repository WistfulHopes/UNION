// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomUnrealSoundRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomUnrealSoundRenderer() {}

// Begin Cross Module References
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomUnrealSoundRenderer();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomUnrealSoundRenderer_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundWaveProcedural();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Class UAtomUnrealSoundRenderer
void UAtomUnrealSoundRenderer::StaticRegisterNativesUAtomUnrealSoundRenderer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomUnrealSoundRenderer);
UClass* Z_Construct_UClass_UAtomUnrealSoundRenderer_NoRegister()
{
	return UAtomUnrealSoundRenderer::StaticClass();
}
struct Z_Construct_UClass_UAtomUnrealSoundRenderer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "AtomUnrealSoundRenderer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AtomUnrealSoundRenderer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomUnrealSoundRenderer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAtomUnrealSoundRenderer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundWaveProcedural,
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAtomUnrealSoundRenderer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomUnrealSoundRenderer_Statics::ClassParams = {
	&UAtomUnrealSoundRenderer::StaticClass,
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
	0x009010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAtomUnrealSoundRenderer_Statics::Class_MetaDataParams), Z_Construct_UClass_UAtomUnrealSoundRenderer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAtomUnrealSoundRenderer()
{
	if (!Z_Registration_Info_UClass_UAtomUnrealSoundRenderer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomUnrealSoundRenderer.OuterSingleton, Z_Construct_UClass_UAtomUnrealSoundRenderer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAtomUnrealSoundRenderer.OuterSingleton;
}
template<> CRIWARERUNTIME_API UClass* StaticClass<UAtomUnrealSoundRenderer>()
{
	return UAtomUnrealSoundRenderer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomUnrealSoundRenderer);
UAtomUnrealSoundRenderer::~UAtomUnrealSoundRenderer() {}
// End Class UAtomUnrealSoundRenderer

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomUnrealSoundRenderer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAtomUnrealSoundRenderer, UAtomUnrealSoundRenderer::StaticClass, TEXT("UAtomUnrealSoundRenderer"), &Z_Registration_Info_UClass_UAtomUnrealSoundRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomUnrealSoundRenderer), 4110813739U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomUnrealSoundRenderer_h_1565859596(TEXT("/Script/CriWareRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomUnrealSoundRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomUnrealSoundRenderer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
