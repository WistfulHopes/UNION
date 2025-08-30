// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniBakedOutputObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniBakedOutputObject() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType_NoRegister();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniBakedOutputObject();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin ScriptStruct FHoudiniBakedOutputObject
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniBakedOutputObject;
class UScriptStruct* FHoudiniBakedOutputObject::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniBakedOutputObject.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniBakedOutputObject.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniBakedOutputObject, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniBakedOutputObject"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniBakedOutputObject.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniBakedOutputObject>()
{
	return FHoudiniBakedOutputObject::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HoudiniBakedOutputObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniBakedOutputObject" },
		{ "ModuleRelativePath", "Public/HoudiniBakedOutputObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Blueprint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniBakedOutputObject" },
		{ "ModuleRelativePath", "Public/HoudiniBakedOutputObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorBakeName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniBakedOutputObject" },
		{ "ModuleRelativePath", "Public/HoudiniBakedOutputObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakedObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniBakedOutputObject" },
		{ "ModuleRelativePath", "Public/HoudiniBakedOutputObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakedComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniBakedOutputObject" },
		{ "ModuleRelativePath", "Public/HoudiniBakedOutputObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstancedActors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniBakedOutputObject" },
		{ "ModuleRelativePath", "Public/HoudiniBakedOutputObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstancedComponents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniBakedOutputObject" },
		{ "ModuleRelativePath", "Public/HoudiniBakedOutputObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeLayers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniBakedOutputObject" },
		{ "ModuleRelativePath", "Public/HoudiniBakedOutputObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoliageInstancePositions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniBakedOutputObject" },
		{ "ModuleRelativePath", "Public/HoudiniBakedOutputObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoliageType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniBakedOutputObject" },
		{ "ModuleRelativePath", "Public/HoudiniBakedOutputObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelInstanceActors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniBakedOutputObject" },
		{ "ModuleRelativePath", "Public/HoudiniBakedOutputObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Landscape_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniBakedOutputObject" },
		{ "ModuleRelativePath", "Public/HoudiniBakedOutputObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakedSkeleton_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniBakedOutputObject" },
		{ "ModuleRelativePath", "Public/HoudiniBakedOutputObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Blueprint;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActorBakeName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BakedObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BakedComponent;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InstancedActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InstancedActors;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InstancedComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InstancedComponents;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LandscapeLayers_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LandscapeLayers_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_LandscapeLayers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FoliageInstancePositions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FoliageInstancePositions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FoliageType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LevelInstanceActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LevelInstanceActors;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Landscape;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BakedSkeleton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniBakedOutputObject>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniBakedOutputObject, Actor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniBakedOutputObject, Blueprint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Blueprint_MetaData), NewProp_Blueprint_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_ActorBakeName = { "ActorBakeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniBakedOutputObject, ActorBakeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorBakeName_MetaData), NewProp_ActorBakeName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_BakedObject = { "BakedObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniBakedOutputObject, BakedObject), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakedObject_MetaData), NewProp_BakedObject_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_BakedComponent = { "BakedComponent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniBakedOutputObject, BakedComponent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakedComponent_MetaData), NewProp_BakedComponent_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_InstancedActors_Inner = { "InstancedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_InstancedActors = { "InstancedActors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniBakedOutputObject, InstancedActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstancedActors_MetaData), NewProp_InstancedActors_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_InstancedComponents_Inner = { "InstancedComponents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_InstancedComponents = { "InstancedComponents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniBakedOutputObject, InstancedComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstancedComponents_MetaData), NewProp_InstancedComponents_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_LandscapeLayers_ValueProp = { "LandscapeLayers", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_LandscapeLayers_Key_KeyProp = { "LandscapeLayers_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_LandscapeLayers = { "LandscapeLayers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniBakedOutputObject, LandscapeLayers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeLayers_MetaData), NewProp_LandscapeLayers_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_FoliageInstancePositions_Inner = { "FoliageInstancePositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_FoliageInstancePositions = { "FoliageInstancePositions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniBakedOutputObject, FoliageInstancePositions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoliageInstancePositions_MetaData), NewProp_FoliageInstancePositions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_FoliageType = { "FoliageType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniBakedOutputObject, FoliageType), Z_Construct_UClass_UFoliageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoliageType_MetaData), NewProp_FoliageType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_LevelInstanceActors_Inner = { "LevelInstanceActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_LevelInstanceActors = { "LevelInstanceActors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniBakedOutputObject, LevelInstanceActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelInstanceActors_MetaData), NewProp_LevelInstanceActors_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_Landscape = { "Landscape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniBakedOutputObject, Landscape), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Landscape_MetaData), NewProp_Landscape_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_BakedSkeleton = { "BakedSkeleton", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniBakedOutputObject, BakedSkeleton), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakedSkeleton_MetaData), NewProp_BakedSkeleton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_Blueprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_ActorBakeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_BakedObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_BakedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_InstancedActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_InstancedActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_InstancedComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_InstancedComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_LandscapeLayers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_LandscapeLayers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_LandscapeLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_FoliageInstancePositions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_FoliageInstancePositions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_FoliageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_LevelInstanceActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_LevelInstanceActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_Landscape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_BakedSkeleton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniBakedOutputObject",
	Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::PropPointers),
	sizeof(FHoudiniBakedOutputObject),
	alignof(FHoudiniBakedOutputObject),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniBakedOutputObject()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniBakedOutputObject.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniBakedOutputObject.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniBakedOutputObject.InnerSingleton;
}
// End ScriptStruct FHoudiniBakedOutputObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniBakedOutputObject_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHoudiniBakedOutputObject::StaticStruct, Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewStructOps, TEXT("HoudiniBakedOutputObject"), &Z_Registration_Info_UScriptStruct_HoudiniBakedOutputObject, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniBakedOutputObject), 793926336U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniBakedOutputObject_h_2628078882(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniBakedOutputObject_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniBakedOutputObject_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
