// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniInputHoudiniAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniInputHoudiniAsset() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputHoudiniAsset();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputHoudiniAsset_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputObject();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UHoudiniInputHoudiniAsset
void UHoudiniInputHoudiniAsset::StaticRegisterNativesUHoudiniInputHoudiniAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniInputHoudiniAsset);
UClass* Z_Construct_UClass_UHoudiniInputHoudiniAsset_NoRegister()
{
	return UHoudiniInputHoudiniAsset::StaticClass();
}
struct Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HoudiniInputHoudiniAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HoudiniInputHoudiniAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetOutputIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputHoudiniAsset" },
		{ "ModuleRelativePath", "Public/HoudiniInputHoudiniAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputHoudiniAsset" },
		{ "ModuleRelativePath", "Public/HoudiniInputHoudiniAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AssetOutputIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AssetId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputHoudiniAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::NewProp_AssetOutputIndex = { "AssetOutputIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputHoudiniAsset, AssetOutputIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetOutputIndex_MetaData), NewProp_AssetOutputIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::NewProp_AssetId = { "AssetId", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputHoudiniAsset, AssetId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetId_MetaData), NewProp_AssetId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::NewProp_AssetOutputIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::NewProp_AssetId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniInputObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::ClassParams = {
	&UHoudiniInputHoudiniAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniInputHoudiniAsset()
{
	if (!Z_Registration_Info_UClass_UHoudiniInputHoudiniAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInputHoudiniAsset.OuterSingleton, Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniInputHoudiniAsset.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputHoudiniAsset>()
{
	return UHoudiniInputHoudiniAsset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputHoudiniAsset);
UHoudiniInputHoudiniAsset::~UHoudiniInputHoudiniAsset() {}
// End Class UHoudiniInputHoudiniAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputHoudiniAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniInputHoudiniAsset, UHoudiniInputHoudiniAsset::StaticClass, TEXT("UHoudiniInputHoudiniAsset"), &Z_Registration_Info_UClass_UHoudiniInputHoudiniAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInputHoudiniAsset), 1320715025U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputHoudiniAsset_h_491948002(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputHoudiniAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputHoudiniAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
