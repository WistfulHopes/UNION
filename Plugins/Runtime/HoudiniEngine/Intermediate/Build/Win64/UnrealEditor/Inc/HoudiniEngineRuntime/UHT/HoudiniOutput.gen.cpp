// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniOutput.h"
#include "HoudiniEngineRuntime/Public/HoudiniGeoPartObject.h"
#include "HoudiniEngineRuntime/Public/HoudiniInstancedOutput.h"
#include "HoudiniEngineRuntime/Public/HoudiniMaterialIdentifier.h"
#include "HoudiniEngineRuntime/Public/HoudiniOutputObject.h"
#include "HoudiniEngineRuntime/Public/HoudiniOutputObjectIdentifier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniOutput() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniOutput();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniOutput_NoRegister();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniOutputType();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGeoPartObject();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniInstancedOutput();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniOutputObject();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UHoudiniOutput
void UHoudiniOutput::StaticRegisterNativesUHoudiniOutput()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniOutput);
UClass* Z_Construct_UClass_UHoudiniOutput_NoRegister()
{
	return UHoudiniOutput::StaticClass();
}
struct Z_Construct_UClass_UHoudiniOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HoudiniOutput.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniOutput" },
		{ "ModuleRelativePath", "Public/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniGeoPartObjects_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniOutput" },
		{ "ModuleRelativePath", "Public/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputObjects_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniOutput" },
		{ "ModuleRelativePath", "Public/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstancedOutputs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniOutput" },
		{ "ModuleRelativePath", "Public/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssignementMaterials_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniOutput" },
		{ "ModuleRelativePath", "Public/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssignmentMaterialsById_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniOutput" },
		{ "ModuleRelativePath", "Public/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplacementMaterials_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniOutput" },
		{ "ModuleRelativePath", "Public/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplacementMaterialsById_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniOutput" },
		{ "ModuleRelativePath", "Public/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeWorldComposition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniOutput" },
		{ "ModuleRelativePath", "Public/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniCreatedSocketActors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniOutput" },
		{ "ModuleRelativePath", "Public/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniAttachedSocketActors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniOutput" },
		{ "ModuleRelativePath", "Public/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsEditableNode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniOutput" },
		{ "ModuleRelativePath", "Public/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasEditableNodeBuilt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniOutput" },
		{ "ModuleRelativePath", "Public/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsUpdating_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniOutput" },
		{ "ModuleRelativePath", "Public/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanDeleteHoudiniNodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniOutput" },
		{ "ModuleRelativePath", "Public/HoudiniOutput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HoudiniGeoPartObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HoudiniGeoPartObjects;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputObjects_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputObjects_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_OutputObjects;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstancedOutputs_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstancedOutputs_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_InstancedOutputs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssignementMaterials_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssignementMaterials_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AssignementMaterials;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssignmentMaterialsById_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssignmentMaterialsById_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AssignmentMaterialsById;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReplacementMaterials_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReplacementMaterials_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReplacementMaterials;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReplacementMaterialsById_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReplacementMaterialsById_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReplacementMaterialsById;
	static void NewProp_bLandscapeWorldComposition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeWorldComposition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoudiniCreatedSocketActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HoudiniCreatedSocketActors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoudiniAttachedSocketActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HoudiniAttachedSocketActors;
	static void NewProp_bIsEditableNode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEditableNode;
	static void NewProp_bHasEditableNodeBuilt_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasEditableNodeBuilt;
	static void NewProp_bIsUpdating_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUpdating;
	static void NewProp_bCanDeleteHoudiniNodes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanDeleteHoudiniNodes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniOutput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniOutput, Type), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniOutputType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 3071875950
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_HoudiniGeoPartObjects_Inner = { "HoudiniGeoPartObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniGeoPartObject, METADATA_PARAMS(0, nullptr) }; // 3840216616
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_HoudiniGeoPartObjects = { "HoudiniGeoPartObjects", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniOutput, HoudiniGeoPartObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoudiniGeoPartObjects_MetaData), NewProp_HoudiniGeoPartObjects_MetaData) }; // 3840216616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_OutputObjects_ValueProp = { "OutputObjects", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FHoudiniOutputObject, METADATA_PARAMS(0, nullptr) }; // 1263940122
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_OutputObjects_Key_KeyProp = { "OutputObjects_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier, METADATA_PARAMS(0, nullptr) }; // 337656452
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_OutputObjects = { "OutputObjects", nullptr, (EPropertyFlags)0x0020080000200005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniOutput, OutputObjects), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputObjects_MetaData), NewProp_OutputObjects_MetaData) }; // 337656452 1263940122
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_InstancedOutputs_ValueProp = { "InstancedOutputs", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FHoudiniInstancedOutput, METADATA_PARAMS(0, nullptr) }; // 1111338850
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_InstancedOutputs_Key_KeyProp = { "InstancedOutputs_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier, METADATA_PARAMS(0, nullptr) }; // 337656452
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_InstancedOutputs = { "InstancedOutputs", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniOutput, InstancedOutputs), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstancedOutputs_MetaData), NewProp_InstancedOutputs_MetaData) }; // 337656452 1111338850
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_AssignementMaterials_ValueProp = { "AssignementMaterials", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_AssignementMaterials_Key_KeyProp = { "AssignementMaterials_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_AssignementMaterials = { "AssignementMaterials", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniOutput, AssignementMaterials), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssignementMaterials_MetaData), NewProp_AssignementMaterials_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_AssignmentMaterialsById_ValueProp = { "AssignmentMaterialsById", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_AssignmentMaterialsById_Key_KeyProp = { "AssignmentMaterialsById_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier, METADATA_PARAMS(0, nullptr) }; // 2568822505
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_AssignmentMaterialsById = { "AssignmentMaterialsById", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniOutput, AssignmentMaterialsById), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssignmentMaterialsById_MetaData), NewProp_AssignmentMaterialsById_MetaData) }; // 2568822505
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_ReplacementMaterials_ValueProp = { "ReplacementMaterials", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_ReplacementMaterials_Key_KeyProp = { "ReplacementMaterials_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_ReplacementMaterials = { "ReplacementMaterials", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniOutput, ReplacementMaterials), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplacementMaterials_MetaData), NewProp_ReplacementMaterials_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_ReplacementMaterialsById_ValueProp = { "ReplacementMaterialsById", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_ReplacementMaterialsById_Key_KeyProp = { "ReplacementMaterialsById_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier, METADATA_PARAMS(0, nullptr) }; // 2568822505
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_ReplacementMaterialsById = { "ReplacementMaterialsById", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniOutput, ReplacementMaterialsById), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplacementMaterialsById_MetaData), NewProp_ReplacementMaterialsById_MetaData) }; // 2568822505
void Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bLandscapeWorldComposition_SetBit(void* Obj)
{
	((UHoudiniOutput*)Obj)->bLandscapeWorldComposition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bLandscapeWorldComposition = { "bLandscapeWorldComposition", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniOutput), &Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bLandscapeWorldComposition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLandscapeWorldComposition_MetaData), NewProp_bLandscapeWorldComposition_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_HoudiniCreatedSocketActors_Inner = { "HoudiniCreatedSocketActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_HoudiniCreatedSocketActors = { "HoudiniCreatedSocketActors", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniOutput, HoudiniCreatedSocketActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoudiniCreatedSocketActors_MetaData), NewProp_HoudiniCreatedSocketActors_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_HoudiniAttachedSocketActors_Inner = { "HoudiniAttachedSocketActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_HoudiniAttachedSocketActors = { "HoudiniAttachedSocketActors", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniOutput, HoudiniAttachedSocketActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoudiniAttachedSocketActors_MetaData), NewProp_HoudiniAttachedSocketActors_MetaData) };
void Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bIsEditableNode_SetBit(void* Obj)
{
	((UHoudiniOutput*)Obj)->bIsEditableNode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bIsEditableNode = { "bIsEditableNode", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniOutput), &Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bIsEditableNode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsEditableNode_MetaData), NewProp_bIsEditableNode_MetaData) };
void Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bHasEditableNodeBuilt_SetBit(void* Obj)
{
	((UHoudiniOutput*)Obj)->bHasEditableNodeBuilt = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bHasEditableNodeBuilt = { "bHasEditableNodeBuilt", nullptr, (EPropertyFlags)0x0040000000202005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniOutput), &Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bHasEditableNodeBuilt_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasEditableNodeBuilt_MetaData), NewProp_bHasEditableNodeBuilt_MetaData) };
void Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bIsUpdating_SetBit(void* Obj)
{
	((UHoudiniOutput*)Obj)->bIsUpdating = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bIsUpdating = { "bIsUpdating", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniOutput), &Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bIsUpdating_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsUpdating_MetaData), NewProp_bIsUpdating_MetaData) };
void Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bCanDeleteHoudiniNodes_SetBit(void* Obj)
{
	((UHoudiniOutput*)Obj)->bCanDeleteHoudiniNodes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bCanDeleteHoudiniNodes = { "bCanDeleteHoudiniNodes", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniOutput), &Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bCanDeleteHoudiniNodes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanDeleteHoudiniNodes_MetaData), NewProp_bCanDeleteHoudiniNodes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_HoudiniGeoPartObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_HoudiniGeoPartObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_OutputObjects_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_OutputObjects_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_OutputObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_InstancedOutputs_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_InstancedOutputs_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_InstancedOutputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_AssignementMaterials_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_AssignementMaterials_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_AssignementMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_AssignmentMaterialsById_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_AssignmentMaterialsById_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_AssignmentMaterialsById,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_ReplacementMaterials_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_ReplacementMaterials_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_ReplacementMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_ReplacementMaterialsById_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_ReplacementMaterialsById_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_ReplacementMaterialsById,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bLandscapeWorldComposition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_HoudiniCreatedSocketActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_HoudiniCreatedSocketActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_HoudiniAttachedSocketActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_HoudiniAttachedSocketActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bIsEditableNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bHasEditableNodeBuilt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bIsUpdating,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bCanDeleteHoudiniNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniOutput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniOutput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniOutput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniOutput_Statics::ClassParams = {
	&UHoudiniOutput::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniOutput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniOutput_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniOutput_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniOutput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniOutput()
{
	if (!Z_Registration_Info_UClass_UHoudiniOutput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniOutput.OuterSingleton, Z_Construct_UClass_UHoudiniOutput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniOutput.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniOutput>()
{
	return UHoudiniOutput::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniOutput);
UHoudiniOutput::~UHoudiniOutput() {}
// End Class UHoudiniOutput

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniOutput_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniOutput, UHoudiniOutput::StaticClass, TEXT("UHoudiniOutput"), &Z_Registration_Info_UClass_UHoudiniOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniOutput), 4039994205U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniOutput_h_1523439927(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniOutput_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
