// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EHoudiniHandleType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniHandleType() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Enum EHoudiniHandleType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniHandleType;
static UEnum* EHoudiniHandleType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniHandleType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniHandleType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniHandleType"));
	}
	return Z_Registration_Info_UEnum_EHoudiniHandleType.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniHandleType>()
{
	return EHoudiniHandleType_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bounder.Name", "EHoudiniHandleType::Bounder" },
		{ "ModuleRelativePath", "Public/EHoudiniHandleType.h" },
		{ "Unsupported.Name", "EHoudiniHandleType::Unsupported" },
		{ "Xform.Name", "EHoudiniHandleType::Xform" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniHandleType::Xform", (int64)EHoudiniHandleType::Xform },
		{ "EHoudiniHandleType::Bounder", (int64)EHoudiniHandleType::Bounder },
		{ "EHoudiniHandleType::Unsupported", (int64)EHoudiniHandleType::Unsupported },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniHandleType",
	"EHoudiniHandleType",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType()
{
	if (!Z_Registration_Info_UEnum_EHoudiniHandleType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniHandleType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniHandleType.InnerSingleton;
}
// End Enum EHoudiniHandleType

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniHandleType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniHandleType_StaticEnum, TEXT("EHoudiniHandleType"), &Z_Registration_Info_UEnum_EHoudiniHandleType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4207808938U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniHandleType_h_3218516413(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniHandleType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniHandleType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
