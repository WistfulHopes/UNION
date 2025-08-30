// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniInputGeometryCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniInputGeometryCollection() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputGeometryCollection();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputGeometryCollection_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputObject();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UHoudiniInputGeometryCollection
void UHoudiniInputGeometryCollection::StaticRegisterNativesUHoudiniInputGeometryCollection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniInputGeometryCollection);
UClass* Z_Construct_UClass_UHoudiniInputGeometryCollection_NoRegister()
{
	return UHoudiniInputGeometryCollection::StaticClass();
}
struct Z_Construct_UClass_UHoudiniInputGeometryCollection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HoudiniInputGeometryCollection.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HoudiniInputGeometryCollection.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputGeometryCollection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHoudiniInputGeometryCollection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniInputObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputGeometryCollection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputGeometryCollection_Statics::ClassParams = {
	&UHoudiniInputGeometryCollection::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputGeometryCollection_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniInputGeometryCollection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniInputGeometryCollection()
{
	if (!Z_Registration_Info_UClass_UHoudiniInputGeometryCollection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInputGeometryCollection.OuterSingleton, Z_Construct_UClass_UHoudiniInputGeometryCollection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniInputGeometryCollection.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputGeometryCollection>()
{
	return UHoudiniInputGeometryCollection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputGeometryCollection);
UHoudiniInputGeometryCollection::~UHoudiniInputGeometryCollection() {}
// End Class UHoudiniInputGeometryCollection

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputGeometryCollection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniInputGeometryCollection, UHoudiniInputGeometryCollection::StaticClass, TEXT("UHoudiniInputGeometryCollection"), &Z_Registration_Info_UClass_UHoudiniInputGeometryCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInputGeometryCollection), 2571900739U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputGeometryCollection_h_3232311052(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputGeometryCollection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputGeometryCollection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
