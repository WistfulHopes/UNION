// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EHoudiniParameterChoiceListType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniParameterChoiceListType() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterChoiceListType();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Enum EHoudiniParameterChoiceListType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniParameterChoiceListType;
static UEnum* EHoudiniParameterChoiceListType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniParameterChoiceListType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniParameterChoiceListType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterChoiceListType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniParameterChoiceListType"));
	}
	return Z_Registration_Info_UEnum_EHoudiniParameterChoiceListType.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniParameterChoiceListType>()
{
	return EHoudiniParameterChoiceListType_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterChoiceListType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Mini.Name", "EHoudiniParameterChoiceListType::Mini" },
		{ "ModuleRelativePath", "Public/EHoudiniParameterChoiceListType.h" },
		{ "None.Name", "EHoudiniParameterChoiceListType::None" },
		{ "Normal.Name", "EHoudiniParameterChoiceListType::Normal" },
		{ "Replace.Name", "EHoudiniParameterChoiceListType::Replace" },
		{ "Toggle.Name", "EHoudiniParameterChoiceListType::Toggle" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniParameterChoiceListType::None", (int64)EHoudiniParameterChoiceListType::None },
		{ "EHoudiniParameterChoiceListType::Normal", (int64)EHoudiniParameterChoiceListType::Normal },
		{ "EHoudiniParameterChoiceListType::Mini", (int64)EHoudiniParameterChoiceListType::Mini },
		{ "EHoudiniParameterChoiceListType::Replace", (int64)EHoudiniParameterChoiceListType::Replace },
		{ "EHoudiniParameterChoiceListType::Toggle", (int64)EHoudiniParameterChoiceListType::Toggle },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterChoiceListType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniParameterChoiceListType",
	"EHoudiniParameterChoiceListType",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterChoiceListType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterChoiceListType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterChoiceListType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterChoiceListType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterChoiceListType()
{
	if (!Z_Registration_Info_UEnum_EHoudiniParameterChoiceListType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniParameterChoiceListType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterChoiceListType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniParameterChoiceListType.InnerSingleton;
}
// End Enum EHoudiniParameterChoiceListType

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniParameterChoiceListType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniParameterChoiceListType_StaticEnum, TEXT("EHoudiniParameterChoiceListType"), &Z_Registration_Info_UEnum_EHoudiniParameterChoiceListType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2980568707U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniParameterChoiceListType_h_1348854728(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniParameterChoiceListType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniParameterChoiceListType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
