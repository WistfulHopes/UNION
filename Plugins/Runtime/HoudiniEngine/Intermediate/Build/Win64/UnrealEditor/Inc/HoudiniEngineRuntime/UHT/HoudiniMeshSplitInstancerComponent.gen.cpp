// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniMeshSplitInstancerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniMeshSplitInstancerComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UHoudiniMeshSplitInstancerComponent
void UHoudiniMeshSplitInstancerComponent::StaticRegisterNativesUHoudiniMeshSplitInstancerComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniMeshSplitInstancerComponent);
UClass* Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_NoRegister()
{
	return UHoudiniMeshSplitInstancerComponent::StaticClass();
}
struct Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "HoudiniMeshSplitInstancerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HoudiniMeshSplitInstancerComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instances_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniMeshSplitInstancerComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniMeshSplitInstancerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instances_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniMeshSplitInstancerComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniMeshSplitInstancerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterials_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniMeshSplitInstancerComponent" },
		{ "ModuleRelativePath", "Public/HoudiniMeshSplitInstancerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstancedMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniMeshSplitInstancerComponent" },
		{ "ModuleRelativePath", "Public/HoudiniMeshSplitInstancerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Instances;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverrideMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OverrideMaterials;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstancedMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniMeshSplitInstancerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::NewProp_Instances_Inner = { "Instances", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instances_Inner_MetaData), NewProp_Instances_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::NewProp_Instances = { "Instances", nullptr, (EPropertyFlags)0x004000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniMeshSplitInstancerComponent, Instances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instances_MetaData), NewProp_Instances_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::NewProp_OverrideMaterials_Inner = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::NewProp_OverrideMaterials = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniMeshSplitInstancerComponent, OverrideMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideMaterials_MetaData), NewProp_OverrideMaterials_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::NewProp_InstancedMesh = { "InstancedMesh", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniMeshSplitInstancerComponent, InstancedMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstancedMesh_MetaData), NewProp_InstancedMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::NewProp_Instances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::NewProp_Instances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::NewProp_OverrideMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::NewProp_OverrideMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::NewProp_InstancedMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::ClassParams = {
	&UHoudiniMeshSplitInstancerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent()
{
	if (!Z_Registration_Info_UClass_UHoudiniMeshSplitInstancerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniMeshSplitInstancerComponent.OuterSingleton, Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniMeshSplitInstancerComponent.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniMeshSplitInstancerComponent>()
{
	return UHoudiniMeshSplitInstancerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniMeshSplitInstancerComponent);
UHoudiniMeshSplitInstancerComponent::~UHoudiniMeshSplitInstancerComponent() {}
// End Class UHoudiniMeshSplitInstancerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniMeshSplitInstancerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent, UHoudiniMeshSplitInstancerComponent::StaticClass, TEXT("UHoudiniMeshSplitInstancerComponent"), &Z_Registration_Info_UClass_UHoudiniMeshSplitInstancerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniMeshSplitInstancerComponent), 4161756432U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniMeshSplitInstancerComponent_h_3878146721(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniMeshSplitInstancerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniMeshSplitInstancerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
