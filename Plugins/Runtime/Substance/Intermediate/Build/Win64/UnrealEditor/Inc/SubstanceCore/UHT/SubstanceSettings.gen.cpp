// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubstanceCore/Public/SubstanceSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubstanceSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceSettings();
SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceSettings_NoRegister();
SUBSTANCECORE_API UEnum* Z_Construct_UEnum_SubstanceCore_EDefaultSubstanceTextureSize();
SUBSTANCECORE_API UEnum* Z_Construct_UEnum_SubstanceCore_ESubstanceEngineType();
UPackage* Z_Construct_UPackage__Script_SubstanceCore();
// End Cross Module References

// Begin Class USubstanceSettings
void USubstanceSettings::StaticRegisterNativesUSubstanceSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubstanceSettings);
UClass* Z_Construct_UClass_USubstanceSettings_NoRegister()
{
	return USubstanceSettings::StaticClass();
}
struct Z_Construct_UClass_USubstanceSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SubstanceSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SubstanceSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemoryBudgetMb_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceSettings" },
		{ "ModuleRelativePath", "Public/SubstanceSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CPUCores_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceSettings" },
		{ "ModuleRelativePath", "Public/SubstanceSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AsyncLoadMipClip_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceSettings" },
		{ "ModuleRelativePath", "Public/SubstanceSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAsyncSubstancesRenderedPerFrame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceSettings" },
		{ "ModuleRelativePath", "Public/SubstanceSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubstanceEngine_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceSettings" },
		{ "ModuleRelativePath", "Public/SubstanceSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSubstanceOutputSizeX_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceSettings" },
		{ "ModuleRelativePath", "Public/SubstanceSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSubstanceOutputSizeY_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceSettings" },
		{ "ModuleRelativePath", "Public/SubstanceSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTemplateMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceSettings" },
		{ "ModuleRelativePath", "Public/SubstanceSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MemoryBudgetMb;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CPUCores;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AsyncLoadMipClip;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAsyncSubstancesRenderedPerFrame;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SubstanceEngine;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultSubstanceOutputSizeX;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultSubstanceOutputSizeY;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultTemplateMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubstanceSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USubstanceSettings_Statics::NewProp_MemoryBudgetMb = { "MemoryBudgetMb", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubstanceSettings, MemoryBudgetMb), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemoryBudgetMb_MetaData), NewProp_MemoryBudgetMb_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USubstanceSettings_Statics::NewProp_CPUCores = { "CPUCores", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubstanceSettings, CPUCores), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CPUCores_MetaData), NewProp_CPUCores_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USubstanceSettings_Statics::NewProp_AsyncLoadMipClip = { "AsyncLoadMipClip", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubstanceSettings, AsyncLoadMipClip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AsyncLoadMipClip_MetaData), NewProp_AsyncLoadMipClip_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USubstanceSettings_Statics::NewProp_MaxAsyncSubstancesRenderedPerFrame = { "MaxAsyncSubstancesRenderedPerFrame", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubstanceSettings, MaxAsyncSubstancesRenderedPerFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAsyncSubstancesRenderedPerFrame_MetaData), NewProp_MaxAsyncSubstancesRenderedPerFrame_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USubstanceSettings_Statics::NewProp_SubstanceEngine = { "SubstanceEngine", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubstanceSettings, SubstanceEngine), Z_Construct_UEnum_SubstanceCore_ESubstanceEngineType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubstanceEngine_MetaData), NewProp_SubstanceEngine_MetaData) }; // 1059976167
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USubstanceSettings_Statics::NewProp_DefaultSubstanceOutputSizeX = { "DefaultSubstanceOutputSizeX", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubstanceSettings, DefaultSubstanceOutputSizeX), Z_Construct_UEnum_SubstanceCore_EDefaultSubstanceTextureSize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSubstanceOutputSizeX_MetaData), NewProp_DefaultSubstanceOutputSizeX_MetaData) }; // 3415714051
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USubstanceSettings_Statics::NewProp_DefaultSubstanceOutputSizeY = { "DefaultSubstanceOutputSizeY", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubstanceSettings, DefaultSubstanceOutputSizeY), Z_Construct_UEnum_SubstanceCore_EDefaultSubstanceTextureSize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSubstanceOutputSizeY_MetaData), NewProp_DefaultSubstanceOutputSizeY_MetaData) }; // 3415714051
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USubstanceSettings_Statics::NewProp_DefaultTemplateMaterial = { "DefaultTemplateMaterial", nullptr, (EPropertyFlags)0x0014000000004005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubstanceSettings, DefaultTemplateMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultTemplateMaterial_MetaData), NewProp_DefaultTemplateMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubstanceSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceSettings_Statics::NewProp_MemoryBudgetMb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceSettings_Statics::NewProp_CPUCores,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceSettings_Statics::NewProp_AsyncLoadMipClip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceSettings_Statics::NewProp_MaxAsyncSubstancesRenderedPerFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceSettings_Statics::NewProp_SubstanceEngine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceSettings_Statics::NewProp_DefaultSubstanceOutputSizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceSettings_Statics::NewProp_DefaultSubstanceOutputSizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceSettings_Statics::NewProp_DefaultTemplateMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USubstanceSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USubstanceSettings_Statics::ClassParams = {
	&USubstanceSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USubstanceSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_USubstanceSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USubstanceSettings()
{
	if (!Z_Registration_Info_UClass_USubstanceSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubstanceSettings.OuterSingleton, Z_Construct_UClass_USubstanceSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USubstanceSettings.OuterSingleton;
}
template<> SUBSTANCECORE_API UClass* StaticClass<USubstanceSettings>()
{
	return USubstanceSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USubstanceSettings);
USubstanceSettings::~USubstanceSettings() {}
// End Class USubstanceSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USubstanceSettings, USubstanceSettings::StaticClass, TEXT("USubstanceSettings"), &Z_Registration_Info_UClass_USubstanceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubstanceSettings), 2440311465U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceSettings_h_3774276617(TEXT("/Script/SubstanceCore"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
