// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniSplineComponentInstanceData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniSplineComponentInstanceData() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorComponentInstanceData();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin ScriptStruct FHoudiniSplineComponentInstanceData
static_assert(std::is_polymorphic<FHoudiniSplineComponentInstanceData>() == std::is_polymorphic<FActorComponentInstanceData>(), "USTRUCT FHoudiniSplineComponentInstanceData cannot be polymorphic unless super FActorComponentInstanceData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniSplineComponentInstanceData;
class UScriptStruct* FHoudiniSplineComponentInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniSplineComponentInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniSplineComponentInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniSplineComponentInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniSplineComponentInstanceData.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniSplineComponentInstanceData>()
{
	return FHoudiniSplineComponentInstanceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HoudiniSplineComponentInstanceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurvePoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniSplineComponentInstanceData" },
		{ "ModuleRelativePath", "Public/HoudiniSplineComponentInstanceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayPoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniSplineComponentInstanceData" },
		{ "ModuleRelativePath", "Public/HoudiniSplineComponentInstanceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayPointIndexDivider_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniSplineComponentInstanceData" },
		{ "ModuleRelativePath", "Public/HoudiniSplineComponentInstanceData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurvePoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CurvePoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DisplayPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DisplayPoints;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DisplayPointIndexDivider_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DisplayPointIndexDivider;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniSplineComponentInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_CurvePoints_Inner = { "CurvePoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_CurvePoints = { "CurvePoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniSplineComponentInstanceData, CurvePoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurvePoints_MetaData), NewProp_CurvePoints_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPoints_Inner = { "DisplayPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPoints = { "DisplayPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniSplineComponentInstanceData, DisplayPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayPoints_MetaData), NewProp_DisplayPoints_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPointIndexDivider_Inner = { "DisplayPointIndexDivider", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPointIndexDivider = { "DisplayPointIndexDivider", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniSplineComponentInstanceData, DisplayPointIndexDivider), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayPointIndexDivider_MetaData), NewProp_DisplayPointIndexDivider_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_CurvePoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_CurvePoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPointIndexDivider_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPointIndexDivider,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	Z_Construct_UScriptStruct_FActorComponentInstanceData,
	&NewStructOps,
	"HoudiniSplineComponentInstanceData",
	Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::PropPointers),
	sizeof(FHoudiniSplineComponentInstanceData),
	alignof(FHoudiniSplineComponentInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniSplineComponentInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniSplineComponentInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniSplineComponentInstanceData.InnerSingleton;
}
// End ScriptStruct FHoudiniSplineComponentInstanceData

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniSplineComponentInstanceData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHoudiniSplineComponentInstanceData::StaticStruct, Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewStructOps, TEXT("HoudiniSplineComponentInstanceData"), &Z_Registration_Info_UScriptStruct_HoudiniSplineComponentInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniSplineComponentInstanceData), 2249259655U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniSplineComponentInstanceData_h_118827283(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniSplineComponentInstanceData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniSplineComponentInstanceData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
