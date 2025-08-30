// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EHoudiniParameterType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniParameterType() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterType();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Enum EHoudiniParameterType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniParameterType;
static UEnum* EHoudiniParameterType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniParameterType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniParameterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniParameterType"));
	}
	return Z_Registration_Info_UEnum_EHoudiniParameterType.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniParameterType>()
{
	return EHoudiniParameterType_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Button.Name", "EHoudiniParameterType::Button" },
		{ "ButtonStrip.Name", "EHoudiniParameterType::ButtonStrip" },
		{ "Color.Name", "EHoudiniParameterType::Color" },
		{ "ColorRamp.Name", "EHoudiniParameterType::ColorRamp" },
		{ "File.Name", "EHoudiniParameterType::File" },
		{ "FileDir.Name", "EHoudiniParameterType::FileDir" },
		{ "FileGeo.Name", "EHoudiniParameterType::FileGeo" },
		{ "FileImage.Name", "EHoudiniParameterType::FileImage" },
		{ "Float.Name", "EHoudiniParameterType::Float" },
		{ "FloatRamp.Name", "EHoudiniParameterType::FloatRamp" },
		{ "Folder.Name", "EHoudiniParameterType::Folder" },
		{ "FolderList.Name", "EHoudiniParameterType::FolderList" },
		{ "Input.Name", "EHoudiniParameterType::Input" },
		{ "Int.Name", "EHoudiniParameterType::Int" },
		{ "IntChoice.Name", "EHoudiniParameterType::IntChoice" },
		{ "Invalid.Name", "EHoudiniParameterType::Invalid" },
		{ "Label.Name", "EHoudiniParameterType::Label" },
		{ "ModuleRelativePath", "Public/EHoudiniParameterType.h" },
		{ "MultiParm.Name", "EHoudiniParameterType::MultiParm" },
		{ "Separator.Name", "EHoudiniParameterType::Separator" },
		{ "String.Name", "EHoudiniParameterType::String" },
		{ "StringAssetRef.Name", "EHoudiniParameterType::StringAssetRef" },
		{ "StringChoice.Name", "EHoudiniParameterType::StringChoice" },
		{ "Toggle.Name", "EHoudiniParameterType::Toggle" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniParameterType::Invalid", (int64)EHoudiniParameterType::Invalid },
		{ "EHoudiniParameterType::Button", (int64)EHoudiniParameterType::Button },
		{ "EHoudiniParameterType::ButtonStrip", (int64)EHoudiniParameterType::ButtonStrip },
		{ "EHoudiniParameterType::Color", (int64)EHoudiniParameterType::Color },
		{ "EHoudiniParameterType::ColorRamp", (int64)EHoudiniParameterType::ColorRamp },
		{ "EHoudiniParameterType::File", (int64)EHoudiniParameterType::File },
		{ "EHoudiniParameterType::FileDir", (int64)EHoudiniParameterType::FileDir },
		{ "EHoudiniParameterType::FileGeo", (int64)EHoudiniParameterType::FileGeo },
		{ "EHoudiniParameterType::FileImage", (int64)EHoudiniParameterType::FileImage },
		{ "EHoudiniParameterType::Float", (int64)EHoudiniParameterType::Float },
		{ "EHoudiniParameterType::FloatRamp", (int64)EHoudiniParameterType::FloatRamp },
		{ "EHoudiniParameterType::Folder", (int64)EHoudiniParameterType::Folder },
		{ "EHoudiniParameterType::FolderList", (int64)EHoudiniParameterType::FolderList },
		{ "EHoudiniParameterType::Input", (int64)EHoudiniParameterType::Input },
		{ "EHoudiniParameterType::Int", (int64)EHoudiniParameterType::Int },
		{ "EHoudiniParameterType::IntChoice", (int64)EHoudiniParameterType::IntChoice },
		{ "EHoudiniParameterType::Label", (int64)EHoudiniParameterType::Label },
		{ "EHoudiniParameterType::MultiParm", (int64)EHoudiniParameterType::MultiParm },
		{ "EHoudiniParameterType::Separator", (int64)EHoudiniParameterType::Separator },
		{ "EHoudiniParameterType::String", (int64)EHoudiniParameterType::String },
		{ "EHoudiniParameterType::StringChoice", (int64)EHoudiniParameterType::StringChoice },
		{ "EHoudiniParameterType::StringAssetRef", (int64)EHoudiniParameterType::StringAssetRef },
		{ "EHoudiniParameterType::Toggle", (int64)EHoudiniParameterType::Toggle },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniParameterType",
	"EHoudiniParameterType",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterType()
{
	if (!Z_Registration_Info_UEnum_EHoudiniParameterType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniParameterType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniParameterType.InnerSingleton;
}
// End Enum EHoudiniParameterType

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniParameterType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniParameterType_StaticEnum, TEXT("EHoudiniParameterType"), &Z_Registration_Info_UEnum_EHoudiniParameterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1473607439U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniParameterType_h_2943412022(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniParameterType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniParameterType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
