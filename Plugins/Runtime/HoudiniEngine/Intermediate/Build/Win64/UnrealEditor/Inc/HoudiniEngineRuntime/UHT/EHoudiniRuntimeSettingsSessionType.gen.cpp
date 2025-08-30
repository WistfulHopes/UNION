// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EHoudiniRuntimeSettingsSessionType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniRuntimeSettingsSessionType() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Enum EHoudiniRuntimeSettingsSessionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniRuntimeSettingsSessionType;
static UEnum* EHoudiniRuntimeSettingsSessionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniRuntimeSettingsSessionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniRuntimeSettingsSessionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniRuntimeSettingsSessionType"));
	}
	return Z_Registration_Info_UEnum_EHoudiniRuntimeSettingsSessionType.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniRuntimeSettingsSessionType>()
{
	return EHoudiniRuntimeSettingsSessionType_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HRSST_InProcess.Name", "HRSST_InProcess" },
		{ "HRSST_NamedPipe.Name", "HRSST_NamedPipe" },
		{ "HRSST_None.Name", "HRSST_None" },
		{ "HRSST_Socket.Name", "HRSST_Socket" },
		{ "ModuleRelativePath", "Public/EHoudiniRuntimeSettingsSessionType.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "HRSST_InProcess", (int64)HRSST_InProcess },
		{ "HRSST_Socket", (int64)HRSST_Socket },
		{ "HRSST_NamedPipe", (int64)HRSST_NamedPipe },
		{ "HRSST_None", (int64)HRSST_None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniRuntimeSettingsSessionType",
	"EHoudiniRuntimeSettingsSessionType",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType()
{
	if (!Z_Registration_Info_UEnum_EHoudiniRuntimeSettingsSessionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniRuntimeSettingsSessionType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniRuntimeSettingsSessionType.InnerSingleton;
}
// End Enum EHoudiniRuntimeSettingsSessionType

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniRuntimeSettingsSessionType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniRuntimeSettingsSessionType_StaticEnum, TEXT("EHoudiniRuntimeSettingsSessionType"), &Z_Registration_Info_UEnum_EHoudiniRuntimeSettingsSessionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 622761687U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniRuntimeSettingsSessionType_h_1868910238(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniRuntimeSettingsSessionType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniRuntimeSettingsSessionType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
