// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniInputBlueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniInputBlueprint() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputBlueprint();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputBlueprint_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputObject();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputSceneComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UHoudiniInputBlueprint
void UHoudiniInputBlueprint::StaticRegisterNativesUHoudiniInputBlueprint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniInputBlueprint);
UClass* Z_Construct_UClass_UHoudiniInputBlueprint_NoRegister()
{
	return UHoudiniInputBlueprint::StaticClass();
}
struct Z_Construct_UClass_UHoudiniInputBlueprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HoudiniInputBlueprint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HoudiniInputBlueprint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BPComponents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputBlueprint" },
		{ "ModuleRelativePath", "Public/HoudiniInputBlueprint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BPSceneComponents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputBlueprint" },
		{ "ModuleRelativePath", "Public/HoudiniInputBlueprint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastUpdateNumComponentsAdded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputBlueprint" },
		{ "ModuleRelativePath", "Public/HoudiniInputBlueprint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastUpdateNumComponentsRemoved_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputBlueprint" },
		{ "ModuleRelativePath", "Public/HoudiniInputBlueprint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BPComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BPComponents;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BPSceneComponents_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_BPSceneComponents;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LastUpdateNumComponentsAdded;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LastUpdateNumComponentsRemoved;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputBlueprint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_BPComponents_Inner = { "BPComponents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniInputSceneComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_BPComponents = { "BPComponents", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputBlueprint, BPComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BPComponents_MetaData), NewProp_BPComponents_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_BPSceneComponents_ElementProp = { "BPSceneComponents", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_BPSceneComponents = { "BPSceneComponents", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputBlueprint, BPSceneComponents), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BPSceneComponents_MetaData), NewProp_BPSceneComponents_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_LastUpdateNumComponentsAdded = { "LastUpdateNumComponentsAdded", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputBlueprint, LastUpdateNumComponentsAdded), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastUpdateNumComponentsAdded_MetaData), NewProp_LastUpdateNumComponentsAdded_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_LastUpdateNumComponentsRemoved = { "LastUpdateNumComponentsRemoved", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputBlueprint, LastUpdateNumComponentsRemoved), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastUpdateNumComponentsRemoved_MetaData), NewProp_LastUpdateNumComponentsRemoved_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInputBlueprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_BPComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_BPComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_BPSceneComponents_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_BPSceneComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_LastUpdateNumComponentsAdded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_LastUpdateNumComponentsRemoved,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputBlueprint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniInputBlueprint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniInputObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputBlueprint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputBlueprint_Statics::ClassParams = {
	&UHoudiniInputBlueprint::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniInputBlueprint_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputBlueprint_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputBlueprint_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniInputBlueprint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniInputBlueprint()
{
	if (!Z_Registration_Info_UClass_UHoudiniInputBlueprint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInputBlueprint.OuterSingleton, Z_Construct_UClass_UHoudiniInputBlueprint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniInputBlueprint.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputBlueprint>()
{
	return UHoudiniInputBlueprint::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputBlueprint);
UHoudiniInputBlueprint::~UHoudiniInputBlueprint() {}
// End Class UHoudiniInputBlueprint

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputBlueprint_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniInputBlueprint, UHoudiniInputBlueprint::StaticClass, TEXT("UHoudiniInputBlueprint"), &Z_Registration_Info_UClass_UHoudiniInputBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInputBlueprint), 1207247918U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputBlueprint_h_3987088529(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputBlueprint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
