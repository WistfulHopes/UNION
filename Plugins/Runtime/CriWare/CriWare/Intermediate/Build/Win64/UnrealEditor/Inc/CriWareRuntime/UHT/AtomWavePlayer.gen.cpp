// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomWavePlayer.h"
#include "CriWareRuntime/Public/AtomWaveInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomWavePlayer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomWavePlayer();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomWavePlayer_NoRegister();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomWavePlayState();
CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_CriWareRuntime_OnWaveFinished__DelegateSignature();
CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature();
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomWaveInfo();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Class UAtomWavePlayer Function AdjustVolume
struct Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics
{
	struct AtomWavePlayer_eventAdjustVolume_Parms
	{
		float AdjustVolumeDuration;
		float AdjustVolumeLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomWavePlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustVolumeDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustVolumeLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::NewProp_AdjustVolumeDuration = { "AdjustVolumeDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomWavePlayer_eventAdjustVolume_Parms, AdjustVolumeDuration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::NewProp_AdjustVolumeLevel = { "AdjustVolumeLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomWavePlayer_eventAdjustVolume_Parms, AdjustVolumeLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::NewProp_AdjustVolumeDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::NewProp_AdjustVolumeLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "AdjustVolume", nullptr, nullptr, Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::AtomWavePlayer_eventAdjustVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::AtomWavePlayer_eventAdjustVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomWavePlayer::execAdjustVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AdjustVolumeDuration);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AdjustVolumeLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AdjustVolume(Z_Param_AdjustVolumeDuration,Z_Param_AdjustVolumeLevel);
	P_NATIVE_END;
}
// End Class UAtomWavePlayer Function AdjustVolume

// Begin Class UAtomWavePlayer Function GetCue
struct Z_Construct_UFunction_UAtomWavePlayer_GetCue_Statics
{
	struct AtomWavePlayer_eventGetCue_Parms
	{
		USoundAtomCue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomWavePlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomWavePlayer_GetCue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomWavePlayer_eventGetCue_Parms, ReturnValue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_GetCue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_GetCue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_GetCue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_GetCue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "GetCue", nullptr, nullptr, Z_Construct_UFunction_UAtomWavePlayer_GetCue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_GetCue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomWavePlayer_GetCue_Statics::AtomWavePlayer_eventGetCue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_GetCue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomWavePlayer_GetCue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomWavePlayer_GetCue_Statics::AtomWavePlayer_eventGetCue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomWavePlayer_GetCue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_GetCue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomWavePlayer::execGetCue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USoundAtomCue**)Z_Param__Result=P_THIS->GetCue();
	P_NATIVE_END;
}
// End Class UAtomWavePlayer Function GetCue

// Begin Class UAtomWavePlayer Function GetPlayState
struct Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics
{
	struct AtomWavePlayer_eventGetPlayState_Parms
	{
		EAtomWavePlayState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomWavePlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomWavePlayer_eventGetPlayState_Parms, ReturnValue), Z_Construct_UEnum_CriWareRuntime_EAtomWavePlayState, METADATA_PARAMS(0, nullptr) }; // 1206577548
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "GetPlayState", nullptr, nullptr, Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::AtomWavePlayer_eventGetPlayState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::AtomWavePlayer_eventGetPlayState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomWavePlayer_GetPlayState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomWavePlayer::execGetPlayState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EAtomWavePlayState*)Z_Param__Result=P_THIS->GetPlayState();
	P_NATIVE_END;
}
// End Class UAtomWavePlayer Function GetPlayState

// Begin Class UAtomWavePlayer Function GetTime
struct Z_Construct_UFunction_UAtomWavePlayer_GetTime_Statics
{
	struct AtomWavePlayer_eventGetTime_Parms
	{
		FTimespan ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomWavePlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomWavePlayer_GetTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomWavePlayer_eventGetTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_GetTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_GetTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_GetTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_GetTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "GetTime", nullptr, nullptr, Z_Construct_UFunction_UAtomWavePlayer_GetTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_GetTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomWavePlayer_GetTime_Statics::AtomWavePlayer_eventGetTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_GetTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomWavePlayer_GetTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomWavePlayer_GetTime_Statics::AtomWavePlayer_eventGetTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomWavePlayer_GetTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_GetTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomWavePlayer::execGetTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTimespan*)Z_Param__Result=P_THIS->GetTime();
	P_NATIVE_END;
}
// End Class UAtomWavePlayer Function GetTime

// Begin Class UAtomWavePlayer Function GetWaveInfo
struct Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo_Statics
{
	struct AtomWavePlayer_eventGetWaveInfo_Parms
	{
		FAtomWaveInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomWavePlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomWavePlayer_eventGetWaveInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomWaveInfo, METADATA_PARAMS(0, nullptr) }; // 3027014629
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "GetWaveInfo", nullptr, nullptr, Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo_Statics::AtomWavePlayer_eventGetWaveInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo_Statics::AtomWavePlayer_eventGetWaveInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomWavePlayer::execGetWaveInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAtomWaveInfo*)Z_Param__Result=P_THIS->GetWaveInfo();
	P_NATIVE_END;
}
// End Class UAtomWavePlayer Function GetWaveInfo

// Begin Class UAtomWavePlayer Function HasError
struct Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics
{
	struct AtomWavePlayer_eventHasError_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomWavePlayer.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AtomWavePlayer_eventHasError_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AtomWavePlayer_eventHasError_Parms), &Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "HasError", nullptr, nullptr, Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::AtomWavePlayer_eventHasError_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::AtomWavePlayer_eventHasError_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomWavePlayer_HasError()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomWavePlayer::execHasError)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasError();
	P_NATIVE_END;
}
// End Class UAtomWavePlayer Function HasError

// Begin Class UAtomWavePlayer Function IsLooping
struct Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics
{
	struct AtomWavePlayer_eventIsLooping_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomWavePlayer.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AtomWavePlayer_eventIsLooping_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AtomWavePlayer_eventIsLooping_Parms), &Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "IsLooping", nullptr, nullptr, Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::AtomWavePlayer_eventIsLooping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::AtomWavePlayer_eventIsLooping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomWavePlayer_IsLooping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomWavePlayer::execIsLooping)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLooping();
	P_NATIVE_END;
}
// End Class UAtomWavePlayer Function IsLooping

// Begin Class UAtomWavePlayer Function IsPaused
struct Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics
{
	struct AtomWavePlayer_eventIsPaused_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomWavePlayer.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AtomWavePlayer_eventIsPaused_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AtomWavePlayer_eventIsPaused_Parms), &Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "IsPaused", nullptr, nullptr, Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::AtomWavePlayer_eventIsPaused_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::AtomWavePlayer_eventIsPaused_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomWavePlayer_IsPaused()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomWavePlayer::execIsPaused)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPaused();
	P_NATIVE_END;
}
// End Class UAtomWavePlayer Function IsPaused

// Begin Class UAtomWavePlayer Function IsPlaying
struct Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics
{
	struct AtomWavePlayer_eventIsPlaying_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomWavePlayer.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AtomWavePlayer_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AtomWavePlayer_eventIsPlaying_Parms), &Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "IsPlaying", nullptr, nullptr, Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::AtomWavePlayer_eventIsPlaying_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::AtomWavePlayer_eventIsPlaying_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomWavePlayer_IsPlaying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomWavePlayer::execIsPlaying)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlaying();
	P_NATIVE_END;
}
// End Class UAtomWavePlayer Function IsPlaying

// Begin Class UAtomWavePlayer Function Play
struct Z_Construct_UFunction_UAtomWavePlayer_Play_Statics
{
	struct AtomWavePlayer_eventPlay_Parms
	{
		float StartTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomWavePlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomWavePlayer_Play_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomWavePlayer_eventPlay_Parms, StartTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_Play_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_Play_Statics::NewProp_StartTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_Play_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "Play", nullptr, nullptr, Z_Construct_UFunction_UAtomWavePlayer_Play_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_Play_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomWavePlayer_Play_Statics::AtomWavePlayer_eventPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_Play_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomWavePlayer_Play_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomWavePlayer_Play_Statics::AtomWavePlayer_eventPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomWavePlayer_Play()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_Play_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomWavePlayer::execPlay)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Play(Z_Param_StartTime);
	P_NATIVE_END;
}
// End Class UAtomWavePlayer Function Play

// Begin Class UAtomWavePlayer Function SetLooping
struct Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics
{
	struct AtomWavePlayer_eventSetLooping_Parms
	{
		bool Looping;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomWavePlayer.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Looping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Looping;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::NewProp_Looping_SetBit(void* Obj)
{
	((AtomWavePlayer_eventSetLooping_Parms*)Obj)->Looping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::NewProp_Looping = { "Looping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AtomWavePlayer_eventSetLooping_Parms), &Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::NewProp_Looping_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AtomWavePlayer_eventSetLooping_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AtomWavePlayer_eventSetLooping_Parms), &Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::NewProp_Looping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "SetLooping", nullptr, nullptr, Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::AtomWavePlayer_eventSetLooping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::AtomWavePlayer_eventSetLooping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomWavePlayer_SetLooping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomWavePlayer::execSetLooping)
{
	P_GET_UBOOL(Z_Param_Looping);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetLooping(Z_Param_Looping);
	P_NATIVE_END;
}
// End Class UAtomWavePlayer Function SetLooping

// Begin Class UAtomWavePlayer Function SetPaused
struct Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics
{
	struct AtomWavePlayer_eventSetPaused_Parms
	{
		bool bPause;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomWavePlayer.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bPause_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPause;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::NewProp_bPause_SetBit(void* Obj)
{
	((AtomWavePlayer_eventSetPaused_Parms*)Obj)->bPause = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::NewProp_bPause = { "bPause", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AtomWavePlayer_eventSetPaused_Parms), &Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::NewProp_bPause_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::NewProp_bPause,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "SetPaused", nullptr, nullptr, Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::AtomWavePlayer_eventSetPaused_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::AtomWavePlayer_eventSetPaused_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomWavePlayer_SetPaused()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomWavePlayer::execSetPaused)
{
	P_GET_UBOOL(Z_Param_bPause);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPaused(Z_Param_bPause);
	P_NATIVE_END;
}
// End Class UAtomWavePlayer Function SetPaused

// Begin Class UAtomWavePlayer Function SetWave
struct Z_Construct_UFunction_UAtomWavePlayer_SetWave_Statics
{
	struct AtomWavePlayer_eventSetWave_Parms
	{
		USoundAtomCue* InCue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomWavePlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InCue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomWavePlayer_SetWave_Statics::NewProp_InCue = { "InCue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomWavePlayer_eventSetWave_Parms, InCue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_SetWave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_SetWave_Statics::NewProp_InCue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_SetWave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_SetWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "SetWave", nullptr, nullptr, Z_Construct_UFunction_UAtomWavePlayer_SetWave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_SetWave_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomWavePlayer_SetWave_Statics::AtomWavePlayer_eventSetWave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_SetWave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomWavePlayer_SetWave_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomWavePlayer_SetWave_Statics::AtomWavePlayer_eventSetWave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomWavePlayer_SetWave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_SetWave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomWavePlayer::execSetWave)
{
	P_GET_OBJECT(USoundAtomCue,Z_Param_InCue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWave(Z_Param_InCue);
	P_NATIVE_END;
}
// End Class UAtomWavePlayer Function SetWave

// Begin Class UAtomWavePlayer Function Stop
struct Z_Construct_UFunction_UAtomWavePlayer_Stop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomWavePlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "Stop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_Stop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomWavePlayer_Stop_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAtomWavePlayer_Stop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_Stop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomWavePlayer::execStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Stop();
	P_NATIVE_END;
}
// End Class UAtomWavePlayer Function Stop

// Begin Class UAtomWavePlayer Function StopDelayed
struct Z_Construct_UFunction_UAtomWavePlayer_StopDelayed_Statics
{
	struct AtomWavePlayer_eventStopDelayed_Parms
	{
		float DelayTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomWavePlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomWavePlayer_StopDelayed_Statics::NewProp_DelayTime = { "DelayTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomWavePlayer_eventStopDelayed_Parms, DelayTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_StopDelayed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_StopDelayed_Statics::NewProp_DelayTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_StopDelayed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_StopDelayed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "StopDelayed", nullptr, nullptr, Z_Construct_UFunction_UAtomWavePlayer_StopDelayed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_StopDelayed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomWavePlayer_StopDelayed_Statics::AtomWavePlayer_eventStopDelayed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_StopDelayed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomWavePlayer_StopDelayed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomWavePlayer_StopDelayed_Statics::AtomWavePlayer_eventStopDelayed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomWavePlayer_StopDelayed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_StopDelayed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomWavePlayer::execStopDelayed)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DelayTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopDelayed(Z_Param_DelayTime);
	P_NATIVE_END;
}
// End Class UAtomWavePlayer Function StopDelayed

// Begin Class UAtomWavePlayer
void UAtomWavePlayer::StaticRegisterNativesUAtomWavePlayer()
{
	UClass* Class = UAtomWavePlayer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AdjustVolume", &UAtomWavePlayer::execAdjustVolume },
		{ "GetCue", &UAtomWavePlayer::execGetCue },
		{ "GetPlayState", &UAtomWavePlayer::execGetPlayState },
		{ "GetTime", &UAtomWavePlayer::execGetTime },
		{ "GetWaveInfo", &UAtomWavePlayer::execGetWaveInfo },
		{ "HasError", &UAtomWavePlayer::execHasError },
		{ "IsLooping", &UAtomWavePlayer::execIsLooping },
		{ "IsPaused", &UAtomWavePlayer::execIsPaused },
		{ "IsPlaying", &UAtomWavePlayer::execIsPlaying },
		{ "Play", &UAtomWavePlayer::execPlay },
		{ "SetLooping", &UAtomWavePlayer::execSetLooping },
		{ "SetPaused", &UAtomWavePlayer::execSetPaused },
		{ "SetWave", &UAtomWavePlayer::execSetWave },
		{ "Stop", &UAtomWavePlayer::execStop },
		{ "StopDelayed", &UAtomWavePlayer::execStopDelayed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomWavePlayer);
UClass* Z_Construct_UClass_UAtomWavePlayer_NoRegister()
{
	return UAtomWavePlayer::StaticClass();
}
struct Z_Construct_UClass_UAtomWavePlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AtomWavePlayer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AtomWavePlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsUISound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomWavePlayer" },
		{ "ModuleRelativePath", "Public/AtomWavePlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWaveFinished_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomWavePlayer" },
		{ "ModuleRelativePath", "Public/AtomWavePlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWavePlaybackPercent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomWavePlayer" },
		{ "ModuleRelativePath", "Public/AtomWavePlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundAtomCue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomWavePlayer" },
		{ "ModuleRelativePath", "Public/AtomWavePlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomWavePlayer" },
		{ "ModuleRelativePath", "Public/AtomWavePlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomWavePlayer" },
		{ "ModuleRelativePath", "Public/AtomWavePlayer.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsUISound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUISound;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWaveFinished;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWavePlaybackPercent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundAtomCue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WaveInfo;
	static void NewProp_bLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume, "AdjustVolume" }, // 3716619998
		{ &Z_Construct_UFunction_UAtomWavePlayer_GetCue, "GetCue" }, // 813277425
		{ &Z_Construct_UFunction_UAtomWavePlayer_GetPlayState, "GetPlayState" }, // 4054616623
		{ &Z_Construct_UFunction_UAtomWavePlayer_GetTime, "GetTime" }, // 638943746
		{ &Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo, "GetWaveInfo" }, // 2071007486
		{ &Z_Construct_UFunction_UAtomWavePlayer_HasError, "HasError" }, // 2734079030
		{ &Z_Construct_UFunction_UAtomWavePlayer_IsLooping, "IsLooping" }, // 3274391608
		{ &Z_Construct_UFunction_UAtomWavePlayer_IsPaused, "IsPaused" }, // 734074725
		{ &Z_Construct_UFunction_UAtomWavePlayer_IsPlaying, "IsPlaying" }, // 370737353
		{ &Z_Construct_UFunction_UAtomWavePlayer_Play, "Play" }, // 3131730502
		{ &Z_Construct_UFunction_UAtomWavePlayer_SetLooping, "SetLooping" }, // 4153373878
		{ &Z_Construct_UFunction_UAtomWavePlayer_SetPaused, "SetPaused" }, // 2843746718
		{ &Z_Construct_UFunction_UAtomWavePlayer_SetWave, "SetWave" }, // 1437700055
		{ &Z_Construct_UFunction_UAtomWavePlayer_Stop, "Stop" }, // 1790162324
		{ &Z_Construct_UFunction_UAtomWavePlayer_StopDelayed, "StopDelayed" }, // 2118531277
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomWavePlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bIsUISound_SetBit(void* Obj)
{
	((UAtomWavePlayer*)Obj)->bIsUISound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bIsUISound = { "bIsUISound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UAtomWavePlayer), &Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bIsUISound_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsUISound_MetaData), NewProp_bIsUISound_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_OnWaveFinished = { "OnWaveFinished", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAtomWavePlayer, OnWaveFinished), Z_Construct_UDelegateFunction_CriWareRuntime_OnWaveFinished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWaveFinished_MetaData), NewProp_OnWaveFinished_MetaData) }; // 2843037537
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_OnWavePlaybackPercent = { "OnWavePlaybackPercent", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAtomWavePlayer, OnWavePlaybackPercent), Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWavePlaybackPercent_MetaData), NewProp_OnWavePlaybackPercent_MetaData) }; // 25060326
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_SoundAtomCue = { "SoundAtomCue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAtomWavePlayer, SoundAtomCue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundAtomCue_MetaData), NewProp_SoundAtomCue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_WaveInfo = { "WaveInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAtomWavePlayer, WaveInfo), Z_Construct_UScriptStruct_FAtomWaveInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveInfo_MetaData), NewProp_WaveInfo_MetaData) }; // 3027014629
void Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bLoop_SetBit(void* Obj)
{
	((UAtomWavePlayer*)Obj)->bLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UAtomWavePlayer), &Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLoop_MetaData), NewProp_bLoop_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomWavePlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bIsUISound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_OnWaveFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_OnWavePlaybackPercent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_SoundAtomCue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_WaveInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bLoop,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAtomWavePlayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAtomWavePlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAtomWavePlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomWavePlayer_Statics::ClassParams = {
	&UAtomWavePlayer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAtomWavePlayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAtomWavePlayer_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAtomWavePlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UAtomWavePlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAtomWavePlayer()
{
	if (!Z_Registration_Info_UClass_UAtomWavePlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomWavePlayer.OuterSingleton, Z_Construct_UClass_UAtomWavePlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAtomWavePlayer.OuterSingleton;
}
template<> CRIWARERUNTIME_API UClass* StaticClass<UAtomWavePlayer>()
{
	return UAtomWavePlayer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomWavePlayer);
UAtomWavePlayer::~UAtomWavePlayer() {}
// End Class UAtomWavePlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomWavePlayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAtomWavePlayer, UAtomWavePlayer::StaticClass, TEXT("UAtomWavePlayer"), &Z_Registration_Info_UClass_UAtomWavePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomWavePlayer), 3033534258U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomWavePlayer_h_1940692426(TEXT("/Script/CriWareRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomWavePlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomWavePlayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
