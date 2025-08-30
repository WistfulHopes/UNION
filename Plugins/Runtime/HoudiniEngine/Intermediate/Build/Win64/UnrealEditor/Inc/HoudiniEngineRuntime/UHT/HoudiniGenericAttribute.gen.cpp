// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniGenericAttribute.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniGenericAttribute() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EAttribOwner();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EAttribStorageType();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGenericAttribute();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin ScriptStruct FHoudiniGenericAttribute
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniGenericAttribute;
class UScriptStruct* FHoudiniGenericAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniGenericAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniGenericAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniGenericAttribute, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniGenericAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniGenericAttribute.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniGenericAttribute>()
{
	return FHoudiniGenericAttribute::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HoudiniGenericAttribute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniGenericAttribute" },
		{ "ModuleRelativePath", "Public/HoudiniGenericAttribute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniGenericAttribute" },
		{ "ModuleRelativePath", "Public/HoudiniGenericAttribute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeOwner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniGenericAttribute" },
		{ "ModuleRelativePath", "Public/HoudiniGenericAttribute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniGenericAttribute" },
		{ "ModuleRelativePath", "Public/HoudiniGenericAttribute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeTupleSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniGenericAttribute" },
		{ "ModuleRelativePath", "Public/HoudiniGenericAttribute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoubleValues_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniGenericAttribute" },
		{ "ModuleRelativePath", "Public/HoudiniGenericAttribute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntValues_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniGenericAttribute" },
		{ "ModuleRelativePath", "Public/HoudiniGenericAttribute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringValues_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniGenericAttribute" },
		{ "ModuleRelativePath", "Public/HoudiniGenericAttribute.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeName;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_AttributeType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeType;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_AttributeOwner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeOwner;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeTupleSize;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DoubleValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DoubleValues;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_IntValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IntValues;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StringValues;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniGenericAttribute>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGenericAttribute, AttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeName_MetaData), NewProp_AttributeName_MetaData) };
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeType = { "AttributeType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGenericAttribute, AttributeType), Z_Construct_UEnum_HoudiniEngineRuntime_EAttribStorageType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeType_MetaData), NewProp_AttributeType_MetaData) }; // 2243062972
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeOwner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeOwner = { "AttributeOwner", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGenericAttribute, AttributeOwner), Z_Construct_UEnum_HoudiniEngineRuntime_EAttribOwner, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeOwner_MetaData), NewProp_AttributeOwner_MetaData) }; // 1688320144
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeCount = { "AttributeCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGenericAttribute, AttributeCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeCount_MetaData), NewProp_AttributeCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeTupleSize = { "AttributeTupleSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGenericAttribute, AttributeTupleSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeTupleSize_MetaData), NewProp_AttributeTupleSize_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_DoubleValues_Inner = { "DoubleValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_DoubleValues = { "DoubleValues", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGenericAttribute, DoubleValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoubleValues_MetaData), NewProp_DoubleValues_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_IntValues_Inner = { "IntValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_IntValues = { "IntValues", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGenericAttribute, IntValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntValues_MetaData), NewProp_IntValues_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_StringValues_Inner = { "StringValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_StringValues = { "StringValues", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGenericAttribute, StringValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringValues_MetaData), NewProp_StringValues_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeOwner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeTupleSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_DoubleValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_DoubleValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_IntValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_IntValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_StringValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_StringValues,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniGenericAttribute",
	Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::PropPointers),
	sizeof(FHoudiniGenericAttribute),
	alignof(FHoudiniGenericAttribute),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGenericAttribute()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniGenericAttribute.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniGenericAttribute.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniGenericAttribute.InnerSingleton;
}
// End ScriptStruct FHoudiniGenericAttribute

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniGenericAttribute_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHoudiniGenericAttribute::StaticStruct, Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewStructOps, TEXT("HoudiniGenericAttribute"), &Z_Registration_Info_UScriptStruct_HoudiniGenericAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniGenericAttribute), 499845423U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniGenericAttribute_h_3007026212(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniGenericAttribute_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniGenericAttribute_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
