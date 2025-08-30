// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniOutputObject.h"
#include "HoudiniEngineRuntime/Public/HoudiniCurveOutputProperties.h"
#include "HoudiniEngineRuntime/Public/HoudiniDataLayer.h"
#include "HoudiniEngineRuntime/Public/HoudiniHLODLayer.h"
#include "HoudiniEngineRuntime/Public/HoudiniLevelInstanceParams.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniOutputObject() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType_NoRegister();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniDataLayer();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniHLODLayer();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniOutputObject();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin ScriptStruct FHoudiniOutputObject
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniOutputObject;
class UScriptStruct* FHoudiniOutputObject::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniOutputObject.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniOutputObject.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniOutputObject, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniOutputObject"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniOutputObject.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniOutputObject>()
{
	return FHoudiniOutputObject::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HoudiniOutputObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniOutputObject" },
		{ "ModuleRelativePath", "Public/HoudiniOutputObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputComponents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniOutputObject" },
		{ "ModuleRelativePath", "Public/HoudiniOutputObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputActors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniOutputObject" },
		{ "ModuleRelativePath", "Public/HoudiniOutputObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniOutputObject" },
		{ "ModuleRelativePath", "Public/HoudiniOutputObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProxyObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniOutputObject" },
		{ "ModuleRelativePath", "Public/HoudiniOutputObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProxyComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniOutputObject" },
		{ "ModuleRelativePath", "Public/HoudiniOutputObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProxyIsCurrent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniOutputObject" },
		{ "ModuleRelativePath", "Public/HoudiniOutputObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsImplicit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniOutputObject" },
		{ "ModuleRelativePath", "Public/HoudiniOutputObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInvisibleCollisionMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniOutputObject" },
		{ "ModuleRelativePath", "Public/HoudiniOutputObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsGeometryCollectionPiece_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniOutputObject" },
		{ "ModuleRelativePath", "Public/HoudiniOutputObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeometryCollectionPieceName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniOutputObject" },
		{ "ModuleRelativePath", "Public/HoudiniOutputObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakeName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniOutputObject" },
		{ "ModuleRelativePath", "Public/HoudiniOutputObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveOutputProperty_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniOutputObject" },
		{ "ModuleRelativePath", "Public/HoudiniOutputObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedAttributes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniOutputObject" },
		{ "ModuleRelativePath", "Public/HoudiniOutputObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedTokens_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniOutputObject" },
		{ "ModuleRelativePath", "Public/HoudiniOutputObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserFoliageType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniOutputObject" },
		{ "ModuleRelativePath", "Public/HoudiniOutputObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoliageType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniOutputObject" },
		{ "ModuleRelativePath", "Public/HoudiniOutputObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniOutputObject" },
		{ "ModuleRelativePath", "Public/HoudiniOutputObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataLayers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniOutputObject" },
		{ "ModuleRelativePath", "Public/HoudiniOutputObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HLODLayers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniOutputObject" },
		{ "ModuleRelativePath", "Public/HoudiniOutputObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelInstanceParams_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniOutputObject" },
		{ "ModuleRelativePath", "Public/HoudiniOutputObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutputObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutputComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputComponents;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OutputActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputActors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutputComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProxyObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProxyComponent;
	static void NewProp_bProxyIsCurrent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bProxyIsCurrent;
	static void NewProp_bIsImplicit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsImplicit;
	static void NewProp_bIsInvisibleCollisionMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInvisibleCollisionMesh;
	static void NewProp_bIsGeometryCollectionPiece_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGeometryCollectionPiece;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GeometryCollectionPieceName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BakeName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurveOutputProperty;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CachedAttributes_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CachedAttributes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CachedAttributes;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CachedTokens_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CachedTokens_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CachedTokens;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UserFoliageType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FoliageType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataLayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataLayers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HLODLayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HLODLayers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LevelInstanceParams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniOutputObject>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputObject = { "OutputObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniOutputObject, OutputObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputObject_MetaData), NewProp_OutputObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputComponents_Inner = { "OutputComponents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputComponents = { "OutputComponents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniOutputObject, OutputComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputComponents_MetaData), NewProp_OutputComponents_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputActors_Inner = { "OutputActors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputActors = { "OutputActors", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniOutputObject, OutputActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputActors_MetaData), NewProp_OutputActors_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputComponent = { "OutputComponent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniOutputObject, OutputComponent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputComponent_MetaData), NewProp_OutputComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_ProxyObject = { "ProxyObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniOutputObject, ProxyObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProxyObject_MetaData), NewProp_ProxyObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_ProxyComponent = { "ProxyComponent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniOutputObject, ProxyComponent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProxyComponent_MetaData), NewProp_ProxyComponent_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bProxyIsCurrent_SetBit(void* Obj)
{
	((FHoudiniOutputObject*)Obj)->bProxyIsCurrent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bProxyIsCurrent = { "bProxyIsCurrent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniOutputObject), &Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bProxyIsCurrent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProxyIsCurrent_MetaData), NewProp_bProxyIsCurrent_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsImplicit_SetBit(void* Obj)
{
	((FHoudiniOutputObject*)Obj)->bIsImplicit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsImplicit = { "bIsImplicit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniOutputObject), &Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsImplicit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsImplicit_MetaData), NewProp_bIsImplicit_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsInvisibleCollisionMesh_SetBit(void* Obj)
{
	((FHoudiniOutputObject*)Obj)->bIsInvisibleCollisionMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsInvisibleCollisionMesh = { "bIsInvisibleCollisionMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniOutputObject), &Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsInvisibleCollisionMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInvisibleCollisionMesh_MetaData), NewProp_bIsInvisibleCollisionMesh_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsGeometryCollectionPiece_SetBit(void* Obj)
{
	((FHoudiniOutputObject*)Obj)->bIsGeometryCollectionPiece = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsGeometryCollectionPiece = { "bIsGeometryCollectionPiece", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniOutputObject), &Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsGeometryCollectionPiece_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsGeometryCollectionPiece_MetaData), NewProp_bIsGeometryCollectionPiece_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_GeometryCollectionPieceName = { "GeometryCollectionPieceName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniOutputObject, GeometryCollectionPieceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeometryCollectionPieceName_MetaData), NewProp_GeometryCollectionPieceName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_BakeName = { "BakeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniOutputObject, BakeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakeName_MetaData), NewProp_BakeName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CurveOutputProperty = { "CurveOutputProperty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniOutputObject, CurveOutputProperty), Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveOutputProperty_MetaData), NewProp_CurveOutputProperty_MetaData) }; // 1001998675
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedAttributes_ValueProp = { "CachedAttributes", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedAttributes_Key_KeyProp = { "CachedAttributes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedAttributes = { "CachedAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniOutputObject, CachedAttributes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedAttributes_MetaData), NewProp_CachedAttributes_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedTokens_ValueProp = { "CachedTokens", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedTokens_Key_KeyProp = { "CachedTokens_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedTokens = { "CachedTokens", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniOutputObject, CachedTokens), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedTokens_MetaData), NewProp_CachedTokens_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_UserFoliageType = { "UserFoliageType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniOutputObject, UserFoliageType), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserFoliageType_MetaData), NewProp_UserFoliageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_FoliageType = { "FoliageType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniOutputObject, FoliageType), Z_Construct_UClass_UFoliageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoliageType_MetaData), NewProp_FoliageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniOutputObject, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_World_MetaData), NewProp_World_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_DataLayers_Inner = { "DataLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniDataLayer, METADATA_PARAMS(0, nullptr) }; // 3893262836
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_DataLayers = { "DataLayers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniOutputObject, DataLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataLayers_MetaData), NewProp_DataLayers_MetaData) }; // 3893262836
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_HLODLayers_Inner = { "HLODLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniHLODLayer, METADATA_PARAMS(0, nullptr) }; // 401215337
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_HLODLayers = { "HLODLayers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniOutputObject, HLODLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HLODLayers_MetaData), NewProp_HLODLayers_MetaData) }; // 401215337
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_LevelInstanceParams = { "LevelInstanceParams", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniOutputObject, LevelInstanceParams), Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelInstanceParams_MetaData), NewProp_LevelInstanceParams_MetaData) }; // 151636455
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_ProxyObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_ProxyComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bProxyIsCurrent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsImplicit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsInvisibleCollisionMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsGeometryCollectionPiece,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_GeometryCollectionPieceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_BakeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CurveOutputProperty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedAttributes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedAttributes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedTokens_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedTokens_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedTokens,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_UserFoliageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_FoliageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_DataLayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_DataLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_HLODLayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_HLODLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_LevelInstanceParams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniOutputObject",
	Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::PropPointers),
	sizeof(FHoudiniOutputObject),
	alignof(FHoudiniOutputObject),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniOutputObject()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniOutputObject.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniOutputObject.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniOutputObject.InnerSingleton;
}
// End ScriptStruct FHoudiniOutputObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniOutputObject_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHoudiniOutputObject::StaticStruct, Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewStructOps, TEXT("HoudiniOutputObject"), &Z_Registration_Info_UScriptStruct_HoudiniOutputObject, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniOutputObject), 1263940122U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniOutputObject_h_3270137200(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniOutputObject_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniOutputObject_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
