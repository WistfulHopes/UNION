// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniOutputObjectIdentifier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniOutputObjectIdentifier() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin ScriptStruct FHoudiniOutputObjectIdentifier
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniOutputObjectIdentifier;
class UScriptStruct* FHoudiniOutputObjectIdentifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniOutputObjectIdentifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniOutputObjectIdentifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniOutputObjectIdentifier"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniOutputObjectIdentifier.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniOutputObjectIdentifier>()
{
	return FHoudiniOutputObjectIdentifier::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HoudiniOutputObjectIdentifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniOutputObjectIdentifier" },
		{ "ModuleRelativePath", "Public/HoudiniOutputObjectIdentifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeoId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniOutputObjectIdentifier" },
		{ "ModuleRelativePath", "Public/HoudiniOutputObjectIdentifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniOutputObjectIdentifier" },
		{ "ModuleRelativePath", "Public/HoudiniOutputObjectIdentifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplitIdentifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniOutputObjectIdentifier" },
		{ "ModuleRelativePath", "Public/HoudiniOutputObjectIdentifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniOutputObjectIdentifier" },
		{ "ModuleRelativePath", "Public/HoudiniOutputObjectIdentifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimitiveIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniOutputObjectIdentifier" },
		{ "ModuleRelativePath", "Public/HoudiniOutputObjectIdentifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniOutputObjectIdentifier" },
		{ "ModuleRelativePath", "Public/HoudiniOutputObjectIdentifier.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ObjectId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GeoId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PartId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SplitIdentifier;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PartName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PrimitiveIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PointIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniOutputObjectIdentifier>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_ObjectId = { "ObjectId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniOutputObjectIdentifier, ObjectId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectId_MetaData), NewProp_ObjectId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_GeoId = { "GeoId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniOutputObjectIdentifier, GeoId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeoId_MetaData), NewProp_GeoId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_PartId = { "PartId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniOutputObjectIdentifier, PartId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartId_MetaData), NewProp_PartId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_SplitIdentifier = { "SplitIdentifier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniOutputObjectIdentifier, SplitIdentifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplitIdentifier_MetaData), NewProp_SplitIdentifier_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_PartName = { "PartName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniOutputObjectIdentifier, PartName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartName_MetaData), NewProp_PartName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_PrimitiveIndex = { "PrimitiveIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniOutputObjectIdentifier, PrimitiveIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimitiveIndex_MetaData), NewProp_PrimitiveIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniOutputObjectIdentifier, PointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointIndex_MetaData), NewProp_PointIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_ObjectId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_GeoId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_PartId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_SplitIdentifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_PartName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_PrimitiveIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_PointIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniOutputObjectIdentifier",
	Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::PropPointers),
	sizeof(FHoudiniOutputObjectIdentifier),
	alignof(FHoudiniOutputObjectIdentifier),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniOutputObjectIdentifier.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniOutputObjectIdentifier.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniOutputObjectIdentifier.InnerSingleton;
}
// End ScriptStruct FHoudiniOutputObjectIdentifier

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniOutputObjectIdentifier_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHoudiniOutputObjectIdentifier::StaticStruct, Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewStructOps, TEXT("HoudiniOutputObjectIdentifier"), &Z_Registration_Info_UScriptStruct_HoudiniOutputObjectIdentifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniOutputObjectIdentifier), 337656452U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniOutputObjectIdentifier_h_4139344924(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniOutputObjectIdentifier_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniOutputObjectIdentifier_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
