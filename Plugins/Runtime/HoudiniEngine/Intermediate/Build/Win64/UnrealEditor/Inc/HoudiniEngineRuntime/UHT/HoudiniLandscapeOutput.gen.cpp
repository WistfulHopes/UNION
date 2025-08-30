// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniLandscapeOutput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniLandscapeOutput() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniLandscapeOutput();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniLandscapeOutput_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscape_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UHoudiniLandscapeOutput
void UHoudiniLandscapeOutput::StaticRegisterNativesUHoudiniLandscapeOutput()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniLandscapeOutput);
UClass* Z_Construct_UClass_UHoudiniLandscapeOutput_NoRegister()
{
	return UHoudiniLandscapeOutput::StaticClass();
}
struct Z_Construct_UClass_UHoudiniLandscapeOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HoudiniLandscapeOutput.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HoudiniLandscapeOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Landscape_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniLandscapeOutput" },
		{ "ModuleRelativePath", "Public/HoudiniLandscapeOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakedName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniLandscapeOutput" },
		{ "ModuleRelativePath", "Public/HoudiniLandscapeOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Layers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniLandscapeOutput" },
		{ "ModuleRelativePath", "Public/HoudiniLandscapeOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniLandscapeOutput" },
		{ "ModuleRelativePath", "Public/HoudiniLandscapeOutput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Landscape;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BakedName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Layers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Layers;
	static void NewProp_bCreated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniLandscapeOutput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::NewProp_Landscape = { "Landscape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniLandscapeOutput, Landscape), Z_Construct_UClass_ALandscape_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Landscape_MetaData), NewProp_Landscape_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::NewProp_BakedName = { "BakedName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniLandscapeOutput, BakedName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakedName_MetaData), NewProp_BakedName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::NewProp_Layers_Inner = { "Layers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::NewProp_Layers = { "Layers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniLandscapeOutput, Layers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Layers_MetaData), NewProp_Layers_MetaData) };
void Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::NewProp_bCreated_SetBit(void* Obj)
{
	((UHoudiniLandscapeOutput*)Obj)->bCreated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::NewProp_bCreated = { "bCreated", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniLandscapeOutput), &Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::NewProp_bCreated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreated_MetaData), NewProp_bCreated_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::NewProp_Landscape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::NewProp_BakedName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::NewProp_Layers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::NewProp_Layers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::NewProp_bCreated,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::ClassParams = {
	&UHoudiniLandscapeOutput::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniLandscapeOutput()
{
	if (!Z_Registration_Info_UClass_UHoudiniLandscapeOutput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniLandscapeOutput.OuterSingleton, Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniLandscapeOutput.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniLandscapeOutput>()
{
	return UHoudiniLandscapeOutput::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniLandscapeOutput);
UHoudiniLandscapeOutput::~UHoudiniLandscapeOutput() {}
// End Class UHoudiniLandscapeOutput

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniLandscapeOutput_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniLandscapeOutput, UHoudiniLandscapeOutput::StaticClass, TEXT("UHoudiniLandscapeOutput"), &Z_Registration_Info_UClass_UHoudiniLandscapeOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniLandscapeOutput), 1499828208U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniLandscapeOutput_h_1060470545(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniLandscapeOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniLandscapeOutput_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
