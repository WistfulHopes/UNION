// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniInput.h"
#include "HoudiniEngineRuntime/Public/HoudiniInputObjectSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniInput() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInput();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInput_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputObject_NoRegister();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniInputObjectSettings();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UHoudiniInput
void UHoudiniInput::StaticRegisterNativesUHoudiniInput()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniInput);
UClass* Z_Construct_UClass_UHoudiniInput_NoRegister()
{
	return UHoudiniInput::StaticClass();
}
struct Z_Construct_UClass_UHoudiniInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HoudiniInput.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetNodeId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputNodeId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParmId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsObjectPathParameter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreatedDataNodeIds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNeedsToTriggerUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedBounds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Help_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeepWorldTransform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPackBeforeMerge_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportAsReference_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportAsReferenceRotScaleEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportAsReferenceBboxEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportAsReferenceMaterialEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportLODs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportSockets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreferNaniteFallbackMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportColliders_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportMaterialParameters_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDirectlyConnectHdas_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportOptionsMenuExpanded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGeometryInputsMenuExpanded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeOptionsMenuExpanded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWorldInputsMenuExpanded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCurveInputsMenuExpanded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCurvePointSelectionMenuExpanded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCurvePointSelectionUseAbsLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCurvePointSelectionUseAbsRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCookOnCurveChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeometryInputObjects_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStaticMeshChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetInputObjects_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInputAssetConnectedInHoudini_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveInputObjects_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCurveOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddRotAndScaleAttributesOnCurves_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLegacyInputCurves_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeInputObjects_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeHasExportTypeChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldInputObjects_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldInputBoundSelectorObjects_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsWorldInputBoundSelector_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWorldInputBoundSelectorAutoUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnrealSplineResolution_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalInputObjects_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeometryCollectionInputObjects_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeSelectedComponents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputNodesPendingDelete_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastInsertedInputs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastUndoDeletedInputs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateInputLandscape_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeExportType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeExportSelectionOnly_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeControlVisiblity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeAutoSelectComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeExportMaterials_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeExportLighting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeExportNormalizedUVs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeExportTileUVs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanDeleteHoudiniNodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeAutoSelectSplines_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeSplinesExportOptionsMenuExpanded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeSplinesExportControlPoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeSplinesExportLeftRightCurves_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeSplinesExportSplineMeshComponents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMergeSplineMeshComponents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInput" },
		{ "ModuleRelativePath", "Public/HoudiniInput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Label;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PreviousType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PreviousType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AssetNodeId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InputNodeId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InputIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParmId;
	static void NewProp_bIsObjectPathParameter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsObjectPathParameter;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CreatedDataNodeIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CreatedDataNodeIds;
	static void NewProp_bHasChanged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasChanged;
	static void NewProp_bNeedsToTriggerUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedsToTriggerUpdate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedBounds;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Help;
	static const UECodeGen_Private::FBytePropertyParams NewProp_KeepWorldTransform_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_KeepWorldTransform;
	static void NewProp_bPackBeforeMerge_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPackBeforeMerge;
	static void NewProp_bImportAsReference_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportAsReference;
	static void NewProp_bImportAsReferenceRotScaleEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportAsReferenceRotScaleEnabled;
	static void NewProp_bImportAsReferenceBboxEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportAsReferenceBboxEnabled;
	static void NewProp_bImportAsReferenceMaterialEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportAsReferenceMaterialEnabled;
	static void NewProp_bExportLODs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportLODs;
	static void NewProp_bExportSockets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportSockets;
	static void NewProp_bPreferNaniteFallbackMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreferNaniteFallbackMesh;
	static void NewProp_bExportColliders_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportColliders;
	static void NewProp_bExportMaterialParameters_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportMaterialParameters;
	static void NewProp_bDirectlyConnectHdas_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDirectlyConnectHdas;
	static void NewProp_bExportOptionsMenuExpanded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportOptionsMenuExpanded;
	static void NewProp_bGeometryInputsMenuExpanded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGeometryInputsMenuExpanded;
	static void NewProp_bLandscapeOptionsMenuExpanded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeOptionsMenuExpanded;
	static void NewProp_bWorldInputsMenuExpanded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWorldInputsMenuExpanded;
	static void NewProp_bCurveInputsMenuExpanded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCurveInputsMenuExpanded;
	static void NewProp_bCurvePointSelectionMenuExpanded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCurvePointSelectionMenuExpanded;
	static void NewProp_bCurvePointSelectionUseAbsLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCurvePointSelectionUseAbsLocation;
	static void NewProp_bCurvePointSelectionUseAbsRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCurvePointSelectionUseAbsRotation;
	static void NewProp_bCookOnCurveChanged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCookOnCurveChanged;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeometryInputObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GeometryInputObjects;
	static void NewProp_bStaticMeshChanged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStaticMeshChanged;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetInputObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetInputObjects;
	static void NewProp_bInputAssetConnectedInHoudini_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInputAssetConnectedInHoudini;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveInputObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CurveInputObjects;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultCurveOffset;
	static void NewProp_bAddRotAndScaleAttributesOnCurves_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddRotAndScaleAttributesOnCurves;
	static void NewProp_bUseLegacyInputCurves_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLegacyInputCurves;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LandscapeInputObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LandscapeInputObjects;
	static void NewProp_bLandscapeHasExportTypeChanged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeHasExportTypeChanged;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldInputObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WorldInputObjects;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldInputBoundSelectorObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WorldInputBoundSelectorObjects;
	static void NewProp_bIsWorldInputBoundSelector_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWorldInputBoundSelector;
	static void NewProp_bWorldInputBoundSelectorAutoUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWorldInputBoundSelectorAutoUpdate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UnrealSplineResolution;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalInputObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SkeletalInputObjects;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeometryCollectionInputObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GeometryCollectionInputObjects;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LandscapeSelectedComponents_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_LandscapeSelectedComponents;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InputNodesPendingDelete_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_InputNodesPendingDelete;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LastInsertedInputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LastInsertedInputs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LastUndoDeletedInputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LastUndoDeletedInputs;
	static void NewProp_bUpdateInputLandscape_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateInputLandscape;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LandscapeExportType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LandscapeExportType;
	static void NewProp_bLandscapeExportSelectionOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeExportSelectionOnly;
	static void NewProp_bLandscapeControlVisiblity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeControlVisiblity;
	static void NewProp_bLandscapeAutoSelectComponent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeAutoSelectComponent;
	static void NewProp_bLandscapeExportMaterials_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeExportMaterials;
	static void NewProp_bLandscapeExportLighting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeExportLighting;
	static void NewProp_bLandscapeExportNormalizedUVs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeExportNormalizedUVs;
	static void NewProp_bLandscapeExportTileUVs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeExportTileUVs;
	static void NewProp_bCanDeleteHoudiniNodes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanDeleteHoudiniNodes;
	static void NewProp_bLandscapeAutoSelectSplines_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeAutoSelectSplines;
	static void NewProp_bLandscapeSplinesExportOptionsMenuExpanded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeSplinesExportOptionsMenuExpanded;
	static void NewProp_bLandscapeSplinesExportControlPoints_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeSplinesExportControlPoints;
	static void NewProp_bLandscapeSplinesExportLeftRightCurves_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeSplinesExportLeftRightCurves;
	static void NewProp_bLandscapeSplinesExportSplineMeshComponents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeSplinesExportSplineMeshComponents;
	static void NewProp_bMergeSplineMeshComponents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeSplineMeshComponents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, Label), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Label_MetaData), NewProp_Label_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, Type), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 2992247386
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_PreviousType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_PreviousType = { "PreviousType", nullptr, (EPropertyFlags)0x0020080000202005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, PreviousType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousType_MetaData), NewProp_PreviousType_MetaData) }; // 2992247386
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_AssetNodeId = { "AssetNodeId", nullptr, (EPropertyFlags)0x0020080000202005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, AssetNodeId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetNodeId_MetaData), NewProp_AssetNodeId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputNodeId = { "InputNodeId", nullptr, (EPropertyFlags)0x0020080400202005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, InputNodeId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputNodeId_MetaData), NewProp_InputNodeId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputIndex = { "InputIndex", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, InputIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputIndex_MetaData), NewProp_InputIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_ParmId = { "ParmId", nullptr, (EPropertyFlags)0x0020080400202005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, ParmId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParmId_MetaData), NewProp_ParmId_MetaData) };
void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bIsObjectPathParameter_SetBit(void* Obj)
{
	((UHoudiniInput*)Obj)->bIsObjectPathParameter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bIsObjectPathParameter = { "bIsObjectPathParameter", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bIsObjectPathParameter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsObjectPathParameter_MetaData), NewProp_bIsObjectPathParameter_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_CreatedDataNodeIds_Inner = { "CreatedDataNodeIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_CreatedDataNodeIds = { "CreatedDataNodeIds", nullptr, (EPropertyFlags)0x0020080400202005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, CreatedDataNodeIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreatedDataNodeIds_MetaData), NewProp_CreatedDataNodeIds_MetaData) };
void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bHasChanged_SetBit(void* Obj)
{
	((UHoudiniInput*)Obj)->bHasChanged = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bHasChanged = { "bHasChanged", nullptr, (EPropertyFlags)0x0020080000202005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bHasChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasChanged_MetaData), NewProp_bHasChanged_MetaData) };
void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bNeedsToTriggerUpdate_SetBit(void* Obj)
{
	((UHoudiniInput*)Obj)->bNeedsToTriggerUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bNeedsToTriggerUpdate = { "bNeedsToTriggerUpdate", nullptr, (EPropertyFlags)0x0020080000202005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bNeedsToTriggerUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNeedsToTriggerUpdate_MetaData), NewProp_bNeedsToTriggerUpdate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_CachedBounds = { "CachedBounds", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, CachedBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedBounds_MetaData), NewProp_CachedBounds_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Help = { "Help", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, Help), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Help_MetaData), NewProp_Help_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_KeepWorldTransform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_KeepWorldTransform = { "KeepWorldTransform", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, KeepWorldTransform), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeepWorldTransform_MetaData), NewProp_KeepWorldTransform_MetaData) }; // 3536828231
void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bPackBeforeMerge_SetBit(void* Obj)
{
	((UHoudiniInput*)Obj)->bPackBeforeMerge = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bPackBeforeMerge = { "bPackBeforeMerge", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bPackBeforeMerge_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPackBeforeMerge_MetaData), NewProp_bPackBeforeMerge_MetaData) };
void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bImportAsReference_SetBit(void* Obj)
{
	((UHoudiniInput*)Obj)->bImportAsReference = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bImportAsReference = { "bImportAsReference", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bImportAsReference_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportAsReference_MetaData), NewProp_bImportAsReference_MetaData) };
void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bImportAsReferenceRotScaleEnabled_SetBit(void* Obj)
{
	((UHoudiniInput*)Obj)->bImportAsReferenceRotScaleEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bImportAsReferenceRotScaleEnabled = { "bImportAsReferenceRotScaleEnabled", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bImportAsReferenceRotScaleEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportAsReferenceRotScaleEnabled_MetaData), NewProp_bImportAsReferenceRotScaleEnabled_MetaData) };
void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bImportAsReferenceBboxEnabled_SetBit(void* Obj)
{
	((UHoudiniInput*)Obj)->bImportAsReferenceBboxEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bImportAsReferenceBboxEnabled = { "bImportAsReferenceBboxEnabled", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bImportAsReferenceBboxEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportAsReferenceBboxEnabled_MetaData), NewProp_bImportAsReferenceBboxEnabled_MetaData) };
void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bImportAsReferenceMaterialEnabled_SetBit(void* Obj)
{
	((UHoudiniInput*)Obj)->bImportAsReferenceMaterialEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bImportAsReferenceMaterialEnabled = { "bImportAsReferenceMaterialEnabled", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bImportAsReferenceMaterialEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportAsReferenceMaterialEnabled_MetaData), NewProp_bImportAsReferenceMaterialEnabled_MetaData) };
void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bExportLODs_SetBit(void* Obj)
{
	((UHoudiniInput*)Obj)->bExportLODs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bExportLODs = { "bExportLODs", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bExportLODs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportLODs_MetaData), NewProp_bExportLODs_MetaData) };
void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bExportSockets_SetBit(void* Obj)
{
	((UHoudiniInput*)Obj)->bExportSockets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bExportSockets = { "bExportSockets", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bExportSockets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportSockets_MetaData), NewProp_bExportSockets_MetaData) };
void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bPreferNaniteFallbackMesh_SetBit(void* Obj)
{
	((UHoudiniInput*)Obj)->bPreferNaniteFallbackMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bPreferNaniteFallbackMesh = { "bPreferNaniteFallbackMesh", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bPreferNaniteFallbackMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreferNaniteFallbackMesh_MetaData), NewProp_bPreferNaniteFallbackMesh_MetaData) };
void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bExportColliders_SetBit(void* Obj)
{
	((UHoudiniInput*)Obj)->bExportColliders = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bExportColliders = { "bExportColliders", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bExportColliders_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportColliders_MetaData), NewProp_bExportColliders_MetaData) };
void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bExportMaterialParameters_SetBit(void* Obj)
{
	((UHoudiniInput*)Obj)->bExportMaterialParameters = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bExportMaterialParameters = { "bExportMaterialParameters", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bExportMaterialParameters_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportMaterialParameters_MetaData), NewProp_bExportMaterialParameters_MetaData) };
void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bDirectlyConnectHdas_SetBit(void* Obj)
{
	((UHoudiniInput*)Obj)->bDirectlyConnectHdas = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bDirectlyConnectHdas = { "bDirectlyConnectHdas", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bDirectlyConnectHdas_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDirectlyConnectHdas_MetaData), NewProp_bDirectlyConnectHdas_MetaData) };
void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bExportOptionsMenuExpanded_SetBit(void* Obj)
{
	((UHoudiniInput*)Obj)->bExportOptionsMenuExpanded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bExportOptionsMenuExpanded = { "bExportOptionsMenuExpanded", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bExportOptionsMenuExpanded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportOptionsMenuExpanded_MetaData), NewProp_bExportOptionsMenuExpanded_MetaData) };
void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bGeometryInputsMenuExpanded_SetBit(void* Obj)
{
	((UHoudiniInput*)Obj)->bGeometryInputsMenuExpanded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bGeometryInputsMenuExpanded = { "bGeometryInputsMenuExpanded", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bGeometryInputsMenuExpanded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGeometryInputsMenuExpanded_MetaData), NewProp_bGeometryInputsMenuExpanded_MetaData) };
void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeOptionsMenuExpanded_SetBit(void* Obj)
{
	((UHoudiniInput*)Obj)->bLandscapeOptionsMenuExpanded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeOptionsMenuExpanded = { "bLandscapeOptionsMenuExpanded", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeOptionsMenuExpanded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLandscapeOptionsMenuExpanded_MetaData), NewProp_bLandscapeOptionsMenuExpanded_MetaData) };
void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bWorldInputsMenuExpanded_SetBit(void* Obj)
{
	((UHoudiniInput*)Obj)->bWorldInputsMenuExpanded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bWorldInputsMenuExpanded = { "bWorldInputsMenuExpanded", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bWorldInputsMenuExpanded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWorldInputsMenuExpanded_MetaData), NewProp_bWorldInputsMenuExpanded_MetaData) };
void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCurveInputsMenuExpanded_SetBit(void* Obj)
{
	((UHoudiniInput*)Obj)->bCurveInputsMenuExpanded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCurveInputsMenuExpanded = { "bCurveInputsMenuExpanded", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCurveInputsMenuExpanded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCurveInputsMenuExpanded_MetaData), NewProp_bCurveInputsMenuExpanded_MetaData) };
void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCurvePointSelectionMenuExpanded_SetBit(void* Obj)
{
	((UHoudiniInput*)Obj)->bCurvePointSelectionMenuExpanded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCurvePointSelectionMenuExpanded = { "bCurvePointSelectionMenuExpanded", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCurvePointSelectionMenuExpanded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCurvePointSelectionMenuExpanded_MetaData), NewProp_bCurvePointSelectionMenuExpanded_MetaData) };
void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCurvePointSelectionUseAbsLocation_SetBit(void* Obj)
{
	((UHoudiniInput*)Obj)->bCurvePointSelectionUseAbsLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCurvePointSelectionUseAbsLocation = { "bCurvePointSelectionUseAbsLocation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCurvePointSelectionUseAbsLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCurvePointSelectionUseAbsLocation_MetaData), NewProp_bCurvePointSelectionUseAbsLocation_MetaData) };
void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCurvePointSelectionUseAbsRotation_SetBit(void* Obj)
{
	((UHoudiniInput*)Obj)->bCurvePointSelectionUseAbsRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCurvePointSelectionUseAbsRotation = { "bCurvePointSelectionUseAbsRotation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCurvePointSelectionUseAbsRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCurvePointSelectionUseAbsRotation_MetaData), NewProp_bCurvePointSelectionUseAbsRotation_MetaData) };
void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCookOnCurveChanged_SetBit(void* Obj)
{
	((UHoudiniInput*)Obj)->bCookOnCurveChanged = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCookOnCurveChanged = { "bCookOnCurveChanged", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCookOnCurveChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCookOnCurveChanged_MetaData), NewProp_bCookOnCurveChanged_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_GeometryInputObjects_Inner = { "GeometryInputObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniInputObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_GeometryInputObjects = { "GeometryInputObjects", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, GeometryInputObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeometryInputObjects_MetaData), NewProp_GeometryInputObjects_MetaData) };
void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bStaticMeshChanged_SetBit(void* Obj)
{
	((UHoudiniInput*)Obj)->bStaticMeshChanged = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bStaticMeshChanged = { "bStaticMeshChanged", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bStaticMeshChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStaticMeshChanged_MetaData), NewProp_bStaticMeshChanged_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_AssetInputObjects_Inner = { "AssetInputObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniInputObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_AssetInputObjects = { "AssetInputObjects", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, AssetInputObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetInputObjects_MetaData), NewProp_AssetInputObjects_MetaData) };
void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bInputAssetConnectedInHoudini_SetBit(void* Obj)
{
	((UHoudiniInput*)Obj)->bInputAssetConnectedInHoudini = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bInputAssetConnectedInHoudini = { "bInputAssetConnectedInHoudini", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bInputAssetConnectedInHoudini_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInputAssetConnectedInHoudini_MetaData), NewProp_bInputAssetConnectedInHoudini_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_CurveInputObjects_Inner = { "CurveInputObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniInputObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_CurveInputObjects = { "CurveInputObjects", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, CurveInputObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveInputObjects_MetaData), NewProp_CurveInputObjects_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_DefaultCurveOffset = { "DefaultCurveOffset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, DefaultCurveOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultCurveOffset_MetaData), NewProp_DefaultCurveOffset_MetaData) };
void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bAddRotAndScaleAttributesOnCurves_SetBit(void* Obj)
{
	((UHoudiniInput*)Obj)->bAddRotAndScaleAttributesOnCurves = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bAddRotAndScaleAttributesOnCurves = { "bAddRotAndScaleAttributesOnCurves", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bAddRotAndScaleAttributesOnCurves_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddRotAndScaleAttributesOnCurves_MetaData), NewProp_bAddRotAndScaleAttributesOnCurves_MetaData) };
void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bUseLegacyInputCurves_SetBit(void* Obj)
{
	((UHoudiniInput*)Obj)->bUseLegacyInputCurves = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bUseLegacyInputCurves = { "bUseLegacyInputCurves", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bUseLegacyInputCurves_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLegacyInputCurves_MetaData), NewProp_bUseLegacyInputCurves_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LandscapeInputObjects_Inner = { "LandscapeInputObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniInputObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LandscapeInputObjects = { "LandscapeInputObjects", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, LandscapeInputObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeInputObjects_MetaData), NewProp_LandscapeInputObjects_MetaData) };
void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeHasExportTypeChanged_SetBit(void* Obj)
{
	((UHoudiniInput*)Obj)->bLandscapeHasExportTypeChanged = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeHasExportTypeChanged = { "bLandscapeHasExportTypeChanged", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeHasExportTypeChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLandscapeHasExportTypeChanged_MetaData), NewProp_bLandscapeHasExportTypeChanged_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_WorldInputObjects_Inner = { "WorldInputObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniInputObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_WorldInputObjects = { "WorldInputObjects", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, WorldInputObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldInputObjects_MetaData), NewProp_WorldInputObjects_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_WorldInputBoundSelectorObjects_Inner = { "WorldInputBoundSelectorObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_WorldInputBoundSelectorObjects = { "WorldInputBoundSelectorObjects", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, WorldInputBoundSelectorObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldInputBoundSelectorObjects_MetaData), NewProp_WorldInputBoundSelectorObjects_MetaData) };
void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bIsWorldInputBoundSelector_SetBit(void* Obj)
{
	((UHoudiniInput*)Obj)->bIsWorldInputBoundSelector = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bIsWorldInputBoundSelector = { "bIsWorldInputBoundSelector", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bIsWorldInputBoundSelector_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsWorldInputBoundSelector_MetaData), NewProp_bIsWorldInputBoundSelector_MetaData) };
void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bWorldInputBoundSelectorAutoUpdate_SetBit(void* Obj)
{
	((UHoudiniInput*)Obj)->bWorldInputBoundSelectorAutoUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bWorldInputBoundSelectorAutoUpdate = { "bWorldInputBoundSelectorAutoUpdate", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bWorldInputBoundSelectorAutoUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWorldInputBoundSelectorAutoUpdate_MetaData), NewProp_bWorldInputBoundSelectorAutoUpdate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_UnrealSplineResolution = { "UnrealSplineResolution", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, UnrealSplineResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnrealSplineResolution_MetaData), NewProp_UnrealSplineResolution_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_SkeletalInputObjects_Inner = { "SkeletalInputObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniInputObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_SkeletalInputObjects = { "SkeletalInputObjects", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, SkeletalInputObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalInputObjects_MetaData), NewProp_SkeletalInputObjects_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_GeometryCollectionInputObjects_Inner = { "GeometryCollectionInputObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniInputObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_GeometryCollectionInputObjects = { "GeometryCollectionInputObjects", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, GeometryCollectionInputObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeometryCollectionInputObjects_MetaData), NewProp_GeometryCollectionInputObjects_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LandscapeSelectedComponents_ElementProp = { "LandscapeSelectedComponents", nullptr, (EPropertyFlags)0x0000000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULandscapeComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LandscapeSelectedComponents = { "LandscapeSelectedComponents", nullptr, (EPropertyFlags)0x002008800000000d, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, LandscapeSelectedComponents), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeSelectedComponents_MetaData), NewProp_LandscapeSelectedComponents_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputNodesPendingDelete_ElementProp = { "InputNodesPendingDelete", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputNodesPendingDelete = { "InputNodesPendingDelete", nullptr, (EPropertyFlags)0x0020080400202005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, InputNodesPendingDelete), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputNodesPendingDelete_MetaData), NewProp_InputNodesPendingDelete_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LastInsertedInputs_Inner = { "LastInsertedInputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LastInsertedInputs = { "LastInsertedInputs", nullptr, (EPropertyFlags)0x0010000000202005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, LastInsertedInputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastInsertedInputs_MetaData), NewProp_LastInsertedInputs_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LastUndoDeletedInputs_Inner = { "LastUndoDeletedInputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniInputObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LastUndoDeletedInputs = { "LastUndoDeletedInputs", nullptr, (EPropertyFlags)0x0010000400202005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, LastUndoDeletedInputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastUndoDeletedInputs_MetaData), NewProp_LastUndoDeletedInputs_MetaData) };
void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bUpdateInputLandscape_SetBit(void* Obj)
{
	((UHoudiniInput*)Obj)->bUpdateInputLandscape = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bUpdateInputLandscape = { "bUpdateInputLandscape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bUpdateInputLandscape_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdateInputLandscape_MetaData), NewProp_bUpdateInputLandscape_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LandscapeExportType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LandscapeExportType = { "LandscapeExportType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, LandscapeExportType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeExportType_MetaData), NewProp_LandscapeExportType_MetaData) }; // 1182319071
void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportSelectionOnly_SetBit(void* Obj)
{
	((UHoudiniInput*)Obj)->bLandscapeExportSelectionOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportSelectionOnly = { "bLandscapeExportSelectionOnly", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportSelectionOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLandscapeExportSelectionOnly_MetaData), NewProp_bLandscapeExportSelectionOnly_MetaData) };
void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeControlVisiblity_SetBit(void* Obj)
{
	((UHoudiniInput*)Obj)->bLandscapeControlVisiblity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeControlVisiblity = { "bLandscapeControlVisiblity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeControlVisiblity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLandscapeControlVisiblity_MetaData), NewProp_bLandscapeControlVisiblity_MetaData) };
void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeAutoSelectComponent_SetBit(void* Obj)
{
	((UHoudiniInput*)Obj)->bLandscapeAutoSelectComponent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeAutoSelectComponent = { "bLandscapeAutoSelectComponent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeAutoSelectComponent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLandscapeAutoSelectComponent_MetaData), NewProp_bLandscapeAutoSelectComponent_MetaData) };
void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportMaterials_SetBit(void* Obj)
{
	((UHoudiniInput*)Obj)->bLandscapeExportMaterials = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportMaterials = { "bLandscapeExportMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportMaterials_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLandscapeExportMaterials_MetaData), NewProp_bLandscapeExportMaterials_MetaData) };
void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportLighting_SetBit(void* Obj)
{
	((UHoudiniInput*)Obj)->bLandscapeExportLighting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportLighting = { "bLandscapeExportLighting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportLighting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLandscapeExportLighting_MetaData), NewProp_bLandscapeExportLighting_MetaData) };
void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportNormalizedUVs_SetBit(void* Obj)
{
	((UHoudiniInput*)Obj)->bLandscapeExportNormalizedUVs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportNormalizedUVs = { "bLandscapeExportNormalizedUVs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportNormalizedUVs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLandscapeExportNormalizedUVs_MetaData), NewProp_bLandscapeExportNormalizedUVs_MetaData) };
void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportTileUVs_SetBit(void* Obj)
{
	((UHoudiniInput*)Obj)->bLandscapeExportTileUVs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportTileUVs = { "bLandscapeExportTileUVs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportTileUVs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLandscapeExportTileUVs_MetaData), NewProp_bLandscapeExportTileUVs_MetaData) };
void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCanDeleteHoudiniNodes_SetBit(void* Obj)
{
	((UHoudiniInput*)Obj)->bCanDeleteHoudiniNodes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCanDeleteHoudiniNodes = { "bCanDeleteHoudiniNodes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCanDeleteHoudiniNodes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanDeleteHoudiniNodes_MetaData), NewProp_bCanDeleteHoudiniNodes_MetaData) };
void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeAutoSelectSplines_SetBit(void* Obj)
{
	((UHoudiniInput*)Obj)->bLandscapeAutoSelectSplines = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeAutoSelectSplines = { "bLandscapeAutoSelectSplines", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeAutoSelectSplines_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLandscapeAutoSelectSplines_MetaData), NewProp_bLandscapeAutoSelectSplines_MetaData) };
void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeSplinesExportOptionsMenuExpanded_SetBit(void* Obj)
{
	((UHoudiniInput*)Obj)->bLandscapeSplinesExportOptionsMenuExpanded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeSplinesExportOptionsMenuExpanded = { "bLandscapeSplinesExportOptionsMenuExpanded", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeSplinesExportOptionsMenuExpanded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLandscapeSplinesExportOptionsMenuExpanded_MetaData), NewProp_bLandscapeSplinesExportOptionsMenuExpanded_MetaData) };
void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeSplinesExportControlPoints_SetBit(void* Obj)
{
	((UHoudiniInput*)Obj)->bLandscapeSplinesExportControlPoints = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeSplinesExportControlPoints = { "bLandscapeSplinesExportControlPoints", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeSplinesExportControlPoints_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLandscapeSplinesExportControlPoints_MetaData), NewProp_bLandscapeSplinesExportControlPoints_MetaData) };
void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeSplinesExportLeftRightCurves_SetBit(void* Obj)
{
	((UHoudiniInput*)Obj)->bLandscapeSplinesExportLeftRightCurves = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeSplinesExportLeftRightCurves = { "bLandscapeSplinesExportLeftRightCurves", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeSplinesExportLeftRightCurves_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLandscapeSplinesExportLeftRightCurves_MetaData), NewProp_bLandscapeSplinesExportLeftRightCurves_MetaData) };
void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeSplinesExportSplineMeshComponents_SetBit(void* Obj)
{
	((UHoudiniInput*)Obj)->bLandscapeSplinesExportSplineMeshComponents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeSplinesExportSplineMeshComponents = { "bLandscapeSplinesExportSplineMeshComponents", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeSplinesExportSplineMeshComponents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLandscapeSplinesExportSplineMeshComponents_MetaData), NewProp_bLandscapeSplinesExportSplineMeshComponents_MetaData) };
void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bMergeSplineMeshComponents_SetBit(void* Obj)
{
	((UHoudiniInput*)Obj)->bMergeSplineMeshComponents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bMergeSplineMeshComponents = { "bMergeSplineMeshComponents", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bMergeSplineMeshComponents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMergeSplineMeshComponents_MetaData), NewProp_bMergeSplineMeshComponents_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputSettings = { "InputSettings", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, InputSettings), Z_Construct_UScriptStruct_FHoudiniInputObjectSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputSettings_MetaData), NewProp_InputSettings_MetaData) }; // 1194819466
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Label,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_PreviousType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_PreviousType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_AssetNodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputNodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_ParmId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bIsObjectPathParameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_CreatedDataNodeIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_CreatedDataNodeIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bHasChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bNeedsToTriggerUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_CachedBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Help,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_KeepWorldTransform_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_KeepWorldTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bPackBeforeMerge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bImportAsReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bImportAsReferenceRotScaleEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bImportAsReferenceBboxEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bImportAsReferenceMaterialEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bExportLODs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bExportSockets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bPreferNaniteFallbackMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bExportColliders,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bExportMaterialParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bDirectlyConnectHdas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bExportOptionsMenuExpanded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bGeometryInputsMenuExpanded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeOptionsMenuExpanded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bWorldInputsMenuExpanded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCurveInputsMenuExpanded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCurvePointSelectionMenuExpanded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCurvePointSelectionUseAbsLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCurvePointSelectionUseAbsRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCookOnCurveChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_GeometryInputObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_GeometryInputObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bStaticMeshChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_AssetInputObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_AssetInputObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bInputAssetConnectedInHoudini,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_CurveInputObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_CurveInputObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_DefaultCurveOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bAddRotAndScaleAttributesOnCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bUseLegacyInputCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LandscapeInputObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LandscapeInputObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeHasExportTypeChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_WorldInputObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_WorldInputObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_WorldInputBoundSelectorObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_WorldInputBoundSelectorObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bIsWorldInputBoundSelector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bWorldInputBoundSelectorAutoUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_UnrealSplineResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_SkeletalInputObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_SkeletalInputObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_GeometryCollectionInputObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_GeometryCollectionInputObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LandscapeSelectedComponents_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LandscapeSelectedComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputNodesPendingDelete_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputNodesPendingDelete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LastInsertedInputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LastInsertedInputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LastUndoDeletedInputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LastUndoDeletedInputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bUpdateInputLandscape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LandscapeExportType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LandscapeExportType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportSelectionOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeControlVisiblity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeAutoSelectComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportLighting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportNormalizedUVs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportTileUVs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCanDeleteHoudiniNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeAutoSelectSplines,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeSplinesExportOptionsMenuExpanded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeSplinesExportControlPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeSplinesExportLeftRightCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeSplinesExportSplineMeshComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bMergeSplineMeshComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniInput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInput_Statics::ClassParams = {
	&UHoudiniInput::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniInput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniInput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniInput()
{
	if (!Z_Registration_Info_UClass_UHoudiniInput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInput.OuterSingleton, Z_Construct_UClass_UHoudiniInput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniInput.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInput>()
{
	return UHoudiniInput::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInput);
UHoudiniInput::~UHoudiniInput() {}
// End Class UHoudiniInput

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInput_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniInput, UHoudiniInput::StaticClass, TEXT("UHoudiniInput"), &Z_Registration_Info_UClass_UHoudiniInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInput), 3773521043U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInput_h_805212532(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInput_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
