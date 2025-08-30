// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniInputStaticMesh.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniInputStaticMesh() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputObject();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputStaticMesh();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputStaticMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UHoudiniInputStaticMesh
void UHoudiniInputStaticMesh::StaticRegisterNativesUHoudiniInputStaticMesh()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniInputStaticMesh);
UClass* Z_Construct_UClass_UHoudiniInputStaticMesh_NoRegister()
{
	return UHoudiniInputStaticMesh::StaticClass();
}
struct Z_Construct_UClass_UHoudiniInputStaticMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HoudiniInputStaticMesh.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HoudiniInputStaticMesh.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputStaticMesh>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHoudiniInputStaticMesh_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniInputObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputStaticMesh_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputStaticMesh_Statics::ClassParams = {
	&UHoudiniInputStaticMesh::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputStaticMesh_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniInputStaticMesh_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniInputStaticMesh()
{
	if (!Z_Registration_Info_UClass_UHoudiniInputStaticMesh.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInputStaticMesh.OuterSingleton, Z_Construct_UClass_UHoudiniInputStaticMesh_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniInputStaticMesh.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputStaticMesh>()
{
	return UHoudiniInputStaticMesh::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputStaticMesh);
UHoudiniInputStaticMesh::~UHoudiniInputStaticMesh() {}
// End Class UHoudiniInputStaticMesh

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputStaticMesh_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniInputStaticMesh, UHoudiniInputStaticMesh::StaticClass, TEXT("UHoudiniInputStaticMesh"), &Z_Registration_Info_UClass_UHoudiniInputStaticMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInputStaticMesh), 2864117298U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputStaticMesh_h_2051157954(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputStaticMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputStaticMesh_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
