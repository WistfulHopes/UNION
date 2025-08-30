// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EHoudiniCurveMethod.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniCurveMethod() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Enum EHoudiniCurveMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniCurveMethod;
static UEnum* EHoudiniCurveMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniCurveMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniCurveMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniCurveMethod"));
	}
	return Z_Registration_Info_UEnum_EHoudiniCurveMethod.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniCurveMethod>()
{
	return EHoudiniCurveMethod_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Breakpoints.Name", "EHoudiniCurveMethod::Breakpoints" },
		{ "CVs.Name", "EHoudiniCurveMethod::CVs" },
		{ "Freehand.Name", "EHoudiniCurveMethod::Freehand" },
		{ "Invalid.Name", "EHoudiniCurveMethod::Invalid" },
		{ "ModuleRelativePath", "Public/EHoudiniCurveMethod.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniCurveMethod::Invalid", (int64)EHoudiniCurveMethod::Invalid },
		{ "EHoudiniCurveMethod::CVs", (int64)EHoudiniCurveMethod::CVs },
		{ "EHoudiniCurveMethod::Breakpoints", (int64)EHoudiniCurveMethod::Breakpoints },
		{ "EHoudiniCurveMethod::Freehand", (int64)EHoudiniCurveMethod::Freehand },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniCurveMethod",
	"EHoudiniCurveMethod",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod()
{
	if (!Z_Registration_Info_UEnum_EHoudiniCurveMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniCurveMethod.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniCurveMethod.InnerSingleton;
}
// End Enum EHoudiniCurveMethod

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniCurveMethod_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniCurveMethod_StaticEnum, TEXT("EHoudiniCurveMethod"), &Z_Registration_Info_UEnum_EHoudiniCurveMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2966559592U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniCurveMethod_h_2750403892(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniCurveMethod_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniCurveMethod_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
