// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniInputActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniInputActor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputActor();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputActor_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputObject();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputSceneComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UHoudiniInputActor
void UHoudiniInputActor::StaticRegisterNativesUHoudiniInputActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniInputActor);
UClass* Z_Construct_UClass_UHoudiniInputActor_NoRegister()
{
	return UHoudiniInputActor::StaticClass();
}
struct Z_Construct_UClass_UHoudiniInputActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HoudiniInputActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HoudiniInputActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplinesMeshObjectNodeId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputActor" },
		{ "ModuleRelativePath", "Public/HoudiniInputActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplinesMeshNodeId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputActor" },
		{ "ModuleRelativePath", "Public/HoudiniInputActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorComponents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputActor" },
		{ "ModuleRelativePath", "Public/HoudiniInputActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorSceneComponents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputActor" },
		{ "ModuleRelativePath", "Public/HoudiniInputActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastUpdateNumComponentsAdded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputActor" },
		{ "ModuleRelativePath", "Public/HoudiniInputActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastUpdateNumComponentsRemoved_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputActor" },
		{ "ModuleRelativePath", "Public/HoudiniInputActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSplineMeshComponents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputActor" },
		{ "ModuleRelativePath", "Public/HoudiniInputActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedSplinesMeshPackageGuid_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputActor" },
		{ "ModuleRelativePath", "Public/HoudiniInputActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedSplinesMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputActor" },
		{ "ModuleRelativePath", "Public/HoudiniInputActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsedMergeSplinesMeshAtLastTranslate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputActor" },
		{ "ModuleRelativePath", "Public/HoudiniInputActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SplinesMeshObjectNodeId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SplinesMeshNodeId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorComponents;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ActorSceneComponents_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ActorSceneComponents;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LastUpdateNumComponentsAdded;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LastUpdateNumComponentsRemoved;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSplineMeshComponents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeneratedSplinesMeshPackageGuid;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeneratedSplinesMesh;
	static void NewProp_bUsedMergeSplinesMeshAtLastTranslate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsedMergeSplinesMeshAtLastTranslate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_SplinesMeshObjectNodeId = { "SplinesMeshObjectNodeId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputActor, SplinesMeshObjectNodeId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplinesMeshObjectNodeId_MetaData), NewProp_SplinesMeshObjectNodeId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_SplinesMeshNodeId = { "SplinesMeshNodeId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputActor, SplinesMeshNodeId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplinesMeshNodeId_MetaData), NewProp_SplinesMeshNodeId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorComponents_Inner = { "ActorComponents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniInputSceneComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorComponents = { "ActorComponents", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputActor, ActorComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorComponents_MetaData), NewProp_ActorComponents_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorSceneComponents_ElementProp = { "ActorSceneComponents", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorSceneComponents = { "ActorSceneComponents", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputActor, ActorSceneComponents), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorSceneComponents_MetaData), NewProp_ActorSceneComponents_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_LastUpdateNumComponentsAdded = { "LastUpdateNumComponentsAdded", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputActor, LastUpdateNumComponentsAdded), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastUpdateNumComponentsAdded_MetaData), NewProp_LastUpdateNumComponentsAdded_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_LastUpdateNumComponentsRemoved = { "LastUpdateNumComponentsRemoved", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputActor, LastUpdateNumComponentsRemoved), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastUpdateNumComponentsRemoved_MetaData), NewProp_LastUpdateNumComponentsRemoved_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_NumSplineMeshComponents = { "NumSplineMeshComponents", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputActor, NumSplineMeshComponents), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSplineMeshComponents_MetaData), NewProp_NumSplineMeshComponents_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_GeneratedSplinesMeshPackageGuid = { "GeneratedSplinesMeshPackageGuid", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputActor, GeneratedSplinesMeshPackageGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedSplinesMeshPackageGuid_MetaData), NewProp_GeneratedSplinesMeshPackageGuid_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_GeneratedSplinesMesh = { "GeneratedSplinesMesh", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputActor, GeneratedSplinesMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedSplinesMesh_MetaData), NewProp_GeneratedSplinesMesh_MetaData) };
void Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_bUsedMergeSplinesMeshAtLastTranslate_SetBit(void* Obj)
{
	((UHoudiniInputActor*)Obj)->bUsedMergeSplinesMeshAtLastTranslate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_bUsedMergeSplinesMeshAtLastTranslate = { "bUsedMergeSplinesMeshAtLastTranslate", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInputActor), &Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_bUsedMergeSplinesMeshAtLastTranslate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsedMergeSplinesMeshAtLastTranslate_MetaData), NewProp_bUsedMergeSplinesMeshAtLastTranslate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInputActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_SplinesMeshObjectNodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_SplinesMeshNodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorSceneComponents_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorSceneComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_LastUpdateNumComponentsAdded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_LastUpdateNumComponentsRemoved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_NumSplineMeshComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_GeneratedSplinesMeshPackageGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_GeneratedSplinesMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_bUsedMergeSplinesMeshAtLastTranslate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniInputActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniInputObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputActor_Statics::ClassParams = {
	&UHoudiniInputActor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniInputActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputActor_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputActor_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniInputActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniInputActor()
{
	if (!Z_Registration_Info_UClass_UHoudiniInputActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInputActor.OuterSingleton, Z_Construct_UClass_UHoudiniInputActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniInputActor.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputActor>()
{
	return UHoudiniInputActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputActor);
UHoudiniInputActor::~UHoudiniInputActor() {}
// End Class UHoudiniInputActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniInputActor, UHoudiniInputActor::StaticClass, TEXT("UHoudiniInputActor"), &Z_Registration_Info_UClass_UHoudiniInputActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInputActor), 492898552U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputActor_h_192091259(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
