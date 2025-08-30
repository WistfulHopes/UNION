// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/ESpeakerType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESpeakerType() {}

// Begin Cross Module References
CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_ESpeakerType();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Enum ESpeakerType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpeakerType;
static UEnum* ESpeakerType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESpeakerType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESpeakerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_ESpeakerType, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("ESpeakerType"));
	}
	return Z_Registration_Info_UEnum_ESpeakerType.OuterSingleton;
}
template<> CRIWARERUNTIME_API UEnum* StaticEnum<ESpeakerType>()
{
	return ESpeakerType_StaticEnum();
}
struct Z_Construct_UEnum_CriWareRuntime_ESpeakerType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ESpeakerType.h" },
		{ "NormalMode.Name", "ESpeakerType::NormalMode" },
		{ "SeparateMode.Name", "ESpeakerType::SeparateMode" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESpeakerType::NormalMode", (int64)ESpeakerType::NormalMode },
		{ "ESpeakerType::SeparateMode", (int64)ESpeakerType::SeparateMode },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareRuntime_ESpeakerType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
	nullptr,
	"ESpeakerType",
	"ESpeakerType",
	Z_Construct_UEnum_CriWareRuntime_ESpeakerType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_ESpeakerType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_ESpeakerType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CriWareRuntime_ESpeakerType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CriWareRuntime_ESpeakerType()
{
	if (!Z_Registration_Info_UEnum_ESpeakerType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpeakerType.InnerSingleton, Z_Construct_UEnum_CriWareRuntime_ESpeakerType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESpeakerType.InnerSingleton;
}
// End Enum ESpeakerType

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ESpeakerType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESpeakerType_StaticEnum, TEXT("ESpeakerType"), &Z_Registration_Info_UEnum_ESpeakerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3470529085U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ESpeakerType_h_1960578113(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ESpeakerType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ESpeakerType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
