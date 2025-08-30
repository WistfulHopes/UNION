// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniInputSplineComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniInputSplineComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputSceneComponent();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputSplineComponent();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputSplineComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UHoudiniInputSplineComponent
void UHoudiniInputSplineComponent::StaticRegisterNativesUHoudiniInputSplineComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniInputSplineComponent);
UClass* Z_Construct_UClass_UHoudiniInputSplineComponent_NoRegister()
{
	return UHoudiniInputSplineComponent::StaticClass();
}
struct Z_Construct_UClass_UHoudiniInputSplineComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HoudiniInputSplineComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HoudiniInputSplineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfSplineControlPoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputSplineComponent" },
		{ "ModuleRelativePath", "Public/HoudiniInputSplineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputSplineComponent" },
		{ "ModuleRelativePath", "Public/HoudiniInputSplineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineResolution_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputSplineComponent" },
		{ "ModuleRelativePath", "Public/HoudiniInputSplineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineClosed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputSplineComponent" },
		{ "ModuleRelativePath", "Public/HoudiniInputSplineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineControlPoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputSplineComponent" },
		{ "ModuleRelativePath", "Public/HoudiniInputSplineComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfSplineControlPoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SplineLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SplineResolution;
	static void NewProp_SplineClosed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SplineClosed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SplineControlPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SplineControlPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputSplineComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_NumberOfSplineControlPoints = { "NumberOfSplineControlPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputSplineComponent, NumberOfSplineControlPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfSplineControlPoints_MetaData), NewProp_NumberOfSplineControlPoints_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineLength = { "SplineLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputSplineComponent, SplineLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineLength_MetaData), NewProp_SplineLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineResolution = { "SplineResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputSplineComponent, SplineResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineResolution_MetaData), NewProp_SplineResolution_MetaData) };
void Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineClosed_SetBit(void* Obj)
{
	((UHoudiniInputSplineComponent*)Obj)->SplineClosed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineClosed = { "SplineClosed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInputSplineComponent), &Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineClosed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineClosed_MetaData), NewProp_SplineClosed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineControlPoints_Inner = { "SplineControlPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineControlPoints = { "SplineControlPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputSplineComponent, SplineControlPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineControlPoints_MetaData), NewProp_SplineControlPoints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_NumberOfSplineControlPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineClosed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineControlPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineControlPoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniInputSceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::ClassParams = {
	&UHoudiniInputSplineComponent::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniInputSplineComponent()
{
	if (!Z_Registration_Info_UClass_UHoudiniInputSplineComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInputSplineComponent.OuterSingleton, Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniInputSplineComponent.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputSplineComponent>()
{
	return UHoudiniInputSplineComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputSplineComponent);
UHoudiniInputSplineComponent::~UHoudiniInputSplineComponent() {}
// End Class UHoudiniInputSplineComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputSplineComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniInputSplineComponent, UHoudiniInputSplineComponent::StaticClass, TEXT("UHoudiniInputSplineComponent"), &Z_Registration_Info_UClass_UHoudiniInputSplineComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInputSplineComponent), 2426865075U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputSplineComponent_h_334332994(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputSplineComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputSplineComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
