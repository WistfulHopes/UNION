// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/UserCategoryRules.h"
#include "HoudiniEngineRuntime/Public/UserPackageRules.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserCategoryRules() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FUserCategoryRules();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FUserPackageRules();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin ScriptStruct FUserCategoryRules
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UserCategoryRules;
class UScriptStruct* FUserCategoryRules::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UserCategoryRules.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UserCategoryRules.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserCategoryRules, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("UserCategoryRules"));
	}
	return Z_Registration_Info_UScriptStruct_UserCategoryRules.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FUserCategoryRules>()
{
	return FUserCategoryRules::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUserCategoryRules_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UserCategoryRules.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Packages_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserCategoryRules" },
		{ "ModuleRelativePath", "Public/UserCategoryRules.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Packages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Packages;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserCategoryRules>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserCategoryRules_Statics::NewProp_Packages_Inner = { "Packages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FUserPackageRules, METADATA_PARAMS(0, nullptr) }; // 1487520826
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUserCategoryRules_Statics::NewProp_Packages = { "Packages", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserCategoryRules, Packages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Packages_MetaData), NewProp_Packages_MetaData) }; // 1487520826
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserCategoryRules_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserCategoryRules_Statics::NewProp_Packages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserCategoryRules_Statics::NewProp_Packages,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserCategoryRules_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserCategoryRules_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"UserCategoryRules",
	Z_Construct_UScriptStruct_FUserCategoryRules_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserCategoryRules_Statics::PropPointers),
	sizeof(FUserCategoryRules),
	alignof(FUserCategoryRules),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserCategoryRules_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUserCategoryRules_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUserCategoryRules()
{
	if (!Z_Registration_Info_UScriptStruct_UserCategoryRules.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UserCategoryRules.InnerSingleton, Z_Construct_UScriptStruct_FUserCategoryRules_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UserCategoryRules.InnerSingleton;
}
// End ScriptStruct FUserCategoryRules

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_UserCategoryRules_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUserCategoryRules::StaticStruct, Z_Construct_UScriptStruct_FUserCategoryRules_Statics::NewStructOps, TEXT("UserCategoryRules"), &Z_Registration_Info_UScriptStruct_UserCategoryRules, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUserCategoryRules), 4003717364U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_UserCategoryRules_h_1280244355(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_UserCategoryRules_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_UserCategoryRules_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
