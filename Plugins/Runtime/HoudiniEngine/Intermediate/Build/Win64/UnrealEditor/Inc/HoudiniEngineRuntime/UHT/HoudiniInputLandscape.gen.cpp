// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniInputLandscape.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniInputLandscape() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputActor();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputLandscape();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputLandscape_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UHoudiniInputLandscape
void UHoudiniInputLandscape::StaticRegisterNativesUHoudiniInputLandscape()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniInputLandscape);
UClass* Z_Construct_UClass_UHoudiniInputLandscape_NoRegister()
{
	return UHoudiniInputLandscape::StaticClass();
}
struct Z_Construct_UClass_UHoudiniInputLandscape_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HoudiniInputLandscape.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HoudiniInputLandscape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedNumLandscapeComponents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputLandscape" },
		{ "ModuleRelativePath", "Public/HoudiniInputLandscape.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CachedNumLandscapeComponents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputLandscape>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInputLandscape_Statics::NewProp_CachedNumLandscapeComponents = { "CachedNumLandscapeComponents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputLandscape, CachedNumLandscapeComponents), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedNumLandscapeComponents_MetaData), NewProp_CachedNumLandscapeComponents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInputLandscape_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputLandscape_Statics::NewProp_CachedNumLandscapeComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputLandscape_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniInputLandscape_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniInputActor,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputLandscape_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputLandscape_Statics::ClassParams = {
	&UHoudiniInputLandscape::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniInputLandscape_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputLandscape_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputLandscape_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniInputLandscape_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniInputLandscape()
{
	if (!Z_Registration_Info_UClass_UHoudiniInputLandscape.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInputLandscape.OuterSingleton, Z_Construct_UClass_UHoudiniInputLandscape_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniInputLandscape.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputLandscape>()
{
	return UHoudiniInputLandscape::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputLandscape);
UHoudiniInputLandscape::~UHoudiniInputLandscape() {}
// End Class UHoudiniInputLandscape

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputLandscape_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniInputLandscape, UHoudiniInputLandscape::StaticClass, TEXT("UHoudiniInputLandscape"), &Z_Registration_Info_UClass_UHoudiniInputLandscape, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInputLandscape), 3552347559U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputLandscape_h_3118456724(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputLandscape_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputLandscape_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
