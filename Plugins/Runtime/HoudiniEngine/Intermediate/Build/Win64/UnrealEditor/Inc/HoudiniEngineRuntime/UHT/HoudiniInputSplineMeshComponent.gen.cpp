// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniInputSplineMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SplineMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniInputSplineMeshComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESplineMeshAxis();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSplineMeshParams();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputMeshComponent();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputSplineMeshComponent();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputSplineMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UHoudiniInputSplineMeshComponent
void UHoudiniInputSplineMeshComponent::StaticRegisterNativesUHoudiniInputSplineMeshComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniInputSplineMeshComponent);
UClass* Z_Construct_UClass_UHoudiniInputSplineMeshComponent_NoRegister()
{
	return UHoudiniInputSplineMeshComponent::StaticClass();
}
struct Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HoudiniInputSplineMeshComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HoudiniInputSplineMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshPackageGuid_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputSplineMeshComponent" },
		{ "ModuleRelativePath", "Public/HoudiniInputSplineMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputSplineMeshComponent" },
		{ "ModuleRelativePath", "Public/HoudiniInputSplineMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedForwardAxis_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputSplineMeshComponent" },
		{ "ModuleRelativePath", "Public/HoudiniInputSplineMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedSplineParams_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputSplineMeshComponent" },
		{ "ModuleRelativePath", "Public/HoudiniInputSplineMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedSplineUpDir_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputSplineMeshComponent" },
		{ "ModuleRelativePath", "Public/HoudiniInputSplineMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedSplineBoundaryMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputSplineMeshComponent" },
		{ "ModuleRelativePath", "Public/HoudiniInputSplineMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedSplineBoundaryMin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputSplineMeshComponent" },
		{ "ModuleRelativePath", "Public/HoudiniInputSplineMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedbSmoothInterpRollScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputSplineMeshComponent" },
		{ "ModuleRelativePath", "Public/HoudiniInputSplineMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshPackageGuid;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeneratedMesh;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CachedForwardAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedSplineParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedSplineUpDir;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CachedSplineBoundaryMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CachedSplineBoundaryMin;
	static void NewProp_CachedbSmoothInterpRollScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CachedbSmoothInterpRollScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputSplineMeshComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_MeshPackageGuid = { "MeshPackageGuid", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputSplineMeshComponent, MeshPackageGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshPackageGuid_MetaData), NewProp_MeshPackageGuid_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_GeneratedMesh = { "GeneratedMesh", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputSplineMeshComponent, GeneratedMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedMesh_MetaData), NewProp_GeneratedMesh_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_CachedForwardAxis = { "CachedForwardAxis", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputSplineMeshComponent, CachedForwardAxis), Z_Construct_UEnum_Engine_ESplineMeshAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedForwardAxis_MetaData), NewProp_CachedForwardAxis_MetaData) }; // 1838154449
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_CachedSplineParams = { "CachedSplineParams", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputSplineMeshComponent, CachedSplineParams), Z_Construct_UScriptStruct_FSplineMeshParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedSplineParams_MetaData), NewProp_CachedSplineParams_MetaData) }; // 1219778111
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_CachedSplineUpDir = { "CachedSplineUpDir", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputSplineMeshComponent, CachedSplineUpDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedSplineUpDir_MetaData), NewProp_CachedSplineUpDir_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_CachedSplineBoundaryMax = { "CachedSplineBoundaryMax", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputSplineMeshComponent, CachedSplineBoundaryMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedSplineBoundaryMax_MetaData), NewProp_CachedSplineBoundaryMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_CachedSplineBoundaryMin = { "CachedSplineBoundaryMin", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputSplineMeshComponent, CachedSplineBoundaryMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedSplineBoundaryMin_MetaData), NewProp_CachedSplineBoundaryMin_MetaData) };
void Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_CachedbSmoothInterpRollScale_SetBit(void* Obj)
{
	((UHoudiniInputSplineMeshComponent*)Obj)->CachedbSmoothInterpRollScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_CachedbSmoothInterpRollScale = { "CachedbSmoothInterpRollScale", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UHoudiniInputSplineMeshComponent), &Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_CachedbSmoothInterpRollScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedbSmoothInterpRollScale_MetaData), NewProp_CachedbSmoothInterpRollScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_MeshPackageGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_GeneratedMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_CachedForwardAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_CachedSplineParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_CachedSplineUpDir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_CachedSplineBoundaryMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_CachedSplineBoundaryMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_CachedbSmoothInterpRollScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniInputMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::ClassParams = {
	&UHoudiniInputSplineMeshComponent::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniInputSplineMeshComponent()
{
	if (!Z_Registration_Info_UClass_UHoudiniInputSplineMeshComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInputSplineMeshComponent.OuterSingleton, Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniInputSplineMeshComponent.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputSplineMeshComponent>()
{
	return UHoudiniInputSplineMeshComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputSplineMeshComponent);
UHoudiniInputSplineMeshComponent::~UHoudiniInputSplineMeshComponent() {}
// End Class UHoudiniInputSplineMeshComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputSplineMeshComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniInputSplineMeshComponent, UHoudiniInputSplineMeshComponent::StaticClass, TEXT("UHoudiniInputSplineMeshComponent"), &Z_Registration_Info_UClass_UHoudiniInputSplineMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInputSplineMeshComponent), 4191776003U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputSplineMeshComponent_h_2855258862(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputSplineMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputSplineMeshComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
