// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniInputObjectSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniInputObjectSettings() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniInputObjectSettings();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin ScriptStruct FHoudiniInputObjectSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniInputObjectSettings;
class UScriptStruct* FHoudiniInputObjectSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniInputObjectSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniInputObjectSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniInputObjectSettings"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniInputObjectSettings.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniInputObjectSettings>()
{
	return FHoudiniInputObjectSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HoudiniInputObjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeepWorldTransform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputObjectSettings" },
		{ "ModuleRelativePath", "Public/HoudiniInputObjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportAsReference_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputObjectSettings" },
		{ "ModuleRelativePath", "Public/HoudiniInputObjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportAsReferenceRotScaleEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputObjectSettings" },
		{ "ModuleRelativePath", "Public/HoudiniInputObjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportAsReferenceBboxEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputObjectSettings" },
		{ "ModuleRelativePath", "Public/HoudiniInputObjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportAsReferenceMaterialEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputObjectSettings" },
		{ "ModuleRelativePath", "Public/HoudiniInputObjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportLODs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputObjectSettings" },
		{ "ModuleRelativePath", "Public/HoudiniInputObjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportSockets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputObjectSettings" },
		{ "ModuleRelativePath", "Public/HoudiniInputObjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreferNaniteFallbackMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputObjectSettings" },
		{ "ModuleRelativePath", "Public/HoudiniInputObjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportColliders_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputObjectSettings" },
		{ "ModuleRelativePath", "Public/HoudiniInputObjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportMaterialParameters_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputObjectSettings" },
		{ "ModuleRelativePath", "Public/HoudiniInputObjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddRotAndScaleAttributesOnCurves_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputObjectSettings" },
		{ "ModuleRelativePath", "Public/HoudiniInputObjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLegacyInputCurves_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputObjectSettings" },
		{ "ModuleRelativePath", "Public/HoudiniInputObjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnrealSplineResolution_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputObjectSettings" },
		{ "ModuleRelativePath", "Public/HoudiniInputObjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeExportType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputObjectSettings" },
		{ "ModuleRelativePath", "Public/HoudiniInputObjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeExportSelectionOnly_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputObjectSettings" },
		{ "ModuleRelativePath", "Public/HoudiniInputObjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeAutoSelectComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputObjectSettings" },
		{ "ModuleRelativePath", "Public/HoudiniInputObjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeExportMaterials_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputObjectSettings" },
		{ "ModuleRelativePath", "Public/HoudiniInputObjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeExportLighting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputObjectSettings" },
		{ "ModuleRelativePath", "Public/HoudiniInputObjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeExportNormalizedUVs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputObjectSettings" },
		{ "ModuleRelativePath", "Public/HoudiniInputObjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeExportTileUVs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputObjectSettings" },
		{ "ModuleRelativePath", "Public/HoudiniInputObjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeAutoSelectSplines_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputObjectSettings" },
		{ "ModuleRelativePath", "Public/HoudiniInputObjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeSplinesExportControlPoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputObjectSettings" },
		{ "ModuleRelativePath", "Public/HoudiniInputObjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeSplinesExportLeftRightCurves_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputObjectSettings" },
		{ "ModuleRelativePath", "Public/HoudiniInputObjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeSplinesExportSplineMeshComponents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputObjectSettings" },
		{ "ModuleRelativePath", "Public/HoudiniInputObjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMergeSplineMeshComponents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputObjectSettings" },
		{ "ModuleRelativePath", "Public/HoudiniInputObjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportHeightDataPerEditLayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputObjectSettings" },
		{ "ModuleRelativePath", "Public/HoudiniInputObjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportPaintLayersPerEditLayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputObjectSettings" },
		{ "ModuleRelativePath", "Public/HoudiniInputObjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportMergedPaintLayers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputObjectSettings" },
		{ "ModuleRelativePath", "Public/HoudiniInputObjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportLevelInstanceContent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputObjectSettings" },
		{ "ModuleRelativePath", "Public/HoudiniInputObjectSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_KeepWorldTransform_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_KeepWorldTransform;
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
	static void NewProp_bAddRotAndScaleAttributesOnCurves_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddRotAndScaleAttributesOnCurves;
	static void NewProp_bUseLegacyInputCurves_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLegacyInputCurves;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UnrealSplineResolution;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LandscapeExportType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LandscapeExportType;
	static void NewProp_bLandscapeExportSelectionOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeExportSelectionOnly;
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
	static void NewProp_bLandscapeAutoSelectSplines_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeAutoSelectSplines;
	static void NewProp_bLandscapeSplinesExportControlPoints_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeSplinesExportControlPoints;
	static void NewProp_bLandscapeSplinesExportLeftRightCurves_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeSplinesExportLeftRightCurves;
	static void NewProp_bLandscapeSplinesExportSplineMeshComponents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeSplinesExportSplineMeshComponents;
	static void NewProp_bMergeSplineMeshComponents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeSplineMeshComponents;
	static void NewProp_bExportHeightDataPerEditLayer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportHeightDataPerEditLayer;
	static void NewProp_bExportPaintLayersPerEditLayer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportPaintLayersPerEditLayer;
	static void NewProp_bExportMergedPaintLayers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportMergedPaintLayers;
	static void NewProp_bExportLevelInstanceContent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportLevelInstanceContent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniInputObjectSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_KeepWorldTransform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_KeepWorldTransform = { "KeepWorldTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInputObjectSettings, KeepWorldTransform), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeepWorldTransform_MetaData), NewProp_KeepWorldTransform_MetaData) }; // 3536828231
void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReference_SetBit(void* Obj)
{
	((FHoudiniInputObjectSettings*)Obj)->bImportAsReference = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReference = { "bImportAsReference", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReference_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportAsReference_MetaData), NewProp_bImportAsReference_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceRotScaleEnabled_SetBit(void* Obj)
{
	((FHoudiniInputObjectSettings*)Obj)->bImportAsReferenceRotScaleEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceRotScaleEnabled = { "bImportAsReferenceRotScaleEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceRotScaleEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportAsReferenceRotScaleEnabled_MetaData), NewProp_bImportAsReferenceRotScaleEnabled_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceBboxEnabled_SetBit(void* Obj)
{
	((FHoudiniInputObjectSettings*)Obj)->bImportAsReferenceBboxEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceBboxEnabled = { "bImportAsReferenceBboxEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceBboxEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportAsReferenceBboxEnabled_MetaData), NewProp_bImportAsReferenceBboxEnabled_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceMaterialEnabled_SetBit(void* Obj)
{
	((FHoudiniInputObjectSettings*)Obj)->bImportAsReferenceMaterialEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceMaterialEnabled = { "bImportAsReferenceMaterialEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceMaterialEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportAsReferenceMaterialEnabled_MetaData), NewProp_bImportAsReferenceMaterialEnabled_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportLODs_SetBit(void* Obj)
{
	((FHoudiniInputObjectSettings*)Obj)->bExportLODs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportLODs = { "bExportLODs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportLODs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportLODs_MetaData), NewProp_bExportLODs_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportSockets_SetBit(void* Obj)
{
	((FHoudiniInputObjectSettings*)Obj)->bExportSockets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportSockets = { "bExportSockets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportSockets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportSockets_MetaData), NewProp_bExportSockets_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bPreferNaniteFallbackMesh_SetBit(void* Obj)
{
	((FHoudiniInputObjectSettings*)Obj)->bPreferNaniteFallbackMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bPreferNaniteFallbackMesh = { "bPreferNaniteFallbackMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bPreferNaniteFallbackMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreferNaniteFallbackMesh_MetaData), NewProp_bPreferNaniteFallbackMesh_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportColliders_SetBit(void* Obj)
{
	((FHoudiniInputObjectSettings*)Obj)->bExportColliders = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportColliders = { "bExportColliders", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportColliders_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportColliders_MetaData), NewProp_bExportColliders_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportMaterialParameters_SetBit(void* Obj)
{
	((FHoudiniInputObjectSettings*)Obj)->bExportMaterialParameters = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportMaterialParameters = { "bExportMaterialParameters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportMaterialParameters_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportMaterialParameters_MetaData), NewProp_bExportMaterialParameters_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bAddRotAndScaleAttributesOnCurves_SetBit(void* Obj)
{
	((FHoudiniInputObjectSettings*)Obj)->bAddRotAndScaleAttributesOnCurves = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bAddRotAndScaleAttributesOnCurves = { "bAddRotAndScaleAttributesOnCurves", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bAddRotAndScaleAttributesOnCurves_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddRotAndScaleAttributesOnCurves_MetaData), NewProp_bAddRotAndScaleAttributesOnCurves_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bUseLegacyInputCurves_SetBit(void* Obj)
{
	((FHoudiniInputObjectSettings*)Obj)->bUseLegacyInputCurves = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bUseLegacyInputCurves = { "bUseLegacyInputCurves", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bUseLegacyInputCurves_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLegacyInputCurves_MetaData), NewProp_bUseLegacyInputCurves_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_UnrealSplineResolution = { "UnrealSplineResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInputObjectSettings, UnrealSplineResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnrealSplineResolution_MetaData), NewProp_UnrealSplineResolution_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_LandscapeExportType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_LandscapeExportType = { "LandscapeExportType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInputObjectSettings, LandscapeExportType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeExportType_MetaData), NewProp_LandscapeExportType_MetaData) }; // 1182319071
void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportSelectionOnly_SetBit(void* Obj)
{
	((FHoudiniInputObjectSettings*)Obj)->bLandscapeExportSelectionOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportSelectionOnly = { "bLandscapeExportSelectionOnly", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportSelectionOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLandscapeExportSelectionOnly_MetaData), NewProp_bLandscapeExportSelectionOnly_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeAutoSelectComponent_SetBit(void* Obj)
{
	((FHoudiniInputObjectSettings*)Obj)->bLandscapeAutoSelectComponent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeAutoSelectComponent = { "bLandscapeAutoSelectComponent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeAutoSelectComponent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLandscapeAutoSelectComponent_MetaData), NewProp_bLandscapeAutoSelectComponent_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportMaterials_SetBit(void* Obj)
{
	((FHoudiniInputObjectSettings*)Obj)->bLandscapeExportMaterials = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportMaterials = { "bLandscapeExportMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportMaterials_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLandscapeExportMaterials_MetaData), NewProp_bLandscapeExportMaterials_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportLighting_SetBit(void* Obj)
{
	((FHoudiniInputObjectSettings*)Obj)->bLandscapeExportLighting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportLighting = { "bLandscapeExportLighting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportLighting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLandscapeExportLighting_MetaData), NewProp_bLandscapeExportLighting_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportNormalizedUVs_SetBit(void* Obj)
{
	((FHoudiniInputObjectSettings*)Obj)->bLandscapeExportNormalizedUVs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportNormalizedUVs = { "bLandscapeExportNormalizedUVs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportNormalizedUVs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLandscapeExportNormalizedUVs_MetaData), NewProp_bLandscapeExportNormalizedUVs_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportTileUVs_SetBit(void* Obj)
{
	((FHoudiniInputObjectSettings*)Obj)->bLandscapeExportTileUVs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportTileUVs = { "bLandscapeExportTileUVs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportTileUVs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLandscapeExportTileUVs_MetaData), NewProp_bLandscapeExportTileUVs_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeAutoSelectSplines_SetBit(void* Obj)
{
	((FHoudiniInputObjectSettings*)Obj)->bLandscapeAutoSelectSplines = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeAutoSelectSplines = { "bLandscapeAutoSelectSplines", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeAutoSelectSplines_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLandscapeAutoSelectSplines_MetaData), NewProp_bLandscapeAutoSelectSplines_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportControlPoints_SetBit(void* Obj)
{
	((FHoudiniInputObjectSettings*)Obj)->bLandscapeSplinesExportControlPoints = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportControlPoints = { "bLandscapeSplinesExportControlPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportControlPoints_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLandscapeSplinesExportControlPoints_MetaData), NewProp_bLandscapeSplinesExportControlPoints_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportLeftRightCurves_SetBit(void* Obj)
{
	((FHoudiniInputObjectSettings*)Obj)->bLandscapeSplinesExportLeftRightCurves = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportLeftRightCurves = { "bLandscapeSplinesExportLeftRightCurves", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportLeftRightCurves_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLandscapeSplinesExportLeftRightCurves_MetaData), NewProp_bLandscapeSplinesExportLeftRightCurves_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportSplineMeshComponents_SetBit(void* Obj)
{
	((FHoudiniInputObjectSettings*)Obj)->bLandscapeSplinesExportSplineMeshComponents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportSplineMeshComponents = { "bLandscapeSplinesExportSplineMeshComponents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportSplineMeshComponents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLandscapeSplinesExportSplineMeshComponents_MetaData), NewProp_bLandscapeSplinesExportSplineMeshComponents_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bMergeSplineMeshComponents_SetBit(void* Obj)
{
	((FHoudiniInputObjectSettings*)Obj)->bMergeSplineMeshComponents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bMergeSplineMeshComponents = { "bMergeSplineMeshComponents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bMergeSplineMeshComponents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMergeSplineMeshComponents_MetaData), NewProp_bMergeSplineMeshComponents_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportHeightDataPerEditLayer_SetBit(void* Obj)
{
	((FHoudiniInputObjectSettings*)Obj)->bExportHeightDataPerEditLayer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportHeightDataPerEditLayer = { "bExportHeightDataPerEditLayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportHeightDataPerEditLayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportHeightDataPerEditLayer_MetaData), NewProp_bExportHeightDataPerEditLayer_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportPaintLayersPerEditLayer_SetBit(void* Obj)
{
	((FHoudiniInputObjectSettings*)Obj)->bExportPaintLayersPerEditLayer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportPaintLayersPerEditLayer = { "bExportPaintLayersPerEditLayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportPaintLayersPerEditLayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportPaintLayersPerEditLayer_MetaData), NewProp_bExportPaintLayersPerEditLayer_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportMergedPaintLayers_SetBit(void* Obj)
{
	((FHoudiniInputObjectSettings*)Obj)->bExportMergedPaintLayers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportMergedPaintLayers = { "bExportMergedPaintLayers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportMergedPaintLayers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportMergedPaintLayers_MetaData), NewProp_bExportMergedPaintLayers_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportLevelInstanceContent_SetBit(void* Obj)
{
	((FHoudiniInputObjectSettings*)Obj)->bExportLevelInstanceContent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportLevelInstanceContent = { "bExportLevelInstanceContent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportLevelInstanceContent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportLevelInstanceContent_MetaData), NewProp_bExportLevelInstanceContent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_KeepWorldTransform_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_KeepWorldTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceRotScaleEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceBboxEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceMaterialEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportLODs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportSockets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bPreferNaniteFallbackMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportColliders,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportMaterialParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bAddRotAndScaleAttributesOnCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bUseLegacyInputCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_UnrealSplineResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_LandscapeExportType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_LandscapeExportType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportSelectionOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeAutoSelectComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportLighting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportNormalizedUVs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportTileUVs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeAutoSelectSplines,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportControlPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportLeftRightCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportSplineMeshComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bMergeSplineMeshComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportHeightDataPerEditLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportPaintLayersPerEditLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportMergedPaintLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportLevelInstanceContent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniInputObjectSettings",
	Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::PropPointers),
	sizeof(FHoudiniInputObjectSettings),
	alignof(FHoudiniInputObjectSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniInputObjectSettings()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniInputObjectSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniInputObjectSettings.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniInputObjectSettings.InnerSingleton;
}
// End ScriptStruct FHoudiniInputObjectSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputObjectSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHoudiniInputObjectSettings::StaticStruct, Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewStructOps, TEXT("HoudiniInputObjectSettings"), &Z_Registration_Info_UScriptStruct_HoudiniInputObjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniInputObjectSettings), 1194819466U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputObjectSettings_h_2308741669(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputObjectSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputObjectSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
