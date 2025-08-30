// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EAtomWavePlayState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAtomWavePlayState() {}

// Begin Cross Module References
CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomWavePlayState();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Enum EAtomWavePlayState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomWavePlayState;
static UEnum* EAtomWavePlayState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAtomWavePlayState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAtomWavePlayState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EAtomWavePlayState, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EAtomWavePlayState"));
	}
	return Z_Registration_Info_UEnum_EAtomWavePlayState.OuterSingleton;
}
template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomWavePlayState>()
{
	return EAtomWavePlayState_StaticEnum();
}
struct Z_Construct_UEnum_CriWareRuntime_EAtomWavePlayState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Name", "EAtomWavePlayState::Count" },
		{ "FadingIn.Name", "EAtomWavePlayState::FadingIn" },
		{ "FadingOut.Name", "EAtomWavePlayState::FadingOut" },
		{ "ModuleRelativePath", "Public/EAtomWavePlayState.h" },
		{ "Paused.Name", "EAtomWavePlayState::Paused" },
		{ "Playing.Name", "EAtomWavePlayState::Playing" },
		{ "Stopped.Name", "EAtomWavePlayState::Stopped" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAtomWavePlayState::Playing", (int64)EAtomWavePlayState::Playing },
		{ "EAtomWavePlayState::Stopped", (int64)EAtomWavePlayState::Stopped },
		{ "EAtomWavePlayState::Paused", (int64)EAtomWavePlayState::Paused },
		{ "EAtomWavePlayState::FadingIn", (int64)EAtomWavePlayState::FadingIn },
		{ "EAtomWavePlayState::FadingOut", (int64)EAtomWavePlayState::FadingOut },
		{ "EAtomWavePlayState::Count", (int64)EAtomWavePlayState::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareRuntime_EAtomWavePlayState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
	nullptr,
	"EAtomWavePlayState",
	"EAtomWavePlayState",
	Z_Construct_UEnum_CriWareRuntime_EAtomWavePlayState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EAtomWavePlayState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EAtomWavePlayState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CriWareRuntime_EAtomWavePlayState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomWavePlayState()
{
	if (!Z_Registration_Info_UEnum_EAtomWavePlayState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomWavePlayState.InnerSingleton, Z_Construct_UEnum_CriWareRuntime_EAtomWavePlayState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAtomWavePlayState.InnerSingleton;
}
// End Enum EAtomWavePlayState

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomWavePlayState_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAtomWavePlayState_StaticEnum, TEXT("EAtomWavePlayState"), &Z_Registration_Info_UEnum_EAtomWavePlayState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1206577548U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomWavePlayState_h_530892617(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomWavePlayState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomWavePlayState_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
