// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EHoudiniStaticMeshMethod.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniStaticMeshMethod() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniStaticMeshMethod();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Enum EHoudiniStaticMeshMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniStaticMeshMethod;
static UEnum* EHoudiniStaticMeshMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniStaticMeshMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniStaticMeshMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniStaticMeshMethod, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniStaticMeshMethod"));
	}
	return Z_Registration_Info_UEnum_EHoudiniStaticMeshMethod.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniStaticMeshMethod>()
{
	return EHoudiniStaticMeshMethod_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniStaticMeshMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FMeshDescription.Name", "EHoudiniStaticMeshMethod::FMeshDescription" },
		{ "ModuleRelativePath", "Public/EHoudiniStaticMeshMethod.h" },
		{ "RawMesh_DEPRECATED.Name", "EHoudiniStaticMeshMethod::RawMesh_DEPRECATED" },
		{ "UHoudiniStaticMesh.Name", "EHoudiniStaticMeshMethod::UHoudiniStaticMesh" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniStaticMeshMethod::RawMesh_DEPRECATED", (int64)EHoudiniStaticMeshMethod::RawMesh_DEPRECATED },
		{ "EHoudiniStaticMeshMethod::FMeshDescription", (int64)EHoudiniStaticMeshMethod::FMeshDescription },
		{ "EHoudiniStaticMeshMethod::UHoudiniStaticMesh", (int64)EHoudiniStaticMeshMethod::UHoudiniStaticMesh },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniStaticMeshMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniStaticMeshMethod",
	"EHoudiniStaticMeshMethod",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniStaticMeshMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniStaticMeshMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniStaticMeshMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniStaticMeshMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniStaticMeshMethod()
{
	if (!Z_Registration_Info_UEnum_EHoudiniStaticMeshMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniStaticMeshMethod.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniStaticMeshMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniStaticMeshMethod.InnerSingleton;
}
// End Enum EHoudiniStaticMeshMethod

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniStaticMeshMethod_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniStaticMeshMethod_StaticEnum, TEXT("EHoudiniStaticMeshMethod"), &Z_Registration_Info_UEnum_EHoudiniStaticMeshMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3161705990U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniStaticMeshMethod_h_2027063815(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniStaticMeshMethod_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniStaticMeshMethod_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
