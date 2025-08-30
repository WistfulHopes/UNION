// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniRuntimeSettings.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniRuntimeSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWalkableSlopeOverride();
FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType_InstancedStaticMesh_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniRuntimeSettings();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniRuntimeSettings_NoRegister();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniExecutableType();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType();
PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UHoudiniRuntimeSettings
void UHoudiniRuntimeSettings::StaticRegisterNativesUHoudiniRuntimeSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniRuntimeSettings);
UClass* Z_Construct_UClass_UHoudiniRuntimeSettings_NoRegister()
{
	return UHoudiniRuntimeSettings::StaticClass();
}
struct Z_Construct_UClass_UHoudiniRuntimeSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HoudiniRuntimeSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerHost_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerPort_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerPipeName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStartAutomaticServer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutomaticServerTimeout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSyncWithHoudiniCook_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCookUsingHoudiniTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSyncViewport_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSyncHoudiniViewport_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSyncUnrealViewport_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowMultiAssetDialog_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreferHdaMemoryCopyOverHdaSourceFile_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPauseCookingOnStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisplaySlateCookingNotifications_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTemporaryCookFolder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBakeFolder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableTheReferenceCountedInputSystem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarshallingLandscapesUseDefaultUnrealScaling_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarshallingLandscapesUseFullResolution_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarshallingLandscapesForceMinMaxValues_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarshallingLandscapesForcedMinValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarshallingLandscapesForcedMaxValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddRotAndScaleAttributesOnCurves_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLegacyInputCurves_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarshallingSplineResolution_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableProxyStaticMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowDefaultMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreferNaniteFallbackMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableProxyStaticMeshRefinementByTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProxyMeshAutoRefineTimeoutSeconds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoubleSidedGeometry_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBodyInstance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionTraceFlag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightMapResolution_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LpvBiasMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedDistanceFieldResolutionScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkableSlopeOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightMapCoordinateIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMaximumStreamingTexelRatio_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamingDistanceMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoliageDefaultSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseFullPrecisionUVs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SrcLightmapIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DstLightmapIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinLightmapResolution_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveDegenerates_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerateLightmapUVsFlag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecomputeNormalsFlag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecomputeTangentsFlag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMikkTSpace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBuildAdjacencyBuffer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bComputeWeightedNormals_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBuildReversedIndexBuffer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseHighPrecisionTangentBasis_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFieldResolutionScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateDistanceFieldAsIfTwoSided_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportFaceRemap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPDGAsyncCommandletImportEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniToolsSearchPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomHoudiniLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomHoudiniLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniExecutable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomHoudiniHomeLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CookingThreadStackSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniEnvironmentFiles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtlSearchPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DsoSearchPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageDsoSearchPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioDsoSearchPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SessionType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerHost;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ServerPort;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerPipeName;
	static void NewProp_bStartAutomaticServer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartAutomaticServer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AutomaticServerTimeout;
	static void NewProp_bSyncWithHoudiniCook_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSyncWithHoudiniCook;
	static void NewProp_bCookUsingHoudiniTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCookUsingHoudiniTime;
	static void NewProp_bSyncViewport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSyncViewport;
	static void NewProp_bSyncHoudiniViewport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSyncHoudiniViewport;
	static void NewProp_bSyncUnrealViewport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSyncUnrealViewport;
	static void NewProp_bShowMultiAssetDialog_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowMultiAssetDialog;
	static void NewProp_bPreferHdaMemoryCopyOverHdaSourceFile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreferHdaMemoryCopyOverHdaSourceFile;
	static void NewProp_bPauseCookingOnStart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPauseCookingOnStart;
	static void NewProp_bDisplaySlateCookingNotifications_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplaySlateCookingNotifications;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultTemporaryCookFolder;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultBakeFolder;
	static void NewProp_bEnableTheReferenceCountedInputSystem_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTheReferenceCountedInputSystem;
	static void NewProp_MarshallingLandscapesUseDefaultUnrealScaling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_MarshallingLandscapesUseDefaultUnrealScaling;
	static void NewProp_MarshallingLandscapesUseFullResolution_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_MarshallingLandscapesUseFullResolution;
	static void NewProp_MarshallingLandscapesForceMinMaxValues_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_MarshallingLandscapesForceMinMaxValues;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MarshallingLandscapesForcedMinValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MarshallingLandscapesForcedMaxValue;
	static void NewProp_bAddRotAndScaleAttributesOnCurves_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddRotAndScaleAttributesOnCurves;
	static void NewProp_bUseLegacyInputCurves_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLegacyInputCurves;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MarshallingSplineResolution;
	static void NewProp_bEnableProxyStaticMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableProxyStaticMesh;
	static void NewProp_bShowDefaultMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDefaultMesh;
	static void NewProp_bPreferNaniteFallbackMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreferNaniteFallbackMesh;
	static void NewProp_bEnableProxyStaticMeshRefinementByTimer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableProxyStaticMeshRefinementByTimer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProxyMeshAutoRefineTimeoutSeconds;
	static void NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld;
	static void NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE;
	static void NewProp_bDoubleSidedGeometry_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoubleSidedGeometry;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultBodyInstance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionTraceFlag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LightMapResolution;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LpvBiasMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GeneratedDistanceFieldResolutionScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WalkableSlopeOverride;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LightMapCoordinateIndex;
	static void NewProp_bUseMaximumStreamingTexelRatio_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMaximumStreamingTexelRatio;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StreamingDistanceMultiplier;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FoliageDefaultSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetUserData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetUserData;
	static void NewProp_bUseFullPrecisionUVs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFullPrecisionUVs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SrcLightmapIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DstLightmapIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinLightmapResolution;
	static void NewProp_bRemoveDegenerates_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveDegenerates;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GenerateLightmapUVsFlag;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RecomputeNormalsFlag;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RecomputeTangentsFlag;
	static void NewProp_bUseMikkTSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMikkTSpace;
	static void NewProp_bBuildAdjacencyBuffer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBuildAdjacencyBuffer;
	static void NewProp_bComputeWeightedNormals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bComputeWeightedNormals;
	static void NewProp_bBuildReversedIndexBuffer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBuildReversedIndexBuffer;
	static void NewProp_bUseHighPrecisionTangentBasis_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHighPrecisionTangentBasis;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceFieldResolutionScale;
	static void NewProp_bGenerateDistanceFieldAsIfTwoSided_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateDistanceFieldAsIfTwoSided;
	static void NewProp_bSupportFaceRemap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportFaceRemap;
	static void NewProp_bPDGAsyncCommandletImportEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPDGAsyncCommandletImportEnabled;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HoudiniToolsSearchPath_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HoudiniToolsSearchPath;
	static void NewProp_bUseCustomHoudiniLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomHoudiniLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomHoudiniLocation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HoudiniExecutable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomHoudiniHomeLocation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CookingThreadStackSize;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HoudiniEnvironmentFiles;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OtlSearchPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DsoSearchPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ImageDsoSearchPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AudioDsoSearchPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniRuntimeSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_SessionType = { "SessionType", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, SessionType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionType_MetaData), NewProp_SessionType_MetaData) }; // 622761687
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerHost = { "ServerHost", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, ServerHost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerHost_MetaData), NewProp_ServerHost_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerPort = { "ServerPort", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, ServerPort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerPort_MetaData), NewProp_ServerPort_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerPipeName = { "ServerPipeName", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, ServerPipeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerPipeName_MetaData), NewProp_ServerPipeName_MetaData) };
void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bStartAutomaticServer_SetBit(void* Obj)
{
	((UHoudiniRuntimeSettings*)Obj)->bStartAutomaticServer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bStartAutomaticServer = { "bStartAutomaticServer", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bStartAutomaticServer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStartAutomaticServer_MetaData), NewProp_bStartAutomaticServer_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AutomaticServerTimeout = { "AutomaticServerTimeout", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, AutomaticServerTimeout), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutomaticServerTimeout_MetaData), NewProp_AutomaticServerTimeout_MetaData) };
void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncWithHoudiniCook_SetBit(void* Obj)
{
	((UHoudiniRuntimeSettings*)Obj)->bSyncWithHoudiniCook = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncWithHoudiniCook = { "bSyncWithHoudiniCook", nullptr, (EPropertyFlags)0x0010040000044005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncWithHoudiniCook_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSyncWithHoudiniCook_MetaData), NewProp_bSyncWithHoudiniCook_MetaData) };
void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bCookUsingHoudiniTime_SetBit(void* Obj)
{
	((UHoudiniRuntimeSettings*)Obj)->bCookUsingHoudiniTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bCookUsingHoudiniTime = { "bCookUsingHoudiniTime", nullptr, (EPropertyFlags)0x0010040000044005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bCookUsingHoudiniTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCookUsingHoudiniTime_MetaData), NewProp_bCookUsingHoudiniTime_MetaData) };
void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncViewport_SetBit(void* Obj)
{
	((UHoudiniRuntimeSettings*)Obj)->bSyncViewport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncViewport = { "bSyncViewport", nullptr, (EPropertyFlags)0x0010040000044005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncViewport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSyncViewport_MetaData), NewProp_bSyncViewport_MetaData) };
void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncHoudiniViewport_SetBit(void* Obj)
{
	((UHoudiniRuntimeSettings*)Obj)->bSyncHoudiniViewport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncHoudiniViewport = { "bSyncHoudiniViewport", nullptr, (EPropertyFlags)0x0010040000044005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncHoudiniViewport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSyncHoudiniViewport_MetaData), NewProp_bSyncHoudiniViewport_MetaData) };
void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncUnrealViewport_SetBit(void* Obj)
{
	((UHoudiniRuntimeSettings*)Obj)->bSyncUnrealViewport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncUnrealViewport = { "bSyncUnrealViewport", nullptr, (EPropertyFlags)0x0010040000044005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncUnrealViewport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSyncUnrealViewport_MetaData), NewProp_bSyncUnrealViewport_MetaData) };
void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowMultiAssetDialog_SetBit(void* Obj)
{
	((UHoudiniRuntimeSettings*)Obj)->bShowMultiAssetDialog = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowMultiAssetDialog = { "bShowMultiAssetDialog", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowMultiAssetDialog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowMultiAssetDialog_MetaData), NewProp_bShowMultiAssetDialog_MetaData) };
void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPreferHdaMemoryCopyOverHdaSourceFile_SetBit(void* Obj)
{
	((UHoudiniRuntimeSettings*)Obj)->bPreferHdaMemoryCopyOverHdaSourceFile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPreferHdaMemoryCopyOverHdaSourceFile = { "bPreferHdaMemoryCopyOverHdaSourceFile", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPreferHdaMemoryCopyOverHdaSourceFile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreferHdaMemoryCopyOverHdaSourceFile_MetaData), NewProp_bPreferHdaMemoryCopyOverHdaSourceFile_MetaData) };
void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPauseCookingOnStart_SetBit(void* Obj)
{
	((UHoudiniRuntimeSettings*)Obj)->bPauseCookingOnStart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPauseCookingOnStart = { "bPauseCookingOnStart", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPauseCookingOnStart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPauseCookingOnStart_MetaData), NewProp_bPauseCookingOnStart_MetaData) };
void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDisplaySlateCookingNotifications_SetBit(void* Obj)
{
	((UHoudiniRuntimeSettings*)Obj)->bDisplaySlateCookingNotifications = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDisplaySlateCookingNotifications = { "bDisplaySlateCookingNotifications", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDisplaySlateCookingNotifications_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisplaySlateCookingNotifications_MetaData), NewProp_bDisplaySlateCookingNotifications_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultTemporaryCookFolder = { "DefaultTemporaryCookFolder", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, DefaultTemporaryCookFolder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultTemporaryCookFolder_MetaData), NewProp_DefaultTemporaryCookFolder_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultBakeFolder = { "DefaultBakeFolder", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, DefaultBakeFolder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultBakeFolder_MetaData), NewProp_DefaultBakeFolder_MetaData) };
void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableTheReferenceCountedInputSystem_SetBit(void* Obj)
{
	((UHoudiniRuntimeSettings*)Obj)->bEnableTheReferenceCountedInputSystem = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableTheReferenceCountedInputSystem = { "bEnableTheReferenceCountedInputSystem", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableTheReferenceCountedInputSystem_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableTheReferenceCountedInputSystem_MetaData), NewProp_bEnableTheReferenceCountedInputSystem_MetaData) };
void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseDefaultUnrealScaling_SetBit(void* Obj)
{
	((UHoudiniRuntimeSettings*)Obj)->MarshallingLandscapesUseDefaultUnrealScaling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseDefaultUnrealScaling = { "MarshallingLandscapesUseDefaultUnrealScaling", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseDefaultUnrealScaling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarshallingLandscapesUseDefaultUnrealScaling_MetaData), NewProp_MarshallingLandscapesUseDefaultUnrealScaling_MetaData) };
void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseFullResolution_SetBit(void* Obj)
{
	((UHoudiniRuntimeSettings*)Obj)->MarshallingLandscapesUseFullResolution = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseFullResolution = { "MarshallingLandscapesUseFullResolution", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseFullResolution_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarshallingLandscapesUseFullResolution_MetaData), NewProp_MarshallingLandscapesUseFullResolution_MetaData) };
void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForceMinMaxValues_SetBit(void* Obj)
{
	((UHoudiniRuntimeSettings*)Obj)->MarshallingLandscapesForceMinMaxValues = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForceMinMaxValues = { "MarshallingLandscapesForceMinMaxValues", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForceMinMaxValues_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarshallingLandscapesForceMinMaxValues_MetaData), NewProp_MarshallingLandscapesForceMinMaxValues_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForcedMinValue = { "MarshallingLandscapesForcedMinValue", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, MarshallingLandscapesForcedMinValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarshallingLandscapesForcedMinValue_MetaData), NewProp_MarshallingLandscapesForcedMinValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForcedMaxValue = { "MarshallingLandscapesForcedMaxValue", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, MarshallingLandscapesForcedMaxValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarshallingLandscapesForcedMaxValue_MetaData), NewProp_MarshallingLandscapesForcedMaxValue_MetaData) };
void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bAddRotAndScaleAttributesOnCurves_SetBit(void* Obj)
{
	((UHoudiniRuntimeSettings*)Obj)->bAddRotAndScaleAttributesOnCurves = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bAddRotAndScaleAttributesOnCurves = { "bAddRotAndScaleAttributesOnCurves", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bAddRotAndScaleAttributesOnCurves_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddRotAndScaleAttributesOnCurves_MetaData), NewProp_bAddRotAndScaleAttributesOnCurves_MetaData) };
void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseLegacyInputCurves_SetBit(void* Obj)
{
	((UHoudiniRuntimeSettings*)Obj)->bUseLegacyInputCurves = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseLegacyInputCurves = { "bUseLegacyInputCurves", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseLegacyInputCurves_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLegacyInputCurves_MetaData), NewProp_bUseLegacyInputCurves_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingSplineResolution = { "MarshallingSplineResolution", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, MarshallingSplineResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarshallingSplineResolution_MetaData), NewProp_MarshallingSplineResolution_MetaData) };
void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMesh_SetBit(void* Obj)
{
	((UHoudiniRuntimeSettings*)Obj)->bEnableProxyStaticMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMesh = { "bEnableProxyStaticMesh", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableProxyStaticMesh_MetaData), NewProp_bEnableProxyStaticMesh_MetaData) };
void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowDefaultMesh_SetBit(void* Obj)
{
	((UHoudiniRuntimeSettings*)Obj)->bShowDefaultMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowDefaultMesh = { "bShowDefaultMesh", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowDefaultMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowDefaultMesh_MetaData), NewProp_bShowDefaultMesh_MetaData) };
void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPreferNaniteFallbackMesh_SetBit(void* Obj)
{
	((UHoudiniRuntimeSettings*)Obj)->bPreferNaniteFallbackMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPreferNaniteFallbackMesh = { "bPreferNaniteFallbackMesh", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPreferNaniteFallbackMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreferNaniteFallbackMesh_MetaData), NewProp_bPreferNaniteFallbackMesh_MetaData) };
void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimer_SetBit(void* Obj)
{
	((UHoudiniRuntimeSettings*)Obj)->bEnableProxyStaticMeshRefinementByTimer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimer = { "bEnableProxyStaticMeshRefinementByTimer", nullptr, (EPropertyFlags)0x0010040000044005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableProxyStaticMeshRefinementByTimer_MetaData), NewProp_bEnableProxyStaticMeshRefinementByTimer_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ProxyMeshAutoRefineTimeoutSeconds = { "ProxyMeshAutoRefineTimeoutSeconds", nullptr, (EPropertyFlags)0x0010040000044005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, ProxyMeshAutoRefineTimeoutSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProxyMeshAutoRefineTimeoutSeconds_MetaData), NewProp_ProxyMeshAutoRefineTimeoutSeconds_MetaData) };
void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld_SetBit(void* Obj)
{
	((UHoudiniRuntimeSettings*)Obj)->bEnableProxyStaticMeshRefinementOnPreSaveWorld = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld = { "bEnableProxyStaticMeshRefinementOnPreSaveWorld", nullptr, (EPropertyFlags)0x0010040000044005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld_MetaData), NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld_MetaData) };
void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE_SetBit(void* Obj)
{
	((UHoudiniRuntimeSettings*)Obj)->bEnableProxyStaticMeshRefinementOnPreBeginPIE = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE = { "bEnableProxyStaticMeshRefinementOnPreBeginPIE", nullptr, (EPropertyFlags)0x0010040000044005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE_MetaData), NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE_MetaData) };
void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDoubleSidedGeometry_SetBit(void* Obj)
{
	((UHoudiniRuntimeSettings*)Obj)->bDoubleSidedGeometry = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDoubleSidedGeometry = { "bDoubleSidedGeometry", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDoubleSidedGeometry_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoubleSidedGeometry_MetaData), NewProp_bDoubleSidedGeometry_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_PhysMaterial = { "PhysMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, PhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysMaterial_MetaData), NewProp_PhysMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultBodyInstance = { "DefaultBodyInstance", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, DefaultBodyInstance), Z_Construct_UScriptStruct_FBodyInstance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultBodyInstance_MetaData), NewProp_DefaultBodyInstance_MetaData) }; // 3706165537
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CollisionTraceFlag = { "CollisionTraceFlag", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, CollisionTraceFlag), Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionTraceFlag_MetaData), NewProp_CollisionTraceFlag_MetaData) }; // 4042370968
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LightMapResolution = { "LightMapResolution", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, LightMapResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightMapResolution_MetaData), NewProp_LightMapResolution_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LpvBiasMultiplier = { "LpvBiasMultiplier", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, LpvBiasMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LpvBiasMultiplier_MetaData), NewProp_LpvBiasMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_GeneratedDistanceFieldResolutionScale = { "GeneratedDistanceFieldResolutionScale", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, GeneratedDistanceFieldResolutionScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedDistanceFieldResolutionScale_MetaData), NewProp_GeneratedDistanceFieldResolutionScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_WalkableSlopeOverride = { "WalkableSlopeOverride", nullptr, (EPropertyFlags)0x0010040000044005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, WalkableSlopeOverride), Z_Construct_UScriptStruct_FWalkableSlopeOverride, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkableSlopeOverride_MetaData), NewProp_WalkableSlopeOverride_MetaData) }; // 4238734711
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LightMapCoordinateIndex = { "LightMapCoordinateIndex", nullptr, (EPropertyFlags)0x0010040000044005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, LightMapCoordinateIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightMapCoordinateIndex_MetaData), NewProp_LightMapCoordinateIndex_MetaData) };
void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMaximumStreamingTexelRatio_SetBit(void* Obj)
{
	((UHoudiniRuntimeSettings*)Obj)->bUseMaximumStreamingTexelRatio = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMaximumStreamingTexelRatio = { "bUseMaximumStreamingTexelRatio", nullptr, (EPropertyFlags)0x0010040000044005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMaximumStreamingTexelRatio_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMaximumStreamingTexelRatio_MetaData), NewProp_bUseMaximumStreamingTexelRatio_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_StreamingDistanceMultiplier = { "StreamingDistanceMultiplier", nullptr, (EPropertyFlags)0x0010040000044005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, StreamingDistanceMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamingDistanceMultiplier_MetaData), NewProp_StreamingDistanceMultiplier_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_FoliageDefaultSettings = { "FoliageDefaultSettings", nullptr, (EPropertyFlags)0x001204000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, FoliageDefaultSettings), Z_Construct_UClass_UFoliageType_InstancedStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoliageDefaultSettings_MetaData), NewProp_FoliageDefaultSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AssetUserData_Inner = { "AssetUserData", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetUserData_Inner_MetaData), NewProp_AssetUserData_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AssetUserData = { "AssetUserData", nullptr, (EPropertyFlags)0x001004800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, AssetUserData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetUserData_MetaData), NewProp_AssetUserData_MetaData) };
void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseFullPrecisionUVs_SetBit(void* Obj)
{
	((UHoudiniRuntimeSettings*)Obj)->bUseFullPrecisionUVs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseFullPrecisionUVs = { "bUseFullPrecisionUVs", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseFullPrecisionUVs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseFullPrecisionUVs_MetaData), NewProp_bUseFullPrecisionUVs_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_SrcLightmapIndex = { "SrcLightmapIndex", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, SrcLightmapIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SrcLightmapIndex_MetaData), NewProp_SrcLightmapIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DstLightmapIndex = { "DstLightmapIndex", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, DstLightmapIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DstLightmapIndex_MetaData), NewProp_DstLightmapIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MinLightmapResolution = { "MinLightmapResolution", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, MinLightmapResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinLightmapResolution_MetaData), NewProp_MinLightmapResolution_MetaData) };
void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bRemoveDegenerates_SetBit(void* Obj)
{
	((UHoudiniRuntimeSettings*)Obj)->bRemoveDegenerates = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bRemoveDegenerates = { "bRemoveDegenerates", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bRemoveDegenerates_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveDegenerates_MetaData), NewProp_bRemoveDegenerates_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_GenerateLightmapUVsFlag = { "GenerateLightmapUVsFlag", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, GenerateLightmapUVsFlag), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerateLightmapUVsFlag_MetaData), NewProp_GenerateLightmapUVsFlag_MetaData) }; // 3397569832
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_RecomputeNormalsFlag = { "RecomputeNormalsFlag", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, RecomputeNormalsFlag), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecomputeNormalsFlag_MetaData), NewProp_RecomputeNormalsFlag_MetaData) }; // 3397569832
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_RecomputeTangentsFlag = { "RecomputeTangentsFlag", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, RecomputeTangentsFlag), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecomputeTangentsFlag_MetaData), NewProp_RecomputeTangentsFlag_MetaData) }; // 3397569832
void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMikkTSpace_SetBit(void* Obj)
{
	((UHoudiniRuntimeSettings*)Obj)->bUseMikkTSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMikkTSpace = { "bUseMikkTSpace", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMikkTSpace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMikkTSpace_MetaData), NewProp_bUseMikkTSpace_MetaData) };
void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildAdjacencyBuffer_SetBit(void* Obj)
{
	((UHoudiniRuntimeSettings*)Obj)->bBuildAdjacencyBuffer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildAdjacencyBuffer = { "bBuildAdjacencyBuffer", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildAdjacencyBuffer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBuildAdjacencyBuffer_MetaData), NewProp_bBuildAdjacencyBuffer_MetaData) };
void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bComputeWeightedNormals_SetBit(void* Obj)
{
	((UHoudiniRuntimeSettings*)Obj)->bComputeWeightedNormals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bComputeWeightedNormals = { "bComputeWeightedNormals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bComputeWeightedNormals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bComputeWeightedNormals_MetaData), NewProp_bComputeWeightedNormals_MetaData) };
void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildReversedIndexBuffer_SetBit(void* Obj)
{
	((UHoudiniRuntimeSettings*)Obj)->bBuildReversedIndexBuffer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildReversedIndexBuffer = { "bBuildReversedIndexBuffer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildReversedIndexBuffer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBuildReversedIndexBuffer_MetaData), NewProp_bBuildReversedIndexBuffer_MetaData) };
void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseHighPrecisionTangentBasis_SetBit(void* Obj)
{
	((UHoudiniRuntimeSettings*)Obj)->bUseHighPrecisionTangentBasis = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseHighPrecisionTangentBasis = { "bUseHighPrecisionTangentBasis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseHighPrecisionTangentBasis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseHighPrecisionTangentBasis_MetaData), NewProp_bUseHighPrecisionTangentBasis_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DistanceFieldResolutionScale = { "DistanceFieldResolutionScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, DistanceFieldResolutionScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceFieldResolutionScale_MetaData), NewProp_DistanceFieldResolutionScale_MetaData) };
void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bGenerateDistanceFieldAsIfTwoSided_SetBit(void* Obj)
{
	((UHoudiniRuntimeSettings*)Obj)->bGenerateDistanceFieldAsIfTwoSided = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bGenerateDistanceFieldAsIfTwoSided = { "bGenerateDistanceFieldAsIfTwoSided", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bGenerateDistanceFieldAsIfTwoSided_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateDistanceFieldAsIfTwoSided_MetaData), NewProp_bGenerateDistanceFieldAsIfTwoSided_MetaData) };
void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSupportFaceRemap_SetBit(void* Obj)
{
	((UHoudiniRuntimeSettings*)Obj)->bSupportFaceRemap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSupportFaceRemap = { "bSupportFaceRemap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSupportFaceRemap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportFaceRemap_MetaData), NewProp_bSupportFaceRemap_MetaData) };
void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPDGAsyncCommandletImportEnabled_SetBit(void* Obj)
{
	((UHoudiniRuntimeSettings*)Obj)->bPDGAsyncCommandletImportEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPDGAsyncCommandletImportEnabled = { "bPDGAsyncCommandletImportEnabled", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPDGAsyncCommandletImportEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPDGAsyncCommandletImportEnabled_MetaData), NewProp_bPDGAsyncCommandletImportEnabled_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniToolsSearchPath_Inner = { "HoudiniToolsSearchPath", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniToolsSearchPath = { "HoudiniToolsSearchPath", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, HoudiniToolsSearchPath), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoudiniToolsSearchPath_MetaData), NewProp_HoudiniToolsSearchPath_MetaData) };
void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseCustomHoudiniLocation_SetBit(void* Obj)
{
	((UHoudiniRuntimeSettings*)Obj)->bUseCustomHoudiniLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseCustomHoudiniLocation = { "bUseCustomHoudiniLocation", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseCustomHoudiniLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCustomHoudiniLocation_MetaData), NewProp_bUseCustomHoudiniLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CustomHoudiniLocation = { "CustomHoudiniLocation", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, CustomHoudiniLocation), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomHoudiniLocation_MetaData), NewProp_CustomHoudiniLocation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniExecutable = { "HoudiniExecutable", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, HoudiniExecutable), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniExecutableType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoudiniExecutable_MetaData), NewProp_HoudiniExecutable_MetaData) }; // 1166698049
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CustomHoudiniHomeLocation = { "CustomHoudiniHomeLocation", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, CustomHoudiniHomeLocation), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomHoudiniHomeLocation_MetaData), NewProp_CustomHoudiniHomeLocation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CookingThreadStackSize = { "CookingThreadStackSize", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, CookingThreadStackSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CookingThreadStackSize_MetaData), NewProp_CookingThreadStackSize_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniEnvironmentFiles = { "HoudiniEnvironmentFiles", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, HoudiniEnvironmentFiles), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoudiniEnvironmentFiles_MetaData), NewProp_HoudiniEnvironmentFiles_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_OtlSearchPath = { "OtlSearchPath", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, OtlSearchPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtlSearchPath_MetaData), NewProp_OtlSearchPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DsoSearchPath = { "DsoSearchPath", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, DsoSearchPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DsoSearchPath_MetaData), NewProp_DsoSearchPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ImageDsoSearchPath = { "ImageDsoSearchPath", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, ImageDsoSearchPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageDsoSearchPath_MetaData), NewProp_ImageDsoSearchPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AudioDsoSearchPath = { "AudioDsoSearchPath", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, AudioDsoSearchPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioDsoSearchPath_MetaData), NewProp_AudioDsoSearchPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_SessionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerHost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerPipeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bStartAutomaticServer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AutomaticServerTimeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncWithHoudiniCook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bCookUsingHoudiniTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncViewport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncHoudiniViewport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncUnrealViewport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowMultiAssetDialog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPreferHdaMemoryCopyOverHdaSourceFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPauseCookingOnStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDisplaySlateCookingNotifications,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultTemporaryCookFolder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultBakeFolder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableTheReferenceCountedInputSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseDefaultUnrealScaling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseFullResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForceMinMaxValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForcedMinValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForcedMaxValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bAddRotAndScaleAttributesOnCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseLegacyInputCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingSplineResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowDefaultMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPreferNaniteFallbackMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ProxyMeshAutoRefineTimeoutSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDoubleSidedGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_PhysMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultBodyInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CollisionTraceFlag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LightMapResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LpvBiasMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_GeneratedDistanceFieldResolutionScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_WalkableSlopeOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LightMapCoordinateIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMaximumStreamingTexelRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_StreamingDistanceMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_FoliageDefaultSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AssetUserData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AssetUserData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseFullPrecisionUVs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_SrcLightmapIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DstLightmapIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MinLightmapResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bRemoveDegenerates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_GenerateLightmapUVsFlag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_RecomputeNormalsFlag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_RecomputeTangentsFlag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMikkTSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildAdjacencyBuffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bComputeWeightedNormals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildReversedIndexBuffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseHighPrecisionTangentBasis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DistanceFieldResolutionScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bGenerateDistanceFieldAsIfTwoSided,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSupportFaceRemap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPDGAsyncCommandletImportEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniToolsSearchPath_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniToolsSearchPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseCustomHoudiniLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CustomHoudiniLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniExecutable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CustomHoudiniHomeLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CookingThreadStackSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniEnvironmentFiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_OtlSearchPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DsoSearchPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ImageDsoSearchPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AudioDsoSearchPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::ClassParams = {
	&UHoudiniRuntimeSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::PropPointers),
	0,
	0x009000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniRuntimeSettings()
{
	if (!Z_Registration_Info_UClass_UHoudiniRuntimeSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniRuntimeSettings.OuterSingleton, Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniRuntimeSettings.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniRuntimeSettings>()
{
	return UHoudiniRuntimeSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniRuntimeSettings);
UHoudiniRuntimeSettings::~UHoudiniRuntimeSettings() {}
// End Class UHoudiniRuntimeSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniRuntimeSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniRuntimeSettings, UHoudiniRuntimeSettings::StaticClass, TEXT("UHoudiniRuntimeSettings"), &Z_Registration_Info_UClass_UHoudiniRuntimeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniRuntimeSettings), 255705344U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniRuntimeSettings_h_497036953(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniRuntimeSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniRuntimeSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
