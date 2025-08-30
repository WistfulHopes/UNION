// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniInputHoudiniSplineComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniInputHoudiniSplineComponent() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputObject();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniSplineComponent_NoRegister();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UHoudiniInputHoudiniSplineComponent
void UHoudiniInputHoudiniSplineComponent::StaticRegisterNativesUHoudiniInputHoudiniSplineComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniInputHoudiniSplineComponent);
UClass* Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_NoRegister()
{
	return UHoudiniInputHoudiniSplineComponent::StaticClass();
}
struct Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HoudiniInputHoudiniSplineComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HoudiniInputHoudiniSplineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputHoudiniSplineComponent" },
		{ "ModuleRelativePath", "Public/HoudiniInputHoudiniSplineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveMethod_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputHoudiniSplineComponent" },
		{ "ModuleRelativePath", "Public/HoudiniInputHoudiniSplineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reversed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputHoudiniSplineComponent" },
		{ "ModuleRelativePath", "Public/HoudiniInputHoudiniSplineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputHoudiniSplineComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniInputHoudiniSplineComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt8PropertyParams NewProp_CurveType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveType;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_CurveMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveMethod;
	static void NewProp_Reversed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Reversed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputHoudiniSplineComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_CurveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_CurveType = { "CurveType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputHoudiniSplineComponent, CurveType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveType_MetaData), NewProp_CurveType_MetaData) }; // 3851994378
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_CurveMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_CurveMethod = { "CurveMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputHoudiniSplineComponent, CurveMethod), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveMethod_MetaData), NewProp_CurveMethod_MetaData) }; // 2966559592
void Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_Reversed_SetBit(void* Obj)
{
	((UHoudiniInputHoudiniSplineComponent*)Obj)->Reversed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_Reversed = { "Reversed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInputHoudiniSplineComponent), &Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_Reversed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reversed_MetaData), NewProp_Reversed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_CachedComponent = { "CachedComponent", nullptr, (EPropertyFlags)0x002208000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputHoudiniSplineComponent, CachedComponent), Z_Construct_UClass_UHoudiniSplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedComponent_MetaData), NewProp_CachedComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_CurveType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_CurveType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_CurveMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_CurveMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_Reversed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_CachedComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniInputObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::ClassParams = {
	&UHoudiniInputHoudiniSplineComponent::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent()
{
	if (!Z_Registration_Info_UClass_UHoudiniInputHoudiniSplineComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInputHoudiniSplineComponent.OuterSingleton, Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniInputHoudiniSplineComponent.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputHoudiniSplineComponent>()
{
	return UHoudiniInputHoudiniSplineComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputHoudiniSplineComponent);
UHoudiniInputHoudiniSplineComponent::~UHoudiniInputHoudiniSplineComponent() {}
// End Class UHoudiniInputHoudiniSplineComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputHoudiniSplineComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent, UHoudiniInputHoudiniSplineComponent::StaticClass, TEXT("UHoudiniInputHoudiniSplineComponent"), &Z_Registration_Info_UClass_UHoudiniInputHoudiniSplineComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInputHoudiniSplineComponent), 1309135148U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputHoudiniSplineComponent_h_3956174036(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputHoudiniSplineComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputHoudiniSplineComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
