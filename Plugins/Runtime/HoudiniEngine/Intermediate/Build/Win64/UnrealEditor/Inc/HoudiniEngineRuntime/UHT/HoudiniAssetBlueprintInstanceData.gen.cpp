// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniAssetBlueprintInstanceData.h"
#include "HoudiniEngineRuntime/Public/HoudiniAssetBlueprintOutput.h"
#include "HoudiniEngineRuntime/Public/HoudiniOutputObjectIdentifier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniAssetBlueprintInstanceData() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorComponentInstanceData();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAsset_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInput_NoRegister();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniAssetBlueprintOutput();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin ScriptStruct FHoudiniAssetBlueprintInstanceData
static_assert(std::is_polymorphic<FHoudiniAssetBlueprintInstanceData>() == std::is_polymorphic<FActorComponentInstanceData>(), "USTRUCT FHoudiniAssetBlueprintInstanceData cannot be polymorphic unless super FActorComponentInstanceData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniAssetBlueprintInstanceData;
class UScriptStruct* FHoudiniAssetBlueprintInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniAssetBlueprintInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniAssetBlueprintInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniAssetBlueprintInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniAssetBlueprintInstanceData.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniAssetBlueprintInstanceData>()
{
	return FHoudiniAssetBlueprintInstanceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintInstanceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetBlueprintInstanceData" },
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintInstanceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetBlueprintInstanceData" },
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintInstanceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetBlueprintInstanceData" },
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintInstanceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubAssetIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetBlueprintInstanceData" },
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintInstanceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetCookCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetBlueprintInstanceData" },
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintInstanceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasBeenLoaded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetBlueprintInstanceData" },
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintInstanceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasBeenDuplicated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetBlueprintInstanceData" },
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintInstanceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPendingDelete_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetBlueprintInstanceData" },
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintInstanceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRecookRequested_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetBlueprintInstanceData" },
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintInstanceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRebuildRequested_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetBlueprintInstanceData" },
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintInstanceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCooking_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetBlueprintInstanceData" },
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintInstanceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceNeedUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetBlueprintInstanceData" },
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintInstanceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLastCookSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetBlueprintInstanceData" },
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintInstanceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentGUID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetBlueprintInstanceData" },
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintInstanceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HapiGUID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetBlueprintInstanceData" },
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintInstanceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRegisteredComponentTemplate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetBlueprintInstanceData" },
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintInstanceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetBlueprintInstanceData" },
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintInstanceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Outputs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetBlueprintInstanceData" },
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintInstanceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetBlueprintInstanceData" },
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintInstanceData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoudiniAsset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AssetId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AssetState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AssetState;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_SubAssetIndex;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_AssetCookCount;
	static void NewProp_bHasBeenLoaded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBeenLoaded;
	static void NewProp_bHasBeenDuplicated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBeenDuplicated;
	static void NewProp_bPendingDelete_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPendingDelete;
	static void NewProp_bRecookRequested_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecookRequested;
	static void NewProp_bRebuildRequested_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRebuildRequested;
	static void NewProp_bEnableCooking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCooking;
	static void NewProp_bForceNeedUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceNeedUpdate;
	static void NewProp_bLastCookSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLastCookSuccess;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentGUID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HapiGUID;
	static void NewProp_bRegisteredComponentTemplate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRegisteredComponentTemplate;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Outputs_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Outputs_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Outputs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Inputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Inputs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniAssetBlueprintInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_HoudiniAsset = { "HoudiniAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniAssetBlueprintInstanceData, HoudiniAsset), Z_Construct_UClass_UHoudiniAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoudiniAsset_MetaData), NewProp_HoudiniAsset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_AssetId = { "AssetId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniAssetBlueprintInstanceData, AssetId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetId_MetaData), NewProp_AssetId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_AssetState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_AssetState = { "AssetState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniAssetBlueprintInstanceData, AssetState), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetState_MetaData), NewProp_AssetState_MetaData) }; // 4227312027
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_SubAssetIndex = { "SubAssetIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniAssetBlueprintInstanceData, SubAssetIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubAssetIndex_MetaData), NewProp_SubAssetIndex_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_AssetCookCount = { "AssetCookCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniAssetBlueprintInstanceData, AssetCookCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetCookCount_MetaData), NewProp_AssetCookCount_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bHasBeenLoaded_SetBit(void* Obj)
{
	((FHoudiniAssetBlueprintInstanceData*)Obj)->bHasBeenLoaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bHasBeenLoaded = { "bHasBeenLoaded", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniAssetBlueprintInstanceData), &Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bHasBeenLoaded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasBeenLoaded_MetaData), NewProp_bHasBeenLoaded_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bHasBeenDuplicated_SetBit(void* Obj)
{
	((FHoudiniAssetBlueprintInstanceData*)Obj)->bHasBeenDuplicated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bHasBeenDuplicated = { "bHasBeenDuplicated", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniAssetBlueprintInstanceData), &Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bHasBeenDuplicated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasBeenDuplicated_MetaData), NewProp_bHasBeenDuplicated_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bPendingDelete_SetBit(void* Obj)
{
	((FHoudiniAssetBlueprintInstanceData*)Obj)->bPendingDelete = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bPendingDelete = { "bPendingDelete", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniAssetBlueprintInstanceData), &Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bPendingDelete_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPendingDelete_MetaData), NewProp_bPendingDelete_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRecookRequested_SetBit(void* Obj)
{
	((FHoudiniAssetBlueprintInstanceData*)Obj)->bRecookRequested = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRecookRequested = { "bRecookRequested", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniAssetBlueprintInstanceData), &Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRecookRequested_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRecookRequested_MetaData), NewProp_bRecookRequested_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRebuildRequested_SetBit(void* Obj)
{
	((FHoudiniAssetBlueprintInstanceData*)Obj)->bRebuildRequested = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRebuildRequested = { "bRebuildRequested", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniAssetBlueprintInstanceData), &Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRebuildRequested_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRebuildRequested_MetaData), NewProp_bRebuildRequested_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bEnableCooking_SetBit(void* Obj)
{
	((FHoudiniAssetBlueprintInstanceData*)Obj)->bEnableCooking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bEnableCooking = { "bEnableCooking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniAssetBlueprintInstanceData), &Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bEnableCooking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableCooking_MetaData), NewProp_bEnableCooking_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bForceNeedUpdate_SetBit(void* Obj)
{
	((FHoudiniAssetBlueprintInstanceData*)Obj)->bForceNeedUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bForceNeedUpdate = { "bForceNeedUpdate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniAssetBlueprintInstanceData), &Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bForceNeedUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceNeedUpdate_MetaData), NewProp_bForceNeedUpdate_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bLastCookSuccess_SetBit(void* Obj)
{
	((FHoudiniAssetBlueprintInstanceData*)Obj)->bLastCookSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bLastCookSuccess = { "bLastCookSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniAssetBlueprintInstanceData), &Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bLastCookSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLastCookSuccess_MetaData), NewProp_bLastCookSuccess_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_ComponentGUID = { "ComponentGUID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniAssetBlueprintInstanceData, ComponentGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentGUID_MetaData), NewProp_ComponentGUID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_HapiGUID = { "HapiGUID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniAssetBlueprintInstanceData, HapiGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HapiGUID_MetaData), NewProp_HapiGUID_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRegisteredComponentTemplate_SetBit(void* Obj)
{
	((FHoudiniAssetBlueprintInstanceData*)Obj)->bRegisteredComponentTemplate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRegisteredComponentTemplate = { "bRegisteredComponentTemplate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniAssetBlueprintInstanceData), &Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRegisteredComponentTemplate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRegisteredComponentTemplate_MetaData), NewProp_bRegisteredComponentTemplate_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_SourceName = { "SourceName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniAssetBlueprintInstanceData, SourceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceName_MetaData), NewProp_SourceName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_Outputs_ValueProp = { "Outputs", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FHoudiniAssetBlueprintOutput, METADATA_PARAMS(0, nullptr) }; // 2352092445
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_Outputs_Key_KeyProp = { "Outputs_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier, METADATA_PARAMS(0, nullptr) }; // 337656452
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_Outputs = { "Outputs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniAssetBlueprintInstanceData, Outputs), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Outputs_MetaData), NewProp_Outputs_MetaData) }; // 337656452 2352092445
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniInput_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniAssetBlueprintInstanceData, Inputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inputs_MetaData), NewProp_Inputs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_HoudiniAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_AssetId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_AssetState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_AssetState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_SubAssetIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_AssetCookCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bHasBeenLoaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bHasBeenDuplicated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bPendingDelete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRecookRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRebuildRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bEnableCooking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bForceNeedUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bLastCookSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_ComponentGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_HapiGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRegisteredComponentTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_SourceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_Outputs_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_Outputs_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_Outputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_Inputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_Inputs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	Z_Construct_UScriptStruct_FActorComponentInstanceData,
	&NewStructOps,
	"HoudiniAssetBlueprintInstanceData",
	Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::PropPointers),
	sizeof(FHoudiniAssetBlueprintInstanceData),
	alignof(FHoudiniAssetBlueprintInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniAssetBlueprintInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniAssetBlueprintInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniAssetBlueprintInstanceData.InnerSingleton;
}
// End ScriptStruct FHoudiniAssetBlueprintInstanceData

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintInstanceData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHoudiniAssetBlueprintInstanceData::StaticStruct, Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewStructOps, TEXT("HoudiniAssetBlueprintInstanceData"), &Z_Registration_Info_UScriptStruct_HoudiniAssetBlueprintInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniAssetBlueprintInstanceData), 1035877223U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintInstanceData_h_3529963663(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintInstanceData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintInstanceData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
