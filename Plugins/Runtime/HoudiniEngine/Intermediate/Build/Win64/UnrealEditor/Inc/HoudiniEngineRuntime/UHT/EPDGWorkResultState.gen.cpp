// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EPDGWorkResultState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPDGWorkResultState() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGWorkResultState();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Enum EPDGWorkResultState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPDGWorkResultState;
static UEnum* EPDGWorkResultState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPDGWorkResultState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPDGWorkResultState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGWorkResultState, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EPDGWorkResultState"));
	}
	return Z_Registration_Info_UEnum_EPDGWorkResultState.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EPDGWorkResultState>()
{
	return EPDGWorkResultState_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EPDGWorkResultState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Deleted.Name", "EPDGWorkResultState::Deleted" },
		{ "Deleting.Name", "EPDGWorkResultState::Deleting" },
		{ "Loaded.Name", "EPDGWorkResultState::Loaded" },
		{ "Loading.Name", "EPDGWorkResultState::Loading" },
		{ "ModuleRelativePath", "Public/EPDGWorkResultState.h" },
		{ "None.Name", "EPDGWorkResultState::None" },
		{ "NotLoaded.Name", "EPDGWorkResultState::NotLoaded" },
		{ "ToDelete.Name", "EPDGWorkResultState::ToDelete" },
		{ "ToLoad.Name", "EPDGWorkResultState::ToLoad" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPDGWorkResultState::None", (int64)EPDGWorkResultState::None },
		{ "EPDGWorkResultState::ToLoad", (int64)EPDGWorkResultState::ToLoad },
		{ "EPDGWorkResultState::Loading", (int64)EPDGWorkResultState::Loading },
		{ "EPDGWorkResultState::Loaded", (int64)EPDGWorkResultState::Loaded },
		{ "EPDGWorkResultState::ToDelete", (int64)EPDGWorkResultState::ToDelete },
		{ "EPDGWorkResultState::Deleting", (int64)EPDGWorkResultState::Deleting },
		{ "EPDGWorkResultState::Deleted", (int64)EPDGWorkResultState::Deleted },
		{ "EPDGWorkResultState::NotLoaded", (int64)EPDGWorkResultState::NotLoaded },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EPDGWorkResultState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EPDGWorkResultState",
	"EPDGWorkResultState",
	Z_Construct_UEnum_HoudiniEngineRuntime_EPDGWorkResultState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGWorkResultState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGWorkResultState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EPDGWorkResultState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGWorkResultState()
{
	if (!Z_Registration_Info_UEnum_EPDGWorkResultState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPDGWorkResultState.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EPDGWorkResultState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPDGWorkResultState.InnerSingleton;
}
// End Enum EPDGWorkResultState

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EPDGWorkResultState_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPDGWorkResultState_StaticEnum, TEXT("EPDGWorkResultState"), &Z_Registration_Info_UEnum_EPDGWorkResultState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1659953235U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EPDGWorkResultState_h_3239985959(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EPDGWorkResultState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EPDGWorkResultState_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
