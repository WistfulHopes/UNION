// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/ECriWareErrorType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECriWareErrorType() {}

// Begin Cross Module References
CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_ECriWareErrorType();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Enum ECriWareErrorType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECriWareErrorType;
static UEnum* ECriWareErrorType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECriWareErrorType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECriWareErrorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_ECriWareErrorType, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("ECriWareErrorType"));
	}
	return Z_Registration_Info_UEnum_ECriWareErrorType.OuterSingleton;
}
template<> CRIWARERUNTIME_API UEnum* StaticEnum<ECriWareErrorType>()
{
	return ECriWareErrorType_StaticEnum();
}
struct Z_Construct_UEnum_CriWareRuntime_ECriWareErrorType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Error.Name", "ECriWareErrorType::Error" },
		{ "ModuleRelativePath", "Public/ECriWareErrorType.h" },
		{ "Warning.Name", "ECriWareErrorType::Warning" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECriWareErrorType::Warning", (int64)ECriWareErrorType::Warning },
		{ "ECriWareErrorType::Error", (int64)ECriWareErrorType::Error },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareRuntime_ECriWareErrorType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
	nullptr,
	"ECriWareErrorType",
	"ECriWareErrorType",
	Z_Construct_UEnum_CriWareRuntime_ECriWareErrorType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_ECriWareErrorType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_ECriWareErrorType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CriWareRuntime_ECriWareErrorType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CriWareRuntime_ECriWareErrorType()
{
	if (!Z_Registration_Info_UEnum_ECriWareErrorType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECriWareErrorType.InnerSingleton, Z_Construct_UEnum_CriWareRuntime_ECriWareErrorType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECriWareErrorType.InnerSingleton;
}
// End Enum ECriWareErrorType

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ECriWareErrorType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECriWareErrorType_StaticEnum, TEXT("ECriWareErrorType"), &Z_Registration_Info_UEnum_ECriWareErrorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 987919071U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ECriWareErrorType_h_925105057(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ECriWareErrorType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ECriWareErrorType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
