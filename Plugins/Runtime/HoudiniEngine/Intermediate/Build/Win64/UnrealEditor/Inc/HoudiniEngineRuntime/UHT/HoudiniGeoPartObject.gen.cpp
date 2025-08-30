// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniGeoPartObject.h"
#include "HoudiniEngineRuntime/Public/HoudiniGenericAttribute.h"
#include "HoudiniEngineRuntime/Public/HoudiniMeshSocket.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniGeoPartObject() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInstancerType();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniPartType();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGenericAttribute();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGeoPartObject();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniMeshSocket();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin ScriptStruct FHoudiniGeoPartObject
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniGeoPartObject;
class UScriptStruct* FHoudiniGeoPartObject::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniGeoPartObject.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniGeoPartObject.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniGeoPartObject, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniGeoPartObject"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniGeoPartObject.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniGeoPartObject>()
{
	return FHoudiniGeoPartObject::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HoudiniGeoPartObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniGeoPartObject" },
		{ "ModuleRelativePath", "Public/HoudiniGeoPartObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniGeoPartObject" },
		{ "ModuleRelativePath", "Public/HoudiniGeoPartObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniGeoPartObject" },
		{ "ModuleRelativePath", "Public/HoudiniGeoPartObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniGeoPartObject" },
		{ "ModuleRelativePath", "Public/HoudiniGeoPartObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeoId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniGeoPartObject" },
		{ "ModuleRelativePath", "Public/HoudiniGeoPartObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniGeoPartObject" },
		{ "ModuleRelativePath", "Public/HoudiniGeoPartObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniGeoPartObject" },
		{ "ModuleRelativePath", "Public/HoudiniGeoPartObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasCustomPartName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniGeoPartObject" },
		{ "ModuleRelativePath", "Public/HoudiniGeoPartObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplitGroups_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniGeoPartObject" },
		{ "ModuleRelativePath", "Public/HoudiniGeoPartObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformMatrix_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniGeoPartObject" },
		{ "ModuleRelativePath", "Public/HoudiniGeoPartObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodePath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniGeoPartObject" },
		{ "ModuleRelativePath", "Public/HoudiniGeoPartObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniGeoPartObject" },
		{ "ModuleRelativePath", "Public/HoudiniGeoPartObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstancerType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniGeoPartObject" },
		{ "ModuleRelativePath", "Public/HoudiniGeoPartObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniGeoPartObject" },
		{ "ModuleRelativePath", "Public/HoudiniGeoPartObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasEditLayers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniGeoPartObject" },
		{ "ModuleRelativePath", "Public/HoudiniGeoPartObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeLayerName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniGeoPartObject" },
		{ "ModuleRelativePath", "Public/HoudiniGeoPartObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeTileIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniGeoPartObject" },
		{ "ModuleRelativePath", "Public/HoudiniGeoPartObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstancerName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniGeoPartObject" },
		{ "ModuleRelativePath", "Public/HoudiniGeoPartObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsVisible_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniGeoPartObject" },
		{ "ModuleRelativePath", "Public/HoudiniGeoPartObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsEditable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniGeoPartObject" },
		{ "ModuleRelativePath", "Public/HoudiniGeoPartObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTemplated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniGeoPartObject" },
		{ "ModuleRelativePath", "Public/HoudiniGeoPartObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInstanced_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniGeoPartObject" },
		{ "ModuleRelativePath", "Public/HoudiniGeoPartObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasGeoChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniGeoPartObject" },
		{ "ModuleRelativePath", "Public/HoudiniGeoPartObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasPartChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniGeoPartObject" },
		{ "ModuleRelativePath", "Public/HoudiniGeoPartObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasTransformChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniGeoPartObject" },
		{ "ModuleRelativePath", "Public/HoudiniGeoPartObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasMaterialsChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniGeoPartObject" },
		{ "ModuleRelativePath", "Public/HoudiniGeoPartObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllMeshSockets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniGeoPartObject" },
		{ "ModuleRelativePath", "Public/HoudiniGeoPartObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenericPropertyAttributes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniGeoPartObject" },
		{ "ModuleRelativePath", "Public/HoudiniGeoPartObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bKeepTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniGeoPartObject" },
		{ "ModuleRelativePath", "Public/HoudiniGeoPartObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AssetId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ObjectId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GeoId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PartId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PartName;
	static void NewProp_bHasCustomPartName_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasCustomPartName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SplitGroups_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SplitGroups;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformMatrix;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodePath;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InstancerType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InstancerType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VolumeName;
	static void NewProp_bHasEditLayers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasEditLayers;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VolumeLayerName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VolumeTileIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InstancerName;
	static void NewProp_bIsVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
	static void NewProp_bIsEditable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEditable;
	static void NewProp_bIsTemplated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTemplated;
	static void NewProp_bIsInstanced_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInstanced;
	static void NewProp_bHasGeoChanged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasGeoChanged;
	static void NewProp_bHasPartChanged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasPartChanged;
	static void NewProp_bHasTransformChanged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasTransformChanged;
	static void NewProp_bHasMaterialsChanged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasMaterialsChanged;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AllMeshSockets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllMeshSockets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GenericPropertyAttributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GenericPropertyAttributes;
	static void NewProp_bKeepTags_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniGeoPartObject>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_AssetId = { "AssetId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, AssetId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetId_MetaData), NewProp_AssetId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, AssetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetName_MetaData), NewProp_AssetName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_ObjectId = { "ObjectId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, ObjectId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectId_MetaData), NewProp_ObjectId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_ObjectName = { "ObjectName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, ObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectName_MetaData), NewProp_ObjectName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_GeoId = { "GeoId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, GeoId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeoId_MetaData), NewProp_GeoId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_PartId = { "PartId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, PartId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartId_MetaData), NewProp_PartId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_PartName = { "PartName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, PartName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartName_MetaData), NewProp_PartName_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasCustomPartName_SetBit(void* Obj)
{
	((FHoudiniGeoPartObject*)Obj)->bHasCustomPartName = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasCustomPartName = { "bHasCustomPartName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniGeoPartObject), &Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasCustomPartName_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasCustomPartName_MetaData), NewProp_bHasCustomPartName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_SplitGroups_Inner = { "SplitGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_SplitGroups = { "SplitGroups", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, SplitGroups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplitGroups_MetaData), NewProp_SplitGroups_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_TransformMatrix = { "TransformMatrix", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, TransformMatrix), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformMatrix_MetaData), NewProp_TransformMatrix_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_NodePath = { "NodePath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, NodePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodePath_MetaData), NewProp_NodePath_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, Type), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniPartType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 2617854909
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_InstancerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_InstancerType = { "InstancerType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, InstancerType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInstancerType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstancerType_MetaData), NewProp_InstancerType_MetaData) }; // 1421601064
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_VolumeName = { "VolumeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, VolumeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeName_MetaData), NewProp_VolumeName_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasEditLayers_SetBit(void* Obj)
{
	((FHoudiniGeoPartObject*)Obj)->bHasEditLayers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasEditLayers = { "bHasEditLayers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniGeoPartObject), &Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasEditLayers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasEditLayers_MetaData), NewProp_bHasEditLayers_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_VolumeLayerName = { "VolumeLayerName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, VolumeLayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeLayerName_MetaData), NewProp_VolumeLayerName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_VolumeTileIndex = { "VolumeTileIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, VolumeTileIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeTileIndex_MetaData), NewProp_VolumeTileIndex_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_InstancerName = { "InstancerName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, InstancerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstancerName_MetaData), NewProp_InstancerName_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsVisible_SetBit(void* Obj)
{
	((FHoudiniGeoPartObject*)Obj)->bIsVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniGeoPartObject), &Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsVisible_MetaData), NewProp_bIsVisible_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsEditable_SetBit(void* Obj)
{
	((FHoudiniGeoPartObject*)Obj)->bIsEditable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsEditable = { "bIsEditable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniGeoPartObject), &Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsEditable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsEditable_MetaData), NewProp_bIsEditable_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsTemplated_SetBit(void* Obj)
{
	((FHoudiniGeoPartObject*)Obj)->bIsTemplated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsTemplated = { "bIsTemplated", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniGeoPartObject), &Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsTemplated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTemplated_MetaData), NewProp_bIsTemplated_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsInstanced_SetBit(void* Obj)
{
	((FHoudiniGeoPartObject*)Obj)->bIsInstanced = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsInstanced = { "bIsInstanced", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniGeoPartObject), &Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsInstanced_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInstanced_MetaData), NewProp_bIsInstanced_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasGeoChanged_SetBit(void* Obj)
{
	((FHoudiniGeoPartObject*)Obj)->bHasGeoChanged = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasGeoChanged = { "bHasGeoChanged", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniGeoPartObject), &Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasGeoChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasGeoChanged_MetaData), NewProp_bHasGeoChanged_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasPartChanged_SetBit(void* Obj)
{
	((FHoudiniGeoPartObject*)Obj)->bHasPartChanged = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasPartChanged = { "bHasPartChanged", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniGeoPartObject), &Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasPartChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasPartChanged_MetaData), NewProp_bHasPartChanged_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasTransformChanged_SetBit(void* Obj)
{
	((FHoudiniGeoPartObject*)Obj)->bHasTransformChanged = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasTransformChanged = { "bHasTransformChanged", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniGeoPartObject), &Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasTransformChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasTransformChanged_MetaData), NewProp_bHasTransformChanged_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasMaterialsChanged_SetBit(void* Obj)
{
	((FHoudiniGeoPartObject*)Obj)->bHasMaterialsChanged = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasMaterialsChanged = { "bHasMaterialsChanged", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniGeoPartObject), &Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasMaterialsChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasMaterialsChanged_MetaData), NewProp_bHasMaterialsChanged_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_AllMeshSockets_Inner = { "AllMeshSockets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniMeshSocket, METADATA_PARAMS(0, nullptr) }; // 4209259389
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_AllMeshSockets = { "AllMeshSockets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, AllMeshSockets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllMeshSockets_MetaData), NewProp_AllMeshSockets_MetaData) }; // 4209259389
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_GenericPropertyAttributes_Inner = { "GenericPropertyAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniGenericAttribute, METADATA_PARAMS(0, nullptr) }; // 499845423
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_GenericPropertyAttributes = { "GenericPropertyAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, GenericPropertyAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenericPropertyAttributes_MetaData), NewProp_GenericPropertyAttributes_MetaData) }; // 499845423
void Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bKeepTags_SetBit(void* Obj)
{
	((FHoudiniGeoPartObject*)Obj)->bKeepTags = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bKeepTags = { "bKeepTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniGeoPartObject), &Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bKeepTags_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bKeepTags_MetaData), NewProp_bKeepTags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_AssetId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_AssetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_ObjectId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_ObjectName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_GeoId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_PartId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_PartName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasCustomPartName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_SplitGroups_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_SplitGroups,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_TransformMatrix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_NodePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_InstancerType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_InstancerType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_VolumeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasEditLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_VolumeLayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_VolumeTileIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_InstancerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsEditable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsTemplated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsInstanced,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasGeoChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasPartChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasTransformChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasMaterialsChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_AllMeshSockets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_AllMeshSockets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_GenericPropertyAttributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_GenericPropertyAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bKeepTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniGeoPartObject",
	Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::PropPointers),
	sizeof(FHoudiniGeoPartObject),
	alignof(FHoudiniGeoPartObject),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGeoPartObject()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniGeoPartObject.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniGeoPartObject.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniGeoPartObject.InnerSingleton;
}
// End ScriptStruct FHoudiniGeoPartObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniGeoPartObject_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHoudiniGeoPartObject::StaticStruct, Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewStructOps, TEXT("HoudiniGeoPartObject"), &Z_Registration_Info_UScriptStruct_HoudiniGeoPartObject, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniGeoPartObject), 3840216616U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniGeoPartObject_h_684085005(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniGeoPartObject_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniGeoPartObject_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
