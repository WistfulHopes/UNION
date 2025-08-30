// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniStaticMeshGenerationProperties.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniStaticMeshGenerationProperties() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWalkableSlopeOverride();
FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType_InstancedStaticMesh_NoRegister();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties();
PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin ScriptStruct FHoudiniStaticMeshGenerationProperties
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniStaticMeshGenerationProperties;
class UScriptStruct* FHoudiniStaticMeshGenerationProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniStaticMeshGenerationProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniStaticMeshGenerationProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniStaticMeshGenerationProperties"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniStaticMeshGenerationProperties.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniStaticMeshGenerationProperties>()
{
	return FHoudiniStaticMeshGenerationProperties::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HoudiniStaticMeshGenerationProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGeneratedDoubleSidedGeometry_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniStaticMeshGenerationProperties" },
		{ "ModuleRelativePath", "Public/HoudiniStaticMeshGenerationProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedPhysMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniStaticMeshGenerationProperties" },
		{ "ModuleRelativePath", "Public/HoudiniStaticMeshGenerationProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBodyInstance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniStaticMeshGenerationProperties" },
		{ "ModuleRelativePath", "Public/HoudiniStaticMeshGenerationProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedCollisionTraceFlag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniStaticMeshGenerationProperties" },
		{ "ModuleRelativePath", "Public/HoudiniStaticMeshGenerationProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedLightMapResolution_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniStaticMeshGenerationProperties" },
		{ "ModuleRelativePath", "Public/HoudiniStaticMeshGenerationProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedWalkableSlopeOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniStaticMeshGenerationProperties" },
		{ "ModuleRelativePath", "Public/HoudiniStaticMeshGenerationProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedLightMapCoordinateIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniStaticMeshGenerationProperties" },
		{ "ModuleRelativePath", "Public/HoudiniStaticMeshGenerationProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGeneratedUseMaximumStreamingTexelRatio_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniStaticMeshGenerationProperties" },
		{ "ModuleRelativePath", "Public/HoudiniStaticMeshGenerationProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedStreamingDistanceMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniStaticMeshGenerationProperties" },
		{ "ModuleRelativePath", "Public/HoudiniStaticMeshGenerationProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedFoliageDefaultSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniStaticMeshGenerationProperties" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniStaticMeshGenerationProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedAssetUserData_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniStaticMeshGenerationProperties" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniStaticMeshGenerationProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedAssetUserData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniStaticMeshGenerationProperties" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniStaticMeshGenerationProperties.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bGeneratedDoubleSidedGeometry_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGeneratedDoubleSidedGeometry;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeneratedPhysMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultBodyInstance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GeneratedCollisionTraceFlag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GeneratedLightMapResolution;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeneratedWalkableSlopeOverride;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GeneratedLightMapCoordinateIndex;
	static void NewProp_bGeneratedUseMaximumStreamingTexelRatio_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGeneratedUseMaximumStreamingTexelRatio;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GeneratedStreamingDistanceMultiplier;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeneratedFoliageDefaultSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeneratedAssetUserData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GeneratedAssetUserData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniStaticMeshGenerationProperties>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_bGeneratedDoubleSidedGeometry_SetBit(void* Obj)
{
	((FHoudiniStaticMeshGenerationProperties*)Obj)->bGeneratedDoubleSidedGeometry = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_bGeneratedDoubleSidedGeometry = { "bGeneratedDoubleSidedGeometry", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FHoudiniStaticMeshGenerationProperties), &Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_bGeneratedDoubleSidedGeometry_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGeneratedDoubleSidedGeometry_MetaData), NewProp_bGeneratedDoubleSidedGeometry_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedPhysMaterial = { "GeneratedPhysMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniStaticMeshGenerationProperties, GeneratedPhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedPhysMaterial_MetaData), NewProp_GeneratedPhysMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_DefaultBodyInstance = { "DefaultBodyInstance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniStaticMeshGenerationProperties, DefaultBodyInstance), Z_Construct_UScriptStruct_FBodyInstance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultBodyInstance_MetaData), NewProp_DefaultBodyInstance_MetaData) }; // 3706165537
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedCollisionTraceFlag = { "GeneratedCollisionTraceFlag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniStaticMeshGenerationProperties, GeneratedCollisionTraceFlag), Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedCollisionTraceFlag_MetaData), NewProp_GeneratedCollisionTraceFlag_MetaData) }; // 4042370968
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedLightMapResolution = { "GeneratedLightMapResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniStaticMeshGenerationProperties, GeneratedLightMapResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedLightMapResolution_MetaData), NewProp_GeneratedLightMapResolution_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedWalkableSlopeOverride = { "GeneratedWalkableSlopeOverride", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniStaticMeshGenerationProperties, GeneratedWalkableSlopeOverride), Z_Construct_UScriptStruct_FWalkableSlopeOverride, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedWalkableSlopeOverride_MetaData), NewProp_GeneratedWalkableSlopeOverride_MetaData) }; // 4238734711
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedLightMapCoordinateIndex = { "GeneratedLightMapCoordinateIndex", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniStaticMeshGenerationProperties, GeneratedLightMapCoordinateIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedLightMapCoordinateIndex_MetaData), NewProp_GeneratedLightMapCoordinateIndex_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_bGeneratedUseMaximumStreamingTexelRatio_SetBit(void* Obj)
{
	((FHoudiniStaticMeshGenerationProperties*)Obj)->bGeneratedUseMaximumStreamingTexelRatio = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_bGeneratedUseMaximumStreamingTexelRatio = { "bGeneratedUseMaximumStreamingTexelRatio", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FHoudiniStaticMeshGenerationProperties), &Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_bGeneratedUseMaximumStreamingTexelRatio_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGeneratedUseMaximumStreamingTexelRatio_MetaData), NewProp_bGeneratedUseMaximumStreamingTexelRatio_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedStreamingDistanceMultiplier = { "GeneratedStreamingDistanceMultiplier", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniStaticMeshGenerationProperties, GeneratedStreamingDistanceMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedStreamingDistanceMultiplier_MetaData), NewProp_GeneratedStreamingDistanceMultiplier_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedFoliageDefaultSettings = { "GeneratedFoliageDefaultSettings", nullptr, (EPropertyFlags)0x001204000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniStaticMeshGenerationProperties, GeneratedFoliageDefaultSettings), Z_Construct_UClass_UFoliageType_InstancedStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedFoliageDefaultSettings_MetaData), NewProp_GeneratedFoliageDefaultSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedAssetUserData_Inner = { "GeneratedAssetUserData", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedAssetUserData_Inner_MetaData), NewProp_GeneratedAssetUserData_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedAssetUserData = { "GeneratedAssetUserData", nullptr, (EPropertyFlags)0x001004800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniStaticMeshGenerationProperties, GeneratedAssetUserData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedAssetUserData_MetaData), NewProp_GeneratedAssetUserData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_bGeneratedDoubleSidedGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedPhysMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_DefaultBodyInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedCollisionTraceFlag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedLightMapResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedWalkableSlopeOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedLightMapCoordinateIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_bGeneratedUseMaximumStreamingTexelRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedStreamingDistanceMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedFoliageDefaultSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedAssetUserData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedAssetUserData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniStaticMeshGenerationProperties",
	Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::PropPointers),
	sizeof(FHoudiniStaticMeshGenerationProperties),
	alignof(FHoudiniStaticMeshGenerationProperties),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniStaticMeshGenerationProperties.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniStaticMeshGenerationProperties.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniStaticMeshGenerationProperties.InnerSingleton;
}
// End ScriptStruct FHoudiniStaticMeshGenerationProperties

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniStaticMeshGenerationProperties_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHoudiniStaticMeshGenerationProperties::StaticStruct, Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewStructOps, TEXT("HoudiniStaticMeshGenerationProperties"), &Z_Registration_Info_UScriptStruct_HoudiniStaticMeshGenerationProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniStaticMeshGenerationProperties), 195549466U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniStaticMeshGenerationProperties_h_1263379272(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniStaticMeshGenerationProperties_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniStaticMeshGenerationProperties_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
