// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniInputSceneComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniInputSceneComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputActor_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputObject();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputSceneComponent();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputSceneComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UHoudiniInputSceneComponent
void UHoudiniInputSceneComponent::StaticRegisterNativesUHoudiniInputSceneComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniInputSceneComponent);
UClass* Z_Construct_UClass_UHoudiniInputSceneComponent_NoRegister()
{
	return UHoudiniInputSceneComponent::StaticClass();
}
struct Z_Construct_UClass_UHoudiniInputSceneComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HoudiniInputSceneComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HoudiniInputSceneComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorTransform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputSceneComponent" },
		{ "ModuleRelativePath", "Public/HoudiniInputSceneComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentInputActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputSceneComponent" },
		{ "ModuleRelativePath", "Public/HoudiniInputSceneComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorTransform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentInputActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputSceneComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::NewProp_ActorTransform = { "ActorTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputSceneComponent, ActorTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorTransform_MetaData), NewProp_ActorTransform_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::NewProp_ParentInputActor = { "ParentInputActor", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputSceneComponent, ParentInputActor), Z_Construct_UClass_UHoudiniInputActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentInputActor_MetaData), NewProp_ParentInputActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::NewProp_ActorTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::NewProp_ParentInputActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniInputObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::ClassParams = {
	&UHoudiniInputSceneComponent::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniInputSceneComponent()
{
	if (!Z_Registration_Info_UClass_UHoudiniInputSceneComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInputSceneComponent.OuterSingleton, Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniInputSceneComponent.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputSceneComponent>()
{
	return UHoudiniInputSceneComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputSceneComponent);
UHoudiniInputSceneComponent::~UHoudiniInputSceneComponent() {}
// End Class UHoudiniInputSceneComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputSceneComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniInputSceneComponent, UHoudiniInputSceneComponent::StaticClass, TEXT("UHoudiniInputSceneComponent"), &Z_Registration_Info_UClass_UHoudiniInputSceneComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInputSceneComponent), 225902782U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputSceneComponent_h_3220232840(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputSceneComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputSceneComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
