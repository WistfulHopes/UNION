// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EAttribStorageType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAttribStorageType() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EAttribStorageType();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Enum EAttribStorageType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAttribStorageType;
static UEnum* EAttribStorageType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAttribStorageType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAttribStorageType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EAttribStorageType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EAttribStorageType"));
	}
	return Z_Registration_Info_UEnum_EAttribStorageType.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EAttribStorageType>()
{
	return EAttribStorageType_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EAttribStorageType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "FLOAT.Name", "EAttribStorageType::FLOAT" },
		{ "FLOAT64.Name", "EAttribStorageType::FLOAT64" },
		{ "INT.Name", "EAttribStorageType::INT" },
		{ "INT64.Name", "EAttribStorageType::INT64" },
		{ "Invalid.Name", "EAttribStorageType::Invalid" },
		{ "ModuleRelativePath", "Public/EAttribStorageType.h" },
		{ "STRING.Name", "EAttribStorageType::STRING" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAttribStorageType::Invalid", (int64)EAttribStorageType::Invalid },
		{ "EAttribStorageType::INT", (int64)EAttribStorageType::INT },
		{ "EAttribStorageType::INT64", (int64)EAttribStorageType::INT64 },
		{ "EAttribStorageType::FLOAT", (int64)EAttribStorageType::FLOAT },
		{ "EAttribStorageType::FLOAT64", (int64)EAttribStorageType::FLOAT64 },
		{ "EAttribStorageType::STRING", (int64)EAttribStorageType::STRING },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EAttribStorageType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EAttribStorageType",
	"EAttribStorageType",
	Z_Construct_UEnum_HoudiniEngineRuntime_EAttribStorageType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EAttribStorageType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EAttribStorageType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EAttribStorageType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EAttribStorageType()
{
	if (!Z_Registration_Info_UEnum_EAttribStorageType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAttribStorageType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EAttribStorageType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAttribStorageType.InnerSingleton;
}
// End Enum EAttribStorageType

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EAttribStorageType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAttribStorageType_StaticEnum, TEXT("EAttribStorageType"), &Z_Registration_Info_UEnum_EAttribStorageType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2243062972U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EAttribStorageType_h_3078073045(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EAttribStorageType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EAttribStorageType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
