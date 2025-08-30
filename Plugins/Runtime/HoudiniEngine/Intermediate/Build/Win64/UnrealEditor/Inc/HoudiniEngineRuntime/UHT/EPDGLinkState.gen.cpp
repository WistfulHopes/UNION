// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EPDGLinkState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPDGLinkState() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGLinkState();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Enum EPDGLinkState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPDGLinkState;
static UEnum* EPDGLinkState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPDGLinkState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPDGLinkState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGLinkState, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EPDGLinkState"));
	}
	return Z_Registration_Info_UEnum_EPDGLinkState.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EPDGLinkState>()
{
	return EPDGLinkState_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EPDGLinkState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Error_Not_Linked.Name", "EPDGLinkState::Error_Not_Linked" },
		{ "Inactive.Name", "EPDGLinkState::Inactive" },
		{ "Linked.Name", "EPDGLinkState::Linked" },
		{ "Linking.Name", "EPDGLinkState::Linking" },
		{ "ModuleRelativePath", "Public/EPDGLinkState.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPDGLinkState::Inactive", (int64)EPDGLinkState::Inactive },
		{ "EPDGLinkState::Linking", (int64)EPDGLinkState::Linking },
		{ "EPDGLinkState::Linked", (int64)EPDGLinkState::Linked },
		{ "EPDGLinkState::Error_Not_Linked", (int64)EPDGLinkState::Error_Not_Linked },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EPDGLinkState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EPDGLinkState",
	"EPDGLinkState",
	Z_Construct_UEnum_HoudiniEngineRuntime_EPDGLinkState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGLinkState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGLinkState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EPDGLinkState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGLinkState()
{
	if (!Z_Registration_Info_UEnum_EPDGLinkState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPDGLinkState.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EPDGLinkState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPDGLinkState.InnerSingleton;
}
// End Enum EPDGLinkState

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EPDGLinkState_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPDGLinkState_StaticEnum, TEXT("EPDGLinkState"), &Z_Registration_Info_UEnum_EPDGLinkState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2188567397U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EPDGLinkState_h_3049948835(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EPDGLinkState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EPDGLinkState_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
