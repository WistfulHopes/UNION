// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniPDGAssetLink.h"
#include "HoudiniEngineRuntime/Public/AggregatedWorkItemTally.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniPDGAssetLink() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniPDGAssetLink();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniPDGAssetLink_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UTOPNetwork_NoRegister();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGLinkState();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAggregatedWorkItemTally();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UHoudiniPDGAssetLink
void UHoudiniPDGAssetLink::StaticRegisterNativesUHoudiniPDGAssetLink()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniPDGAssetLink);
UClass* Z_Construct_UClass_UHoudiniPDGAssetLink_NoRegister()
{
	return UHoudiniPDGAssetLink::StaticClass();
}
struct Z_Construct_UClass_UHoudiniPDGAssetLink_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HoudiniPDGAssetLink.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniPDGAssetLink" },
		{ "ModuleRelativePath", "Public/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetNodePath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniPDGAssetLink" },
		{ "ModuleRelativePath", "Public/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniPDGAssetLink" },
		{ "ModuleRelativePath", "Public/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllTOPNetworks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniPDGAssetLink" },
		{ "ModuleRelativePath", "Public/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedTOPNetworkIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniPDGAssetLink" },
		{ "ModuleRelativePath", "Public/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniPDGAssetLink" },
		{ "ModuleRelativePath", "Public/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoCook_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniPDGAssetLink" },
		{ "ModuleRelativePath", "Public/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseTOPNodeFilter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniPDGAssetLink" },
		{ "ModuleRelativePath", "Public/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseTOPOutputFilter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniPDGAssetLink" },
		{ "ModuleRelativePath", "Public/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TOPNodeFilter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniPDGAssetLink" },
		{ "ModuleRelativePath", "Public/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TOPOutputFilter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniPDGAssetLink" },
		{ "ModuleRelativePath", "Public/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumWorkItems_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniPDGAssetLink" },
		{ "ModuleRelativePath", "Public/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkItemTally_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniPDGAssetLink" },
		{ "ModuleRelativePath", "Public/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputCachePath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniPDGAssetLink" },
		{ "ModuleRelativePath", "Public/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNeedsUIRefresh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniPDGAssetLink" },
		{ "ModuleRelativePath", "Public/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputParentActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniPDGAssetLink" },
		{ "ModuleRelativePath", "Public/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakeFolder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniPDGAssetLink" },
		{ "ModuleRelativePath", "Public/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumAttemptedNodeAutoBakes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniPDGAssetLink" },
		{ "ModuleRelativePath", "Public/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSuccessfulNodeAutoBakes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniPDGAssetLink" },
		{ "ModuleRelativePath", "Public/HoudiniPDGAssetLink.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetNodePath;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AssetId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllTOPNetworks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllTOPNetworks;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedTOPNetworkIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LinkState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LinkState;
	static void NewProp_bAutoCook_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoCook;
	static void NewProp_bUseTOPNodeFilter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTOPNodeFilter;
	static void NewProp_bUseTOPOutputFilter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTOPOutputFilter;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TOPNodeFilter;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TOPOutputFilter;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumWorkItems;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorkItemTally;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputCachePath;
	static void NewProp_bNeedsUIRefresh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedsUIRefresh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutputParentActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BakeFolder;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumAttemptedNodeAutoBakes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSuccessfulNodeAutoBakes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPDGAssetLink>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000400200005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, AssetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetName_MetaData), NewProp_AssetName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AssetNodePath = { "AssetNodePath", nullptr, (EPropertyFlags)0x0010000400200005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, AssetNodePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetNodePath_MetaData), NewProp_AssetNodePath_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AssetId = { "AssetId", nullptr, (EPropertyFlags)0x0010000400200005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, AssetId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetId_MetaData), NewProp_AssetId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AllTOPNetworks_Inner = { "AllTOPNetworks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTOPNetwork_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AllTOPNetworks = { "AllTOPNetworks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, AllTOPNetworks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllTOPNetworks_MetaData), NewProp_AllTOPNetworks_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_SelectedTOPNetworkIndex = { "SelectedTOPNetworkIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, SelectedTOPNetworkIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedTOPNetworkIndex_MetaData), NewProp_SelectedTOPNetworkIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_LinkState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_LinkState = { "LinkState", nullptr, (EPropertyFlags)0x0010000400002005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, LinkState), Z_Construct_UEnum_HoudiniEngineRuntime_EPDGLinkState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkState_MetaData), NewProp_LinkState_MetaData) }; // 2188567397
void Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bAutoCook_SetBit(void* Obj)
{
	((UHoudiniPDGAssetLink*)Obj)->bAutoCook = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bAutoCook = { "bAutoCook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPDGAssetLink), &Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bAutoCook_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoCook_MetaData), NewProp_bAutoCook_MetaData) };
void Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bUseTOPNodeFilter_SetBit(void* Obj)
{
	((UHoudiniPDGAssetLink*)Obj)->bUseTOPNodeFilter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bUseTOPNodeFilter = { "bUseTOPNodeFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPDGAssetLink), &Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bUseTOPNodeFilter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseTOPNodeFilter_MetaData), NewProp_bUseTOPNodeFilter_MetaData) };
void Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bUseTOPOutputFilter_SetBit(void* Obj)
{
	((UHoudiniPDGAssetLink*)Obj)->bUseTOPOutputFilter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bUseTOPOutputFilter = { "bUseTOPOutputFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPDGAssetLink), &Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bUseTOPOutputFilter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseTOPOutputFilter_MetaData), NewProp_bUseTOPOutputFilter_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_TOPNodeFilter = { "TOPNodeFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, TOPNodeFilter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TOPNodeFilter_MetaData), NewProp_TOPNodeFilter_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_TOPOutputFilter = { "TOPOutputFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, TOPOutputFilter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TOPOutputFilter_MetaData), NewProp_TOPOutputFilter_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_NumWorkItems = { "NumWorkItems", nullptr, (EPropertyFlags)0x0010000400000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, NumWorkItems), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumWorkItems_MetaData), NewProp_NumWorkItems_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_WorkItemTally = { "WorkItemTally", nullptr, (EPropertyFlags)0x0010000400002005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, WorkItemTally), Z_Construct_UScriptStruct_FAggregatedWorkItemTally, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkItemTally_MetaData), NewProp_WorkItemTally_MetaData) }; // 1858335540
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_OutputCachePath = { "OutputCachePath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, OutputCachePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputCachePath_MetaData), NewProp_OutputCachePath_MetaData) };
void Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bNeedsUIRefresh_SetBit(void* Obj)
{
	((UHoudiniPDGAssetLink*)Obj)->bNeedsUIRefresh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bNeedsUIRefresh = { "bNeedsUIRefresh", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPDGAssetLink), &Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bNeedsUIRefresh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNeedsUIRefresh_MetaData), NewProp_bNeedsUIRefresh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_OutputParentActor = { "OutputParentActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, OutputParentActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputParentActor_MetaData), NewProp_OutputParentActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_BakeFolder = { "BakeFolder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, BakeFolder), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakeFolder_MetaData), NewProp_BakeFolder_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_NumAttemptedNodeAutoBakes = { "NumAttemptedNodeAutoBakes", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, NumAttemptedNodeAutoBakes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumAttemptedNodeAutoBakes_MetaData), NewProp_NumAttemptedNodeAutoBakes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_NumSuccessfulNodeAutoBakes = { "NumSuccessfulNodeAutoBakes", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, NumSuccessfulNodeAutoBakes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSuccessfulNodeAutoBakes_MetaData), NewProp_NumSuccessfulNodeAutoBakes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AssetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AssetNodePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AssetId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AllTOPNetworks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AllTOPNetworks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_SelectedTOPNetworkIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_LinkState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_LinkState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bAutoCook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bUseTOPNodeFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bUseTOPOutputFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_TOPNodeFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_TOPOutputFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_NumWorkItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_WorkItemTally,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_OutputCachePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bNeedsUIRefresh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_OutputParentActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_BakeFolder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_NumAttemptedNodeAutoBakes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_NumSuccessfulNodeAutoBakes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::ClassParams = {
	&UHoudiniPDGAssetLink::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniPDGAssetLink()
{
	if (!Z_Registration_Info_UClass_UHoudiniPDGAssetLink.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPDGAssetLink.OuterSingleton, Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniPDGAssetLink.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniPDGAssetLink>()
{
	return UHoudiniPDGAssetLink::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPDGAssetLink);
UHoudiniPDGAssetLink::~UHoudiniPDGAssetLink() {}
// End Class UHoudiniPDGAssetLink

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniPDGAssetLink_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniPDGAssetLink, UHoudiniPDGAssetLink::StaticClass, TEXT("UHoudiniPDGAssetLink"), &Z_Registration_Info_UClass_UHoudiniPDGAssetLink, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPDGAssetLink), 2082316128U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniPDGAssetLink_h_1331695727(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniPDGAssetLink_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniPDGAssetLink_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
