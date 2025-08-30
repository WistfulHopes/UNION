// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EManaSoundType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEManaSoundType() {}

// Begin Cross Module References
CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaSoundType();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Enum EManaSoundType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EManaSoundType;
static UEnum* EManaSoundType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EManaSoundType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EManaSoundType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EManaSoundType, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EManaSoundType"));
	}
	return Z_Registration_Info_UEnum_EManaSoundType.OuterSingleton;
}
template<> CRIWARERUNTIME_API UEnum* StaticEnum<EManaSoundType>()
{
	return EManaSoundType_StaticEnum();
}
struct Z_Construct_UEnum_CriWareRuntime_EManaSoundType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Adx.Name", "EManaSoundType::Adx" },
		{ "BlueprintType", "true" },
		{ "HCA.Name", "EManaSoundType::HCA" },
		{ "ModuleRelativePath", "Public/EManaSoundType.h" },
		{ "Num.Name", "EManaSoundType::Num" },
		{ "Unknown.Name", "EManaSoundType::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EManaSoundType::Adx", (int64)EManaSoundType::Adx },
		{ "EManaSoundType::HCA", (int64)EManaSoundType::HCA },
		{ "EManaSoundType::Num", (int64)EManaSoundType::Num },
		{ "EManaSoundType::Unknown", (int64)EManaSoundType::Unknown },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareRuntime_EManaSoundType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
	nullptr,
	"EManaSoundType",
	"EManaSoundType",
	Z_Construct_UEnum_CriWareRuntime_EManaSoundType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EManaSoundType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EManaSoundType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CriWareRuntime_EManaSoundType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CriWareRuntime_EManaSoundType()
{
	if (!Z_Registration_Info_UEnum_EManaSoundType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EManaSoundType.InnerSingleton, Z_Construct_UEnum_CriWareRuntime_EManaSoundType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EManaSoundType.InnerSingleton;
}
// End Enum EManaSoundType

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaSoundType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EManaSoundType_StaticEnum, TEXT("EManaSoundType"), &Z_Registration_Info_UEnum_EManaSoundType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 869709634U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaSoundType_h_514192907(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaSoundType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaSoundType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
