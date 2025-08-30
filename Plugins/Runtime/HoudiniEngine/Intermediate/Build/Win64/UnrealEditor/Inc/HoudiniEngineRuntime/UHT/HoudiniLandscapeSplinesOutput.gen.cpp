// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniLandscapeSplinesOutput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniLandscapeSplinesOutput() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniLandscapeSplinesOutput();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscape_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeProxy_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeSplineActor_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplineControlPoint_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplinesComponent_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplineSegment_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UHoudiniLandscapeSplinesOutput
void UHoudiniLandscapeSplinesOutput::StaticRegisterNativesUHoudiniLandscapeSplinesOutput()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniLandscapeSplinesOutput);
UClass* Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_NoRegister()
{
	return UHoudiniLandscapeSplinesOutput::StaticClass();
}
struct Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HoudiniLandscapeSplinesOutput.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HoudiniLandscapeSplinesOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Landscape_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniLandscapeSplinesOutput" },
		{ "ModuleRelativePath", "Public/HoudiniLandscapeSplinesOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeProxy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniLandscapeSplinesOutput" },
		{ "ModuleRelativePath", "Public/HoudiniLandscapeSplinesOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeSplineActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniLandscapeSplinesOutput" },
		{ "ModuleRelativePath", "Public/HoudiniLandscapeSplinesOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeSplinesComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniLandscapeSplinesOutput" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniLandscapeSplinesOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerOutputs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniLandscapeSplinesOutput" },
		{ "ModuleRelativePath", "Public/HoudiniLandscapeSplinesOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Segments_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniLandscapeSplinesOutput" },
		{ "ModuleRelativePath", "Public/HoudiniLandscapeSplinesOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlPoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniLandscapeSplinesOutput" },
		{ "ModuleRelativePath", "Public/HoudiniLandscapeSplinesOutput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Landscape;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LandscapeProxy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LandscapeSplineActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LandscapeSplinesComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LayerOutputs_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LayerOutputs_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_LayerOutputs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Segments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Segments;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ControlPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniLandscapeSplinesOutput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_Landscape = { "Landscape", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniLandscapeSplinesOutput, Landscape), Z_Construct_UClass_ALandscape_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Landscape_MetaData), NewProp_Landscape_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_LandscapeProxy = { "LandscapeProxy", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniLandscapeSplinesOutput, LandscapeProxy), Z_Construct_UClass_ALandscapeProxy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeProxy_MetaData), NewProp_LandscapeProxy_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_LandscapeSplineActor = { "LandscapeSplineActor", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniLandscapeSplinesOutput, LandscapeSplineActor), Z_Construct_UClass_ALandscapeSplineActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeSplineActor_MetaData), NewProp_LandscapeSplineActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_LandscapeSplinesComponent = { "LandscapeSplinesComponent", nullptr, (EPropertyFlags)0x004200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniLandscapeSplinesOutput, LandscapeSplinesComponent), Z_Construct_UClass_ULandscapeSplinesComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeSplinesComponent_MetaData), NewProp_LandscapeSplinesComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_LayerOutputs_ValueProp = { "LayerOutputs", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_LayerOutputs_Key_KeyProp = { "LayerOutputs_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_LayerOutputs = { "LayerOutputs", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniLandscapeSplinesOutput, LayerOutputs), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerOutputs_MetaData), NewProp_LayerOutputs_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_Segments_Inner = { "Segments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULandscapeSplineSegment_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_Segments = { "Segments", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniLandscapeSplinesOutput, Segments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Segments_MetaData), NewProp_Segments_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_ControlPoints_Inner = { "ControlPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULandscapeSplineControlPoint_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_ControlPoints = { "ControlPoints", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniLandscapeSplinesOutput, ControlPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlPoints_MetaData), NewProp_ControlPoints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_Landscape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_LandscapeProxy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_LandscapeSplineActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_LandscapeSplinesComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_LayerOutputs_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_LayerOutputs_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_LayerOutputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_Segments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_Segments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_ControlPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_ControlPoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::ClassParams = {
	&UHoudiniLandscapeSplinesOutput::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniLandscapeSplinesOutput()
{
	if (!Z_Registration_Info_UClass_UHoudiniLandscapeSplinesOutput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniLandscapeSplinesOutput.OuterSingleton, Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniLandscapeSplinesOutput.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniLandscapeSplinesOutput>()
{
	return UHoudiniLandscapeSplinesOutput::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniLandscapeSplinesOutput);
UHoudiniLandscapeSplinesOutput::~UHoudiniLandscapeSplinesOutput() {}
// End Class UHoudiniLandscapeSplinesOutput

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniLandscapeSplinesOutput_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniLandscapeSplinesOutput, UHoudiniLandscapeSplinesOutput::StaticClass, TEXT("UHoudiniLandscapeSplinesOutput"), &Z_Registration_Info_UClass_UHoudiniLandscapeSplinesOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniLandscapeSplinesOutput), 4071566668U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniLandscapeSplinesOutput_h_788998438(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniLandscapeSplinesOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniLandscapeSplinesOutput_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
