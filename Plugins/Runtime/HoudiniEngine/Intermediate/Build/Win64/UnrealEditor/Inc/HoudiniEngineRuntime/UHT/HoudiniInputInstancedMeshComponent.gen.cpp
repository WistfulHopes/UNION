// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniInputInstancedMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniInputInstancedMeshComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputInstancedMeshComponent();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputMeshComponent();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UHoudiniInputInstancedMeshComponent
void UHoudiniInputInstancedMeshComponent::StaticRegisterNativesUHoudiniInputInstancedMeshComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniInputInstancedMeshComponent);
UClass* Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_NoRegister()
{
	return UHoudiniInputInstancedMeshComponent::StaticClass();
}
struct Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HoudiniInputInstancedMeshComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HoudiniInputInstancedMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceTransforms_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputInstancedMeshComponent" },
		{ "ModuleRelativePath", "Public/HoudiniInputInstancedMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceTransforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InstanceTransforms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputInstancedMeshComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::NewProp_InstanceTransforms_Inner = { "InstanceTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::NewProp_InstanceTransforms = { "InstanceTransforms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputInstancedMeshComponent, InstanceTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceTransforms_MetaData), NewProp_InstanceTransforms_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::NewProp_InstanceTransforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::NewProp_InstanceTransforms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniInputMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::ClassParams = {
	&UHoudiniInputInstancedMeshComponent::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniInputInstancedMeshComponent()
{
	if (!Z_Registration_Info_UClass_UHoudiniInputInstancedMeshComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInputInstancedMeshComponent.OuterSingleton, Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniInputInstancedMeshComponent.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputInstancedMeshComponent>()
{
	return UHoudiniInputInstancedMeshComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputInstancedMeshComponent);
UHoudiniInputInstancedMeshComponent::~UHoudiniInputInstancedMeshComponent() {}
// End Class UHoudiniInputInstancedMeshComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputInstancedMeshComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniInputInstancedMeshComponent, UHoudiniInputInstancedMeshComponent::StaticClass, TEXT("UHoudiniInputInstancedMeshComponent"), &Z_Registration_Info_UClass_UHoudiniInputInstancedMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInputInstancedMeshComponent), 3169173145U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputInstancedMeshComponent_h_3521206462(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputInstancedMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputInstancedMeshComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
