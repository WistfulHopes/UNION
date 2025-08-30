// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniInputLevelInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniInputLevelInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputActor();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputLevelInstance();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputLevelInstance_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UHoudiniInputLevelInstance
void UHoudiniInputLevelInstance::StaticRegisterNativesUHoudiniInputLevelInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniInputLevelInstance);
UClass* Z_Construct_UClass_UHoudiniInputLevelInstance_NoRegister()
{
	return UHoudiniInputLevelInstance::StaticClass();
}
struct Z_Construct_UClass_UHoudiniInputLevelInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HoudiniInputLevelInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HoudiniInputLevelInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackedActorObjects_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputLevelInstance" },
		{ "ModuleRelativePath", "Public/HoudiniInputLevelInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumActorsAddedLastUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputLevelInstance" },
		{ "ModuleRelativePath", "Public/HoudiniInputLevelInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumActorsRemovedLastUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputLevelInstance" },
		{ "ModuleRelativePath", "Public/HoudiniInputLevelInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrackedActorObjects_ValueProp;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TrackedActorObjects_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TrackedActorObjects;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumActorsAddedLastUpdate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumActorsRemovedLastUpdate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputLevelInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::NewProp_TrackedActorObjects_ValueProp = { "TrackedActorObjects", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UHoudiniInputObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::NewProp_TrackedActorObjects_Key_KeyProp = { "TrackedActorObjects_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::NewProp_TrackedActorObjects = { "TrackedActorObjects", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputLevelInstance, TrackedActorObjects), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackedActorObjects_MetaData), NewProp_TrackedActorObjects_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::NewProp_NumActorsAddedLastUpdate = { "NumActorsAddedLastUpdate", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputLevelInstance, NumActorsAddedLastUpdate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumActorsAddedLastUpdate_MetaData), NewProp_NumActorsAddedLastUpdate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::NewProp_NumActorsRemovedLastUpdate = { "NumActorsRemovedLastUpdate", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputLevelInstance, NumActorsRemovedLastUpdate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumActorsRemovedLastUpdate_MetaData), NewProp_NumActorsRemovedLastUpdate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::NewProp_TrackedActorObjects_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::NewProp_TrackedActorObjects_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::NewProp_TrackedActorObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::NewProp_NumActorsAddedLastUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::NewProp_NumActorsRemovedLastUpdate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniInputActor,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::ClassParams = {
	&UHoudiniInputLevelInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniInputLevelInstance()
{
	if (!Z_Registration_Info_UClass_UHoudiniInputLevelInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInputLevelInstance.OuterSingleton, Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniInputLevelInstance.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputLevelInstance>()
{
	return UHoudiniInputLevelInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputLevelInstance);
UHoudiniInputLevelInstance::~UHoudiniInputLevelInstance() {}
// End Class UHoudiniInputLevelInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputLevelInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniInputLevelInstance, UHoudiniInputLevelInstance::StaticClass, TEXT("UHoudiniInputLevelInstance"), &Z_Registration_Info_UClass_UHoudiniInputLevelInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInputLevelInstance), 3610720259U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputLevelInstance_h_2487215624(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputLevelInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputLevelInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
