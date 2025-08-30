// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EManaFrameAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEManaFrameAction() {}

// Begin Cross Module References
CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaFrameAction();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Enum EManaFrameAction
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EManaFrameAction;
static UEnum* EManaFrameAction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EManaFrameAction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EManaFrameAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EManaFrameAction, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EManaFrameAction"));
	}
	return Z_Registration_Info_UEnum_EManaFrameAction.OuterSingleton;
}
template<> CRIWARERUNTIME_API UEnum* StaticEnum<EManaFrameAction>()
{
	return EManaFrameAction_StaticEnum();
}
struct Z_Construct_UEnum_CriWareRuntime_EManaFrameAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Clear.Name", "EManaFrameAction::Clear" },
		{ "Default.Name", "EManaFrameAction::Default" },
		{ "Hold.Name", "EManaFrameAction::Hold" },
		{ "ModuleRelativePath", "Public/EManaFrameAction.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EManaFrameAction::Default", (int64)EManaFrameAction::Default },
		{ "EManaFrameAction::Hold", (int64)EManaFrameAction::Hold },
		{ "EManaFrameAction::Clear", (int64)EManaFrameAction::Clear },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareRuntime_EManaFrameAction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
	nullptr,
	"EManaFrameAction",
	"EManaFrameAction",
	Z_Construct_UEnum_CriWareRuntime_EManaFrameAction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EManaFrameAction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EManaFrameAction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CriWareRuntime_EManaFrameAction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CriWareRuntime_EManaFrameAction()
{
	if (!Z_Registration_Info_UEnum_EManaFrameAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EManaFrameAction.InnerSingleton, Z_Construct_UEnum_CriWareRuntime_EManaFrameAction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EManaFrameAction.InnerSingleton;
}
// End Enum EManaFrameAction

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaFrameAction_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EManaFrameAction_StaticEnum, TEXT("EManaFrameAction"), &Z_Registration_Info_UEnum_EManaFrameAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1114415206U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaFrameAction_h_997880432(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaFrameAction_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaFrameAction_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
