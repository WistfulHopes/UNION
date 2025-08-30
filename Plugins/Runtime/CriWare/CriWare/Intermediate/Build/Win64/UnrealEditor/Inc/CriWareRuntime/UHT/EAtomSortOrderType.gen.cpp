// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EAtomSortOrderType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAtomSortOrderType() {}

// Begin Cross Module References
CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomSortOrderType();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Enum EAtomSortOrderType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomSortOrderType;
static UEnum* EAtomSortOrderType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAtomSortOrderType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAtomSortOrderType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EAtomSortOrderType, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EAtomSortOrderType"));
	}
	return Z_Registration_Info_UEnum_EAtomSortOrderType.OuterSingleton;
}
template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomSortOrderType>()
{
	return EAtomSortOrderType_StaticEnum();
}
struct Z_Construct_UEnum_CriWareRuntime_EAtomSortOrderType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Ascending.Name", "EAtomSortOrderType::Ascending" },
		{ "BlueprintType", "true" },
		{ "Descending.Name", "EAtomSortOrderType::Descending" },
		{ "ModuleRelativePath", "Public/EAtomSortOrderType.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAtomSortOrderType::Ascending", (int64)EAtomSortOrderType::Ascending },
		{ "EAtomSortOrderType::Descending", (int64)EAtomSortOrderType::Descending },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareRuntime_EAtomSortOrderType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
	nullptr,
	"EAtomSortOrderType",
	"EAtomSortOrderType",
	Z_Construct_UEnum_CriWareRuntime_EAtomSortOrderType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EAtomSortOrderType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EAtomSortOrderType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CriWareRuntime_EAtomSortOrderType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomSortOrderType()
{
	if (!Z_Registration_Info_UEnum_EAtomSortOrderType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomSortOrderType.InnerSingleton, Z_Construct_UEnum_CriWareRuntime_EAtomSortOrderType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAtomSortOrderType.InnerSingleton;
}
// End Enum EAtomSortOrderType

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomSortOrderType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAtomSortOrderType_StaticEnum, TEXT("EAtomSortOrderType"), &Z_Registration_Info_UEnum_EAtomSortOrderType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 458775466U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomSortOrderType_h_1402644877(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomSortOrderType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomSortOrderType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
