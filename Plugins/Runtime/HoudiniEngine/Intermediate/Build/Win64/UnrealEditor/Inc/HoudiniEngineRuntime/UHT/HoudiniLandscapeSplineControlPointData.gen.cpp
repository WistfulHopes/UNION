// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniLandscapeSplineControlPointData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniLandscapeSplineControlPointData() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin ScriptStruct FHoudiniLandscapeSplineControlPointData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniLandscapeSplineControlPointData;
class UScriptStruct* FHoudiniLandscapeSplineControlPointData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniLandscapeSplineControlPointData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniLandscapeSplineControlPointData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniLandscapeSplineControlPointData"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniLandscapeSplineControlPointData.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniLandscapeSplineControlPointData>()
{
	return FHoudiniLandscapeSplineControlPointData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HoudiniLandscapeSplineControlPointData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniLandscapeSplineControlPointData" },
		{ "ModuleRelativePath", "Public/HoudiniLandscapeSplineControlPointData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniLandscapeSplineControlPointData" },
		{ "ModuleRelativePath", "Public/HoudiniLandscapeSplineControlPointData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniLandscapeSplineControlPointData" },
		{ "ModuleRelativePath", "Public/HoudiniLandscapeSplineControlPointData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Width;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniLandscapeSplineControlPointData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniLandscapeSplineControlPointData, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniLandscapeSplineControlPointData, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniLandscapeSplineControlPointData, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_Width,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniLandscapeSplineControlPointData",
	Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::PropPointers),
	sizeof(FHoudiniLandscapeSplineControlPointData),
	alignof(FHoudiniLandscapeSplineControlPointData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniLandscapeSplineControlPointData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniLandscapeSplineControlPointData.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniLandscapeSplineControlPointData.InnerSingleton;
}
// End ScriptStruct FHoudiniLandscapeSplineControlPointData

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniLandscapeSplineControlPointData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHoudiniLandscapeSplineControlPointData::StaticStruct, Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewStructOps, TEXT("HoudiniLandscapeSplineControlPointData"), &Z_Registration_Info_UScriptStruct_HoudiniLandscapeSplineControlPointData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniLandscapeSplineControlPointData), 2706449027U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniLandscapeSplineControlPointData_h_3581344428(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniLandscapeSplineControlPointData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniLandscapeSplineControlPointData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
