// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniInputLandscapeSplineActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniInputLandscapeSplineActor() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputActor();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputLandscapeSplineActor();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputLandscapeSplineActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UHoudiniInputLandscapeSplineActor
void UHoudiniInputLandscapeSplineActor::StaticRegisterNativesUHoudiniInputLandscapeSplineActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniInputLandscapeSplineActor);
UClass* Z_Construct_UClass_UHoudiniInputLandscapeSplineActor_NoRegister()
{
	return UHoudiniInputLandscapeSplineActor::StaticClass();
}
struct Z_Construct_UClass_UHoudiniInputLandscapeSplineActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HoudiniInputLandscapeSplineActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HoudiniInputLandscapeSplineActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputLandscapeSplineActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHoudiniInputLandscapeSplineActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniInputActor,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputLandscapeSplineActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputLandscapeSplineActor_Statics::ClassParams = {
	&UHoudiniInputLandscapeSplineActor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputLandscapeSplineActor_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniInputLandscapeSplineActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniInputLandscapeSplineActor()
{
	if (!Z_Registration_Info_UClass_UHoudiniInputLandscapeSplineActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInputLandscapeSplineActor.OuterSingleton, Z_Construct_UClass_UHoudiniInputLandscapeSplineActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniInputLandscapeSplineActor.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputLandscapeSplineActor>()
{
	return UHoudiniInputLandscapeSplineActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputLandscapeSplineActor);
UHoudiniInputLandscapeSplineActor::~UHoudiniInputLandscapeSplineActor() {}
// End Class UHoudiniInputLandscapeSplineActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputLandscapeSplineActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniInputLandscapeSplineActor, UHoudiniInputLandscapeSplineActor::StaticClass, TEXT("UHoudiniInputLandscapeSplineActor"), &Z_Registration_Info_UClass_UHoudiniInputLandscapeSplineActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInputLandscapeSplineActor), 2209990613U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputLandscapeSplineActor_h_2608993028(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputLandscapeSplineActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputLandscapeSplineActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
