// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniAssetComponent.h"
#include "HoudiniEngineRuntime/Public/HoudiniBakedOutput.h"
#include "HoudiniEngineRuntime/Public/HoudiniStaticMeshGenerationProperties.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniAssetComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshBuildSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAsset_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetComponent();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetComponent_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetStateEvents_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniHandleComponent_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInput_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniOutput_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameter_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniPDGAssetLink_NoRegister();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetStateResult();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniBakeAfterNextCook();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniBakedOutput();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UHoudiniAssetComponent
void UHoudiniAssetComponent::StaticRegisterNativesUHoudiniAssetComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniAssetComponent);
UClass* Z_Construct_UClass_UHoudiniAssetComponent_NoRegister()
{
	return UHoudiniAssetComponent::StaticClass();
}
struct Z_Construct_UClass_UHoudiniAssetComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "HoudiniAssetComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCookOnParameterChange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUploadTransformsToHoudiniEngine_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCookOnTransformChange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCookOnAssetInputCook_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputless_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputTemplateGeos_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseOutputNodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemporaryCookFolder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakeFolder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDeprecatedRawMeshSupport_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSplitMeshSupport_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshGenerationProperties_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshBuildSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideGlobalProxyStaticMeshSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableProxyStaticMeshOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableProxyStaticMeshRefinementByTimerOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProxyMeshAutoRefineTimeoutSecondsOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeIdsToCook_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputNodeCookCounts_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownstreamHoudiniAssets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentGUID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HapiGUID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HapiAssetName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugLastAssetState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetStateResult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastComponentTransform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubAssetIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetCookCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasBeenLoaded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasBeenDuplicated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPendingDelete_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRecookRequested_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRebuildRequested_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCooking_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceNeedUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLastCookSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bParameterDefinitionUpdateNeeded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlueprintStructureModified_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlueprintModified_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Outputs_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Outputs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakedOutputs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UntrackedOutputs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandleComponents_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandleComponents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasComponentTransformChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFullyLoaded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PDGAssetLink_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefineMeshesTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNoProxyMeshNextCookRequested_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBakeAfterNextCook_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakeAfterNextCook_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCachedIsPreview_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastTickTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastLiveSyncPingTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoudiniAsset;
	static void NewProp_bCookOnParameterChange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCookOnParameterChange;
	static void NewProp_bUploadTransformsToHoudiniEngine_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUploadTransformsToHoudiniEngine;
	static void NewProp_bCookOnTransformChange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCookOnTransformChange;
	static void NewProp_bCookOnAssetInputCook_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCookOnAssetInputCook;
	static void NewProp_bOutputless_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputless;
	static void NewProp_bOutputTemplateGeos_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputTemplateGeos;
	static void NewProp_bUseOutputNodes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOutputNodes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TemporaryCookFolder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BakeFolder;
	static void NewProp_bUseDeprecatedRawMeshSupport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDeprecatedRawMeshSupport;
	static void NewProp_bSplitMeshSupport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSplitMeshSupport;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshGenerationProperties;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshBuildSettings;
	static void NewProp_bOverrideGlobalProxyStaticMeshSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideGlobalProxyStaticMeshSettings;
	static void NewProp_bEnableProxyStaticMeshOverride_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableProxyStaticMeshOverride;
	static void NewProp_bEnableProxyStaticMeshRefinementByTimerOverride_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableProxyStaticMeshRefinementByTimerOverride;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProxyMeshAutoRefineTimeoutSecondsOverride;
	static void NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride;
	static void NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AssetId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NodeIdsToCook_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NodeIdsToCook;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutputNodeCookCounts_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutputNodeCookCounts_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_OutputNodeCookCounts;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DownstreamHoudiniAssets_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_DownstreamHoudiniAssets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentGUID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HapiGUID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HapiAssetName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AssetState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AssetState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DebugLastAssetState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DebugLastAssetState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AssetStateResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AssetStateResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastComponentTransform;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_SubAssetIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AssetCookCount;
	static void NewProp_bHasBeenLoaded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBeenLoaded;
	static void NewProp_bHasBeenDuplicated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBeenDuplicated;
	static void NewProp_bPendingDelete_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPendingDelete;
	static void NewProp_bRecookRequested_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecookRequested;
	static void NewProp_bRebuildRequested_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRebuildRequested;
	static void NewProp_bEnableCooking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCooking;
	static void NewProp_bForceNeedUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceNeedUpdate;
	static void NewProp_bLastCookSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLastCookSuccess;
	static void NewProp_bParameterDefinitionUpdateNeeded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bParameterDefinitionUpdateNeeded;
	static void NewProp_bBlueprintStructureModified_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlueprintStructureModified;
	static void NewProp_bBlueprintModified_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlueprintModified;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Parameters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Inputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Inputs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Outputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Outputs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BakedOutputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BakedOutputs;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_UntrackedOutputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UntrackedOutputs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandleComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HandleComponents;
	static void NewProp_bHasComponentTransformChanged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasComponentTransformChanged;
	static void NewProp_bFullyLoaded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFullyLoaded;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PDGAssetLink;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RefineMeshesTimer;
	static void NewProp_bNoProxyMeshNextCookRequested_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoProxyMeshNextCookRequested;
	static void NewProp_bBakeAfterNextCook_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBakeAfterNextCook;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BakeAfterNextCook_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BakeAfterNextCook;
	static void NewProp_bCachedIsPreview_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCachedIsPreview;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LastTickTime;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LastLiveSyncPingTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniAssetComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HoudiniAsset = { "HoudiniAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, HoudiniAsset), Z_Construct_UClass_UHoudiniAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoudiniAsset_MetaData), NewProp_HoudiniAsset_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnParameterChange_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bCookOnParameterChange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnParameterChange = { "bCookOnParameterChange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnParameterChange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCookOnParameterChange_MetaData), NewProp_bCookOnParameterChange_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bUploadTransformsToHoudiniEngine_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bUploadTransformsToHoudiniEngine = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bUploadTransformsToHoudiniEngine = { "bUploadTransformsToHoudiniEngine", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bUploadTransformsToHoudiniEngine_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUploadTransformsToHoudiniEngine_MetaData), NewProp_bUploadTransformsToHoudiniEngine_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnTransformChange_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bCookOnTransformChange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnTransformChange = { "bCookOnTransformChange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnTransformChange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCookOnTransformChange_MetaData), NewProp_bCookOnTransformChange_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnAssetInputCook_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bCookOnAssetInputCook = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnAssetInputCook = { "bCookOnAssetInputCook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnAssetInputCook_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCookOnAssetInputCook_MetaData), NewProp_bCookOnAssetInputCook_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOutputless_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bOutputless = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOutputless = { "bOutputless", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOutputless_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputless_MetaData), NewProp_bOutputless_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOutputTemplateGeos_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bOutputTemplateGeos = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOutputTemplateGeos = { "bOutputTemplateGeos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOutputTemplateGeos_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputTemplateGeos_MetaData), NewProp_bOutputTemplateGeos_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bUseOutputNodes_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bUseOutputNodes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bUseOutputNodes = { "bUseOutputNodes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bUseOutputNodes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseOutputNodes_MetaData), NewProp_bUseOutputNodes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_TemporaryCookFolder = { "TemporaryCookFolder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, TemporaryCookFolder), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemporaryCookFolder_MetaData), NewProp_TemporaryCookFolder_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_BakeFolder = { "BakeFolder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, BakeFolder), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakeFolder_MetaData), NewProp_BakeFolder_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bUseDeprecatedRawMeshSupport_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bUseDeprecatedRawMeshSupport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bUseDeprecatedRawMeshSupport = { "bUseDeprecatedRawMeshSupport", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bUseDeprecatedRawMeshSupport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDeprecatedRawMeshSupport_MetaData), NewProp_bUseDeprecatedRawMeshSupport_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bSplitMeshSupport_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bSplitMeshSupport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bSplitMeshSupport = { "bSplitMeshSupport", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bSplitMeshSupport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSplitMeshSupport_MetaData), NewProp_bSplitMeshSupport_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_StaticMeshGenerationProperties = { "StaticMeshGenerationProperties", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, StaticMeshGenerationProperties), Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshGenerationProperties_MetaData), NewProp_StaticMeshGenerationProperties_MetaData) }; // 195549466
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_StaticMeshBuildSettings = { "StaticMeshBuildSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, StaticMeshBuildSettings), Z_Construct_UScriptStruct_FMeshBuildSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshBuildSettings_MetaData), NewProp_StaticMeshBuildSettings_MetaData) }; // 2438872494
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOverrideGlobalProxyStaticMeshSettings_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bOverrideGlobalProxyStaticMeshSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOverrideGlobalProxyStaticMeshSettings = { "bOverrideGlobalProxyStaticMeshSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOverrideGlobalProxyStaticMeshSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideGlobalProxyStaticMeshSettings_MetaData), NewProp_bOverrideGlobalProxyStaticMeshSettings_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshOverride_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bEnableProxyStaticMeshOverride = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshOverride = { "bEnableProxyStaticMeshOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableProxyStaticMeshOverride_MetaData), NewProp_bEnableProxyStaticMeshOverride_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimerOverride_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bEnableProxyStaticMeshRefinementByTimerOverride = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimerOverride = { "bEnableProxyStaticMeshRefinementByTimerOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimerOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableProxyStaticMeshRefinementByTimerOverride_MetaData), NewProp_bEnableProxyStaticMeshRefinementByTimerOverride_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_ProxyMeshAutoRefineTimeoutSecondsOverride = { "ProxyMeshAutoRefineTimeoutSecondsOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, ProxyMeshAutoRefineTimeoutSecondsOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProxyMeshAutoRefineTimeoutSecondsOverride_MetaData), NewProp_ProxyMeshAutoRefineTimeoutSecondsOverride_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride = { "bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride_MetaData), NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride = { "bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride_MetaData), NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetId = { "AssetId", nullptr, (EPropertyFlags)0x0020080000200005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, AssetId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetId_MetaData), NewProp_AssetId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_NodeIdsToCook_Inner = { "NodeIdsToCook", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_NodeIdsToCook = { "NodeIdsToCook", nullptr, (EPropertyFlags)0x0020080000202005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, NodeIdsToCook), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeIdsToCook_MetaData), NewProp_NodeIdsToCook_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_OutputNodeCookCounts_ValueProp = { "OutputNodeCookCounts", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_OutputNodeCookCounts_Key_KeyProp = { "OutputNodeCookCounts_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_OutputNodeCookCounts = { "OutputNodeCookCounts", nullptr, (EPropertyFlags)0x0020080000202005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, OutputNodeCookCounts), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputNodeCookCounts_MetaData), NewProp_OutputNodeCookCounts_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_DownstreamHoudiniAssets_ElementProp = { "DownstreamHoudiniAssets", nullptr, (EPropertyFlags)0x0000000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniAssetComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_DownstreamHoudiniAssets = { "DownstreamHoudiniAssets", nullptr, (EPropertyFlags)0x002008800020000d, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, DownstreamHoudiniAssets), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownstreamHoudiniAssets_MetaData), NewProp_DownstreamHoudiniAssets_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_ComponentGUID = { "ComponentGUID", nullptr, (EPropertyFlags)0x0020080000200005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, ComponentGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentGUID_MetaData), NewProp_ComponentGUID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HapiGUID = { "HapiGUID", nullptr, (EPropertyFlags)0x0020080000200005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, HapiGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HapiGUID_MetaData), NewProp_HapiGUID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HapiAssetName = { "HapiAssetName", nullptr, (EPropertyFlags)0x0020080000200005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, HapiAssetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HapiAssetName_MetaData), NewProp_HapiAssetName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetState = { "AssetState", nullptr, (EPropertyFlags)0x0020080000200005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, AssetState), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetState_MetaData), NewProp_AssetState_MetaData) }; // 4227312027
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_DebugLastAssetState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_DebugLastAssetState = { "DebugLastAssetState", nullptr, (EPropertyFlags)0x0020080000200005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, DebugLastAssetState), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugLastAssetState_MetaData), NewProp_DebugLastAssetState_MetaData) }; // 4227312027
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetStateResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetStateResult = { "AssetStateResult", nullptr, (EPropertyFlags)0x0020080000200005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, AssetStateResult), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetStateResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetStateResult_MetaData), NewProp_AssetStateResult_MetaData) }; // 1276189728
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_LastComponentTransform = { "LastComponentTransform", nullptr, (EPropertyFlags)0x0020080000200005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, LastComponentTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastComponentTransform_MetaData), NewProp_LastComponentTransform_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_SubAssetIndex = { "SubAssetIndex", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, SubAssetIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubAssetIndex_MetaData), NewProp_SubAssetIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetCookCount = { "AssetCookCount", nullptr, (EPropertyFlags)0x0020080000200005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, AssetCookCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetCookCount_MetaData), NewProp_AssetCookCount_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasBeenLoaded_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bHasBeenLoaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasBeenLoaded = { "bHasBeenLoaded", nullptr, (EPropertyFlags)0x0020080000200005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasBeenLoaded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasBeenLoaded_MetaData), NewProp_bHasBeenLoaded_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasBeenDuplicated_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bHasBeenDuplicated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasBeenDuplicated = { "bHasBeenDuplicated", nullptr, (EPropertyFlags)0x0020080000200005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasBeenDuplicated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasBeenDuplicated_MetaData), NewProp_bHasBeenDuplicated_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bPendingDelete_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bPendingDelete = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bPendingDelete = { "bPendingDelete", nullptr, (EPropertyFlags)0x0020080000200005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bPendingDelete_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPendingDelete_MetaData), NewProp_bPendingDelete_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRecookRequested_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bRecookRequested = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRecookRequested = { "bRecookRequested", nullptr, (EPropertyFlags)0x0020080000200005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRecookRequested_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRecookRequested_MetaData), NewProp_bRecookRequested_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRebuildRequested_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bRebuildRequested = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRebuildRequested = { "bRebuildRequested", nullptr, (EPropertyFlags)0x0020080000200005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRebuildRequested_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRebuildRequested_MetaData), NewProp_bRebuildRequested_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableCooking_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bEnableCooking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableCooking = { "bEnableCooking", nullptr, (EPropertyFlags)0x0020080000200005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableCooking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableCooking_MetaData), NewProp_bEnableCooking_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bForceNeedUpdate_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bForceNeedUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bForceNeedUpdate = { "bForceNeedUpdate", nullptr, (EPropertyFlags)0x0020080000200005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bForceNeedUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceNeedUpdate_MetaData), NewProp_bForceNeedUpdate_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bLastCookSuccess_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bLastCookSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bLastCookSuccess = { "bLastCookSuccess", nullptr, (EPropertyFlags)0x0020080000200005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bLastCookSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLastCookSuccess_MetaData), NewProp_bLastCookSuccess_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bParameterDefinitionUpdateNeeded_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bParameterDefinitionUpdateNeeded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bParameterDefinitionUpdateNeeded = { "bParameterDefinitionUpdateNeeded", nullptr, (EPropertyFlags)0x0020080000200005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bParameterDefinitionUpdateNeeded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bParameterDefinitionUpdateNeeded_MetaData), NewProp_bParameterDefinitionUpdateNeeded_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBlueprintStructureModified_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bBlueprintStructureModified = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBlueprintStructureModified = { "bBlueprintStructureModified", nullptr, (EPropertyFlags)0x0020080000200005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBlueprintStructureModified_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlueprintStructureModified_MetaData), NewProp_bBlueprintStructureModified_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBlueprintModified_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bBlueprintModified = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBlueprintModified = { "bBlueprintModified", nullptr, (EPropertyFlags)0x0020080000200005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBlueprintModified_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlueprintModified_MetaData), NewProp_bBlueprintModified_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Parameters_Inner = { "Parameters", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniParameter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_Inner_MetaData), NewProp_Parameters_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x002008800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, Parameters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniInput_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inputs_Inner_MetaData), NewProp_Inputs_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x002008800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, Inputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inputs_MetaData), NewProp_Inputs_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Outputs_Inner = { "Outputs", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniOutput_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Outputs_Inner_MetaData), NewProp_Outputs_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Outputs = { "Outputs", nullptr, (EPropertyFlags)0x002008800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, Outputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Outputs_MetaData), NewProp_Outputs_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_BakedOutputs_Inner = { "BakedOutputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniBakedOutput, METADATA_PARAMS(0, nullptr) }; // 3566858932
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_BakedOutputs = { "BakedOutputs", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, BakedOutputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakedOutputs_MetaData), NewProp_BakedOutputs_MetaData) }; // 3566858932
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_UntrackedOutputs_Inner = { "UntrackedOutputs", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_UntrackedOutputs = { "UntrackedOutputs", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, UntrackedOutputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UntrackedOutputs_MetaData), NewProp_UntrackedOutputs_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HandleComponents_Inner = { "HandleComponents", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniHandleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandleComponents_Inner_MetaData), NewProp_HandleComponents_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HandleComponents = { "HandleComponents", nullptr, (EPropertyFlags)0x002008800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, HandleComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandleComponents_MetaData), NewProp_HandleComponents_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasComponentTransformChanged_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bHasComponentTransformChanged = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasComponentTransformChanged = { "bHasComponentTransformChanged", nullptr, (EPropertyFlags)0x0020080000202005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasComponentTransformChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasComponentTransformChanged_MetaData), NewProp_bHasComponentTransformChanged_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bFullyLoaded_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bFullyLoaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bFullyLoaded = { "bFullyLoaded", nullptr, (EPropertyFlags)0x0020080000202005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bFullyLoaded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFullyLoaded_MetaData), NewProp_bFullyLoaded_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_PDGAssetLink = { "PDGAssetLink", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, PDGAssetLink), Z_Construct_UClass_UHoudiniPDGAssetLink_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PDGAssetLink_MetaData), NewProp_PDGAssetLink_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_RefineMeshesTimer = { "RefineMeshesTimer", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, RefineMeshesTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefineMeshesTimer_MetaData), NewProp_RefineMeshesTimer_MetaData) }; // 756291145
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bNoProxyMeshNextCookRequested_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bNoProxyMeshNextCookRequested = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bNoProxyMeshNextCookRequested = { "bNoProxyMeshNextCookRequested", nullptr, (EPropertyFlags)0x0020080000200005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bNoProxyMeshNextCookRequested_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNoProxyMeshNextCookRequested_MetaData), NewProp_bNoProxyMeshNextCookRequested_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBakeAfterNextCook_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bBakeAfterNextCook = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBakeAfterNextCook = { "bBakeAfterNextCook", nullptr, (EPropertyFlags)0x0020080000200005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBakeAfterNextCook_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBakeAfterNextCook_MetaData), NewProp_bBakeAfterNextCook_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_BakeAfterNextCook_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_BakeAfterNextCook = { "BakeAfterNextCook", nullptr, (EPropertyFlags)0x0020080000200005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, BakeAfterNextCook), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniBakeAfterNextCook, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakeAfterNextCook_MetaData), NewProp_BakeAfterNextCook_MetaData) }; // 4007585409
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCachedIsPreview_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bCachedIsPreview = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCachedIsPreview = { "bCachedIsPreview", nullptr, (EPropertyFlags)0x0020080000202005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCachedIsPreview_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCachedIsPreview_MetaData), NewProp_bCachedIsPreview_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_LastTickTime = { "LastTickTime", nullptr, (EPropertyFlags)0x0020080000002001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, LastTickTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastTickTime_MetaData), NewProp_LastTickTime_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_LastLiveSyncPingTime = { "LastLiveSyncPingTime", nullptr, (EPropertyFlags)0x0020080000002001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, LastLiveSyncPingTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastLiveSyncPingTime_MetaData), NewProp_LastLiveSyncPingTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniAssetComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HoudiniAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnParameterChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bUploadTransformsToHoudiniEngine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnTransformChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnAssetInputCook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOutputless,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOutputTemplateGeos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bUseOutputNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_TemporaryCookFolder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_BakeFolder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bUseDeprecatedRawMeshSupport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bSplitMeshSupport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_StaticMeshGenerationProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_StaticMeshBuildSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOverrideGlobalProxyStaticMeshSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimerOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_ProxyMeshAutoRefineTimeoutSecondsOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_NodeIdsToCook_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_NodeIdsToCook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_OutputNodeCookCounts_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_OutputNodeCookCounts_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_OutputNodeCookCounts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_DownstreamHoudiniAssets_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_DownstreamHoudiniAssets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_ComponentGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HapiGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HapiAssetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_DebugLastAssetState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_DebugLastAssetState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetStateResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetStateResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_LastComponentTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_SubAssetIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetCookCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasBeenLoaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasBeenDuplicated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bPendingDelete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRecookRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRebuildRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableCooking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bForceNeedUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bLastCookSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bParameterDefinitionUpdateNeeded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBlueprintStructureModified,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBlueprintModified,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Parameters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Inputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Inputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Outputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Outputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_BakedOutputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_BakedOutputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_UntrackedOutputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_UntrackedOutputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HandleComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HandleComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasComponentTransformChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bFullyLoaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_PDGAssetLink,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_RefineMeshesTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bNoProxyMeshNextCookRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBakeAfterNextCook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_BakeAfterNextCook_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_BakeAfterNextCook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCachedIsPreview,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_LastTickTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_LastLiveSyncPingTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniAssetComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UHoudiniAssetStateEvents_NoRegister, (int32)VTABLE_OFFSET(UHoudiniAssetComponent, IHoudiniAssetStateEvents), false },  // 2320363820
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::ClassParams = {
	&UHoudiniAssetComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniAssetComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniAssetComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniAssetComponent()
{
	if (!Z_Registration_Info_UClass_UHoudiniAssetComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniAssetComponent.OuterSingleton, Z_Construct_UClass_UHoudiniAssetComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniAssetComponent.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniAssetComponent>()
{
	return UHoudiniAssetComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniAssetComponent);
UHoudiniAssetComponent::~UHoudiniAssetComponent() {}
// End Class UHoudiniAssetComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniAssetComponent, UHoudiniAssetComponent::StaticClass, TEXT("UHoudiniAssetComponent"), &Z_Registration_Info_UClass_UHoudiniAssetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniAssetComponent), 663405343U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetComponent_h_358147679(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
