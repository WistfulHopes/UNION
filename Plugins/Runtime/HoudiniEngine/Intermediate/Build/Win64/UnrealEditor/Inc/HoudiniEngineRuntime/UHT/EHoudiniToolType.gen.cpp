// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EHoudiniToolType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniToolType() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolType();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Enum EHoudiniToolType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniToolType;
static UEnum* EHoudiniToolType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniToolType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniToolType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniToolType"));
	}
	return Z_Registration_Info_UEnum_EHoudiniToolType.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniToolType>()
{
	return EHoudiniToolType_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HTOOLTYPE_GENERATOR.Name", "EHoudiniToolType::HTOOLTYPE_GENERATOR" },
		{ "HTOOLTYPE_OPERATOR_BATCH.Name", "EHoudiniToolType::HTOOLTYPE_OPERATOR_BATCH" },
		{ "HTOOLTYPE_OPERATOR_MULTI.Name", "EHoudiniToolType::HTOOLTYPE_OPERATOR_MULTI" },
		{ "HTOOLTYPE_OPERATOR_SINGLE.Name", "EHoudiniToolType::HTOOLTYPE_OPERATOR_SINGLE" },
		{ "ModuleRelativePath", "Public/EHoudiniToolType.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniToolType::HTOOLTYPE_GENERATOR", (int64)EHoudiniToolType::HTOOLTYPE_GENERATOR },
		{ "EHoudiniToolType::HTOOLTYPE_OPERATOR_SINGLE", (int64)EHoudiniToolType::HTOOLTYPE_OPERATOR_SINGLE },
		{ "EHoudiniToolType::HTOOLTYPE_OPERATOR_MULTI", (int64)EHoudiniToolType::HTOOLTYPE_OPERATOR_MULTI },
		{ "EHoudiniToolType::HTOOLTYPE_OPERATOR_BATCH", (int64)EHoudiniToolType::HTOOLTYPE_OPERATOR_BATCH },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniToolType",
	"EHoudiniToolType",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolType()
{
	if (!Z_Registration_Info_UEnum_EHoudiniToolType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniToolType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniToolType.InnerSingleton;
}
// End Enum EHoudiniToolType

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniToolType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniToolType_StaticEnum, TEXT("EHoudiniToolType"), &Z_Registration_Info_UEnum_EHoudiniToolType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 536491565U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniToolType_h_925440310(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniToolType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniToolType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
