// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EHoudiniBakeAfterNextCook.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniBakeAfterNextCook() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniBakeAfterNextCook();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Enum EHoudiniBakeAfterNextCook
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniBakeAfterNextCook;
static UEnum* EHoudiniBakeAfterNextCook_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniBakeAfterNextCook.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniBakeAfterNextCook.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniBakeAfterNextCook, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniBakeAfterNextCook"));
	}
	return Z_Registration_Info_UEnum_EHoudiniBakeAfterNextCook.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniBakeAfterNextCook>()
{
	return EHoudiniBakeAfterNextCook_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniBakeAfterNextCook_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Always.Name", "EHoudiniBakeAfterNextCook::Always" },
		{ "BlueprintType", "true" },
		{ "Disabled.Name", "EHoudiniBakeAfterNextCook::Disabled" },
		{ "ModuleRelativePath", "Public/EHoudiniBakeAfterNextCook.h" },
		{ "Once.Name", "EHoudiniBakeAfterNextCook::Once" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniBakeAfterNextCook::Disabled", (int64)EHoudiniBakeAfterNextCook::Disabled },
		{ "EHoudiniBakeAfterNextCook::Always", (int64)EHoudiniBakeAfterNextCook::Always },
		{ "EHoudiniBakeAfterNextCook::Once", (int64)EHoudiniBakeAfterNextCook::Once },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniBakeAfterNextCook_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniBakeAfterNextCook",
	"EHoudiniBakeAfterNextCook",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniBakeAfterNextCook_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniBakeAfterNextCook_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniBakeAfterNextCook_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniBakeAfterNextCook_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniBakeAfterNextCook()
{
	if (!Z_Registration_Info_UEnum_EHoudiniBakeAfterNextCook.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniBakeAfterNextCook.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniBakeAfterNextCook_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniBakeAfterNextCook.InnerSingleton;
}
// End Enum EHoudiniBakeAfterNextCook

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniBakeAfterNextCook_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniBakeAfterNextCook_StaticEnum, TEXT("EHoudiniBakeAfterNextCook"), &Z_Registration_Info_UEnum_EHoudiniBakeAfterNextCook, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4007585409U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniBakeAfterNextCook_h_3547191939(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniBakeAfterNextCook_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniBakeAfterNextCook_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
