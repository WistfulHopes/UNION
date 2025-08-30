// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HImageData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHImageData() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHImageData();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin ScriptStruct FHImageData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HImageData;
class UScriptStruct* FHImageData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HImageData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HImageData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHImageData, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HImageData"));
	}
	return Z_Registration_Info_UScriptStruct_HImageData.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHImageData>()
{
	return FHImageData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHImageData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HImageData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HImageData" },
		{ "ModuleRelativePath", "Public/HImageData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HImageData" },
		{ "ModuleRelativePath", "Public/HImageData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSlices_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HImageData" },
		{ "ModuleRelativePath", "Public/HImageData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HImageData" },
		{ "ModuleRelativePath", "Public/HImageData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GammaSpace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HImageData" },
		{ "ModuleRelativePath", "Public/HImageData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RawData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HImageData" },
		{ "ModuleRelativePath", "Public/HImageData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RawDataMD5_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HImageData" },
		{ "ModuleRelativePath", "Public/HImageData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSlices;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Format;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GammaSpace;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RawData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RawData;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RawDataMD5;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHImageData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHImageData, SizeX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeX_MetaData), NewProp_SizeX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHImageData, SizeY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeY_MetaData), NewProp_SizeY_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_NumSlices = { "NumSlices", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHImageData, NumSlices), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSlices_MetaData), NewProp_NumSlices_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHImageData, Format), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Format_MetaData), NewProp_Format_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_GammaSpace = { "GammaSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHImageData, GammaSpace), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GammaSpace_MetaData), NewProp_GammaSpace_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_RawData_Inner = { "RawData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_RawData = { "RawData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHImageData, RawData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RawData_MetaData), NewProp_RawData_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_RawDataMD5 = { "RawDataMD5", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHImageData, RawDataMD5), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RawDataMD5_MetaData), NewProp_RawDataMD5_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHImageData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_SizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_SizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_NumSlices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_Format,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_GammaSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_RawData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_RawData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_RawDataMD5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHImageData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHImageData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HImageData",
	Z_Construct_UScriptStruct_FHImageData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHImageData_Statics::PropPointers),
	sizeof(FHImageData),
	alignof(FHImageData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHImageData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHImageData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHImageData()
{
	if (!Z_Registration_Info_UScriptStruct_HImageData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HImageData.InnerSingleton, Z_Construct_UScriptStruct_FHImageData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HImageData.InnerSingleton;
}
// End ScriptStruct FHImageData

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HImageData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHImageData::StaticStruct, Z_Construct_UScriptStruct_FHImageData_Statics::NewStructOps, TEXT("HImageData"), &Z_Registration_Info_UScriptStruct_HImageData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHImageData), 2969160138U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HImageData_h_4222411530(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HImageData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HImageData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
