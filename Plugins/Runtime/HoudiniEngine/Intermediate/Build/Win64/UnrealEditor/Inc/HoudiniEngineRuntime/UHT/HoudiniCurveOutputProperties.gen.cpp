// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniCurveOutputProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniCurveOutputProperties() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveOutputType();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin ScriptStruct FHoudiniCurveOutputProperties
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniCurveOutputProperties;
class UScriptStruct* FHoudiniCurveOutputProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniCurveOutputProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniCurveOutputProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniCurveOutputProperties"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniCurveOutputProperties.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniCurveOutputProperties>()
{
	return FHoudiniCurveOutputProperties::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HoudiniCurveOutputProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveOutputType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniCurveOutputProperties" },
		{ "ModuleRelativePath", "Public/HoudiniCurveOutputProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumPoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniCurveOutputProperties" },
		{ "ModuleRelativePath", "Public/HoudiniCurveOutputProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClosed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniCurveOutputProperties" },
		{ "ModuleRelativePath", "Public/HoudiniCurveOutputProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniCurveOutputProperties" },
		{ "ModuleRelativePath", "Public/HoudiniCurveOutputProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveMethod_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniCurveOutputProperties" },
		{ "ModuleRelativePath", "Public/HoudiniCurveOutputProperties.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurveOutputType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveOutputType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumPoints;
	static void NewProp_bClosed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClosed;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_CurveType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveType;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_CurveMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniCurveOutputProperties>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveOutputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveOutputType = { "CurveOutputType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniCurveOutputProperties, CurveOutputType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveOutputType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveOutputType_MetaData), NewProp_CurveOutputType_MetaData) }; // 281212152
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_NumPoints = { "NumPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniCurveOutputProperties, NumPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumPoints_MetaData), NewProp_NumPoints_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_bClosed_SetBit(void* Obj)
{
	((FHoudiniCurveOutputProperties*)Obj)->bClosed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_bClosed = { "bClosed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniCurveOutputProperties), &Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_bClosed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClosed_MetaData), NewProp_bClosed_MetaData) };
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveType = { "CurveType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniCurveOutputProperties, CurveType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveType_MetaData), NewProp_CurveType_MetaData) }; // 3851994378
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveMethod = { "CurveMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniCurveOutputProperties, CurveMethod), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveMethod_MetaData), NewProp_CurveMethod_MetaData) }; // 2966559592
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveOutputType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveOutputType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_NumPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_bClosed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniCurveOutputProperties",
	Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::PropPointers),
	sizeof(FHoudiniCurveOutputProperties),
	alignof(FHoudiniCurveOutputProperties),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniCurveOutputProperties.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniCurveOutputProperties.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniCurveOutputProperties.InnerSingleton;
}
// End ScriptStruct FHoudiniCurveOutputProperties

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniCurveOutputProperties_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHoudiniCurveOutputProperties::StaticStruct, Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewStructOps, TEXT("HoudiniCurveOutputProperties"), &Z_Registration_Info_UScriptStruct_HoudiniCurveOutputProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniCurveOutputProperties), 1001998675U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniCurveOutputProperties_h_544807098(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniCurveOutputProperties_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniCurveOutputProperties_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
