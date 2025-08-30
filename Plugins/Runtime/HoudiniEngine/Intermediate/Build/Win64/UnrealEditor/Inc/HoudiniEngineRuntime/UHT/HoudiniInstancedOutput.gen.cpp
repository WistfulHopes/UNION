// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniInstancedOutput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniInstancedOutput() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniInstancedOutput();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin ScriptStruct FHoudiniInstancedOutput
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniInstancedOutput;
class UScriptStruct* FHoudiniInstancedOutput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniInstancedOutput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniInstancedOutput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniInstancedOutput, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniInstancedOutput"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniInstancedOutput.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniInstancedOutput>()
{
	return FHoudiniInstancedOutput::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HoudiniInstancedOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInstancedOutput" },
		{ "ModuleRelativePath", "Public/HoudiniInstancedOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalObjectIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInstancedOutput" },
		{ "ModuleRelativePath", "Public/HoudiniInstancedOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalTransforms_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInstancedOutput" },
		{ "ModuleRelativePath", "Public/HoudiniInstancedOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariationObjects_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInstancedOutput" },
		{ "ModuleRelativePath", "Public/HoudiniInstancedOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariationTransformOffsets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInstancedOutput" },
		{ "ModuleRelativePath", "Public/HoudiniInstancedOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformVariationIndices_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInstancedOutput" },
		{ "ModuleRelativePath", "Public/HoudiniInstancedOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalInstanceIndices_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInstancedOutput" },
		{ "ModuleRelativePath", "Public/HoudiniInstancedOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInstancedOutput" },
		{ "ModuleRelativePath", "Public/HoudiniInstancedOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInstancedOutput" },
		{ "ModuleRelativePath", "Public/HoudiniInstancedOutput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OriginalObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OriginalObjectIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OriginalTransforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OriginalTransforms;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_VariationObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VariationObjects;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariationTransformOffsets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VariationTransformOffsets;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TransformVariationIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TransformVariationIndices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OriginalInstanceIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OriginalInstanceIndices;
	static void NewProp_bChanged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bChanged;
	static void NewProp_bStale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniInstancedOutput>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_OriginalObject = { "OriginalObject", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancedOutput, OriginalObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalObject_MetaData), NewProp_OriginalObject_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_OriginalObjectIndex = { "OriginalObjectIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancedOutput, OriginalObjectIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalObjectIndex_MetaData), NewProp_OriginalObjectIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_OriginalTransforms_Inner = { "OriginalTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_OriginalTransforms = { "OriginalTransforms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancedOutput, OriginalTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalTransforms_MetaData), NewProp_OriginalTransforms_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_VariationObjects_Inner = { "VariationObjects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_VariationObjects = { "VariationObjects", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancedOutput, VariationObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariationObjects_MetaData), NewProp_VariationObjects_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_VariationTransformOffsets_Inner = { "VariationTransformOffsets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_VariationTransformOffsets = { "VariationTransformOffsets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancedOutput, VariationTransformOffsets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariationTransformOffsets_MetaData), NewProp_VariationTransformOffsets_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_TransformVariationIndices_Inner = { "TransformVariationIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_TransformVariationIndices = { "TransformVariationIndices", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancedOutput, TransformVariationIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformVariationIndices_MetaData), NewProp_TransformVariationIndices_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_OriginalInstanceIndices_Inner = { "OriginalInstanceIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_OriginalInstanceIndices = { "OriginalInstanceIndices", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancedOutput, OriginalInstanceIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalInstanceIndices_MetaData), NewProp_OriginalInstanceIndices_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_bChanged_SetBit(void* Obj)
{
	((FHoudiniInstancedOutput*)Obj)->bChanged = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_bChanged = { "bChanged", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInstancedOutput), &Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_bChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bChanged_MetaData), NewProp_bChanged_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_bStale_SetBit(void* Obj)
{
	((FHoudiniInstancedOutput*)Obj)->bStale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_bStale = { "bStale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInstancedOutput), &Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_bStale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStale_MetaData), NewProp_bStale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_OriginalObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_OriginalObjectIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_OriginalTransforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_OriginalTransforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_VariationObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_VariationObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_VariationTransformOffsets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_VariationTransformOffsets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_TransformVariationIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_TransformVariationIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_OriginalInstanceIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_OriginalInstanceIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_bChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_bStale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniInstancedOutput",
	Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::PropPointers),
	sizeof(FHoudiniInstancedOutput),
	alignof(FHoudiniInstancedOutput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniInstancedOutput()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniInstancedOutput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniInstancedOutput.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniInstancedOutput.InnerSingleton;
}
// End ScriptStruct FHoudiniInstancedOutput

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInstancedOutput_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHoudiniInstancedOutput::StaticStruct, Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewStructOps, TEXT("HoudiniInstancedOutput"), &Z_Registration_Info_UScriptStruct_HoudiniInstancedOutput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniInstancedOutput), 1111338850U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInstancedOutput_h_1690243842(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInstancedOutput_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInstancedOutput_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
