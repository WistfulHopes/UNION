// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EHoudiniAssetState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniAssetState() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Enum EHoudiniAssetState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniAssetState;
static UEnum* EHoudiniAssetState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniAssetState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniAssetState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniAssetState"));
	}
	return Z_Registration_Info_UEnum_EHoudiniAssetState.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniAssetState>()
{
	return EHoudiniAssetState_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cooking.Name", "EHoudiniAssetState::Cooking" },
		{ "Deleting.Name", "EHoudiniAssetState::Deleting" },
		{ "Instantiating.Name", "EHoudiniAssetState::Instantiating" },
		{ "ModuleRelativePath", "Public/EHoudiniAssetState.h" },
		{ "NeedDelete.Name", "EHoudiniAssetState::NeedDelete" },
		{ "NeedInstantiation.Name", "EHoudiniAssetState::NeedInstantiation" },
		{ "NeedRebuild.Name", "EHoudiniAssetState::NeedRebuild" },
		{ "NewHDA.Name", "EHoudiniAssetState::NewHDA" },
		{ "None.Name", "EHoudiniAssetState::None" },
		{ "PostCook.Name", "EHoudiniAssetState::PostCook" },
		{ "PreCook.Name", "EHoudiniAssetState::PreCook" },
		{ "PreInstantiation.Name", "EHoudiniAssetState::PreInstantiation" },
		{ "PreProcess.Name", "EHoudiniAssetState::PreProcess" },
		{ "Processing.Name", "EHoudiniAssetState::Processing" },
		{ "ProcessTemplate.Name", "EHoudiniAssetState::ProcessTemplate" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniAssetState::NeedInstantiation", (int64)EHoudiniAssetState::NeedInstantiation },
		{ "EHoudiniAssetState::NewHDA", (int64)EHoudiniAssetState::NewHDA },
		{ "EHoudiniAssetState::PreInstantiation", (int64)EHoudiniAssetState::PreInstantiation },
		{ "EHoudiniAssetState::Instantiating", (int64)EHoudiniAssetState::Instantiating },
		{ "EHoudiniAssetState::PreCook", (int64)EHoudiniAssetState::PreCook },
		{ "EHoudiniAssetState::Cooking", (int64)EHoudiniAssetState::Cooking },
		{ "EHoudiniAssetState::PostCook", (int64)EHoudiniAssetState::PostCook },
		{ "EHoudiniAssetState::PreProcess", (int64)EHoudiniAssetState::PreProcess },
		{ "EHoudiniAssetState::Processing", (int64)EHoudiniAssetState::Processing },
		{ "EHoudiniAssetState::None", (int64)EHoudiniAssetState::None },
		{ "EHoudiniAssetState::NeedRebuild", (int64)EHoudiniAssetState::NeedRebuild },
		{ "EHoudiniAssetState::NeedDelete", (int64)EHoudiniAssetState::NeedDelete },
		{ "EHoudiniAssetState::Deleting", (int64)EHoudiniAssetState::Deleting },
		{ "EHoudiniAssetState::ProcessTemplate", (int64)EHoudiniAssetState::ProcessTemplate },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniAssetState",
	"EHoudiniAssetState",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState()
{
	if (!Z_Registration_Info_UEnum_EHoudiniAssetState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniAssetState.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniAssetState.InnerSingleton;
}
// End Enum EHoudiniAssetState

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniAssetState_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniAssetState_StaticEnum, TEXT("EHoudiniAssetState"), &Z_Registration_Info_UEnum_EHoudiniAssetState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4227312027U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniAssetState_h_3630887031(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniAssetState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniAssetState_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
