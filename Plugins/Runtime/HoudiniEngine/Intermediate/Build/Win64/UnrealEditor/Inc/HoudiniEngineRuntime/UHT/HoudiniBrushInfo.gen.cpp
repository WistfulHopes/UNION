// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniBrushInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniBrushInfo() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_ABrush_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBrushType();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniBrushInfo();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin ScriptStruct FHoudiniBrushInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniBrushInfo;
class UScriptStruct* FHoudiniBrushInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniBrushInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniBrushInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniBrushInfo, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniBrushInfo"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniBrushInfo.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniBrushInfo>()
{
	return FHoudiniBrushInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HoudiniBrushInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniBrushInfo" },
		{ "ModuleRelativePath", "Public/HoudiniBrushInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedTransform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniBrushInfo" },
		{ "ModuleRelativePath", "Public/HoudiniBrushInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedOrigin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniBrushInfo" },
		{ "ModuleRelativePath", "Public/HoudiniBrushInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedExtent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniBrushInfo" },
		{ "ModuleRelativePath", "Public/HoudiniBrushInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedBrushType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniBrushInfo" },
		{ "ModuleRelativePath", "Public/HoudiniBrushInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedSurfaceHash_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniBrushInfo" },
		{ "ModuleRelativePath", "Public/HoudiniBrushInfo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_BrushActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedOrigin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedExtent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CachedBrushType;
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_CachedSurfaceHash;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniBrushInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_BrushActor = { "BrushActor", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniBrushInfo, BrushActor), Z_Construct_UClass_ABrush_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushActor_MetaData), NewProp_BrushActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedTransform = { "CachedTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniBrushInfo, CachedTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedTransform_MetaData), NewProp_CachedTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedOrigin = { "CachedOrigin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniBrushInfo, CachedOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedOrigin_MetaData), NewProp_CachedOrigin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedExtent = { "CachedExtent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniBrushInfo, CachedExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedExtent_MetaData), NewProp_CachedExtent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedBrushType = { "CachedBrushType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniBrushInfo, CachedBrushType), Z_Construct_UEnum_Engine_EBrushType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedBrushType_MetaData), NewProp_CachedBrushType_MetaData) }; // 1124994631
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedSurfaceHash = { "CachedSurfaceHash", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniBrushInfo, CachedSurfaceHash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedSurfaceHash_MetaData), NewProp_CachedSurfaceHash_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_BrushActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedExtent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedBrushType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedSurfaceHash,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniBrushInfo",
	Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::PropPointers),
	sizeof(FHoudiniBrushInfo),
	alignof(FHoudiniBrushInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniBrushInfo()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniBrushInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniBrushInfo.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniBrushInfo.InnerSingleton;
}
// End ScriptStruct FHoudiniBrushInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniBrushInfo_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHoudiniBrushInfo::StaticStruct, Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewStructOps, TEXT("HoudiniBrushInfo"), &Z_Registration_Info_UScriptStruct_HoudiniBrushInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniBrushInfo), 657337919U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniBrushInfo_h_3973058621(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniBrushInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniBrushInfo_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
