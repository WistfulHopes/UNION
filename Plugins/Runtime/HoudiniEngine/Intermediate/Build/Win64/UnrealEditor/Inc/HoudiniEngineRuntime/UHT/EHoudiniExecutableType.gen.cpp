// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EHoudiniExecutableType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniExecutableType() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniExecutableType();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Enum EHoudiniExecutableType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniExecutableType;
static UEnum* EHoudiniExecutableType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniExecutableType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniExecutableType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniExecutableType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniExecutableType"));
	}
	return Z_Registration_Info_UEnum_EHoudiniExecutableType.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniExecutableType>()
{
	return EHoudiniExecutableType_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniExecutableType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HRSHE_Houdini.Name", "HRSHE_Houdini" },
		{ "HRSHE_HoudiniCore.Name", "HRSHE_HoudiniCore" },
		{ "HRSHE_HoudiniFX.Name", "HRSHE_HoudiniFX" },
		{ "HRSHE_HoudiniIndie.Name", "HRSHE_HoudiniIndie" },
		{ "ModuleRelativePath", "Public/EHoudiniExecutableType.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "HRSHE_Houdini", (int64)HRSHE_Houdini },
		{ "HRSHE_HoudiniFX", (int64)HRSHE_HoudiniFX },
		{ "HRSHE_HoudiniCore", (int64)HRSHE_HoudiniCore },
		{ "HRSHE_HoudiniIndie", (int64)HRSHE_HoudiniIndie },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniExecutableType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniExecutableType",
	"EHoudiniExecutableType",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniExecutableType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniExecutableType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniExecutableType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniExecutableType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniExecutableType()
{
	if (!Z_Registration_Info_UEnum_EHoudiniExecutableType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniExecutableType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniExecutableType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniExecutableType.InnerSingleton;
}
// End Enum EHoudiniExecutableType

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniExecutableType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniExecutableType_StaticEnum, TEXT("EHoudiniExecutableType"), &Z_Registration_Info_UEnum_EHoudiniExecutableType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1166698049U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniExecutableType_h_1190003106(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniExecutableType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniExecutableType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
