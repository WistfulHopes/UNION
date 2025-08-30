// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EPDGNodeState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPDGNodeState() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGNodeState();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Enum EPDGNodeState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPDGNodeState;
static UEnum* EPDGNodeState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPDGNodeState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPDGNodeState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGNodeState, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EPDGNodeState"));
	}
	return Z_Registration_Info_UEnum_EPDGNodeState.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EPDGNodeState>()
{
	return EPDGNodeState_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EPDGNodeState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cook_Complete.Name", "EPDGNodeState::Cook_Complete" },
		{ "Cook_Failed.Name", "EPDGNodeState::Cook_Failed" },
		{ "Cooking.Name", "EPDGNodeState::Cooking" },
		{ "Dirtied.Name", "EPDGNodeState::Dirtied" },
		{ "Dirtying.Name", "EPDGNodeState::Dirtying" },
		{ "ModuleRelativePath", "Public/EPDGNodeState.h" },
		{ "None.Name", "EPDGNodeState::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPDGNodeState::None", (int64)EPDGNodeState::None },
		{ "EPDGNodeState::Dirtied", (int64)EPDGNodeState::Dirtied },
		{ "EPDGNodeState::Dirtying", (int64)EPDGNodeState::Dirtying },
		{ "EPDGNodeState::Cooking", (int64)EPDGNodeState::Cooking },
		{ "EPDGNodeState::Cook_Complete", (int64)EPDGNodeState::Cook_Complete },
		{ "EPDGNodeState::Cook_Failed", (int64)EPDGNodeState::Cook_Failed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EPDGNodeState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EPDGNodeState",
	"EPDGNodeState",
	Z_Construct_UEnum_HoudiniEngineRuntime_EPDGNodeState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGNodeState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGNodeState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EPDGNodeState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGNodeState()
{
	if (!Z_Registration_Info_UEnum_EPDGNodeState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPDGNodeState.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EPDGNodeState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPDGNodeState.InnerSingleton;
}
// End Enum EPDGNodeState

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EPDGNodeState_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPDGNodeState_StaticEnum, TEXT("EPDGNodeState"), &Z_Registration_Info_UEnum_EPDGNodeState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4259875528U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EPDGNodeState_h_3763869247(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EPDGNodeState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EPDGNodeState_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
