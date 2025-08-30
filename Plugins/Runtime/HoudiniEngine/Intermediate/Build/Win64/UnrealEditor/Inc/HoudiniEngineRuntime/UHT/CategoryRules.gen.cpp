// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/CategoryRules.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCategoryRules() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCategoryRules();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin ScriptStruct FCategoryRules
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CategoryRules;
class UScriptStruct* FCategoryRules::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CategoryRules.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CategoryRules.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCategoryRules, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("CategoryRules"));
	}
	return Z_Registration_Info_UScriptStruct_CategoryRules.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FCategoryRules>()
{
	return FCategoryRules::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCategoryRules_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CategoryRules.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Include_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CategoryRules" },
		{ "ModuleRelativePath", "Public/CategoryRules.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Exclude_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CategoryRules" },
		{ "ModuleRelativePath", "Public/CategoryRules.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Include_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Include;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Exclude_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Exclude;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCategoryRules>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCategoryRules_Statics::NewProp_Include_Inner = { "Include", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCategoryRules_Statics::NewProp_Include = { "Include", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCategoryRules, Include), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Include_MetaData), NewProp_Include_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCategoryRules_Statics::NewProp_Exclude_Inner = { "Exclude", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCategoryRules_Statics::NewProp_Exclude = { "Exclude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCategoryRules, Exclude), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Exclude_MetaData), NewProp_Exclude_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCategoryRules_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCategoryRules_Statics::NewProp_Include_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCategoryRules_Statics::NewProp_Include,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCategoryRules_Statics::NewProp_Exclude_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCategoryRules_Statics::NewProp_Exclude,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCategoryRules_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCategoryRules_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"CategoryRules",
	Z_Construct_UScriptStruct_FCategoryRules_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCategoryRules_Statics::PropPointers),
	sizeof(FCategoryRules),
	alignof(FCategoryRules),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCategoryRules_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCategoryRules_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCategoryRules()
{
	if (!Z_Registration_Info_UScriptStruct_CategoryRules.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CategoryRules.InnerSingleton, Z_Construct_UScriptStruct_FCategoryRules_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CategoryRules.InnerSingleton;
}
// End ScriptStruct FCategoryRules

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_CategoryRules_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCategoryRules::StaticStruct, Z_Construct_UScriptStruct_FCategoryRules_Statics::NewStructOps, TEXT("CategoryRules"), &Z_Registration_Info_UScriptStruct_CategoryRules, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCategoryRules), 2614689262U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_CategoryRules_h_1869527189(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_CategoryRules_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_CategoryRules_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
