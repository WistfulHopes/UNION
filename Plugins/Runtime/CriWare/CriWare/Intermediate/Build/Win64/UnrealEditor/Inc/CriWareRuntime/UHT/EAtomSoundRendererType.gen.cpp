// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EAtomSoundRendererType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAtomSoundRendererType() {}

// Begin Cross Module References
CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomSoundRendererType();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Enum EAtomSoundRendererType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomSoundRendererType;
static UEnum* EAtomSoundRendererType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAtomSoundRendererType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAtomSoundRendererType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EAtomSoundRendererType, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EAtomSoundRendererType"));
	}
	return Z_Registration_Info_UEnum_EAtomSoundRendererType.OuterSingleton;
}
template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomSoundRendererType>()
{
	return EAtomSoundRendererType_StaticEnum();
}
struct Z_Construct_UEnum_CriWareRuntime_EAtomSoundRendererType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Any.Name", "EAtomSoundRendererType::Any" },
		{ "Asr.Name", "EAtomSoundRendererType::Asr" },
		{ "Hardware1.Name", "EAtomSoundRendererType::Hardware1" },
		{ "Hardware2.Name", "EAtomSoundRendererType::Hardware2" },
		{ "Hardware3.Name", "EAtomSoundRendererType::Hardware3" },
		{ "Hardware4.Name", "EAtomSoundRendererType::Hardware4" },
		{ "ModuleRelativePath", "Public/EAtomSoundRendererType.h" },
		{ "Native.Name", "EAtomSoundRendererType::Native" },
		{ "ObjectBasedAudio.Name", "EAtomSoundRendererType::ObjectBasedAudio" },
		{ "Pad.Name", "EAtomSoundRendererType::Pad" },
		{ "PassThrough.Name", "EAtomSoundRendererType::PassThrough" },
		{ "RESTRICTED.Name", "EAtomSoundRendererType::RESTRICTED" },
		{ "Spatial.Name", "EAtomSoundRendererType::Spatial" },
		{ "VibrationHardware.Name", "EAtomSoundRendererType::VibrationHardware" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAtomSoundRendererType::Any", (int64)EAtomSoundRendererType::Any },
		{ "EAtomSoundRendererType::Native", (int64)EAtomSoundRendererType::Native },
		{ "EAtomSoundRendererType::Asr", (int64)EAtomSoundRendererType::Asr },
		{ "EAtomSoundRendererType::Hardware1", (int64)EAtomSoundRendererType::Hardware1 },
		{ "EAtomSoundRendererType::Hardware2", (int64)EAtomSoundRendererType::Hardware2 },
		{ "EAtomSoundRendererType::Hardware3", (int64)EAtomSoundRendererType::Hardware3 },
		{ "EAtomSoundRendererType::Hardware4", (int64)EAtomSoundRendererType::Hardware4 },
		{ "EAtomSoundRendererType::Spatial", (int64)EAtomSoundRendererType::Spatial },
		{ "EAtomSoundRendererType::VibrationHardware", (int64)EAtomSoundRendererType::VibrationHardware },
		{ "EAtomSoundRendererType::ObjectBasedAudio", (int64)EAtomSoundRendererType::ObjectBasedAudio },
		{ "EAtomSoundRendererType::PassThrough", (int64)EAtomSoundRendererType::PassThrough },
		{ "EAtomSoundRendererType::RESTRICTED", (int64)EAtomSoundRendererType::RESTRICTED },
		{ "EAtomSoundRendererType::Pad", (int64)EAtomSoundRendererType::Pad },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareRuntime_EAtomSoundRendererType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
	nullptr,
	"EAtomSoundRendererType",
	"EAtomSoundRendererType",
	Z_Construct_UEnum_CriWareRuntime_EAtomSoundRendererType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EAtomSoundRendererType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EAtomSoundRendererType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CriWareRuntime_EAtomSoundRendererType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomSoundRendererType()
{
	if (!Z_Registration_Info_UEnum_EAtomSoundRendererType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomSoundRendererType.InnerSingleton, Z_Construct_UEnum_CriWareRuntime_EAtomSoundRendererType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAtomSoundRendererType.InnerSingleton;
}
// End Enum EAtomSoundRendererType

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomSoundRendererType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAtomSoundRendererType_StaticEnum, TEXT("EAtomSoundRendererType"), &Z_Registration_Info_UEnum_EAtomSoundRendererType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3809552003U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomSoundRendererType_h_1406821863(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomSoundRendererType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomSoundRendererType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
