// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/ECriWareSpeakerSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECriWareSpeakerSystem() {}

// Begin Cross Module References
CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_ECriWareSpeakerSystem();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Enum ECriWareSpeakerSystem
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECriWareSpeakerSystem;
static UEnum* ECriWareSpeakerSystem_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECriWareSpeakerSystem.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECriWareSpeakerSystem.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_ECriWareSpeakerSystem, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("ECriWareSpeakerSystem"));
	}
	return Z_Registration_Info_UEnum_ECriWareSpeakerSystem.OuterSingleton;
}
template<> CRIWARERUNTIME_API UEnum* StaticEnum<ECriWareSpeakerSystem>()
{
	return ECriWareSpeakerSystem_StaticEnum();
}
struct Z_Construct_UEnum_CriWareRuntime_ECriWareSpeakerSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ECriWareSpeakerSystem.h" },
		{ "Surround5Point1.Name", "ECriWareSpeakerSystem::Surround5Point1" },
		{ "Surround7Point1.Name", "ECriWareSpeakerSystem::Surround7Point1" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECriWareSpeakerSystem::Surround5Point1", (int64)ECriWareSpeakerSystem::Surround5Point1 },
		{ "ECriWareSpeakerSystem::Surround7Point1", (int64)ECriWareSpeakerSystem::Surround7Point1 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareRuntime_ECriWareSpeakerSystem_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
	nullptr,
	"ECriWareSpeakerSystem",
	"ECriWareSpeakerSystem",
	Z_Construct_UEnum_CriWareRuntime_ECriWareSpeakerSystem_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_ECriWareSpeakerSystem_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_ECriWareSpeakerSystem_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CriWareRuntime_ECriWareSpeakerSystem_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CriWareRuntime_ECriWareSpeakerSystem()
{
	if (!Z_Registration_Info_UEnum_ECriWareSpeakerSystem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECriWareSpeakerSystem.InnerSingleton, Z_Construct_UEnum_CriWareRuntime_ECriWareSpeakerSystem_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECriWareSpeakerSystem.InnerSingleton;
}
// End Enum ECriWareSpeakerSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ECriWareSpeakerSystem_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECriWareSpeakerSystem_StaticEnum, TEXT("ECriWareSpeakerSystem"), &Z_Registration_Info_UEnum_ECriWareSpeakerSystem, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1672227271U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ECriWareSpeakerSystem_h_746681704(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ECriWareSpeakerSystem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ECriWareSpeakerSystem_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
