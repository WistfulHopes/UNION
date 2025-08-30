// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniLandscapeSplineTargetLayerOutput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniLandscapeSplineTargetLayerOutput() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplineSegment_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UHoudiniLandscapeSplineTargetLayerOutput
void UHoudiniLandscapeSplineTargetLayerOutput::StaticRegisterNativesUHoudiniLandscapeSplineTargetLayerOutput()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniLandscapeSplineTargetLayerOutput);
UClass* Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_NoRegister()
{
	return UHoudiniLandscapeSplineTargetLayerOutput::StaticClass();
}
struct Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HoudiniLandscapeSplineTargetLayerOutput.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HoudiniLandscapeSplineTargetLayerOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AfterEditLayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniLandscapeSplineTargetLayerOutput" },
		{ "ModuleRelativePath", "Public/HoudiniLandscapeSplineTargetLayerOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Segments_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniLandscapeSplineTargetLayerOutput" },
		{ "ModuleRelativePath", "Public/HoudiniLandscapeSplineTargetLayerOutput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AfterEditLayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Segments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Segments;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniLandscapeSplineTargetLayerOutput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::NewProp_AfterEditLayer = { "AfterEditLayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniLandscapeSplineTargetLayerOutput, AfterEditLayer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AfterEditLayer_MetaData), NewProp_AfterEditLayer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::NewProp_Segments_Inner = { "Segments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULandscapeSplineSegment_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::NewProp_Segments = { "Segments", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniLandscapeSplineTargetLayerOutput, Segments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Segments_MetaData), NewProp_Segments_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::NewProp_AfterEditLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::NewProp_Segments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::NewProp_Segments,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::ClassParams = {
	&UHoudiniLandscapeSplineTargetLayerOutput::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput()
{
	if (!Z_Registration_Info_UClass_UHoudiniLandscapeSplineTargetLayerOutput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniLandscapeSplineTargetLayerOutput.OuterSingleton, Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniLandscapeSplineTargetLayerOutput.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniLandscapeSplineTargetLayerOutput>()
{
	return UHoudiniLandscapeSplineTargetLayerOutput::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniLandscapeSplineTargetLayerOutput);
UHoudiniLandscapeSplineTargetLayerOutput::~UHoudiniLandscapeSplineTargetLayerOutput() {}
// End Class UHoudiniLandscapeSplineTargetLayerOutput

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniLandscapeSplineTargetLayerOutput_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput, UHoudiniLandscapeSplineTargetLayerOutput::StaticClass, TEXT("UHoudiniLandscapeSplineTargetLayerOutput"), &Z_Registration_Info_UClass_UHoudiniLandscapeSplineTargetLayerOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniLandscapeSplineTargetLayerOutput), 2131734095U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniLandscapeSplineTargetLayerOutput_h_3313449666(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniLandscapeSplineTargetLayerOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniLandscapeSplineTargetLayerOutput_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
