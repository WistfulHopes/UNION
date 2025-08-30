// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/TOPNode.h"
#include "HoudiniEngineRuntime/Public/AggregatedWorkItemTally.h"
#include "HoudiniEngineRuntime/Public/HoudiniClearedEditLayers.h"
#include "HoudiniEngineRuntime/Public/HoudiniPDGWorkResultObjectBakedOutput.h"
#include "HoudiniEngineRuntime/Public/OutputActorOwner.h"
#include "HoudiniEngineRuntime/Public/TOPWorkResult.h"
#include "HoudiniEngineRuntime/Public/WorkItemTally.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTOPNode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UTOPNode();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UTOPNode_NoRegister();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGNodeState();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAggregatedWorkItemTally();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniClearedEditLayers();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FOutputActorOwner();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTOPWorkResult();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FWorkItemTally();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UTOPNode
void UTOPNode::StaticRegisterNativesUTOPNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTOPNode);
UClass* Z_Construct_UClass_UTOPNode_NoRegister()
{
	return UTOPNode::StaticClass();
}
struct Z_Construct_UClass_UTOPNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TOPNode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TOPNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TOPNode" },
		{ "ModuleRelativePath", "Public/TOPNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TOPNode" },
		{ "ModuleRelativePath", "Public/TOPNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodePath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TOPNode" },
		{ "ModuleRelativePath", "Public/TOPNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TOPNode" },
		{ "ModuleRelativePath", "Public/TOPNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkResultParent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TOPNode" },
		{ "ModuleRelativePath", "Public/TOPNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkResult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TOPNode" },
		{ "ModuleRelativePath", "Public/TOPNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHidden_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TOPNode" },
		{ "ModuleRelativePath", "Public/TOPNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoLoad_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TOPNode" },
		{ "ModuleRelativePath", "Public/TOPNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TOPNode" },
		{ "ModuleRelativePath", "Public/TOPNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCachedHaveNotLoadedWorkResults_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TOPNode" },
		{ "ModuleRelativePath", "Public/TOPNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCachedHaveLoadedWorkResults_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TOPNode" },
		{ "ModuleRelativePath", "Public/TOPNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasChildNodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TOPNode" },
		{ "ModuleRelativePath", "Public/TOPNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClearedLandscapeLayers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TOPNode" },
		{ "ModuleRelativePath", "Public/TOPNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClearedLayers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TOPNode" },
		{ "ModuleRelativePath", "Public/TOPNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShow_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TOPNode" },
		{ "ModuleRelativePath", "Public/TOPNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakedWorkResultObjectOutputs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TOPNode" },
		{ "ModuleRelativePath", "Public/TOPNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkItemTally_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TOPNode" },
		{ "ModuleRelativePath", "Public/TOPNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AggregatedWorkItemTally_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TOPNode" },
		{ "ModuleRelativePath", "Public/TOPNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasReceivedCookCompleteEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TOPNode" },
		{ "ModuleRelativePath", "Public/TOPNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputActorOwner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TOPNode" },
		{ "ModuleRelativePath", "Public/TOPNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NodeID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodeName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParentName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorkResultParent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorkResult_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WorkResult;
	static void NewProp_bHidden_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHidden;
	static void NewProp_bAutoLoad_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoLoad;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NodeState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NodeState;
	static void NewProp_bCachedHaveNotLoadedWorkResults_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCachedHaveNotLoadedWorkResults;
	static void NewProp_bCachedHaveLoadedWorkResults_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCachedHaveLoadedWorkResults;
	static void NewProp_bHasChildNodes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasChildNodes;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClearedLandscapeLayers_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ClearedLandscapeLayers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClearedLayers;
	static void NewProp_bShow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShow;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BakedWorkResultObjectOutputs_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BakedWorkResultObjectOutputs_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_BakedWorkResultObjectOutputs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorkItemTally;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AggregatedWorkItemTally;
	static void NewProp_bHasReceivedCookCompleteEvent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasReceivedCookCompleteEvent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputActorOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTOPNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeID = { "NodeID", nullptr, (EPropertyFlags)0x0010000400002005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTOPNode, NodeID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeID_MetaData), NewProp_NodeID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x0010000400000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTOPNode, NodeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeName_MetaData), NewProp_NodeName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_NodePath = { "NodePath", nullptr, (EPropertyFlags)0x0010000400000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTOPNode, NodePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodePath_MetaData), NewProp_NodePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_ParentName = { "ParentName", nullptr, (EPropertyFlags)0x0010000400000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTOPNode, ParentName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentName_MetaData), NewProp_ParentName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkResultParent = { "WorkResultParent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTOPNode, WorkResultParent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkResultParent_MetaData), NewProp_WorkResultParent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkResult_Inner = { "WorkResult", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTOPWorkResult, METADATA_PARAMS(0, nullptr) }; // 2141361368
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkResult = { "WorkResult", nullptr, (EPropertyFlags)0x0010000400000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTOPNode, WorkResult), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkResult_MetaData), NewProp_WorkResult_MetaData) }; // 2141361368
void Z_Construct_UClass_UTOPNode_Statics::NewProp_bHidden_SetBit(void* Obj)
{
	((UTOPNode*)Obj)->bHidden = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_bHidden = { "bHidden", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTOPNode), &Z_Construct_UClass_UTOPNode_Statics::NewProp_bHidden_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHidden_MetaData), NewProp_bHidden_MetaData) };
void Z_Construct_UClass_UTOPNode_Statics::NewProp_bAutoLoad_SetBit(void* Obj)
{
	((UTOPNode*)Obj)->bAutoLoad = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_bAutoLoad = { "bAutoLoad", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTOPNode), &Z_Construct_UClass_UTOPNode_Statics::NewProp_bAutoLoad_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoLoad_MetaData), NewProp_bAutoLoad_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeState = { "NodeState", nullptr, (EPropertyFlags)0x0010000400002005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTOPNode, NodeState), Z_Construct_UEnum_HoudiniEngineRuntime_EPDGNodeState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeState_MetaData), NewProp_NodeState_MetaData) }; // 4259875528
void Z_Construct_UClass_UTOPNode_Statics::NewProp_bCachedHaveNotLoadedWorkResults_SetBit(void* Obj)
{
	((UTOPNode*)Obj)->bCachedHaveNotLoadedWorkResults = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_bCachedHaveNotLoadedWorkResults = { "bCachedHaveNotLoadedWorkResults", nullptr, (EPropertyFlags)0x0010000400000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTOPNode), &Z_Construct_UClass_UTOPNode_Statics::NewProp_bCachedHaveNotLoadedWorkResults_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCachedHaveNotLoadedWorkResults_MetaData), NewProp_bCachedHaveNotLoadedWorkResults_MetaData) };
void Z_Construct_UClass_UTOPNode_Statics::NewProp_bCachedHaveLoadedWorkResults_SetBit(void* Obj)
{
	((UTOPNode*)Obj)->bCachedHaveLoadedWorkResults = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_bCachedHaveLoadedWorkResults = { "bCachedHaveLoadedWorkResults", nullptr, (EPropertyFlags)0x0010000400000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTOPNode), &Z_Construct_UClass_UTOPNode_Statics::NewProp_bCachedHaveLoadedWorkResults_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCachedHaveLoadedWorkResults_MetaData), NewProp_bCachedHaveLoadedWorkResults_MetaData) };
void Z_Construct_UClass_UTOPNode_Statics::NewProp_bHasChildNodes_SetBit(void* Obj)
{
	((UTOPNode*)Obj)->bHasChildNodes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_bHasChildNodes = { "bHasChildNodes", nullptr, (EPropertyFlags)0x0010000400000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTOPNode), &Z_Construct_UClass_UTOPNode_Statics::NewProp_bHasChildNodes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasChildNodes_MetaData), NewProp_bHasChildNodes_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_ClearedLandscapeLayers_ElementProp = { "ClearedLandscapeLayers", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_ClearedLandscapeLayers = { "ClearedLandscapeLayers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTOPNode, ClearedLandscapeLayers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClearedLandscapeLayers_MetaData), NewProp_ClearedLandscapeLayers_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_ClearedLayers = { "ClearedLayers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTOPNode, ClearedLayers), Z_Construct_UScriptStruct_FHoudiniClearedEditLayers, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClearedLayers_MetaData), NewProp_ClearedLayers_MetaData) }; // 3720495686
void Z_Construct_UClass_UTOPNode_Statics::NewProp_bShow_SetBit(void* Obj)
{
	((UTOPNode*)Obj)->bShow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_bShow = { "bShow", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTOPNode), &Z_Construct_UClass_UTOPNode_Statics::NewProp_bShow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShow_MetaData), NewProp_bShow_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_BakedWorkResultObjectOutputs_ValueProp = { "BakedWorkResultObjectOutputs", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput, METADATA_PARAMS(0, nullptr) }; // 1619359182
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_BakedWorkResultObjectOutputs_Key_KeyProp = { "BakedWorkResultObjectOutputs_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_BakedWorkResultObjectOutputs = { "BakedWorkResultObjectOutputs", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTOPNode, BakedWorkResultObjectOutputs), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakedWorkResultObjectOutputs_MetaData), NewProp_BakedWorkResultObjectOutputs_MetaData) }; // 1619359182
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkItemTally = { "WorkItemTally", nullptr, (EPropertyFlags)0x0020080400002005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTOPNode, WorkItemTally), Z_Construct_UScriptStruct_FWorkItemTally, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkItemTally_MetaData), NewProp_WorkItemTally_MetaData) }; // 3019783741
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_AggregatedWorkItemTally = { "AggregatedWorkItemTally", nullptr, (EPropertyFlags)0x0020080400002005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTOPNode, AggregatedWorkItemTally), Z_Construct_UScriptStruct_FAggregatedWorkItemTally, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AggregatedWorkItemTally_MetaData), NewProp_AggregatedWorkItemTally_MetaData) }; // 1858335540
void Z_Construct_UClass_UTOPNode_Statics::NewProp_bHasReceivedCookCompleteEvent_SetBit(void* Obj)
{
	((UTOPNode*)Obj)->bHasReceivedCookCompleteEvent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_bHasReceivedCookCompleteEvent = { "bHasReceivedCookCompleteEvent", nullptr, (EPropertyFlags)0x0020080400002005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTOPNode), &Z_Construct_UClass_UTOPNode_Statics::NewProp_bHasReceivedCookCompleteEvent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasReceivedCookCompleteEvent_MetaData), NewProp_bHasReceivedCookCompleteEvent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_OutputActorOwner = { "OutputActorOwner", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTOPNode, OutputActorOwner), Z_Construct_UScriptStruct_FOutputActorOwner, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputActorOwner_MetaData), NewProp_OutputActorOwner_MetaData) }; // 990939271
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTOPNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_NodePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_ParentName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkResultParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkResult_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_bHidden,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_bAutoLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_bCachedHaveNotLoadedWorkResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_bCachedHaveLoadedWorkResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_bHasChildNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_ClearedLandscapeLayers_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_ClearedLandscapeLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_ClearedLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_bShow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_BakedWorkResultObjectOutputs_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_BakedWorkResultObjectOutputs_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_BakedWorkResultObjectOutputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkItemTally,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_AggregatedWorkItemTally,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_bHasReceivedCookCompleteEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_OutputActorOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTOPNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTOPNode_Statics::ClassParams = {
	&UTOPNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTOPNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNode_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UTOPNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTOPNode()
{
	if (!Z_Registration_Info_UClass_UTOPNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTOPNode.OuterSingleton, Z_Construct_UClass_UTOPNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTOPNode.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UTOPNode>()
{
	return UTOPNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTOPNode);
UTOPNode::~UTOPNode() {}
// End Class UTOPNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_TOPNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTOPNode, UTOPNode::StaticClass, TEXT("UTOPNode"), &Z_Registration_Info_UClass_UTOPNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTOPNode), 3120951388U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_TOPNode_h_3236196483(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_TOPNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_TOPNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
