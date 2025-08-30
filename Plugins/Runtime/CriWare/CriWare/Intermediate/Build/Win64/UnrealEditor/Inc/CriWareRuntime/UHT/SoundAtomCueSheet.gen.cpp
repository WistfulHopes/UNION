// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/SoundAtomCueSheet.h"
#include "CriWareRuntime/Public/AtomCueInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundAtomCueSheet() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCueSheet();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCueSheet_NoRegister();
CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_USoundAtomCueSheet_OnLoadCompleted_BP__DelegateSignature();
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfo();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Delegate FOnLoadCompleted_BP
struct Z_Construct_UDelegateFunction_USoundAtomCueSheet_OnLoadCompleted_BP__DelegateSignature_Statics
{
	struct SoundAtomCueSheet_eventOnLoadCompleted_BP_Parms
	{
		USoundAtomCueSheet* AtomCueSheet;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AtomCueSheet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_USoundAtomCueSheet_OnLoadCompleted_BP__DelegateSignature_Statics::NewProp_AtomCueSheet = { "AtomCueSheet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventOnLoadCompleted_BP_Parms, AtomCueSheet), Z_Construct_UClass_USoundAtomCueSheet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USoundAtomCueSheet_OnLoadCompleted_BP__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USoundAtomCueSheet_OnLoadCompleted_BP__DelegateSignature_Statics::NewProp_AtomCueSheet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USoundAtomCueSheet_OnLoadCompleted_BP__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USoundAtomCueSheet_OnLoadCompleted_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "OnLoadCompleted_BP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_USoundAtomCueSheet_OnLoadCompleted_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USoundAtomCueSheet_OnLoadCompleted_BP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_USoundAtomCueSheet_OnLoadCompleted_BP__DelegateSignature_Statics::SoundAtomCueSheet_eventOnLoadCompleted_BP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USoundAtomCueSheet_OnLoadCompleted_BP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_USoundAtomCueSheet_OnLoadCompleted_BP__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_USoundAtomCueSheet_OnLoadCompleted_BP__DelegateSignature_Statics::SoundAtomCueSheet_eventOnLoadCompleted_BP_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_USoundAtomCueSheet_OnLoadCompleted_BP__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USoundAtomCueSheet_OnLoadCompleted_BP__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void USoundAtomCueSheet::FOnLoadCompleted_BP_DelegateWrapper(const FMulticastScriptDelegate& OnLoadCompleted_BP, USoundAtomCueSheet* AtomCueSheet)
{
	struct SoundAtomCueSheet_eventOnLoadCompleted_BP_Parms
	{
		USoundAtomCueSheet* AtomCueSheet;
	};
	SoundAtomCueSheet_eventOnLoadCompleted_BP_Parms Parms;
	Parms.AtomCueSheet=AtomCueSheet;
	OnLoadCompleted_BP.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnLoadCompleted_BP

// Begin Class USoundAtomCueSheet Function ApplyDspBusSnapshot
struct Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics
{
	struct SoundAtomCueSheet_eventApplyDspBusSnapshot_Parms
	{
		FString SnapshotName;
		int32 Milliseconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SnapshotName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Milliseconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::NewProp_SnapshotName = { "SnapshotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventApplyDspBusSnapshot_Parms, SnapshotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapshotName_MetaData), NewProp_SnapshotName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::NewProp_Milliseconds = { "Milliseconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventApplyDspBusSnapshot_Parms, Milliseconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::NewProp_SnapshotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::NewProp_Milliseconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "ApplyDspBusSnapshot", nullptr, nullptr, Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::SoundAtomCueSheet_eventApplyDspBusSnapshot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::SoundAtomCueSheet_eventApplyDspBusSnapshot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundAtomCueSheet::execApplyDspBusSnapshot)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SnapshotName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Milliseconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	USoundAtomCueSheet::ApplyDspBusSnapshot(Z_Param_SnapshotName,Z_Param_Milliseconds);
	P_NATIVE_END;
}
// End Class USoundAtomCueSheet Function ApplyDspBusSnapshot

// Begin Class USoundAtomCueSheet Function AsyncLoadCueSheet
struct Z_Construct_UFunction_USoundAtomCueSheet_AsyncLoadCueSheet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_AsyncLoadCueSheet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "AsyncLoadCueSheet", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_AsyncLoadCueSheet_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundAtomCueSheet_AsyncLoadCueSheet_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USoundAtomCueSheet_AsyncLoadCueSheet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_AsyncLoadCueSheet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundAtomCueSheet::execAsyncLoadCueSheet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AsyncLoadCueSheet();
	P_NATIVE_END;
}
// End Class USoundAtomCueSheet Function AsyncLoadCueSheet

// Begin Class USoundAtomCueSheet Function AttachDspBusSetting
struct Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics
{
	struct SoundAtomCueSheet_eventAttachDspBusSetting_Parms
	{
		FString SettingName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettingName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SettingName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::NewProp_SettingName = { "SettingName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventAttachDspBusSetting_Parms, SettingName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettingName_MetaData), NewProp_SettingName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::NewProp_SettingName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "AttachDspBusSetting", nullptr, nullptr, Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::SoundAtomCueSheet_eventAttachDspBusSetting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::SoundAtomCueSheet_eventAttachDspBusSetting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundAtomCueSheet::execAttachDspBusSetting)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SettingName);
	P_FINISH;
	P_NATIVE_BEGIN;
	USoundAtomCueSheet::AttachDspBusSetting(Z_Param_SettingName);
	P_NATIVE_END;
}
// End Class USoundAtomCueSheet Function AttachDspBusSetting

// Begin Class USoundAtomCueSheet Function BP_GetCueInfoFromId
struct Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics
{
	struct SoundAtomCueSheet_eventBP_GetCueInfoFromId_Parms
	{
		int32 ID;
		FAtomCueInfo CueInfo;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CueInfo;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventBP_GetCueInfoFromId_Parms, ID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::NewProp_CueInfo = { "CueInfo", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventBP_GetCueInfoFromId_Parms, CueInfo), Z_Construct_UScriptStruct_FAtomCueInfo, METADATA_PARAMS(0, nullptr) }; // 2085705809
void Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SoundAtomCueSheet_eventBP_GetCueInfoFromId_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SoundAtomCueSheet_eventBP_GetCueInfoFromId_Parms), &Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::NewProp_CueInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "BP_GetCueInfoFromId", nullptr, nullptr, Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::SoundAtomCueSheet_eventBP_GetCueInfoFromId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::SoundAtomCueSheet_eventBP_GetCueInfoFromId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundAtomCueSheet::execBP_GetCueInfoFromId)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ID);
	P_GET_STRUCT_REF(FAtomCueInfo,Z_Param_Out_CueInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BP_GetCueInfoFromId(Z_Param_ID,Z_Param_Out_CueInfo);
	P_NATIVE_END;
}
// End Class USoundAtomCueSheet Function BP_GetCueInfoFromId

// Begin Class USoundAtomCueSheet Function BP_GetCueInfoFromIndex
struct Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics
{
	struct SoundAtomCueSheet_eventBP_GetCueInfoFromIndex_Parms
	{
		int32 Index;
		FAtomCueInfo CueInfo;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CueInfo;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventBP_GetCueInfoFromIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::NewProp_CueInfo = { "CueInfo", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventBP_GetCueInfoFromIndex_Parms, CueInfo), Z_Construct_UScriptStruct_FAtomCueInfo, METADATA_PARAMS(0, nullptr) }; // 2085705809
void Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SoundAtomCueSheet_eventBP_GetCueInfoFromIndex_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SoundAtomCueSheet_eventBP_GetCueInfoFromIndex_Parms), &Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::NewProp_CueInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "BP_GetCueInfoFromIndex", nullptr, nullptr, Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::SoundAtomCueSheet_eventBP_GetCueInfoFromIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::SoundAtomCueSheet_eventBP_GetCueInfoFromIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundAtomCueSheet::execBP_GetCueInfoFromIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_STRUCT_REF(FAtomCueInfo,Z_Param_Out_CueInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BP_GetCueInfoFromIndex(Z_Param_Index,Z_Param_Out_CueInfo);
	P_NATIVE_END;
}
// End Class USoundAtomCueSheet Function BP_GetCueInfoFromIndex

// Begin Class USoundAtomCueSheet Function BP_GetCueInfoFromName
struct Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics
{
	struct SoundAtomCueSheet_eventBP_GetCueInfoFromName_Parms
	{
		FString Name;
		FAtomCueInfo CueInfo;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CueInfo;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventBP_GetCueInfoFromName_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::NewProp_CueInfo = { "CueInfo", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventBP_GetCueInfoFromName_Parms, CueInfo), Z_Construct_UScriptStruct_FAtomCueInfo, METADATA_PARAMS(0, nullptr) }; // 2085705809
void Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SoundAtomCueSheet_eventBP_GetCueInfoFromName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SoundAtomCueSheet_eventBP_GetCueInfoFromName_Parms), &Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::NewProp_CueInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "BP_GetCueInfoFromName", nullptr, nullptr, Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::SoundAtomCueSheet_eventBP_GetCueInfoFromName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::SoundAtomCueSheet_eventBP_GetCueInfoFromName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundAtomCueSheet::execBP_GetCueInfoFromName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_STRUCT_REF(FAtomCueInfo,Z_Param_Out_CueInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BP_GetCueInfoFromName(Z_Param_Name,Z_Param_Out_CueInfo);
	P_NATIVE_END;
}
// End Class USoundAtomCueSheet Function BP_GetCueInfoFromName

// Begin Class USoundAtomCueSheet Function DetachDspBusSetting
struct Z_Construct_UFunction_USoundAtomCueSheet_DetachDspBusSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_DetachDspBusSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "DetachDspBusSetting", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_DetachDspBusSetting_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundAtomCueSheet_DetachDspBusSetting_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USoundAtomCueSheet_DetachDspBusSetting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_DetachDspBusSetting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundAtomCueSheet::execDetachDspBusSetting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	USoundAtomCueSheet::DetachDspBusSetting();
	P_NATIVE_END;
}
// End Class USoundAtomCueSheet Function DetachDspBusSetting

// Begin Class USoundAtomCueSheet Function DisableAutoLifetimeManagement
struct Z_Construct_UFunction_USoundAtomCueSheet_DisableAutoLifetimeManagement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_DisableAutoLifetimeManagement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "DisableAutoLifetimeManagement", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_DisableAutoLifetimeManagement_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundAtomCueSheet_DisableAutoLifetimeManagement_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USoundAtomCueSheet_DisableAutoLifetimeManagement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_DisableAutoLifetimeManagement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundAtomCueSheet::execDisableAutoLifetimeManagement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableAutoLifetimeManagement();
	P_NATIVE_END;
}
// End Class USoundAtomCueSheet Function DisableAutoLifetimeManagement

// Begin Class USoundAtomCueSheet Function GetAtomCueById
struct Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics
{
	struct SoundAtomCueSheet_eventGetAtomCueById_Parms
	{
		int32 CueId;
		USoundAtomCue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CueId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::NewProp_CueId = { "CueId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventGetAtomCueById_Parms, CueId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventGetAtomCueById_Parms, ReturnValue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::NewProp_CueId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "GetAtomCueById", nullptr, nullptr, Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::SoundAtomCueSheet_eventGetAtomCueById_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::SoundAtomCueSheet_eventGetAtomCueById_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundAtomCueSheet::execGetAtomCueById)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_CueId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USoundAtomCue**)Z_Param__Result=P_THIS->GetAtomCueById(Z_Param_CueId);
	P_NATIVE_END;
}
// End Class USoundAtomCueSheet Function GetAtomCueById

// Begin Class USoundAtomCueSheet Function GetAtomCueByIndex
struct Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics
{
	struct SoundAtomCueSheet_eventGetAtomCueByIndex_Parms
	{
		int32 CueIndex;
		USoundAtomCue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CueIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::NewProp_CueIndex = { "CueIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventGetAtomCueByIndex_Parms, CueIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventGetAtomCueByIndex_Parms, ReturnValue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::NewProp_CueIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "GetAtomCueByIndex", nullptr, nullptr, Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::SoundAtomCueSheet_eventGetAtomCueByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::SoundAtomCueSheet_eventGetAtomCueByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundAtomCueSheet::execGetAtomCueByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_CueIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USoundAtomCue**)Z_Param__Result=P_THIS->GetAtomCueByIndex(Z_Param_CueIndex);
	P_NATIVE_END;
}
// End Class USoundAtomCueSheet Function GetAtomCueByIndex

// Begin Class USoundAtomCueSheet Function GetAtomCueByName
struct Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics
{
	struct SoundAtomCueSheet_eventGetAtomCueByName_Parms
	{
		FString CueName;
		USoundAtomCue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CueName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CueName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::NewProp_CueName = { "CueName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventGetAtomCueByName_Parms, CueName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CueName_MetaData), NewProp_CueName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventGetAtomCueByName_Parms, ReturnValue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::NewProp_CueName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "GetAtomCueByName", nullptr, nullptr, Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::SoundAtomCueSheet_eventGetAtomCueByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::SoundAtomCueSheet_eventGetAtomCueByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundAtomCueSheet::execGetAtomCueByName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CueName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USoundAtomCue**)Z_Param__Result=P_THIS->GetAtomCueByName(Z_Param_CueName);
	P_NATIVE_END;
}
// End Class USoundAtomCueSheet Function GetAtomCueByName

// Begin Class USoundAtomCueSheet Function GetAutoLifetimeManagement
struct Z_Construct_UFunction_USoundAtomCueSheet_GetAutoLifetimeManagement_Statics
{
	struct SoundAtomCueSheet_eventGetAutoLifetimeManagement_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USoundAtomCueSheet_GetAutoLifetimeManagement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SoundAtomCueSheet_eventGetAutoLifetimeManagement_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_GetAutoLifetimeManagement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SoundAtomCueSheet_eventGetAutoLifetimeManagement_Parms), &Z_Construct_UFunction_USoundAtomCueSheet_GetAutoLifetimeManagement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_GetAutoLifetimeManagement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_GetAutoLifetimeManagement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_GetAutoLifetimeManagement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_GetAutoLifetimeManagement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "GetAutoLifetimeManagement", nullptr, nullptr, Z_Construct_UFunction_USoundAtomCueSheet_GetAutoLifetimeManagement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_GetAutoLifetimeManagement_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundAtomCueSheet_GetAutoLifetimeManagement_Statics::SoundAtomCueSheet_eventGetAutoLifetimeManagement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_GetAutoLifetimeManagement_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundAtomCueSheet_GetAutoLifetimeManagement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundAtomCueSheet_GetAutoLifetimeManagement_Statics::SoundAtomCueSheet_eventGetAutoLifetimeManagement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundAtomCueSheet_GetAutoLifetimeManagement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_GetAutoLifetimeManagement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundAtomCueSheet::execGetAutoLifetimeManagement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetAutoLifetimeManagement();
	P_NATIVE_END;
}
// End Class USoundAtomCueSheet Function GetAutoLifetimeManagement

// Begin Class USoundAtomCueSheet Function GetNumCues
struct Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues_Statics
{
	struct SoundAtomCueSheet_eventGetNumCues_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventGetNumCues_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "GetNumCues", nullptr, nullptr, Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues_Statics::SoundAtomCueSheet_eventGetNumCues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues_Statics::SoundAtomCueSheet_eventGetNumCues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundAtomCueSheet::execGetNumCues)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumCues();
	P_NATIVE_END;
}
// End Class USoundAtomCueSheet Function GetNumCues

// Begin Class USoundAtomCueSheet Function IsAcbDataContained
struct Z_Construct_UFunction_USoundAtomCueSheet_IsAcbDataContained_Statics
{
	struct SoundAtomCueSheet_eventIsAcbDataContained_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USoundAtomCueSheet_IsAcbDataContained_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SoundAtomCueSheet_eventIsAcbDataContained_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_IsAcbDataContained_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SoundAtomCueSheet_eventIsAcbDataContained_Parms), &Z_Construct_UFunction_USoundAtomCueSheet_IsAcbDataContained_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_IsAcbDataContained_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_IsAcbDataContained_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_IsAcbDataContained_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_IsAcbDataContained_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "IsAcbDataContained", nullptr, nullptr, Z_Construct_UFunction_USoundAtomCueSheet_IsAcbDataContained_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_IsAcbDataContained_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundAtomCueSheet_IsAcbDataContained_Statics::SoundAtomCueSheet_eventIsAcbDataContained_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_IsAcbDataContained_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundAtomCueSheet_IsAcbDataContained_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundAtomCueSheet_IsAcbDataContained_Statics::SoundAtomCueSheet_eventIsAcbDataContained_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundAtomCueSheet_IsAcbDataContained()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_IsAcbDataContained_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundAtomCueSheet::execIsAcbDataContained)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAcbDataContained();
	P_NATIVE_END;
}
// End Class USoundAtomCueSheet Function IsAcbDataContained

// Begin Class USoundAtomCueSheet Function IsLoaded
struct Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics
{
	struct SoundAtomCueSheet_eventIsLoaded_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SoundAtomCueSheet_eventIsLoaded_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SoundAtomCueSheet_eventIsLoaded_Parms), &Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "IsLoaded", nullptr, nullptr, Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::SoundAtomCueSheet_eventIsLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::SoundAtomCueSheet_eventIsLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundAtomCueSheet::execIsLoaded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLoaded();
	P_NATIVE_END;
}
// End Class USoundAtomCueSheet Function IsLoaded

// Begin Class USoundAtomCueSheet Function IsRawAcbDataAvailable
struct Z_Construct_UFunction_USoundAtomCueSheet_IsRawAcbDataAvailable_Statics
{
	struct SoundAtomCueSheet_eventIsRawAcbDataAvailable_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USoundAtomCueSheet_IsRawAcbDataAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SoundAtomCueSheet_eventIsRawAcbDataAvailable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_IsRawAcbDataAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SoundAtomCueSheet_eventIsRawAcbDataAvailable_Parms), &Z_Construct_UFunction_USoundAtomCueSheet_IsRawAcbDataAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_IsRawAcbDataAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_IsRawAcbDataAvailable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_IsRawAcbDataAvailable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_IsRawAcbDataAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "IsRawAcbDataAvailable", nullptr, nullptr, Z_Construct_UFunction_USoundAtomCueSheet_IsRawAcbDataAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_IsRawAcbDataAvailable_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundAtomCueSheet_IsRawAcbDataAvailable_Statics::SoundAtomCueSheet_eventIsRawAcbDataAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_IsRawAcbDataAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundAtomCueSheet_IsRawAcbDataAvailable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundAtomCueSheet_IsRawAcbDataAvailable_Statics::SoundAtomCueSheet_eventIsRawAcbDataAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundAtomCueSheet_IsRawAcbDataAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_IsRawAcbDataAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundAtomCueSheet::execIsRawAcbDataAvailable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsRawAcbDataAvailable();
	P_NATIVE_END;
}
// End Class USoundAtomCueSheet Function IsRawAcbDataAvailable

// Begin Class USoundAtomCueSheet Function LoadAcb
struct Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics
{
	struct SoundAtomCueSheet_eventLoadAcb_Parms
	{
		FName AcbName;
		bool bAddToLevel;
		USoundAtomCueSheet* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AcbName;
	static void NewProp_bAddToLevel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddToLevel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::NewProp_AcbName = { "AcbName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventLoadAcb_Parms, AcbName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::NewProp_bAddToLevel_SetBit(void* Obj)
{
	((SoundAtomCueSheet_eventLoadAcb_Parms*)Obj)->bAddToLevel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::NewProp_bAddToLevel = { "bAddToLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SoundAtomCueSheet_eventLoadAcb_Parms), &Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::NewProp_bAddToLevel_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventLoadAcb_Parms, ReturnValue), Z_Construct_UClass_USoundAtomCueSheet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::NewProp_AcbName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::NewProp_bAddToLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "LoadAcb", nullptr, nullptr, Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::SoundAtomCueSheet_eventLoadAcb_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::SoundAtomCueSheet_eventLoadAcb_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundAtomCueSheet::execLoadAcb)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_AcbName);
	P_GET_UBOOL(Z_Param_bAddToLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USoundAtomCueSheet**)Z_Param__Result=USoundAtomCueSheet::LoadAcb(Z_Param_AcbName,Z_Param_bAddToLevel);
	P_NATIVE_END;
}
// End Class USoundAtomCueSheet Function LoadAcb

// Begin Class USoundAtomCueSheet Function LoadAtomCueSheet
struct Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics
{
	struct SoundAtomCueSheet_eventLoadAtomCueSheet_Parms
	{
		USoundAtomCueSheet* CueSheet;
		bool bAddToLevel;
		USoundAtomCueSheet* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CueSheet;
	static void NewProp_bAddToLevel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddToLevel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::NewProp_CueSheet = { "CueSheet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventLoadAtomCueSheet_Parms, CueSheet), Z_Construct_UClass_USoundAtomCueSheet_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::NewProp_bAddToLevel_SetBit(void* Obj)
{
	((SoundAtomCueSheet_eventLoadAtomCueSheet_Parms*)Obj)->bAddToLevel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::NewProp_bAddToLevel = { "bAddToLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SoundAtomCueSheet_eventLoadAtomCueSheet_Parms), &Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::NewProp_bAddToLevel_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventLoadAtomCueSheet_Parms, ReturnValue), Z_Construct_UClass_USoundAtomCueSheet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::NewProp_CueSheet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::NewProp_bAddToLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "LoadAtomCueSheet", nullptr, nullptr, Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::SoundAtomCueSheet_eventLoadAtomCueSheet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::SoundAtomCueSheet_eventLoadAtomCueSheet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundAtomCueSheet::execLoadAtomCueSheet)
{
	P_GET_OBJECT(USoundAtomCueSheet,Z_Param_CueSheet);
	P_GET_UBOOL(Z_Param_bAddToLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USoundAtomCueSheet**)Z_Param__Result=USoundAtomCueSheet::LoadAtomCueSheet(Z_Param_CueSheet,Z_Param_bAddToLevel);
	P_NATIVE_END;
}
// End Class USoundAtomCueSheet Function LoadAtomCueSheet

// Begin Class USoundAtomCueSheet Function MakeSureCueSheetIsLoaded
struct Z_Construct_UFunction_USoundAtomCueSheet_MakeSureCueSheetIsLoaded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_MakeSureCueSheetIsLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "MakeSureCueSheetIsLoaded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_MakeSureCueSheetIsLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundAtomCueSheet_MakeSureCueSheetIsLoaded_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USoundAtomCueSheet_MakeSureCueSheetIsLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_MakeSureCueSheetIsLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundAtomCueSheet::execMakeSureCueSheetIsLoaded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MakeSureCueSheetIsLoaded();
	P_NATIVE_END;
}
// End Class USoundAtomCueSheet Function MakeSureCueSheetIsLoaded

// Begin Class USoundAtomCueSheet Function ReleaseAcb
struct Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb_Statics
{
	struct SoundAtomCueSheet_eventReleaseAcb_Parms
	{
		FName AcbName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AcbName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb_Statics::NewProp_AcbName = { "AcbName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventReleaseAcb_Parms, AcbName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb_Statics::NewProp_AcbName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "ReleaseAcb", nullptr, nullptr, Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb_Statics::SoundAtomCueSheet_eventReleaseAcb_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb_Statics::SoundAtomCueSheet_eventReleaseAcb_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundAtomCueSheet::execReleaseAcb)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_AcbName);
	P_FINISH;
	P_NATIVE_BEGIN;
	USoundAtomCueSheet::ReleaseAcb(Z_Param_AcbName);
	P_NATIVE_END;
}
// End Class USoundAtomCueSheet Function ReleaseAcb

// Begin Class USoundAtomCueSheet
void USoundAtomCueSheet::StaticRegisterNativesUSoundAtomCueSheet()
{
	UClass* Class = USoundAtomCueSheet::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyDspBusSnapshot", &USoundAtomCueSheet::execApplyDspBusSnapshot },
		{ "AsyncLoadCueSheet", &USoundAtomCueSheet::execAsyncLoadCueSheet },
		{ "AttachDspBusSetting", &USoundAtomCueSheet::execAttachDspBusSetting },
		{ "BP_GetCueInfoFromId", &USoundAtomCueSheet::execBP_GetCueInfoFromId },
		{ "BP_GetCueInfoFromIndex", &USoundAtomCueSheet::execBP_GetCueInfoFromIndex },
		{ "BP_GetCueInfoFromName", &USoundAtomCueSheet::execBP_GetCueInfoFromName },
		{ "DetachDspBusSetting", &USoundAtomCueSheet::execDetachDspBusSetting },
		{ "DisableAutoLifetimeManagement", &USoundAtomCueSheet::execDisableAutoLifetimeManagement },
		{ "GetAtomCueById", &USoundAtomCueSheet::execGetAtomCueById },
		{ "GetAtomCueByIndex", &USoundAtomCueSheet::execGetAtomCueByIndex },
		{ "GetAtomCueByName", &USoundAtomCueSheet::execGetAtomCueByName },
		{ "GetAutoLifetimeManagement", &USoundAtomCueSheet::execGetAutoLifetimeManagement },
		{ "GetNumCues", &USoundAtomCueSheet::execGetNumCues },
		{ "IsAcbDataContained", &USoundAtomCueSheet::execIsAcbDataContained },
		{ "IsLoaded", &USoundAtomCueSheet::execIsLoaded },
		{ "IsRawAcbDataAvailable", &USoundAtomCueSheet::execIsRawAcbDataAvailable },
		{ "LoadAcb", &USoundAtomCueSheet::execLoadAcb },
		{ "LoadAtomCueSheet", &USoundAtomCueSheet::execLoadAtomCueSheet },
		{ "MakeSureCueSheetIsLoaded", &USoundAtomCueSheet::execMakeSureCueSheetIsLoaded },
		{ "ReleaseAcb", &USoundAtomCueSheet::execReleaseAcb },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundAtomCueSheet);
UClass* Z_Construct_UClass_USoundAtomCueSheet_NoRegister()
{
	return USoundAtomCueSheet::StaticClass();
}
struct Z_Construct_UClass_USoundAtomCueSheet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SoundAtomCueSheet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcbFilePath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCueSheet" },
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CueSheetName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCueSheet" },
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSlots_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCueSheet" },
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAwbDirectory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCueSheet" },
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AwbDirectory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCueSheet" },
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCueSheet" },
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CueInfos_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCueSheet" },
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLoadCompleted_BP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCueSheet" },
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AcbFilePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CueSheetName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSlots;
	static void NewProp_bOverrideAwbDirectory_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAwbDirectory;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AwbDirectory;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AdditionalData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CueInfos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CueInfos;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLoadCompleted_BP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot, "ApplyDspBusSnapshot" }, // 727552357
		{ &Z_Construct_UFunction_USoundAtomCueSheet_AsyncLoadCueSheet, "AsyncLoadCueSheet" }, // 1035638167
		{ &Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting, "AttachDspBusSetting" }, // 323607505
		{ &Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId, "BP_GetCueInfoFromId" }, // 2758502535
		{ &Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex, "BP_GetCueInfoFromIndex" }, // 2688164283
		{ &Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName, "BP_GetCueInfoFromName" }, // 496238056
		{ &Z_Construct_UFunction_USoundAtomCueSheet_DetachDspBusSetting, "DetachDspBusSetting" }, // 3803049431
		{ &Z_Construct_UFunction_USoundAtomCueSheet_DisableAutoLifetimeManagement, "DisableAutoLifetimeManagement" }, // 3818917258
		{ &Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById, "GetAtomCueById" }, // 1697019629
		{ &Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex, "GetAtomCueByIndex" }, // 1225035020
		{ &Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName, "GetAtomCueByName" }, // 2819418882
		{ &Z_Construct_UFunction_USoundAtomCueSheet_GetAutoLifetimeManagement, "GetAutoLifetimeManagement" }, // 597847022
		{ &Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues, "GetNumCues" }, // 1603842485
		{ &Z_Construct_UFunction_USoundAtomCueSheet_IsAcbDataContained, "IsAcbDataContained" }, // 2941287473
		{ &Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded, "IsLoaded" }, // 1032594289
		{ &Z_Construct_UFunction_USoundAtomCueSheet_IsRawAcbDataAvailable, "IsRawAcbDataAvailable" }, // 607109
		{ &Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb, "LoadAcb" }, // 1486717600
		{ &Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet, "LoadAtomCueSheet" }, // 891427336
		{ &Z_Construct_UFunction_USoundAtomCueSheet_MakeSureCueSheetIsLoaded, "MakeSureCueSheetIsLoaded" }, // 3013365052
		{ &Z_Construct_UDelegateFunction_USoundAtomCueSheet_OnLoadCompleted_BP__DelegateSignature, "OnLoadCompleted_BP__DelegateSignature" }, // 2729724923
		{ &Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb, "ReleaseAcb" }, // 1775163455
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundAtomCueSheet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AcbFilePath = { "AcbFilePath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundAtomCueSheet, AcbFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcbFilePath_MetaData), NewProp_AcbFilePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_CueSheetName = { "CueSheetName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundAtomCueSheet, CueSheetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CueSheetName_MetaData), NewProp_CueSheetName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_NumSlots = { "NumSlots", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundAtomCueSheet, NumSlots), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSlots_MetaData), NewProp_NumSlots_MetaData) };
void Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_bOverrideAwbDirectory_SetBit(void* Obj)
{
	((USoundAtomCueSheet*)Obj)->bOverrideAwbDirectory = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_bOverrideAwbDirectory = { "bOverrideAwbDirectory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USoundAtomCueSheet), &Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_bOverrideAwbDirectory_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideAwbDirectory_MetaData), NewProp_bOverrideAwbDirectory_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AwbDirectory = { "AwbDirectory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundAtomCueSheet, AwbDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AwbDirectory_MetaData), NewProp_AwbDirectory_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AdditionalData = { "AdditionalData", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundAtomCueSheet, AdditionalData), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalData_MetaData), NewProp_AdditionalData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_CueInfos_Inner = { "CueInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAtomCueInfo, METADATA_PARAMS(0, nullptr) }; // 2085705809
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_CueInfos = { "CueInfos", nullptr, (EPropertyFlags)0x00200c0000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundAtomCueSheet, CueInfos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CueInfos_MetaData), NewProp_CueInfos_MetaData) }; // 2085705809
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_OnLoadCompleted_BP = { "OnLoadCompleted_BP", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundAtomCueSheet, OnLoadCompleted_BP), Z_Construct_UDelegateFunction_USoundAtomCueSheet_OnLoadCompleted_BP__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLoadCompleted_BP_MetaData), NewProp_OnLoadCompleted_BP_MetaData) }; // 2729724923
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundAtomCueSheet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AcbFilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_CueSheetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_NumSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_bOverrideAwbDirectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AwbDirectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AdditionalData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_CueInfos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_CueInfos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_OnLoadCompleted_BP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USoundAtomCueSheet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundAtomCueSheet_Statics::ClassParams = {
	&USoundAtomCueSheet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USoundAtomCueSheet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheet_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheet_Statics::Class_MetaDataParams), Z_Construct_UClass_USoundAtomCueSheet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USoundAtomCueSheet()
{
	if (!Z_Registration_Info_UClass_USoundAtomCueSheet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundAtomCueSheet.OuterSingleton, Z_Construct_UClass_USoundAtomCueSheet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USoundAtomCueSheet.OuterSingleton;
}
template<> CRIWARERUNTIME_API UClass* StaticClass<USoundAtomCueSheet>()
{
	return USoundAtomCueSheet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USoundAtomCueSheet);
USoundAtomCueSheet::~USoundAtomCueSheet() {}
// End Class USoundAtomCueSheet

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USoundAtomCueSheet, USoundAtomCueSheet::StaticClass, TEXT("USoundAtomCueSheet"), &Z_Registration_Info_UClass_USoundAtomCueSheet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundAtomCueSheet), 2649972378U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h_2934222690(TEXT("/Script/CriWareRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
