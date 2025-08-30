// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomAudioVolumeSettings.h"
#include "CriWareRuntime/Public/AtomAudioVolumeParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomAudioVolumeSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomAudioVolumeSettings();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomAudioVolumeSettings_NoRegister();
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAudioVolumeParameters();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Class UAtomAudioVolumeSettings
void UAtomAudioVolumeSettings::StaticRegisterNativesUAtomAudioVolumeSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomAudioVolumeSettings);
UClass* Z_Construct_UClass_UAtomAudioVolumeSettings_NoRegister()
{
	return UAtomAudioVolumeSettings::StaticClass();
}
struct Z_Construct_UClass_UAtomAudioVolumeSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AtomAudioVolumeSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AtomAudioVolumeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AtomAudioVolumeParameters_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAudioVolumeSettings" },
		{ "ModuleRelativePath", "Public/AtomAudioVolumeSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AtomAudioVolumeParameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomAudioVolumeSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomAudioVolumeSettings_Statics::NewProp_AtomAudioVolumeParameters = { "AtomAudioVolumeParameters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAtomAudioVolumeSettings, AtomAudioVolumeParameters), Z_Construct_UScriptStruct_FAtomAudioVolumeParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AtomAudioVolumeParameters_MetaData), NewProp_AtomAudioVolumeParameters_MetaData) }; // 3801256293
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomAudioVolumeSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomAudioVolumeSettings_Statics::NewProp_AtomAudioVolumeParameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAudioVolumeSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAtomAudioVolumeSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAudioVolumeSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomAudioVolumeSettings_Statics::ClassParams = {
	&UAtomAudioVolumeSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAtomAudioVolumeSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAudioVolumeSettings_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAudioVolumeSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAtomAudioVolumeSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAtomAudioVolumeSettings()
{
	if (!Z_Registration_Info_UClass_UAtomAudioVolumeSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomAudioVolumeSettings.OuterSingleton, Z_Construct_UClass_UAtomAudioVolumeSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAtomAudioVolumeSettings.OuterSingleton;
}
template<> CRIWARERUNTIME_API UClass* StaticClass<UAtomAudioVolumeSettings>()
{
	return UAtomAudioVolumeSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomAudioVolumeSettings);
UAtomAudioVolumeSettings::~UAtomAudioVolumeSettings() {}
// End Class UAtomAudioVolumeSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAudioVolumeSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAtomAudioVolumeSettings, UAtomAudioVolumeSettings::StaticClass, TEXT("UAtomAudioVolumeSettings"), &Z_Registration_Info_UClass_UAtomAudioVolumeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomAudioVolumeSettings), 2704640868U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAudioVolumeSettings_h_3283807622(TEXT("/Script/CriWareRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAudioVolumeSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAudioVolumeSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
