// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniInputLandscapeSplinesComponent.h"
#include "HoudiniEngineRuntime/Public/HoudiniLandscapeSplineControlPointData.h"
#include "HoudiniEngineRuntime/Public/HoudiniLandscapeSplineSegmentData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniInputLandscapeSplinesComponent() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputSceneComponent();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplineControlPoint_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UHoudiniInputLandscapeSplinesComponent
void UHoudiniInputLandscapeSplinesComponent::StaticRegisterNativesUHoudiniInputLandscapeSplinesComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniInputLandscapeSplinesComponent);
UClass* Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_NoRegister()
{
	return UHoudiniInputLandscapeSplinesComponent::StaticClass();
}
struct Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HoudiniInputLandscapeSplinesComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HoudiniInputLandscapeSplinesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedControlPoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputLandscapeSplinesComponent" },
		{ "ModuleRelativePath", "Public/HoudiniInputLandscapeSplinesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedSegments_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputLandscapeSplinesComponent" },
		{ "ModuleRelativePath", "Public/HoudiniInputLandscapeSplinesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlPointIdMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputLandscapeSplinesComponent" },
		{ "ModuleRelativePath", "Public/HoudiniInputLandscapeSplinesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextControlPointId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputLandscapeSplinesComponent" },
		{ "ModuleRelativePath", "Public/HoudiniInputLandscapeSplinesComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedControlPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedControlPoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedSegments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedSegments;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControlPointIdMap_ValueProp;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ControlPointIdMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ControlPointIdMap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NextControlPointId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputLandscapeSplinesComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::NewProp_CachedControlPoints_Inner = { "CachedControlPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData, METADATA_PARAMS(0, nullptr) }; // 2706449027
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::NewProp_CachedControlPoints = { "CachedControlPoints", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputLandscapeSplinesComponent, CachedControlPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedControlPoints_MetaData), NewProp_CachedControlPoints_MetaData) }; // 2706449027
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::NewProp_CachedSegments_Inner = { "CachedSegments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData, METADATA_PARAMS(0, nullptr) }; // 3370130784
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::NewProp_CachedSegments = { "CachedSegments", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputLandscapeSplinesComponent, CachedSegments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedSegments_MetaData), NewProp_CachedSegments_MetaData) }; // 3370130784
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::NewProp_ControlPointIdMap_ValueProp = { "ControlPointIdMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::NewProp_ControlPointIdMap_Key_KeyProp = { "ControlPointIdMap_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULandscapeSplineControlPoint_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::NewProp_ControlPointIdMap = { "ControlPointIdMap", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputLandscapeSplinesComponent, ControlPointIdMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlPointIdMap_MetaData), NewProp_ControlPointIdMap_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::NewProp_NextControlPointId = { "NextControlPointId", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputLandscapeSplinesComponent, NextControlPointId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextControlPointId_MetaData), NewProp_NextControlPointId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::NewProp_CachedControlPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::NewProp_CachedControlPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::NewProp_CachedSegments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::NewProp_CachedSegments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::NewProp_ControlPointIdMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::NewProp_ControlPointIdMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::NewProp_ControlPointIdMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::NewProp_NextControlPointId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniInputSceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::ClassParams = {
	&UHoudiniInputLandscapeSplinesComponent::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent()
{
	if (!Z_Registration_Info_UClass_UHoudiniInputLandscapeSplinesComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInputLandscapeSplinesComponent.OuterSingleton, Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniInputLandscapeSplinesComponent.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputLandscapeSplinesComponent>()
{
	return UHoudiniInputLandscapeSplinesComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputLandscapeSplinesComponent);
UHoudiniInputLandscapeSplinesComponent::~UHoudiniInputLandscapeSplinesComponent() {}
// End Class UHoudiniInputLandscapeSplinesComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputLandscapeSplinesComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent, UHoudiniInputLandscapeSplinesComponent::StaticClass, TEXT("UHoudiniInputLandscapeSplinesComponent"), &Z_Registration_Info_UClass_UHoudiniInputLandscapeSplinesComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInputLandscapeSplinesComponent), 3602711998U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputLandscapeSplinesComponent_h_4042026368(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputLandscapeSplinesComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputLandscapeSplinesComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
