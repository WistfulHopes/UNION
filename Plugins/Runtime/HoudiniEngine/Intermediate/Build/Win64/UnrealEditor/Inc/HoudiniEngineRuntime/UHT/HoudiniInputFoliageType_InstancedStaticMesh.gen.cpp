// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniInputFoliageType_InstancedStaticMesh.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniInputFoliageType_InstancedStaticMesh() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputFoliageType_InstancedStaticMesh();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputFoliageType_InstancedStaticMesh_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputStaticMesh();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UHoudiniInputFoliageType_InstancedStaticMesh
void UHoudiniInputFoliageType_InstancedStaticMesh::StaticRegisterNativesUHoudiniInputFoliageType_InstancedStaticMesh()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniInputFoliageType_InstancedStaticMesh);
UClass* Z_Construct_UClass_UHoudiniInputFoliageType_InstancedStaticMesh_NoRegister()
{
	return UHoudiniInputFoliageType_InstancedStaticMesh::StaticClass();
}
struct Z_Construct_UClass_UHoudiniInputFoliageType_InstancedStaticMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HoudiniInputFoliageType_InstancedStaticMesh.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HoudiniInputFoliageType_InstancedStaticMesh.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputFoliageType_InstancedStaticMesh>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHoudiniInputFoliageType_InstancedStaticMesh_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniInputStaticMesh,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputFoliageType_InstancedStaticMesh_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputFoliageType_InstancedStaticMesh_Statics::ClassParams = {
	&UHoudiniInputFoliageType_InstancedStaticMesh::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputFoliageType_InstancedStaticMesh_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniInputFoliageType_InstancedStaticMesh_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniInputFoliageType_InstancedStaticMesh()
{
	if (!Z_Registration_Info_UClass_UHoudiniInputFoliageType_InstancedStaticMesh.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInputFoliageType_InstancedStaticMesh.OuterSingleton, Z_Construct_UClass_UHoudiniInputFoliageType_InstancedStaticMesh_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniInputFoliageType_InstancedStaticMesh.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputFoliageType_InstancedStaticMesh>()
{
	return UHoudiniInputFoliageType_InstancedStaticMesh::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputFoliageType_InstancedStaticMesh);
UHoudiniInputFoliageType_InstancedStaticMesh::~UHoudiniInputFoliageType_InstancedStaticMesh() {}
// End Class UHoudiniInputFoliageType_InstancedStaticMesh

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputFoliageType_InstancedStaticMesh_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniInputFoliageType_InstancedStaticMesh, UHoudiniInputFoliageType_InstancedStaticMesh::StaticClass, TEXT("UHoudiniInputFoliageType_InstancedStaticMesh"), &Z_Registration_Info_UClass_UHoudiniInputFoliageType_InstancedStaticMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInputFoliageType_InstancedStaticMesh), 152198251U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputFoliageType_InstancedStaticMesh_h_2252205904(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputFoliageType_InstancedStaticMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputFoliageType_InstancedStaticMesh_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
