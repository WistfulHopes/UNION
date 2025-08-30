// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EAttribOwner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAttribOwner() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EAttribOwner();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Enum EAttribOwner
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAttribOwner;
static UEnum* EAttribOwner_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAttribOwner.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAttribOwner.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EAttribOwner, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EAttribOwner"));
	}
	return Z_Registration_Info_UEnum_EAttribOwner.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EAttribOwner>()
{
	return EAttribOwner_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EAttribOwner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Detail.Name", "EAttribOwner::Detail" },
		{ "Invalid.Name", "EAttribOwner::Invalid" },
		{ "ModuleRelativePath", "Public/EAttribOwner.h" },
		{ "Point.Name", "EAttribOwner::Point" },
		{ "Prim.Name", "EAttribOwner::Prim" },
		{ "Vertex.Name", "EAttribOwner::Vertex" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAttribOwner::Invalid", (int64)EAttribOwner::Invalid },
		{ "EAttribOwner::Vertex", (int64)EAttribOwner::Vertex },
		{ "EAttribOwner::Point", (int64)EAttribOwner::Point },
		{ "EAttribOwner::Prim", (int64)EAttribOwner::Prim },
		{ "EAttribOwner::Detail", (int64)EAttribOwner::Detail },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EAttribOwner_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EAttribOwner",
	"EAttribOwner",
	Z_Construct_UEnum_HoudiniEngineRuntime_EAttribOwner_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EAttribOwner_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EAttribOwner_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EAttribOwner_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EAttribOwner()
{
	if (!Z_Registration_Info_UEnum_EAttribOwner.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAttribOwner.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EAttribOwner_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAttribOwner.InnerSingleton;
}
// End Enum EAttribOwner

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EAttribOwner_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAttribOwner_StaticEnum, TEXT("EAttribOwner"), &Z_Registration_Info_UEnum_EAttribOwner, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1688320144U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EAttribOwner_h_3274060001(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EAttribOwner_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EAttribOwner_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
