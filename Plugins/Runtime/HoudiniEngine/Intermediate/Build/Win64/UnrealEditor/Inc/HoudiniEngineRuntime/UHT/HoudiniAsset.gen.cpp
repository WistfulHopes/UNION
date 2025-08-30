// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniAsset() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAsset();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UHoudiniAsset
void UHoudiniAsset::StaticRegisterNativesUHoudiniAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniAsset);
UClass* Z_Construct_UClass_UHoudiniAsset_NoRegister()
{
	return UHoudiniAsset::StaticClass();
}
struct Z_Construct_UClass_UHoudiniAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HoudiniAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HoudiniAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetFileName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAsset" },
		{ "ModuleRelativePath", "Public/HoudiniAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetBytes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAsset" },
		{ "ModuleRelativePath", "Public/HoudiniAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetBytesCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAsset" },
		{ "ModuleRelativePath", "Public/HoudiniAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAssetLimitedCommercial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAsset" },
		{ "ModuleRelativePath", "Public/HoudiniAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAssetNonCommercial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAsset" },
		{ "ModuleRelativePath", "Public/HoudiniAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAssetExpanded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAsset" },
		{ "ModuleRelativePath", "Public/HoudiniAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetFileName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AssetBytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetBytes;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_AssetBytesCount;
	static void NewProp_bAssetLimitedCommercial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAssetLimitedCommercial;
	static void NewProp_bAssetNonCommercial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAssetNonCommercial;
	static void NewProp_bAssetExpanded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAssetExpanded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_AssetFileName = { "AssetFileName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAsset, AssetFileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetFileName_MetaData), NewProp_AssetFileName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_AssetBytes_Inner = { "AssetBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_AssetBytes = { "AssetBytes", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAsset, AssetBytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetBytes_MetaData), NewProp_AssetBytes_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_AssetBytesCount = { "AssetBytesCount", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAsset, AssetBytesCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetBytesCount_MetaData), NewProp_AssetBytesCount_MetaData) };
void Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_bAssetLimitedCommercial_SetBit(void* Obj)
{
	((UHoudiniAsset*)Obj)->bAssetLimitedCommercial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_bAssetLimitedCommercial = { "bAssetLimitedCommercial", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAsset), &Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_bAssetLimitedCommercial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAssetLimitedCommercial_MetaData), NewProp_bAssetLimitedCommercial_MetaData) };
void Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_bAssetNonCommercial_SetBit(void* Obj)
{
	((UHoudiniAsset*)Obj)->bAssetNonCommercial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_bAssetNonCommercial = { "bAssetNonCommercial", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAsset), &Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_bAssetNonCommercial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAssetNonCommercial_MetaData), NewProp_bAssetNonCommercial_MetaData) };
void Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_bAssetExpanded_SetBit(void* Obj)
{
	((UHoudiniAsset*)Obj)->bAssetExpanded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_bAssetExpanded = { "bAssetExpanded", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAsset), &Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_bAssetExpanded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAssetExpanded_MetaData), NewProp_bAssetExpanded_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_AssetFileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_AssetBytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_AssetBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_AssetBytesCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_bAssetLimitedCommercial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_bAssetNonCommercial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_bAssetExpanded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniAsset_Statics::ClassParams = {
	&UHoudiniAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAsset_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniAsset()
{
	if (!Z_Registration_Info_UClass_UHoudiniAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniAsset.OuterSingleton, Z_Construct_UClass_UHoudiniAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniAsset.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniAsset>()
{
	return UHoudiniAsset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniAsset);
UHoudiniAsset::~UHoudiniAsset() {}
// End Class UHoudiniAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniAsset, UHoudiniAsset::StaticClass, TEXT("UHoudiniAsset"), &Z_Registration_Info_UClass_UHoudiniAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniAsset), 485739095U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAsset_h_1452446855(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
