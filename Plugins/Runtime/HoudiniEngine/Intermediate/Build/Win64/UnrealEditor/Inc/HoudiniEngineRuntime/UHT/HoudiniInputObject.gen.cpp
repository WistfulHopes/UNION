// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniInputObject.h"
#include "HoudiniEngineRuntime/Public/HoudiniInputObjectSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniInputObject() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputObject();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputObject_NoRegister();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputObjectType();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniInputObjectSettings();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UHoudiniInputObject
void UHoudiniInputObject::StaticRegisterNativesUHoudiniInputObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniInputObject);
UClass* Z_Construct_UClass_UHoudiniInputObject_NoRegister()
{
	return UHoudiniInputObject::StaticClass();
}
struct Z_Construct_UClass_UHoudiniInputObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HoudiniInputObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HoudiniInputObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputObject" },
		{ "ModuleRelativePath", "Public/HoudiniInputObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputObject" },
		{ "ModuleRelativePath", "Public/HoudiniInputObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputObject" },
		{ "ModuleRelativePath", "Public/HoudiniInputObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputObject" },
		{ "ModuleRelativePath", "Public/HoudiniInputObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNeedsToTriggerUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputObject" },
		{ "ModuleRelativePath", "Public/HoudiniInputObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTransformChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputObject" },
		{ "ModuleRelativePath", "Public/HoudiniInputObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialReferences_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputObject" },
		{ "ModuleRelativePath", "Public/HoudiniInputObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedInputSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputObject" },
		{ "ModuleRelativePath", "Public/HoudiniInputObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanDeleteHoudiniNodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputObject" },
		{ "ModuleRelativePath", "Public/HoudiniInputObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInputNodeHandleOverridesNodeIds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputObject" },
		{ "ModuleRelativePath", "Public/HoudiniInputObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputObject" },
		{ "ModuleRelativePath", "Public/HoudiniInputObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserInputRotator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputObject" },
		{ "ModuleRelativePath", "Public/HoudiniInputObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputNodeId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputObject" },
		{ "ModuleRelativePath", "Public/HoudiniInputObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputObjectNodeId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputObject" },
		{ "ModuleRelativePath", "Public/HoudiniInputObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_InputObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
	static void NewProp_bHasChanged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasChanged;
	static void NewProp_bNeedsToTriggerUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedsToTriggerUpdate;
	static void NewProp_bTransformChanged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransformChanged;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialReferences_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialReferences;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedInputSettings;
	static void NewProp_bCanDeleteHoudiniNodes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanDeleteHoudiniNodes;
	static void NewProp_bInputNodeHandleOverridesNodeIds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInputNodeHandleOverridesNodeIds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserInputRotator;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InputNodeId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InputObjectNodeId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_InputObject = { "InputObject", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputObject, InputObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputObject_MetaData), NewProp_InputObject_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputObject, Type), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputObjectType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 603618656
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000200005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputObject, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guid_MetaData), NewProp_Guid_MetaData) };
void Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bHasChanged_SetBit(void* Obj)
{
	((UHoudiniInputObject*)Obj)->bHasChanged = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bHasChanged = { "bHasChanged", nullptr, (EPropertyFlags)0x0020080000200005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInputObject), &Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bHasChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasChanged_MetaData), NewProp_bHasChanged_MetaData) };
void Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bNeedsToTriggerUpdate_SetBit(void* Obj)
{
	((UHoudiniInputObject*)Obj)->bNeedsToTriggerUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bNeedsToTriggerUpdate = { "bNeedsToTriggerUpdate", nullptr, (EPropertyFlags)0x0020080000200005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInputObject), &Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bNeedsToTriggerUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNeedsToTriggerUpdate_MetaData), NewProp_bNeedsToTriggerUpdate_MetaData) };
void Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bTransformChanged_SetBit(void* Obj)
{
	((UHoudiniInputObject*)Obj)->bTransformChanged = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bTransformChanged = { "bTransformChanged", nullptr, (EPropertyFlags)0x0020080000200005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInputObject), &Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bTransformChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTransformChanged_MetaData), NewProp_bTransformChanged_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_MaterialReferences_Inner = { "MaterialReferences", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_MaterialReferences = { "MaterialReferences", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputObject, MaterialReferences), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialReferences_MetaData), NewProp_MaterialReferences_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_CachedInputSettings = { "CachedInputSettings", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputObject, CachedInputSettings), Z_Construct_UScriptStruct_FHoudiniInputObjectSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedInputSettings_MetaData), NewProp_CachedInputSettings_MetaData) }; // 1194819466
void Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bCanDeleteHoudiniNodes_SetBit(void* Obj)
{
	((UHoudiniInputObject*)Obj)->bCanDeleteHoudiniNodes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bCanDeleteHoudiniNodes = { "bCanDeleteHoudiniNodes", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInputObject), &Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bCanDeleteHoudiniNodes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanDeleteHoudiniNodes_MetaData), NewProp_bCanDeleteHoudiniNodes_MetaData) };
void Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bInputNodeHandleOverridesNodeIds_SetBit(void* Obj)
{
	((UHoudiniInputObject*)Obj)->bInputNodeHandleOverridesNodeIds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bInputNodeHandleOverridesNodeIds = { "bInputNodeHandleOverridesNodeIds", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInputObject), &Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bInputNodeHandleOverridesNodeIds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInputNodeHandleOverridesNodeIds_MetaData), NewProp_bInputNodeHandleOverridesNodeIds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputObject, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_UserInputRotator = { "UserInputRotator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputObject, UserInputRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserInputRotator_MetaData), NewProp_UserInputRotator_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_InputNodeId = { "InputNodeId", nullptr, (EPropertyFlags)0x0040000400202005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputObject, InputNodeId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputNodeId_MetaData), NewProp_InputNodeId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_InputObjectNodeId = { "InputObjectNodeId", nullptr, (EPropertyFlags)0x0040000400202005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputObject, InputObjectNodeId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputObjectNodeId_MetaData), NewProp_InputObjectNodeId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInputObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_InputObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_Guid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bHasChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bNeedsToTriggerUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bTransformChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_MaterialReferences_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_MaterialReferences,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_CachedInputSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bCanDeleteHoudiniNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bInputNodeHandleOverridesNodeIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_UserInputRotator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_InputNodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_InputObjectNodeId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniInputObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputObject_Statics::ClassParams = {
	&UHoudiniInputObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniInputObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputObject_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniInputObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniInputObject()
{
	if (!Z_Registration_Info_UClass_UHoudiniInputObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInputObject.OuterSingleton, Z_Construct_UClass_UHoudiniInputObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniInputObject.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputObject>()
{
	return UHoudiniInputObject::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputObject);
UHoudiniInputObject::~UHoudiniInputObject() {}
// End Class UHoudiniInputObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniInputObject, UHoudiniInputObject::StaticClass, TEXT("UHoudiniInputObject"), &Z_Registration_Info_UClass_UHoudiniInputObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInputObject), 1245924383U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputObject_h_1491791335(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
