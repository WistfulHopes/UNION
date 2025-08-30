// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/ManaPlayer.h"
#include "CriWareRuntime/Public/ManaEventPointInfo.h"
#include "CriWareRuntime/Public/ManaPlayerOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManaPlayer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomComponent_NoRegister();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaComponent_NoRegister();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaMovie_NoRegister();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaPlayer();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaPlayer_NoRegister();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaPlaylist_NoRegister();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaSource_NoRegister();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaTexture_NoRegister();
CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaComponentStatus();
CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaMaxFrameDrop();
CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaPlayerTrack();
CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaSubtitlesEncoding();
CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerEventPoint__DelegateSignature();
CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerManaEvent__DelegateSignature();
CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerMovieOpened__DelegateSignature();
CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerMovieOpenFailed__DelegateSignature();
CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerSubtitleChanged__DelegateSignature();
CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UManaPlayer_OnFrameUpdatedDelegate__DelegateSignature();
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FManaEventPointInfo();
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FManaPlayerOptions();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Delegate FOnFrameUpdatedDelegate
struct Z_Construct_UDelegateFunction_UManaPlayer_OnFrameUpdatedDelegate__DelegateSignature_Statics
{
	struct ManaPlayer_eventOnFrameUpdatedDelegate_Parms
	{
		int32 FrameNumber;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_FrameNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UManaPlayer_OnFrameUpdatedDelegate__DelegateSignature_Statics::NewProp_FrameNumber = { "FrameNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventOnFrameUpdatedDelegate_Parms, FrameNumber), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UManaPlayer_OnFrameUpdatedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UManaPlayer_OnFrameUpdatedDelegate__DelegateSignature_Statics::NewProp_FrameNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaPlayer_OnFrameUpdatedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UManaPlayer_OnFrameUpdatedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "OnFrameUpdatedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UManaPlayer_OnFrameUpdatedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaPlayer_OnFrameUpdatedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UManaPlayer_OnFrameUpdatedDelegate__DelegateSignature_Statics::ManaPlayer_eventOnFrameUpdatedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaPlayer_OnFrameUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UManaPlayer_OnFrameUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UManaPlayer_OnFrameUpdatedDelegate__DelegateSignature_Statics::ManaPlayer_eventOnFrameUpdatedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UManaPlayer_OnFrameUpdatedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UManaPlayer_OnFrameUpdatedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UManaPlayer::FOnFrameUpdatedDelegate_DelegateWrapper(const FScriptDelegate& OnFrameUpdatedDelegate, int32 FrameNumber)
{
	struct ManaPlayer_eventOnFrameUpdatedDelegate_Parms
	{
		int32 FrameNumber;
	};
	ManaPlayer_eventOnFrameUpdatedDelegate_Parms Parms;
	Parms.FrameNumber=FrameNumber;
	OnFrameUpdatedDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnFrameUpdatedDelegate

// Begin Class UManaPlayer Function BindOnFrameUpdated
struct Z_Construct_UFunction_UManaPlayer_BindOnFrameUpdated_Statics
{
	struct ManaPlayer_eventBindOnFrameUpdated_Parms
	{
		FScriptDelegate Event;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Event;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UManaPlayer_BindOnFrameUpdated_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventBindOnFrameUpdated_Parms, Event), Z_Construct_UDelegateFunction_UManaPlayer_OnFrameUpdatedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Event_MetaData), NewProp_Event_MetaData) }; // 2096836797
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_BindOnFrameUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_BindOnFrameUpdated_Statics::NewProp_Event,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_BindOnFrameUpdated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_BindOnFrameUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "BindOnFrameUpdated", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_BindOnFrameUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_BindOnFrameUpdated_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_BindOnFrameUpdated_Statics::ManaPlayer_eventBindOnFrameUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_BindOnFrameUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_BindOnFrameUpdated_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_BindOnFrameUpdated_Statics::ManaPlayer_eventBindOnFrameUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_BindOnFrameUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_BindOnFrameUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execBindOnFrameUpdated)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Event);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BindOnFrameUpdated(FOnFrameUpdatedDelegate(Z_Param_Out_Event));
	P_NATIVE_END;
}
// End Class UManaPlayer Function BindOnFrameUpdated

// Begin Class UManaPlayer Function Close
struct Z_Construct_UFunction_UManaPlayer_Close_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_Close_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "Close", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_Close_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_Close_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UManaPlayer_Close()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_Close_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execClose)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Close();
	P_NATIVE_END;
}
// End Class UManaPlayer Function Close

// Begin Class UManaPlayer Function DisableTrack
struct Z_Construct_UFunction_UManaPlayer_DisableTrack_Statics
{
	struct ManaPlayer_eventDisableTrack_Parms
	{
		EManaPlayerTrack TrackType;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TrackType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackType;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManaPlayer_DisableTrack_Statics::NewProp_TrackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManaPlayer_DisableTrack_Statics::NewProp_TrackType = { "TrackType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventDisableTrack_Parms, TrackType), Z_Construct_UEnum_CriWareRuntime_EManaPlayerTrack, METADATA_PARAMS(0, nullptr) }; // 471400301
void Z_Construct_UFunction_UManaPlayer_DisableTrack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ManaPlayer_eventDisableTrack_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_DisableTrack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ManaPlayer_eventDisableTrack_Parms), &Z_Construct_UFunction_UManaPlayer_DisableTrack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_DisableTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_DisableTrack_Statics::NewProp_TrackType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_DisableTrack_Statics::NewProp_TrackType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_DisableTrack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_DisableTrack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_DisableTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "DisableTrack", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_DisableTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_DisableTrack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_DisableTrack_Statics::ManaPlayer_eventDisableTrack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_DisableTrack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_DisableTrack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_DisableTrack_Statics::ManaPlayer_eventDisableTrack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_DisableTrack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_DisableTrack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execDisableTrack)
{
	P_GET_ENUM(EManaPlayerTrack,Z_Param_TrackType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DisableTrack(EManaPlayerTrack(Z_Param_TrackType));
	P_NATIVE_END;
}
// End Class UManaPlayer Function DisableTrack

// Begin Class UManaPlayer Function GetDuration
struct Z_Construct_UFunction_UManaPlayer_GetDuration_Statics
{
	struct ManaPlayer_eventGetDuration_Parms
	{
		FTimespan ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UManaPlayer_GetDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventGetDuration_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_GetDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetDuration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetDuration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_GetDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "GetDuration", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_GetDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_GetDuration_Statics::ManaPlayer_eventGetDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_GetDuration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_GetDuration_Statics::ManaPlayer_eventGetDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_GetDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_GetDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execGetDuration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTimespan*)Z_Param__Result=P_THIS->GetDuration();
	P_NATIVE_END;
}
// End Class UManaPlayer Function GetDuration

// Begin Class UManaPlayer Function GetFrames
struct Z_Construct_UFunction_UManaPlayer_GetFrames_Statics
{
	struct ManaPlayer_eventGetFrames_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaPlayer_GetFrames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventGetFrames_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_GetFrames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetFrames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetFrames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_GetFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "GetFrames", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_GetFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetFrames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_GetFrames_Statics::ManaPlayer_eventGetFrames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetFrames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_GetFrames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_GetFrames_Statics::ManaPlayer_eventGetFrames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_GetFrames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_GetFrames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execGetFrames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetFrames();
	P_NATIVE_END;
}
// End Class UManaPlayer Function GetFrames

// Begin Class UManaPlayer Function GetMovieFrames
struct Z_Construct_UFunction_UManaPlayer_GetMovieFrames_Statics
{
	struct ManaPlayer_eventGetMovieFrames_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaPlayer_GetMovieFrames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventGetMovieFrames_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_GetMovieFrames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetMovieFrames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetMovieFrames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_GetMovieFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "GetMovieFrames", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_GetMovieFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetMovieFrames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_GetMovieFrames_Statics::ManaPlayer_eventGetMovieFrames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetMovieFrames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_GetMovieFrames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_GetMovieFrames_Statics::ManaPlayer_eventGetMovieFrames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_GetMovieFrames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_GetMovieFrames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execGetMovieFrames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMovieFrames();
	P_NATIVE_END;
}
// End Class UManaPlayer Function GetMovieFrames

// Begin Class UManaPlayer Function GetMovieSource
struct Z_Construct_UFunction_UManaPlayer_GetMovieSource_Statics
{
	struct ManaPlayer_eventGetMovieSource_Parms
	{
		UManaMovie* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaPlayer_GetMovieSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventGetMovieSource_Parms, ReturnValue), Z_Construct_UClass_UManaMovie_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_GetMovieSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetMovieSource_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetMovieSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_GetMovieSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "GetMovieSource", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_GetMovieSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetMovieSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_GetMovieSource_Statics::ManaPlayer_eventGetMovieSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetMovieSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_GetMovieSource_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_GetMovieSource_Statics::ManaPlayer_eventGetMovieSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_GetMovieSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_GetMovieSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execGetMovieSource)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UManaMovie**)Z_Param__Result=P_THIS->GetMovieSource();
	P_NATIVE_END;
}
// End Class UManaPlayer Function GetMovieSource

// Begin Class UManaPlayer Function GetMovieTime
struct Z_Construct_UFunction_UManaPlayer_GetMovieTime_Statics
{
	struct ManaPlayer_eventGetMovieTime_Parms
	{
		FTimespan ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UManaPlayer_GetMovieTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventGetMovieTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_GetMovieTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetMovieTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetMovieTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_GetMovieTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "GetMovieTime", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_GetMovieTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetMovieTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_GetMovieTime_Statics::ManaPlayer_eventGetMovieTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetMovieTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_GetMovieTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_GetMovieTime_Statics::ManaPlayer_eventGetMovieTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_GetMovieTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_GetMovieTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execGetMovieTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTimespan*)Z_Param__Result=P_THIS->GetMovieTime();
	P_NATIVE_END;
}
// End Class UManaPlayer Function GetMovieTime

// Begin Class UManaPlayer Function GetNumTrackFormats
struct Z_Construct_UFunction_UManaPlayer_GetNumTrackFormats_Statics
{
	struct ManaPlayer_eventGetNumTrackFormats_Parms
	{
		EManaPlayerTrack TrackType;
		int32 TrackIndex;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TrackType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TrackIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManaPlayer_GetNumTrackFormats_Statics::NewProp_TrackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManaPlayer_GetNumTrackFormats_Statics::NewProp_TrackType = { "TrackType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventGetNumTrackFormats_Parms, TrackType), Z_Construct_UEnum_CriWareRuntime_EManaPlayerTrack, METADATA_PARAMS(0, nullptr) }; // 471400301
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaPlayer_GetNumTrackFormats_Statics::NewProp_TrackIndex = { "TrackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventGetNumTrackFormats_Parms, TrackIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaPlayer_GetNumTrackFormats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventGetNumTrackFormats_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_GetNumTrackFormats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetNumTrackFormats_Statics::NewProp_TrackType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetNumTrackFormats_Statics::NewProp_TrackType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetNumTrackFormats_Statics::NewProp_TrackIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetNumTrackFormats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetNumTrackFormats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_GetNumTrackFormats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "GetNumTrackFormats", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_GetNumTrackFormats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetNumTrackFormats_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_GetNumTrackFormats_Statics::ManaPlayer_eventGetNumTrackFormats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetNumTrackFormats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_GetNumTrackFormats_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_GetNumTrackFormats_Statics::ManaPlayer_eventGetNumTrackFormats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_GetNumTrackFormats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_GetNumTrackFormats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execGetNumTrackFormats)
{
	P_GET_ENUM(EManaPlayerTrack,Z_Param_TrackType);
	P_GET_PROPERTY(FIntProperty,Z_Param_TrackIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumTrackFormats(EManaPlayerTrack(Z_Param_TrackType),Z_Param_TrackIndex);
	P_NATIVE_END;
}
// End Class UManaPlayer Function GetNumTrackFormats

// Begin Class UManaPlayer Function GetNumTracks
struct Z_Construct_UFunction_UManaPlayer_GetNumTracks_Statics
{
	struct ManaPlayer_eventGetNumTracks_Parms
	{
		EManaPlayerTrack TrackType;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TrackType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManaPlayer_GetNumTracks_Statics::NewProp_TrackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManaPlayer_GetNumTracks_Statics::NewProp_TrackType = { "TrackType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventGetNumTracks_Parms, TrackType), Z_Construct_UEnum_CriWareRuntime_EManaPlayerTrack, METADATA_PARAMS(0, nullptr) }; // 471400301
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaPlayer_GetNumTracks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventGetNumTracks_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_GetNumTracks_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetNumTracks_Statics::NewProp_TrackType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetNumTracks_Statics::NewProp_TrackType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetNumTracks_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetNumTracks_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_GetNumTracks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "GetNumTracks", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_GetNumTracks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetNumTracks_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_GetNumTracks_Statics::ManaPlayer_eventGetNumTracks_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetNumTracks_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_GetNumTracks_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_GetNumTracks_Statics::ManaPlayer_eventGetNumTracks_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_GetNumTracks()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_GetNumTracks_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execGetNumTracks)
{
	P_GET_ENUM(EManaPlayerTrack,Z_Param_TrackType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumTracks(EManaPlayerTrack(Z_Param_TrackType));
	P_NATIVE_END;
}
// End Class UManaPlayer Function GetNumTracks

// Begin Class UManaPlayer Function GetPlaylistIndex
struct Z_Construct_UFunction_UManaPlayer_GetPlaylistIndex_Statics
{
	struct ManaPlayer_eventGetPlaylistIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaPlayer_GetPlaylistIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventGetPlaylistIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_GetPlaylistIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetPlaylistIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetPlaylistIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_GetPlaylistIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "GetPlaylistIndex", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_GetPlaylistIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetPlaylistIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_GetPlaylistIndex_Statics::ManaPlayer_eventGetPlaylistIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetPlaylistIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_GetPlaylistIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_GetPlaylistIndex_Statics::ManaPlayer_eventGetPlaylistIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_GetPlaylistIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_GetPlaylistIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execGetPlaylistIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPlaylistIndex();
	P_NATIVE_END;
}
// End Class UManaPlayer Function GetPlaylistIndex

// Begin Class UManaPlayer Function GetRate
struct Z_Construct_UFunction_UManaPlayer_GetRate_Statics
{
	struct ManaPlayer_eventGetRate_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManaPlayer_GetRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventGetRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_GetRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_GetRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "GetRate", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_GetRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_GetRate_Statics::ManaPlayer_eventGetRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_GetRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_GetRate_Statics::ManaPlayer_eventGetRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_GetRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_GetRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execGetRate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetRate();
	P_NATIVE_END;
}
// End Class UManaPlayer Function GetRate

// Begin Class UManaPlayer Function GetSelectedTrack
struct Z_Construct_UFunction_UManaPlayer_GetSelectedTrack_Statics
{
	struct ManaPlayer_eventGetSelectedTrack_Parms
	{
		EManaPlayerTrack TrackType;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TrackType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManaPlayer_GetSelectedTrack_Statics::NewProp_TrackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManaPlayer_GetSelectedTrack_Statics::NewProp_TrackType = { "TrackType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventGetSelectedTrack_Parms, TrackType), Z_Construct_UEnum_CriWareRuntime_EManaPlayerTrack, METADATA_PARAMS(0, nullptr) }; // 471400301
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaPlayer_GetSelectedTrack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventGetSelectedTrack_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_GetSelectedTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetSelectedTrack_Statics::NewProp_TrackType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetSelectedTrack_Statics::NewProp_TrackType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetSelectedTrack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetSelectedTrack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_GetSelectedTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "GetSelectedTrack", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_GetSelectedTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetSelectedTrack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_GetSelectedTrack_Statics::ManaPlayer_eventGetSelectedTrack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetSelectedTrack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_GetSelectedTrack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_GetSelectedTrack_Statics::ManaPlayer_eventGetSelectedTrack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_GetSelectedTrack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_GetSelectedTrack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execGetSelectedTrack)
{
	P_GET_ENUM(EManaPlayerTrack,Z_Param_TrackType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSelectedTrack(EManaPlayerTrack(Z_Param_TrackType));
	P_NATIVE_END;
}
// End Class UManaPlayer Function GetSelectedTrack

// Begin Class UManaPlayer Function GetStatus
struct Z_Construct_UFunction_UManaPlayer_GetStatus_Statics
{
	struct ManaPlayer_eventGetStatus_Parms
	{
		EManaComponentStatus ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManaPlayer_GetStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManaPlayer_GetStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventGetStatus_Parms, ReturnValue), Z_Construct_UEnum_CriWareRuntime_EManaComponentStatus, METADATA_PARAMS(0, nullptr) }; // 1856978859
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_GetStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetStatus_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_GetStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "GetStatus", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_GetStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_GetStatus_Statics::ManaPlayer_eventGetStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_GetStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_GetStatus_Statics::ManaPlayer_eventGetStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_GetStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_GetStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execGetStatus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EManaComponentStatus*)Z_Param__Result=P_THIS->GetStatus();
	P_NATIVE_END;
}
// End Class UManaPlayer Function GetStatus

// Begin Class UManaPlayer Function GetSubtitleTrackEncoding
struct Z_Construct_UFunction_UManaPlayer_GetSubtitleTrackEncoding_Statics
{
	struct ManaPlayer_eventGetSubtitleTrackEncoding_Parms
	{
		int32 TrackIndex;
		EManaSubtitlesEncoding ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TrackIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaPlayer_GetSubtitleTrackEncoding_Statics::NewProp_TrackIndex = { "TrackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventGetSubtitleTrackEncoding_Parms, TrackIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManaPlayer_GetSubtitleTrackEncoding_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManaPlayer_GetSubtitleTrackEncoding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventGetSubtitleTrackEncoding_Parms, ReturnValue), Z_Construct_UEnum_CriWareRuntime_EManaSubtitlesEncoding, METADATA_PARAMS(0, nullptr) }; // 1557399849
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_GetSubtitleTrackEncoding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetSubtitleTrackEncoding_Statics::NewProp_TrackIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetSubtitleTrackEncoding_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetSubtitleTrackEncoding_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetSubtitleTrackEncoding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_GetSubtitleTrackEncoding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "GetSubtitleTrackEncoding", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_GetSubtitleTrackEncoding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetSubtitleTrackEncoding_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_GetSubtitleTrackEncoding_Statics::ManaPlayer_eventGetSubtitleTrackEncoding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetSubtitleTrackEncoding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_GetSubtitleTrackEncoding_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_GetSubtitleTrackEncoding_Statics::ManaPlayer_eventGetSubtitleTrackEncoding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_GetSubtitleTrackEncoding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_GetSubtitleTrackEncoding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execGetSubtitleTrackEncoding)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TrackIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EManaSubtitlesEncoding*)Z_Param__Result=P_THIS->GetSubtitleTrackEncoding(Z_Param_TrackIndex);
	P_NATIVE_END;
}
// End Class UManaPlayer Function GetSubtitleTrackEncoding

// Begin Class UManaPlayer Function GetTexture
struct Z_Construct_UFunction_UManaPlayer_GetTexture_Statics
{
	struct ManaPlayer_eventGetTexture_Parms
	{
		UManaTexture* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaPlayer_GetTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventGetTexture_Parms, ReturnValue), Z_Construct_UClass_UManaTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_GetTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_GetTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "GetTexture", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_GetTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_GetTexture_Statics::ManaPlayer_eventGetTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_GetTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_GetTexture_Statics::ManaPlayer_eventGetTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_GetTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_GetTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execGetTexture)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UManaTexture**)Z_Param__Result=P_THIS->GetTexture();
	P_NATIVE_END;
}
// End Class UManaPlayer Function GetTexture

// Begin Class UManaPlayer Function GetTime
struct Z_Construct_UFunction_UManaPlayer_GetTime_Statics
{
	struct ManaPlayer_eventGetTime_Parms
	{
		FTimespan ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UManaPlayer_GetTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventGetTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_GetTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_GetTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "GetTime", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_GetTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_GetTime_Statics::ManaPlayer_eventGetTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_GetTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_GetTime_Statics::ManaPlayer_eventGetTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_GetTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_GetTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execGetTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTimespan*)Z_Param__Result=P_THIS->GetTime();
	P_NATIVE_END;
}
// End Class UManaPlayer Function GetTime

// Begin Class UManaPlayer Function GetTimeSyncedSource
struct Z_Construct_UFunction_UManaPlayer_GetTimeSyncedSource_Statics
{
	struct ManaPlayer_eventGetTimeSyncedSource_Parms
	{
		UAtomComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaPlayer_GetTimeSyncedSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventGetTimeSyncedSource_Parms, ReturnValue), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_GetTimeSyncedSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetTimeSyncedSource_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetTimeSyncedSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_GetTimeSyncedSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "GetTimeSyncedSource", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_GetTimeSyncedSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetTimeSyncedSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_GetTimeSyncedSource_Statics::ManaPlayer_eventGetTimeSyncedSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetTimeSyncedSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_GetTimeSyncedSource_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_GetTimeSyncedSource_Statics::ManaPlayer_eventGetTimeSyncedSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_GetTimeSyncedSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_GetTimeSyncedSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execGetTimeSyncedSource)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAtomComponent**)Z_Param__Result=P_THIS->GetTimeSyncedSource();
	P_NATIVE_END;
}
// End Class UManaPlayer Function GetTimeSyncedSource

// Begin Class UManaPlayer Function GetTrackDisplayName
struct Z_Construct_UFunction_UManaPlayer_GetTrackDisplayName_Statics
{
	struct ManaPlayer_eventGetTrackDisplayName_Parms
	{
		EManaPlayerTrack TrackType;
		int32 TrackIndex;
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TrackType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TrackIndex;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManaPlayer_GetTrackDisplayName_Statics::NewProp_TrackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManaPlayer_GetTrackDisplayName_Statics::NewProp_TrackType = { "TrackType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventGetTrackDisplayName_Parms, TrackType), Z_Construct_UEnum_CriWareRuntime_EManaPlayerTrack, METADATA_PARAMS(0, nullptr) }; // 471400301
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaPlayer_GetTrackDisplayName_Statics::NewProp_TrackIndex = { "TrackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventGetTrackDisplayName_Parms, TrackIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UManaPlayer_GetTrackDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventGetTrackDisplayName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_GetTrackDisplayName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetTrackDisplayName_Statics::NewProp_TrackType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetTrackDisplayName_Statics::NewProp_TrackType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetTrackDisplayName_Statics::NewProp_TrackIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetTrackDisplayName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetTrackDisplayName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_GetTrackDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "GetTrackDisplayName", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_GetTrackDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetTrackDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_GetTrackDisplayName_Statics::ManaPlayer_eventGetTrackDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetTrackDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_GetTrackDisplayName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_GetTrackDisplayName_Statics::ManaPlayer_eventGetTrackDisplayName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_GetTrackDisplayName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_GetTrackDisplayName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execGetTrackDisplayName)
{
	P_GET_ENUM(EManaPlayerTrack,Z_Param_TrackType);
	P_GET_PROPERTY(FIntProperty,Z_Param_TrackIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetTrackDisplayName(EManaPlayerTrack(Z_Param_TrackType),Z_Param_TrackIndex);
	P_NATIVE_END;
}
// End Class UManaPlayer Function GetTrackDisplayName

// Begin Class UManaPlayer Function GetTrackFormat
struct Z_Construct_UFunction_UManaPlayer_GetTrackFormat_Statics
{
	struct ManaPlayer_eventGetTrackFormat_Parms
	{
		EManaPlayerTrack TrackType;
		int32 TrackIndex;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TrackType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TrackIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManaPlayer_GetTrackFormat_Statics::NewProp_TrackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManaPlayer_GetTrackFormat_Statics::NewProp_TrackType = { "TrackType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventGetTrackFormat_Parms, TrackType), Z_Construct_UEnum_CriWareRuntime_EManaPlayerTrack, METADATA_PARAMS(0, nullptr) }; // 471400301
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaPlayer_GetTrackFormat_Statics::NewProp_TrackIndex = { "TrackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventGetTrackFormat_Parms, TrackIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaPlayer_GetTrackFormat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventGetTrackFormat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_GetTrackFormat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetTrackFormat_Statics::NewProp_TrackType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetTrackFormat_Statics::NewProp_TrackType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetTrackFormat_Statics::NewProp_TrackIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetTrackFormat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetTrackFormat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_GetTrackFormat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "GetTrackFormat", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_GetTrackFormat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetTrackFormat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_GetTrackFormat_Statics::ManaPlayer_eventGetTrackFormat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetTrackFormat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_GetTrackFormat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_GetTrackFormat_Statics::ManaPlayer_eventGetTrackFormat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_GetTrackFormat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_GetTrackFormat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execGetTrackFormat)
{
	P_GET_ENUM(EManaPlayerTrack,Z_Param_TrackType);
	P_GET_PROPERTY(FIntProperty,Z_Param_TrackIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetTrackFormat(EManaPlayerTrack(Z_Param_TrackType),Z_Param_TrackIndex);
	P_NATIVE_END;
}
// End Class UManaPlayer Function GetTrackFormat

// Begin Class UManaPlayer Function GetTrackLanguage
struct Z_Construct_UFunction_UManaPlayer_GetTrackLanguage_Statics
{
	struct ManaPlayer_eventGetTrackLanguage_Parms
	{
		EManaPlayerTrack TrackType;
		int32 TrackIndex;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TrackType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TrackIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManaPlayer_GetTrackLanguage_Statics::NewProp_TrackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManaPlayer_GetTrackLanguage_Statics::NewProp_TrackType = { "TrackType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventGetTrackLanguage_Parms, TrackType), Z_Construct_UEnum_CriWareRuntime_EManaPlayerTrack, METADATA_PARAMS(0, nullptr) }; // 471400301
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaPlayer_GetTrackLanguage_Statics::NewProp_TrackIndex = { "TrackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventGetTrackLanguage_Parms, TrackIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UManaPlayer_GetTrackLanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventGetTrackLanguage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_GetTrackLanguage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetTrackLanguage_Statics::NewProp_TrackType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetTrackLanguage_Statics::NewProp_TrackType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetTrackLanguage_Statics::NewProp_TrackIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetTrackLanguage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetTrackLanguage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_GetTrackLanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "GetTrackLanguage", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_GetTrackLanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetTrackLanguage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_GetTrackLanguage_Statics::ManaPlayer_eventGetTrackLanguage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetTrackLanguage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_GetTrackLanguage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_GetTrackLanguage_Statics::ManaPlayer_eventGetTrackLanguage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_GetTrackLanguage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_GetTrackLanguage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execGetTrackLanguage)
{
	P_GET_ENUM(EManaPlayerTrack,Z_Param_TrackType);
	P_GET_PROPERTY(FIntProperty,Z_Param_TrackIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetTrackLanguage(EManaPlayerTrack(Z_Param_TrackType),Z_Param_TrackIndex);
	P_NATIVE_END;
}
// End Class UManaPlayer Function GetTrackLanguage

// Begin Class UManaPlayer Function GetVolume
struct Z_Construct_UFunction_UManaPlayer_GetVolume_Statics
{
	struct ManaPlayer_eventGetVolume_Parms
	{
		EManaPlayerTrack TrackType;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TrackType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManaPlayer_GetVolume_Statics::NewProp_TrackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManaPlayer_GetVolume_Statics::NewProp_TrackType = { "TrackType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventGetVolume_Parms, TrackType), Z_Construct_UEnum_CriWareRuntime_EManaPlayerTrack, METADATA_PARAMS(0, nullptr) }; // 471400301
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManaPlayer_GetVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventGetVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_GetVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetVolume_Statics::NewProp_TrackType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetVolume_Statics::NewProp_TrackType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_GetVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "GetVolume", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_GetVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_GetVolume_Statics::ManaPlayer_eventGetVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_GetVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_GetVolume_Statics::ManaPlayer_eventGetVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_GetVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_GetVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execGetVolume)
{
	P_GET_ENUM(EManaPlayerTrack,Z_Param_TrackType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetVolume(EManaPlayerTrack(Z_Param_TrackType));
	P_NATIVE_END;
}
// End Class UManaPlayer Function GetVolume

// Begin Class UManaPlayer Function HandleManaComponentEventPoint
struct Z_Construct_UFunction_UManaPlayer_HandleManaComponentEventPoint_Statics
{
	struct ManaPlayer_eventHandleManaComponentEventPoint_Parms
	{
		FManaEventPointInfo EventPointInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventPointInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UManaPlayer_HandleManaComponentEventPoint_Statics::NewProp_EventPointInfo = { "EventPointInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventHandleManaComponentEventPoint_Parms, EventPointInfo), Z_Construct_UScriptStruct_FManaEventPointInfo, METADATA_PARAMS(0, nullptr) }; // 1824312565
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_HandleManaComponentEventPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_HandleManaComponentEventPoint_Statics::NewProp_EventPointInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_HandleManaComponentEventPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_HandleManaComponentEventPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "HandleManaComponentEventPoint", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_HandleManaComponentEventPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_HandleManaComponentEventPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_HandleManaComponentEventPoint_Statics::ManaPlayer_eventHandleManaComponentEventPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_HandleManaComponentEventPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_HandleManaComponentEventPoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_HandleManaComponentEventPoint_Statics::ManaPlayer_eventHandleManaComponentEventPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_HandleManaComponentEventPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_HandleManaComponentEventPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execHandleManaComponentEventPoint)
{
	P_GET_STRUCT(FManaEventPointInfo,Z_Param_EventPointInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleManaComponentEventPoint(Z_Param_EventPointInfo);
	P_NATIVE_END;
}
// End Class UManaPlayer Function HandleManaComponentEventPoint

// Begin Class UManaPlayer Function HandleManaComponentFrameOnTime
struct Z_Construct_UFunction_UManaPlayer_HandleManaComponentFrameOnTime_Statics
{
	struct ManaPlayer_eventHandleManaComponentFrameOnTime_Parms
	{
		int32 InFrameNumber;
		UManaComponent* InManaComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InManaComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InFrameNumber;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InManaComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaPlayer_HandleManaComponentFrameOnTime_Statics::NewProp_InFrameNumber = { "InFrameNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventHandleManaComponentFrameOnTime_Parms, InFrameNumber), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaPlayer_HandleManaComponentFrameOnTime_Statics::NewProp_InManaComponent = { "InManaComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventHandleManaComponentFrameOnTime_Parms, InManaComponent), Z_Construct_UClass_UManaComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InManaComponent_MetaData), NewProp_InManaComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_HandleManaComponentFrameOnTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_HandleManaComponentFrameOnTime_Statics::NewProp_InFrameNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_HandleManaComponentFrameOnTime_Statics::NewProp_InManaComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_HandleManaComponentFrameOnTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_HandleManaComponentFrameOnTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "HandleManaComponentFrameOnTime", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_HandleManaComponentFrameOnTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_HandleManaComponentFrameOnTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_HandleManaComponentFrameOnTime_Statics::ManaPlayer_eventHandleManaComponentFrameOnTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_HandleManaComponentFrameOnTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_HandleManaComponentFrameOnTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_HandleManaComponentFrameOnTime_Statics::ManaPlayer_eventHandleManaComponentFrameOnTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_HandleManaComponentFrameOnTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_HandleManaComponentFrameOnTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execHandleManaComponentFrameOnTime)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InFrameNumber);
	P_GET_OBJECT(UManaComponent,Z_Param_InManaComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleManaComponentFrameOnTime(Z_Param_InFrameNumber,Z_Param_InManaComponent);
	P_NATIVE_END;
}
// End Class UManaPlayer Function HandleManaComponentFrameOnTime

// Begin Class UManaPlayer Function HandleManaComponentMovieChanged
struct Z_Construct_UFunction_UManaPlayer_HandleManaComponentMovieChanged_Statics
{
	struct ManaPlayer_eventHandleManaComponentMovieChanged_Parms
	{
		UManaMovie* InManaMovie;
		UManaComponent* InManaComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InManaComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InManaMovie;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InManaComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaPlayer_HandleManaComponentMovieChanged_Statics::NewProp_InManaMovie = { "InManaMovie", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventHandleManaComponentMovieChanged_Parms, InManaMovie), Z_Construct_UClass_UManaMovie_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaPlayer_HandleManaComponentMovieChanged_Statics::NewProp_InManaComponent = { "InManaComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventHandleManaComponentMovieChanged_Parms, InManaComponent), Z_Construct_UClass_UManaComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InManaComponent_MetaData), NewProp_InManaComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_HandleManaComponentMovieChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_HandleManaComponentMovieChanged_Statics::NewProp_InManaMovie,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_HandleManaComponentMovieChanged_Statics::NewProp_InManaComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_HandleManaComponentMovieChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_HandleManaComponentMovieChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "HandleManaComponentMovieChanged", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_HandleManaComponentMovieChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_HandleManaComponentMovieChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_HandleManaComponentMovieChanged_Statics::ManaPlayer_eventHandleManaComponentMovieChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_HandleManaComponentMovieChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_HandleManaComponentMovieChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_HandleManaComponentMovieChanged_Statics::ManaPlayer_eventHandleManaComponentMovieChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_HandleManaComponentMovieChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_HandleManaComponentMovieChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execHandleManaComponentMovieChanged)
{
	P_GET_OBJECT(UManaMovie,Z_Param_InManaMovie);
	P_GET_OBJECT(UManaComponent,Z_Param_InManaComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleManaComponentMovieChanged(Z_Param_InManaMovie,Z_Param_InManaComponent);
	P_NATIVE_END;
}
// End Class UManaPlayer Function HandleManaComponentMovieChanged

// Begin Class UManaPlayer Function HandleManaComponentPlayerDestroyed
struct Z_Construct_UFunction_UManaPlayer_HandleManaComponentPlayerDestroyed_Statics
{
	struct ManaPlayer_eventHandleManaComponentPlayerDestroyed_Parms
	{
		UManaComponent* InManaComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InManaComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InManaComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaPlayer_HandleManaComponentPlayerDestroyed_Statics::NewProp_InManaComponent = { "InManaComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventHandleManaComponentPlayerDestroyed_Parms, InManaComponent), Z_Construct_UClass_UManaComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InManaComponent_MetaData), NewProp_InManaComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_HandleManaComponentPlayerDestroyed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_HandleManaComponentPlayerDestroyed_Statics::NewProp_InManaComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_HandleManaComponentPlayerDestroyed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_HandleManaComponentPlayerDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "HandleManaComponentPlayerDestroyed", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_HandleManaComponentPlayerDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_HandleManaComponentPlayerDestroyed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_HandleManaComponentPlayerDestroyed_Statics::ManaPlayer_eventHandleManaComponentPlayerDestroyed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_HandleManaComponentPlayerDestroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_HandleManaComponentPlayerDestroyed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_HandleManaComponentPlayerDestroyed_Statics::ManaPlayer_eventHandleManaComponentPlayerDestroyed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_HandleManaComponentPlayerDestroyed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_HandleManaComponentPlayerDestroyed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execHandleManaComponentPlayerDestroyed)
{
	P_GET_OBJECT(UManaComponent,Z_Param_InManaComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleManaComponentPlayerDestroyed(Z_Param_InManaComponent);
	P_NATIVE_END;
}
// End Class UManaPlayer Function HandleManaComponentPlayerDestroyed

// Begin Class UManaPlayer Function HandleManaComponentSeekCompleted
struct Z_Construct_UFunction_UManaPlayer_HandleManaComponentSeekCompleted_Statics
{
	struct ManaPlayer_eventHandleManaComponentSeekCompleted_Parms
	{
		int32 InFrameNumber;
		UManaComponent* InManaComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InManaComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InFrameNumber;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InManaComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaPlayer_HandleManaComponentSeekCompleted_Statics::NewProp_InFrameNumber = { "InFrameNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventHandleManaComponentSeekCompleted_Parms, InFrameNumber), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaPlayer_HandleManaComponentSeekCompleted_Statics::NewProp_InManaComponent = { "InManaComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventHandleManaComponentSeekCompleted_Parms, InManaComponent), Z_Construct_UClass_UManaComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InManaComponent_MetaData), NewProp_InManaComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_HandleManaComponentSeekCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_HandleManaComponentSeekCompleted_Statics::NewProp_InFrameNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_HandleManaComponentSeekCompleted_Statics::NewProp_InManaComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_HandleManaComponentSeekCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_HandleManaComponentSeekCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "HandleManaComponentSeekCompleted", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_HandleManaComponentSeekCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_HandleManaComponentSeekCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_HandleManaComponentSeekCompleted_Statics::ManaPlayer_eventHandleManaComponentSeekCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_HandleManaComponentSeekCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_HandleManaComponentSeekCompleted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_HandleManaComponentSeekCompleted_Statics::ManaPlayer_eventHandleManaComponentSeekCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_HandleManaComponentSeekCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_HandleManaComponentSeekCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execHandleManaComponentSeekCompleted)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InFrameNumber);
	P_GET_OBJECT(UManaComponent,Z_Param_InManaComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleManaComponentSeekCompleted(Z_Param_InFrameNumber,Z_Param_InManaComponent);
	P_NATIVE_END;
}
// End Class UManaPlayer Function HandleManaComponentSeekCompleted

// Begin Class UManaPlayer Function HandleManaComponentStatusChanged
struct Z_Construct_UFunction_UManaPlayer_HandleManaComponentStatusChanged_Statics
{
	struct ManaPlayer_eventHandleManaComponentStatusChanged_Parms
	{
		EManaComponentStatus Status;
		UManaComponent* InManaComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InManaComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Status;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InManaComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManaPlayer_HandleManaComponentStatusChanged_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManaPlayer_HandleManaComponentStatusChanged_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventHandleManaComponentStatusChanged_Parms, Status), Z_Construct_UEnum_CriWareRuntime_EManaComponentStatus, METADATA_PARAMS(0, nullptr) }; // 1856978859
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaPlayer_HandleManaComponentStatusChanged_Statics::NewProp_InManaComponent = { "InManaComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventHandleManaComponentStatusChanged_Parms, InManaComponent), Z_Construct_UClass_UManaComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InManaComponent_MetaData), NewProp_InManaComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_HandleManaComponentStatusChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_HandleManaComponentStatusChanged_Statics::NewProp_Status_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_HandleManaComponentStatusChanged_Statics::NewProp_Status,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_HandleManaComponentStatusChanged_Statics::NewProp_InManaComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_HandleManaComponentStatusChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_HandleManaComponentStatusChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "HandleManaComponentStatusChanged", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_HandleManaComponentStatusChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_HandleManaComponentStatusChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_HandleManaComponentStatusChanged_Statics::ManaPlayer_eventHandleManaComponentStatusChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_HandleManaComponentStatusChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_HandleManaComponentStatusChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_HandleManaComponentStatusChanged_Statics::ManaPlayer_eventHandleManaComponentStatusChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_HandleManaComponentStatusChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_HandleManaComponentStatusChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execHandleManaComponentStatusChanged)
{
	P_GET_ENUM(EManaComponentStatus,Z_Param_Status);
	P_GET_OBJECT(UManaComponent,Z_Param_InManaComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleManaComponentStatusChanged(EManaComponentStatus(Z_Param_Status),Z_Param_InManaComponent);
	P_NATIVE_END;
}
// End Class UManaPlayer Function HandleManaComponentStatusChanged

// Begin Class UManaPlayer Function HandleManaComponentSubtitleChanged
struct Z_Construct_UFunction_UManaPlayer_HandleManaComponentSubtitleChanged_Statics
{
	struct ManaPlayer_eventHandleManaComponentSubtitleChanged_Parms
	{
		FText Subtitle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Subtitle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UManaPlayer_HandleManaComponentSubtitleChanged_Statics::NewProp_Subtitle = { "Subtitle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventHandleManaComponentSubtitleChanged_Parms, Subtitle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_HandleManaComponentSubtitleChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_HandleManaComponentSubtitleChanged_Statics::NewProp_Subtitle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_HandleManaComponentSubtitleChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_HandleManaComponentSubtitleChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "HandleManaComponentSubtitleChanged", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_HandleManaComponentSubtitleChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_HandleManaComponentSubtitleChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_HandleManaComponentSubtitleChanged_Statics::ManaPlayer_eventHandleManaComponentSubtitleChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_HandleManaComponentSubtitleChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_HandleManaComponentSubtitleChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_HandleManaComponentSubtitleChanged_Statics::ManaPlayer_eventHandleManaComponentSubtitleChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_HandleManaComponentSubtitleChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_HandleManaComponentSubtitleChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execHandleManaComponentSubtitleChanged)
{
	P_GET_PROPERTY(FTextProperty,Z_Param_Subtitle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleManaComponentSubtitleChanged(Z_Param_Subtitle);
	P_NATIVE_END;
}
// End Class UManaPlayer Function HandleManaComponentSubtitleChanged

// Begin Class UManaPlayer Function HasError
struct Z_Construct_UFunction_UManaPlayer_HasError_Statics
{
	struct ManaPlayer_eventHasError_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UManaPlayer_HasError_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ManaPlayer_eventHasError_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_HasError_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ManaPlayer_eventHasError_Parms), &Z_Construct_UFunction_UManaPlayer_HasError_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_HasError_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_HasError_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_HasError_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_HasError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "HasError", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_HasError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_HasError_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_HasError_Statics::ManaPlayer_eventHasError_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_HasError_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_HasError_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_HasError_Statics::ManaPlayer_eventHasError_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_HasError()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_HasError_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execHasError)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasError();
	P_NATIVE_END;
}
// End Class UManaPlayer Function HasError

// Begin Class UManaPlayer Function IsClosed
struct Z_Construct_UFunction_UManaPlayer_IsClosed_Statics
{
	struct ManaPlayer_eventIsClosed_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UManaPlayer_IsClosed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ManaPlayer_eventIsClosed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_IsClosed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ManaPlayer_eventIsClosed_Parms), &Z_Construct_UFunction_UManaPlayer_IsClosed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_IsClosed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_IsClosed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_IsClosed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_IsClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "IsClosed", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_IsClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_IsClosed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_IsClosed_Statics::ManaPlayer_eventIsClosed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_IsClosed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_IsClosed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_IsClosed_Statics::ManaPlayer_eventIsClosed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_IsClosed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_IsClosed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execIsClosed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsClosed();
	P_NATIVE_END;
}
// End Class UManaPlayer Function IsClosed

// Begin Class UManaPlayer Function IsLooping
struct Z_Construct_UFunction_UManaPlayer_IsLooping_Statics
{
	struct ManaPlayer_eventIsLooping_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UManaPlayer_IsLooping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ManaPlayer_eventIsLooping_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_IsLooping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ManaPlayer_eventIsLooping_Parms), &Z_Construct_UFunction_UManaPlayer_IsLooping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_IsLooping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_IsLooping_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_IsLooping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_IsLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "IsLooping", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_IsLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_IsLooping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_IsLooping_Statics::ManaPlayer_eventIsLooping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_IsLooping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_IsLooping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_IsLooping_Statics::ManaPlayer_eventIsLooping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_IsLooping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_IsLooping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execIsLooping)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLooping();
	P_NATIVE_END;
}
// End Class UManaPlayer Function IsLooping

// Begin Class UManaPlayer Function IsPaused
struct Z_Construct_UFunction_UManaPlayer_IsPaused_Statics
{
	struct ManaPlayer_eventIsPaused_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UManaPlayer_IsPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ManaPlayer_eventIsPaused_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_IsPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ManaPlayer_eventIsPaused_Parms), &Z_Construct_UFunction_UManaPlayer_IsPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_IsPaused_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_IsPaused_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_IsPaused_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_IsPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "IsPaused", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_IsPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_IsPaused_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_IsPaused_Statics::ManaPlayer_eventIsPaused_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_IsPaused_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_IsPaused_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_IsPaused_Statics::ManaPlayer_eventIsPaused_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_IsPaused()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_IsPaused_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execIsPaused)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPaused();
	P_NATIVE_END;
}
// End Class UManaPlayer Function IsPaused

// Begin Class UManaPlayer Function IsPlaying
struct Z_Construct_UFunction_UManaPlayer_IsPlaying_Statics
{
	struct ManaPlayer_eventIsPlaying_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UManaPlayer_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ManaPlayer_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ManaPlayer_eventIsPlaying_Parms), &Z_Construct_UFunction_UManaPlayer_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_IsPlaying_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_IsPlaying_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_IsPlaying_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "IsPlaying", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_IsPlaying_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_IsPlaying_Statics::ManaPlayer_eventIsPlaying_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_IsPlaying_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_IsPlaying_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_IsPlaying_Statics::ManaPlayer_eventIsPlaying_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_IsPlaying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_IsPlaying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execIsPlaying)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlaying();
	P_NATIVE_END;
}
// End Class UManaPlayer Function IsPlaying

// Begin Class UManaPlayer Function IsPreparing
struct Z_Construct_UFunction_UManaPlayer_IsPreparing_Statics
{
	struct ManaPlayer_eventIsPreparing_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UManaPlayer_IsPreparing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ManaPlayer_eventIsPreparing_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_IsPreparing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ManaPlayer_eventIsPreparing_Parms), &Z_Construct_UFunction_UManaPlayer_IsPreparing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_IsPreparing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_IsPreparing_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_IsPreparing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_IsPreparing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "IsPreparing", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_IsPreparing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_IsPreparing_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_IsPreparing_Statics::ManaPlayer_eventIsPreparing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_IsPreparing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_IsPreparing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_IsPreparing_Statics::ManaPlayer_eventIsPreparing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_IsPreparing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_IsPreparing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execIsPreparing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPreparing();
	P_NATIVE_END;
}
// End Class UManaPlayer Function IsPreparing

// Begin Class UManaPlayer Function IsReady
struct Z_Construct_UFunction_UManaPlayer_IsReady_Statics
{
	struct ManaPlayer_eventIsReady_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UManaPlayer_IsReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ManaPlayer_eventIsReady_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_IsReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ManaPlayer_eventIsReady_Parms), &Z_Construct_UFunction_UManaPlayer_IsReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_IsReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_IsReady_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_IsReady_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_IsReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "IsReady", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_IsReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_IsReady_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_IsReady_Statics::ManaPlayer_eventIsReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_IsReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_IsReady_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_IsReady_Statics::ManaPlayer_eventIsReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_IsReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_IsReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execIsReady)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsReady();
	P_NATIVE_END;
}
// End Class UManaPlayer Function IsReady

// Begin Class UManaPlayer Function IsSeeking
struct Z_Construct_UFunction_UManaPlayer_IsSeeking_Statics
{
	struct ManaPlayer_eventIsSeeking_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UManaPlayer_IsSeeking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ManaPlayer_eventIsSeeking_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_IsSeeking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ManaPlayer_eventIsSeeking_Parms), &Z_Construct_UFunction_UManaPlayer_IsSeeking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_IsSeeking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_IsSeeking_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_IsSeeking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_IsSeeking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "IsSeeking", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_IsSeeking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_IsSeeking_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_IsSeeking_Statics::ManaPlayer_eventIsSeeking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_IsSeeking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_IsSeeking_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_IsSeeking_Statics::ManaPlayer_eventIsSeeking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_IsSeeking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_IsSeeking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execIsSeeking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSeeking();
	P_NATIVE_END;
}
// End Class UManaPlayer Function IsSeeking

// Begin Class UManaPlayer Function Next
struct Z_Construct_UFunction_UManaPlayer_Next_Statics
{
	struct ManaPlayer_eventNext_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UManaPlayer_Next_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ManaPlayer_eventNext_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_Next_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ManaPlayer_eventNext_Parms), &Z_Construct_UFunction_UManaPlayer_Next_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_Next_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_Next_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_Next_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_Next_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "Next", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_Next_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_Next_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_Next_Statics::ManaPlayer_eventNext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_Next_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_Next_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_Next_Statics::ManaPlayer_eventNext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_Next()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_Next_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execNext)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Next();
	P_NATIVE_END;
}
// End Class UManaPlayer Function Next

// Begin Class UManaPlayer Function OpenMovieSource
struct Z_Construct_UFunction_UManaPlayer_OpenMovieSource_Statics
{
	struct ManaPlayer_eventOpenMovieSource_Parms
	{
		UManaMovie* InManaMovie;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InManaMovie;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaPlayer_OpenMovieSource_Statics::NewProp_InManaMovie = { "InManaMovie", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventOpenMovieSource_Parms, InManaMovie), Z_Construct_UClass_UManaMovie_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_OpenMovieSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_OpenMovieSource_Statics::NewProp_InManaMovie,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_OpenMovieSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_OpenMovieSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "OpenMovieSource", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_OpenMovieSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_OpenMovieSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_OpenMovieSource_Statics::ManaPlayer_eventOpenMovieSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_OpenMovieSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_OpenMovieSource_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_OpenMovieSource_Statics::ManaPlayer_eventOpenMovieSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_OpenMovieSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_OpenMovieSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execOpenMovieSource)
{
	P_GET_OBJECT(UManaMovie,Z_Param_InManaMovie);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenMovieSource(Z_Param_InManaMovie);
	P_NATIVE_END;
}
// End Class UManaPlayer Function OpenMovieSource

// Begin Class UManaPlayer Function OpenPlaylist
struct Z_Construct_UFunction_UManaPlayer_OpenPlaylist_Statics
{
	struct ManaPlayer_eventOpenPlaylist_Parms
	{
		UManaPlaylist* InPlaylist;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InPlaylist;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaPlayer_OpenPlaylist_Statics::NewProp_InPlaylist = { "InPlaylist", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventOpenPlaylist_Parms, InPlaylist), Z_Construct_UClass_UManaPlaylist_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UManaPlayer_OpenPlaylist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ManaPlayer_eventOpenPlaylist_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_OpenPlaylist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ManaPlayer_eventOpenPlaylist_Parms), &Z_Construct_UFunction_UManaPlayer_OpenPlaylist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_OpenPlaylist_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_OpenPlaylist_Statics::NewProp_InPlaylist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_OpenPlaylist_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_OpenPlaylist_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_OpenPlaylist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "OpenPlaylist", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_OpenPlaylist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_OpenPlaylist_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_OpenPlaylist_Statics::ManaPlayer_eventOpenPlaylist_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_OpenPlaylist_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_OpenPlaylist_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_OpenPlaylist_Statics::ManaPlayer_eventOpenPlaylist_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_OpenPlaylist()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_OpenPlaylist_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execOpenPlaylist)
{
	P_GET_OBJECT(UManaPlaylist,Z_Param_InPlaylist);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OpenPlaylist(Z_Param_InPlaylist);
	P_NATIVE_END;
}
// End Class UManaPlayer Function OpenPlaylist

// Begin Class UManaPlayer Function OpenPlaylistIndex
struct Z_Construct_UFunction_UManaPlayer_OpenPlaylistIndex_Statics
{
	struct ManaPlayer_eventOpenPlaylistIndex_Parms
	{
		UManaPlaylist* InPlaylist;
		int32 Index;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InPlaylist;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaPlayer_OpenPlaylistIndex_Statics::NewProp_InPlaylist = { "InPlaylist", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventOpenPlaylistIndex_Parms, InPlaylist), Z_Construct_UClass_UManaPlaylist_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaPlayer_OpenPlaylistIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventOpenPlaylistIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UManaPlayer_OpenPlaylistIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ManaPlayer_eventOpenPlaylistIndex_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_OpenPlaylistIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ManaPlayer_eventOpenPlaylistIndex_Parms), &Z_Construct_UFunction_UManaPlayer_OpenPlaylistIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_OpenPlaylistIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_OpenPlaylistIndex_Statics::NewProp_InPlaylist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_OpenPlaylistIndex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_OpenPlaylistIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_OpenPlaylistIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_OpenPlaylistIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "OpenPlaylistIndex", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_OpenPlaylistIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_OpenPlaylistIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_OpenPlaylistIndex_Statics::ManaPlayer_eventOpenPlaylistIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_OpenPlaylistIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_OpenPlaylistIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_OpenPlaylistIndex_Statics::ManaPlayer_eventOpenPlaylistIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_OpenPlaylistIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_OpenPlaylistIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execOpenPlaylistIndex)
{
	P_GET_OBJECT(UManaPlaylist,Z_Param_InPlaylist);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OpenPlaylistIndex(Z_Param_InPlaylist,Z_Param_Index);
	P_NATIVE_END;
}
// End Class UManaPlayer Function OpenPlaylistIndex

// Begin Class UManaPlayer Function OpenSourceWithOptions
struct Z_Construct_UFunction_UManaPlayer_OpenSourceWithOptions_Statics
{
	struct ManaPlayer_eventOpenSourceWithOptions_Parms
	{
		UManaSource* ManaSource;
		FManaPlayerOptions PlayerOptions;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ManaSource;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerOptions;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaPlayer_OpenSourceWithOptions_Statics::NewProp_ManaSource = { "ManaSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventOpenSourceWithOptions_Parms, ManaSource), Z_Construct_UClass_UManaSource_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UManaPlayer_OpenSourceWithOptions_Statics::NewProp_PlayerOptions = { "PlayerOptions", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventOpenSourceWithOptions_Parms, PlayerOptions), Z_Construct_UScriptStruct_FManaPlayerOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerOptions_MetaData), NewProp_PlayerOptions_MetaData) }; // 2109526587
void Z_Construct_UFunction_UManaPlayer_OpenSourceWithOptions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ManaPlayer_eventOpenSourceWithOptions_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_OpenSourceWithOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ManaPlayer_eventOpenSourceWithOptions_Parms), &Z_Construct_UFunction_UManaPlayer_OpenSourceWithOptions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_OpenSourceWithOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_OpenSourceWithOptions_Statics::NewProp_ManaSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_OpenSourceWithOptions_Statics::NewProp_PlayerOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_OpenSourceWithOptions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_OpenSourceWithOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_OpenSourceWithOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "OpenSourceWithOptions", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_OpenSourceWithOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_OpenSourceWithOptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_OpenSourceWithOptions_Statics::ManaPlayer_eventOpenSourceWithOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_OpenSourceWithOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_OpenSourceWithOptions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_OpenSourceWithOptions_Statics::ManaPlayer_eventOpenSourceWithOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_OpenSourceWithOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_OpenSourceWithOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execOpenSourceWithOptions)
{
	P_GET_OBJECT(UManaSource,Z_Param_ManaSource);
	P_GET_STRUCT_REF(FManaPlayerOptions,Z_Param_Out_PlayerOptions);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OpenSourceWithOptions(Z_Param_ManaSource,Z_Param_Out_PlayerOptions);
	P_NATIVE_END;
}
// End Class UManaPlayer Function OpenSourceWithOptions

// Begin Class UManaPlayer Function Pause
struct Z_Construct_UFunction_UManaPlayer_Pause_Statics
{
	struct ManaPlayer_eventPause_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UManaPlayer_Pause_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ManaPlayer_eventPause_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_Pause_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ManaPlayer_eventPause_Parms), &Z_Construct_UFunction_UManaPlayer_Pause_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_Pause_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_Pause_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_Pause_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "Pause", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_Pause_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_Pause_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_Pause_Statics::ManaPlayer_eventPause_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_Pause_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_Pause_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_Pause_Statics::ManaPlayer_eventPause_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_Pause()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_Pause_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execPause)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Pause();
	P_NATIVE_END;
}
// End Class UManaPlayer Function Pause

// Begin Class UManaPlayer Function Play
struct Z_Construct_UFunction_UManaPlayer_Play_Statics
{
	struct ManaPlayer_eventPlay_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UManaPlayer_Play_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ManaPlayer_eventPlay_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_Play_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ManaPlayer_eventPlay_Parms), &Z_Construct_UFunction_UManaPlayer_Play_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_Play_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_Play_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_Play_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "Play", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_Play_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_Play_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_Play_Statics::ManaPlayer_eventPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_Play_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_Play_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_Play_Statics::ManaPlayer_eventPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_Play()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_Play_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Play();
	P_NATIVE_END;
}
// End Class UManaPlayer Function Play

// Begin Class UManaPlayer Function PlayAndSeek
struct Z_Construct_UFunction_UManaPlayer_PlayAndSeek_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_PlayAndSeek_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "PlayAndSeek", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_PlayAndSeek_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_PlayAndSeek_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UManaPlayer_PlayAndSeek()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_PlayAndSeek_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execPlayAndSeek)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayAndSeek();
	P_NATIVE_END;
}
// End Class UManaPlayer Function PlayAndSeek

// Begin Class UManaPlayer Function Previous
struct Z_Construct_UFunction_UManaPlayer_Previous_Statics
{
	struct ManaPlayer_eventPrevious_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UManaPlayer_Previous_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ManaPlayer_eventPrevious_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_Previous_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ManaPlayer_eventPrevious_Parms), &Z_Construct_UFunction_UManaPlayer_Previous_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_Previous_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_Previous_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_Previous_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_Previous_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "Previous", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_Previous_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_Previous_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_Previous_Statics::ManaPlayer_eventPrevious_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_Previous_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_Previous_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_Previous_Statics::ManaPlayer_eventPrevious_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_Previous()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_Previous_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execPrevious)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Previous();
	P_NATIVE_END;
}
// End Class UManaPlayer Function Previous

// Begin Class UManaPlayer Function Reopen
struct Z_Construct_UFunction_UManaPlayer_Reopen_Statics
{
	struct ManaPlayer_eventReopen_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UManaPlayer_Reopen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ManaPlayer_eventReopen_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_Reopen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ManaPlayer_eventReopen_Parms), &Z_Construct_UFunction_UManaPlayer_Reopen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_Reopen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_Reopen_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_Reopen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_Reopen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "Reopen", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_Reopen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_Reopen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_Reopen_Statics::ManaPlayer_eventReopen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_Reopen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_Reopen_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_Reopen_Statics::ManaPlayer_eventReopen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_Reopen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_Reopen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execReopen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Reopen();
	P_NATIVE_END;
}
// End Class UManaPlayer Function Reopen

// Begin Class UManaPlayer Function Rewind
struct Z_Construct_UFunction_UManaPlayer_Rewind_Statics
{
	struct ManaPlayer_eventRewind_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UManaPlayer_Rewind_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ManaPlayer_eventRewind_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_Rewind_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ManaPlayer_eventRewind_Parms), &Z_Construct_UFunction_UManaPlayer_Rewind_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_Rewind_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_Rewind_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_Rewind_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_Rewind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "Rewind", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_Rewind_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_Rewind_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_Rewind_Statics::ManaPlayer_eventRewind_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_Rewind_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_Rewind_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_Rewind_Statics::ManaPlayer_eventRewind_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_Rewind()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_Rewind_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execRewind)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Rewind();
	P_NATIVE_END;
}
// End Class UManaPlayer Function Rewind

// Begin Class UManaPlayer Function Seek
struct Z_Construct_UFunction_UManaPlayer_Seek_Statics
{
	struct ManaPlayer_eventSeek_Parms
	{
		FTimespan Time;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Time;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UManaPlayer_Seek_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventSeek_Parms, Time), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UManaPlayer_Seek_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ManaPlayer_eventSeek_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_Seek_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ManaPlayer_eventSeek_Parms), &Z_Construct_UFunction_UManaPlayer_Seek_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_Seek_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_Seek_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_Seek_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_Seek_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_Seek_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "Seek", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_Seek_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_Seek_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_Seek_Statics::ManaPlayer_eventSeek_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_Seek_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_Seek_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_Seek_Statics::ManaPlayer_eventSeek_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_Seek()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_Seek_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execSeek)
{
	P_GET_STRUCT(FTimespan,Z_Param_Time);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Seek(Z_Param_Time);
	P_NATIVE_END;
}
// End Class UManaPlayer Function Seek

// Begin Class UManaPlayer Function SelectTrack
struct Z_Construct_UFunction_UManaPlayer_SelectTrack_Statics
{
	struct ManaPlayer_eventSelectTrack_Parms
	{
		EManaPlayerTrack TrackType;
		int32 TrackIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TrackType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TrackIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManaPlayer_SelectTrack_Statics::NewProp_TrackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManaPlayer_SelectTrack_Statics::NewProp_TrackType = { "TrackType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventSelectTrack_Parms, TrackType), Z_Construct_UEnum_CriWareRuntime_EManaPlayerTrack, METADATA_PARAMS(0, nullptr) }; // 471400301
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaPlayer_SelectTrack_Statics::NewProp_TrackIndex = { "TrackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventSelectTrack_Parms, TrackIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UManaPlayer_SelectTrack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ManaPlayer_eventSelectTrack_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_SelectTrack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ManaPlayer_eventSelectTrack_Parms), &Z_Construct_UFunction_UManaPlayer_SelectTrack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_SelectTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_SelectTrack_Statics::NewProp_TrackType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_SelectTrack_Statics::NewProp_TrackType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_SelectTrack_Statics::NewProp_TrackIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_SelectTrack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_SelectTrack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_SelectTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "SelectTrack", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_SelectTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_SelectTrack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_SelectTrack_Statics::ManaPlayer_eventSelectTrack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_SelectTrack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_SelectTrack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_SelectTrack_Statics::ManaPlayer_eventSelectTrack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_SelectTrack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_SelectTrack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execSelectTrack)
{
	P_GET_ENUM(EManaPlayerTrack,Z_Param_TrackType);
	P_GET_PROPERTY(FIntProperty,Z_Param_TrackIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SelectTrack(EManaPlayerTrack(Z_Param_TrackType),Z_Param_TrackIndex);
	P_NATIVE_END;
}
// End Class UManaPlayer Function SelectTrack

// Begin Class UManaPlayer Function SetLooping
struct Z_Construct_UFunction_UManaPlayer_SetLooping_Statics
{
	struct ManaPlayer_eventSetLooping_Parms
	{
		bool Looping;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Looping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Looping;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UManaPlayer_SetLooping_Statics::NewProp_Looping_SetBit(void* Obj)
{
	((ManaPlayer_eventSetLooping_Parms*)Obj)->Looping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_SetLooping_Statics::NewProp_Looping = { "Looping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ManaPlayer_eventSetLooping_Parms), &Z_Construct_UFunction_UManaPlayer_SetLooping_Statics::NewProp_Looping_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UManaPlayer_SetLooping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ManaPlayer_eventSetLooping_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_SetLooping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ManaPlayer_eventSetLooping_Parms), &Z_Construct_UFunction_UManaPlayer_SetLooping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_SetLooping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_SetLooping_Statics::NewProp_Looping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_SetLooping_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_SetLooping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_SetLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "SetLooping", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_SetLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_SetLooping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_SetLooping_Statics::ManaPlayer_eventSetLooping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_SetLooping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_SetLooping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_SetLooping_Statics::ManaPlayer_eventSetLooping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_SetLooping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_SetLooping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execSetLooping)
{
	P_GET_UBOOL(Z_Param_Looping);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetLooping(Z_Param_Looping);
	P_NATIVE_END;
}
// End Class UManaPlayer Function SetLooping

// Begin Class UManaPlayer Function SetRate
struct Z_Construct_UFunction_UManaPlayer_SetRate_Statics
{
	struct ManaPlayer_eventSetRate_Parms
	{
		float Rate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Rate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManaPlayer_SetRate_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventSetRate_Parms, Rate), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UManaPlayer_SetRate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ManaPlayer_eventSetRate_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_SetRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ManaPlayer_eventSetRate_Parms), &Z_Construct_UFunction_UManaPlayer_SetRate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_SetRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_SetRate_Statics::NewProp_Rate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_SetRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_SetRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_SetRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "SetRate", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_SetRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_SetRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_SetRate_Statics::ManaPlayer_eventSetRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_SetRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_SetRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_SetRate_Statics::ManaPlayer_eventSetRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_SetRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_SetRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execSetRate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetRate(Z_Param_Rate);
	P_NATIVE_END;
}
// End Class UManaPlayer Function SetRate

// Begin Class UManaPlayer Function SetTexture
struct Z_Construct_UFunction_UManaPlayer_SetTexture_Statics
{
	struct ManaPlayer_eventSetTexture_Parms
	{
		UManaTexture* InManaTexture;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InManaTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaPlayer_SetTexture_Statics::NewProp_InManaTexture = { "InManaTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventSetTexture_Parms, InManaTexture), Z_Construct_UClass_UManaTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_SetTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_SetTexture_Statics::NewProp_InManaTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_SetTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_SetTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "SetTexture", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_SetTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_SetTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_SetTexture_Statics::ManaPlayer_eventSetTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_SetTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_SetTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_SetTexture_Statics::ManaPlayer_eventSetTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_SetTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_SetTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execSetTexture)
{
	P_GET_OBJECT(UManaTexture,Z_Param_InManaTexture);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTexture(Z_Param_InManaTexture);
	P_NATIVE_END;
}
// End Class UManaPlayer Function SetTexture

// Begin Class UManaPlayer Function SetTimeSyncedSource
struct Z_Construct_UFunction_UManaPlayer_SetTimeSyncedSource_Statics
{
	struct ManaPlayer_eventSetTimeSyncedSource_Parms
	{
		UAtomComponent* SyncedSource;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SyncedSource_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SyncedSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaPlayer_SetTimeSyncedSource_Statics::NewProp_SyncedSource = { "SyncedSource", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventSetTimeSyncedSource_Parms, SyncedSource), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SyncedSource_MetaData), NewProp_SyncedSource_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_SetTimeSyncedSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_SetTimeSyncedSource_Statics::NewProp_SyncedSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_SetTimeSyncedSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_SetTimeSyncedSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "SetTimeSyncedSource", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_SetTimeSyncedSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_SetTimeSyncedSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_SetTimeSyncedSource_Statics::ManaPlayer_eventSetTimeSyncedSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_SetTimeSyncedSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_SetTimeSyncedSource_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_SetTimeSyncedSource_Statics::ManaPlayer_eventSetTimeSyncedSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_SetTimeSyncedSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_SetTimeSyncedSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execSetTimeSyncedSource)
{
	P_GET_OBJECT(UAtomComponent,Z_Param_SyncedSource);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTimeSyncedSource(Z_Param_SyncedSource);
	P_NATIVE_END;
}
// End Class UManaPlayer Function SetTimeSyncedSource

// Begin Class UManaPlayer Function SetTrackFormat
struct Z_Construct_UFunction_UManaPlayer_SetTrackFormat_Statics
{
	struct ManaPlayer_eventSetTrackFormat_Parms
	{
		EManaPlayerTrack TrackType;
		int32 TrackIndex;
		int32 FormatIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TrackType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TrackIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FormatIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManaPlayer_SetTrackFormat_Statics::NewProp_TrackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManaPlayer_SetTrackFormat_Statics::NewProp_TrackType = { "TrackType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventSetTrackFormat_Parms, TrackType), Z_Construct_UEnum_CriWareRuntime_EManaPlayerTrack, METADATA_PARAMS(0, nullptr) }; // 471400301
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaPlayer_SetTrackFormat_Statics::NewProp_TrackIndex = { "TrackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventSetTrackFormat_Parms, TrackIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaPlayer_SetTrackFormat_Statics::NewProp_FormatIndex = { "FormatIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventSetTrackFormat_Parms, FormatIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UManaPlayer_SetTrackFormat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ManaPlayer_eventSetTrackFormat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_SetTrackFormat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ManaPlayer_eventSetTrackFormat_Parms), &Z_Construct_UFunction_UManaPlayer_SetTrackFormat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_SetTrackFormat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_SetTrackFormat_Statics::NewProp_TrackType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_SetTrackFormat_Statics::NewProp_TrackType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_SetTrackFormat_Statics::NewProp_TrackIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_SetTrackFormat_Statics::NewProp_FormatIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_SetTrackFormat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_SetTrackFormat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_SetTrackFormat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "SetTrackFormat", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_SetTrackFormat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_SetTrackFormat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_SetTrackFormat_Statics::ManaPlayer_eventSetTrackFormat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_SetTrackFormat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_SetTrackFormat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_SetTrackFormat_Statics::ManaPlayer_eventSetTrackFormat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_SetTrackFormat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_SetTrackFormat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execSetTrackFormat)
{
	P_GET_ENUM(EManaPlayerTrack,Z_Param_TrackType);
	P_GET_PROPERTY(FIntProperty,Z_Param_TrackIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_FormatIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetTrackFormat(EManaPlayerTrack(Z_Param_TrackType),Z_Param_TrackIndex,Z_Param_FormatIndex);
	P_NATIVE_END;
}
// End Class UManaPlayer Function SetTrackFormat

// Begin Class UManaPlayer Function SetVolume
struct Z_Construct_UFunction_UManaPlayer_SetVolume_Statics
{
	struct ManaPlayer_eventSetVolume_Parms
	{
		float Volume;
		EManaPlayerTrack TrackType;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TrackType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackType;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManaPlayer_SetVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventSetVolume_Parms, Volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManaPlayer_SetVolume_Statics::NewProp_TrackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManaPlayer_SetVolume_Statics::NewProp_TrackType = { "TrackType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaPlayer_eventSetVolume_Parms, TrackType), Z_Construct_UEnum_CriWareRuntime_EManaPlayerTrack, METADATA_PARAMS(0, nullptr) }; // 471400301
void Z_Construct_UFunction_UManaPlayer_SetVolume_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ManaPlayer_eventSetVolume_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_SetVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ManaPlayer_eventSetVolume_Parms), &Z_Construct_UFunction_UManaPlayer_SetVolume_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_SetVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_SetVolume_Statics::NewProp_Volume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_SetVolume_Statics::NewProp_TrackType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_SetVolume_Statics::NewProp_TrackType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_SetVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_SetVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_SetVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "SetVolume", nullptr, nullptr, Z_Construct_UFunction_UManaPlayer_SetVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_SetVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaPlayer_SetVolume_Statics::ManaPlayer_eventSetVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_SetVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaPlayer_SetVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaPlayer_SetVolume_Statics::ManaPlayer_eventSetVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaPlayer_SetVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaPlayer_SetVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaPlayer::execSetVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
	P_GET_ENUM(EManaPlayerTrack,Z_Param_TrackType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetVolume(Z_Param_Volume,EManaPlayerTrack(Z_Param_TrackType));
	P_NATIVE_END;
}
// End Class UManaPlayer Function SetVolume

// Begin Class UManaPlayer
void UManaPlayer::StaticRegisterNativesUManaPlayer()
{
	UClass* Class = UManaPlayer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BindOnFrameUpdated", &UManaPlayer::execBindOnFrameUpdated },
		{ "Close", &UManaPlayer::execClose },
		{ "DisableTrack", &UManaPlayer::execDisableTrack },
		{ "GetDuration", &UManaPlayer::execGetDuration },
		{ "GetFrames", &UManaPlayer::execGetFrames },
		{ "GetMovieFrames", &UManaPlayer::execGetMovieFrames },
		{ "GetMovieSource", &UManaPlayer::execGetMovieSource },
		{ "GetMovieTime", &UManaPlayer::execGetMovieTime },
		{ "GetNumTrackFormats", &UManaPlayer::execGetNumTrackFormats },
		{ "GetNumTracks", &UManaPlayer::execGetNumTracks },
		{ "GetPlaylistIndex", &UManaPlayer::execGetPlaylistIndex },
		{ "GetRate", &UManaPlayer::execGetRate },
		{ "GetSelectedTrack", &UManaPlayer::execGetSelectedTrack },
		{ "GetStatus", &UManaPlayer::execGetStatus },
		{ "GetSubtitleTrackEncoding", &UManaPlayer::execGetSubtitleTrackEncoding },
		{ "GetTexture", &UManaPlayer::execGetTexture },
		{ "GetTime", &UManaPlayer::execGetTime },
		{ "GetTimeSyncedSource", &UManaPlayer::execGetTimeSyncedSource },
		{ "GetTrackDisplayName", &UManaPlayer::execGetTrackDisplayName },
		{ "GetTrackFormat", &UManaPlayer::execGetTrackFormat },
		{ "GetTrackLanguage", &UManaPlayer::execGetTrackLanguage },
		{ "GetVolume", &UManaPlayer::execGetVolume },
		{ "HandleManaComponentEventPoint", &UManaPlayer::execHandleManaComponentEventPoint },
		{ "HandleManaComponentFrameOnTime", &UManaPlayer::execHandleManaComponentFrameOnTime },
		{ "HandleManaComponentMovieChanged", &UManaPlayer::execHandleManaComponentMovieChanged },
		{ "HandleManaComponentPlayerDestroyed", &UManaPlayer::execHandleManaComponentPlayerDestroyed },
		{ "HandleManaComponentSeekCompleted", &UManaPlayer::execHandleManaComponentSeekCompleted },
		{ "HandleManaComponentStatusChanged", &UManaPlayer::execHandleManaComponentStatusChanged },
		{ "HandleManaComponentSubtitleChanged", &UManaPlayer::execHandleManaComponentSubtitleChanged },
		{ "HasError", &UManaPlayer::execHasError },
		{ "IsClosed", &UManaPlayer::execIsClosed },
		{ "IsLooping", &UManaPlayer::execIsLooping },
		{ "IsPaused", &UManaPlayer::execIsPaused },
		{ "IsPlaying", &UManaPlayer::execIsPlaying },
		{ "IsPreparing", &UManaPlayer::execIsPreparing },
		{ "IsReady", &UManaPlayer::execIsReady },
		{ "IsSeeking", &UManaPlayer::execIsSeeking },
		{ "Next", &UManaPlayer::execNext },
		{ "OpenMovieSource", &UManaPlayer::execOpenMovieSource },
		{ "OpenPlaylist", &UManaPlayer::execOpenPlaylist },
		{ "OpenPlaylistIndex", &UManaPlayer::execOpenPlaylistIndex },
		{ "OpenSourceWithOptions", &UManaPlayer::execOpenSourceWithOptions },
		{ "Pause", &UManaPlayer::execPause },
		{ "Play", &UManaPlayer::execPlay },
		{ "PlayAndSeek", &UManaPlayer::execPlayAndSeek },
		{ "Previous", &UManaPlayer::execPrevious },
		{ "Reopen", &UManaPlayer::execReopen },
		{ "Rewind", &UManaPlayer::execRewind },
		{ "Seek", &UManaPlayer::execSeek },
		{ "SelectTrack", &UManaPlayer::execSelectTrack },
		{ "SetLooping", &UManaPlayer::execSetLooping },
		{ "SetRate", &UManaPlayer::execSetRate },
		{ "SetTexture", &UManaPlayer::execSetTexture },
		{ "SetTimeSyncedSource", &UManaPlayer::execSetTimeSyncedSource },
		{ "SetTrackFormat", &UManaPlayer::execSetTrackFormat },
		{ "SetVolume", &UManaPlayer::execSetVolume },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UManaPlayer);
UClass* Z_Construct_UClass_UManaPlayer_NoRegister()
{
	return UManaPlayer::StaticClass();
}
struct Z_Construct_UClass_UManaPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ManaPlayer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayOnOpen_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayer" },
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Loop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayer" },
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxFrameDrop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayer" },
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEndReached_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayer" },
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMovieClosed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayer" },
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMovieOpened_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayer" },
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMovieOpenFailed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayer" },
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlaybackResumed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayer" },
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlaybackSuspended_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayer" },
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSeekCompleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayer" },
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTracksChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayer" },
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSubtitleChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayer" },
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEventPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayer" },
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayer" },
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaMovie_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayer" },
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Playlist_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayer" },
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaylistIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayer" },
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif // WITH_METADATA
	static void NewProp_PlayOnOpen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PlayOnOpen;
	static void NewProp_Loop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Loop;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaxFrameDrop_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MaxFrameDrop;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndReached;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMovieClosed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMovieOpened;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMovieOpenFailed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlaybackResumed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlaybackSuspended;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSeekCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTracksChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSubtitleChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEventPoint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ManaTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ManaMovie;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Playlist;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlaylistIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ManaComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UManaPlayer_BindOnFrameUpdated, "BindOnFrameUpdated" }, // 2166623321
		{ &Z_Construct_UFunction_UManaPlayer_Close, "Close" }, // 3008935826
		{ &Z_Construct_UFunction_UManaPlayer_DisableTrack, "DisableTrack" }, // 1692131243
		{ &Z_Construct_UFunction_UManaPlayer_GetDuration, "GetDuration" }, // 3019535803
		{ &Z_Construct_UFunction_UManaPlayer_GetFrames, "GetFrames" }, // 3900885118
		{ &Z_Construct_UFunction_UManaPlayer_GetMovieFrames, "GetMovieFrames" }, // 1950067245
		{ &Z_Construct_UFunction_UManaPlayer_GetMovieSource, "GetMovieSource" }, // 593082664
		{ &Z_Construct_UFunction_UManaPlayer_GetMovieTime, "GetMovieTime" }, // 1464856448
		{ &Z_Construct_UFunction_UManaPlayer_GetNumTrackFormats, "GetNumTrackFormats" }, // 1124207804
		{ &Z_Construct_UFunction_UManaPlayer_GetNumTracks, "GetNumTracks" }, // 3257004368
		{ &Z_Construct_UFunction_UManaPlayer_GetPlaylistIndex, "GetPlaylistIndex" }, // 3899055045
		{ &Z_Construct_UFunction_UManaPlayer_GetRate, "GetRate" }, // 1890761326
		{ &Z_Construct_UFunction_UManaPlayer_GetSelectedTrack, "GetSelectedTrack" }, // 2281914657
		{ &Z_Construct_UFunction_UManaPlayer_GetStatus, "GetStatus" }, // 3299476551
		{ &Z_Construct_UFunction_UManaPlayer_GetSubtitleTrackEncoding, "GetSubtitleTrackEncoding" }, // 4107582639
		{ &Z_Construct_UFunction_UManaPlayer_GetTexture, "GetTexture" }, // 587138974
		{ &Z_Construct_UFunction_UManaPlayer_GetTime, "GetTime" }, // 404299264
		{ &Z_Construct_UFunction_UManaPlayer_GetTimeSyncedSource, "GetTimeSyncedSource" }, // 817008551
		{ &Z_Construct_UFunction_UManaPlayer_GetTrackDisplayName, "GetTrackDisplayName" }, // 1458862396
		{ &Z_Construct_UFunction_UManaPlayer_GetTrackFormat, "GetTrackFormat" }, // 1815492515
		{ &Z_Construct_UFunction_UManaPlayer_GetTrackLanguage, "GetTrackLanguage" }, // 1762122810
		{ &Z_Construct_UFunction_UManaPlayer_GetVolume, "GetVolume" }, // 307881388
		{ &Z_Construct_UFunction_UManaPlayer_HandleManaComponentEventPoint, "HandleManaComponentEventPoint" }, // 3137439312
		{ &Z_Construct_UFunction_UManaPlayer_HandleManaComponentFrameOnTime, "HandleManaComponentFrameOnTime" }, // 3009484790
		{ &Z_Construct_UFunction_UManaPlayer_HandleManaComponentMovieChanged, "HandleManaComponentMovieChanged" }, // 3229456121
		{ &Z_Construct_UFunction_UManaPlayer_HandleManaComponentPlayerDestroyed, "HandleManaComponentPlayerDestroyed" }, // 861036843
		{ &Z_Construct_UFunction_UManaPlayer_HandleManaComponentSeekCompleted, "HandleManaComponentSeekCompleted" }, // 1372342255
		{ &Z_Construct_UFunction_UManaPlayer_HandleManaComponentStatusChanged, "HandleManaComponentStatusChanged" }, // 1596568785
		{ &Z_Construct_UFunction_UManaPlayer_HandleManaComponentSubtitleChanged, "HandleManaComponentSubtitleChanged" }, // 2219793126
		{ &Z_Construct_UFunction_UManaPlayer_HasError, "HasError" }, // 3914141473
		{ &Z_Construct_UFunction_UManaPlayer_IsClosed, "IsClosed" }, // 2469463594
		{ &Z_Construct_UFunction_UManaPlayer_IsLooping, "IsLooping" }, // 65131185
		{ &Z_Construct_UFunction_UManaPlayer_IsPaused, "IsPaused" }, // 2547581226
		{ &Z_Construct_UFunction_UManaPlayer_IsPlaying, "IsPlaying" }, // 2282289868
		{ &Z_Construct_UFunction_UManaPlayer_IsPreparing, "IsPreparing" }, // 1420909860
		{ &Z_Construct_UFunction_UManaPlayer_IsReady, "IsReady" }, // 786968620
		{ &Z_Construct_UFunction_UManaPlayer_IsSeeking, "IsSeeking" }, // 3538683071
		{ &Z_Construct_UFunction_UManaPlayer_Next, "Next" }, // 3897830344
		{ &Z_Construct_UDelegateFunction_UManaPlayer_OnFrameUpdatedDelegate__DelegateSignature, "OnFrameUpdatedDelegate__DelegateSignature" }, // 2096836797
		{ &Z_Construct_UFunction_UManaPlayer_OpenMovieSource, "OpenMovieSource" }, // 1337518203
		{ &Z_Construct_UFunction_UManaPlayer_OpenPlaylist, "OpenPlaylist" }, // 3520332702
		{ &Z_Construct_UFunction_UManaPlayer_OpenPlaylistIndex, "OpenPlaylistIndex" }, // 1217939751
		{ &Z_Construct_UFunction_UManaPlayer_OpenSourceWithOptions, "OpenSourceWithOptions" }, // 4156510753
		{ &Z_Construct_UFunction_UManaPlayer_Pause, "Pause" }, // 1217785045
		{ &Z_Construct_UFunction_UManaPlayer_Play, "Play" }, // 3032337191
		{ &Z_Construct_UFunction_UManaPlayer_PlayAndSeek, "PlayAndSeek" }, // 2900669381
		{ &Z_Construct_UFunction_UManaPlayer_Previous, "Previous" }, // 2387478131
		{ &Z_Construct_UFunction_UManaPlayer_Reopen, "Reopen" }, // 2334471571
		{ &Z_Construct_UFunction_UManaPlayer_Rewind, "Rewind" }, // 3117054912
		{ &Z_Construct_UFunction_UManaPlayer_Seek, "Seek" }, // 3163448612
		{ &Z_Construct_UFunction_UManaPlayer_SelectTrack, "SelectTrack" }, // 2425805744
		{ &Z_Construct_UFunction_UManaPlayer_SetLooping, "SetLooping" }, // 1708325914
		{ &Z_Construct_UFunction_UManaPlayer_SetRate, "SetRate" }, // 2927235247
		{ &Z_Construct_UFunction_UManaPlayer_SetTexture, "SetTexture" }, // 1577269690
		{ &Z_Construct_UFunction_UManaPlayer_SetTimeSyncedSource, "SetTimeSyncedSource" }, // 3824812614
		{ &Z_Construct_UFunction_UManaPlayer_SetTrackFormat, "SetTrackFormat" }, // 1252866945
		{ &Z_Construct_UFunction_UManaPlayer_SetVolume, "SetVolume" }, // 1943755087
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManaPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UManaPlayer_Statics::NewProp_PlayOnOpen_SetBit(void* Obj)
{
	((UManaPlayer*)Obj)->PlayOnOpen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UManaPlayer_Statics::NewProp_PlayOnOpen = { "PlayOnOpen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UManaPlayer), &Z_Construct_UClass_UManaPlayer_Statics::NewProp_PlayOnOpen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayOnOpen_MetaData), NewProp_PlayOnOpen_MetaData) };
void Z_Construct_UClass_UManaPlayer_Statics::NewProp_Loop_SetBit(void* Obj)
{
	((UManaPlayer*)Obj)->Loop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UManaPlayer_Statics::NewProp_Loop = { "Loop", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UManaPlayer), &Z_Construct_UClass_UManaPlayer_Statics::NewProp_Loop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Loop_MetaData), NewProp_Loop_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UManaPlayer_Statics::NewProp_MaxFrameDrop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UManaPlayer_Statics::NewProp_MaxFrameDrop = { "MaxFrameDrop", nullptr, (EPropertyFlags)0x00200c0000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaPlayer, MaxFrameDrop), Z_Construct_UEnum_CriWareRuntime_EManaMaxFrameDrop, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxFrameDrop_MetaData), NewProp_MaxFrameDrop_MetaData) }; // 1699464272
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnEndReached = { "OnEndReached", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaPlayer, OnEndReached), Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerManaEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEndReached_MetaData), NewProp_OnEndReached_MetaData) }; // 3192434829
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnMovieClosed = { "OnMovieClosed", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaPlayer, OnMovieClosed), Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerManaEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMovieClosed_MetaData), NewProp_OnMovieClosed_MetaData) }; // 3192434829
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnMovieOpened = { "OnMovieOpened", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaPlayer, OnMovieOpened), Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerMovieOpened__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMovieOpened_MetaData), NewProp_OnMovieOpened_MetaData) }; // 336409338
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnMovieOpenFailed = { "OnMovieOpenFailed", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaPlayer, OnMovieOpenFailed), Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerMovieOpenFailed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMovieOpenFailed_MetaData), NewProp_OnMovieOpenFailed_MetaData) }; // 3837908040
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnPlaybackResumed = { "OnPlaybackResumed", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaPlayer, OnPlaybackResumed), Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerManaEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlaybackResumed_MetaData), NewProp_OnPlaybackResumed_MetaData) }; // 3192434829
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnPlaybackSuspended = { "OnPlaybackSuspended", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaPlayer, OnPlaybackSuspended), Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerManaEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlaybackSuspended_MetaData), NewProp_OnPlaybackSuspended_MetaData) }; // 3192434829
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnSeekCompleted = { "OnSeekCompleted", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaPlayer, OnSeekCompleted), Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerManaEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSeekCompleted_MetaData), NewProp_OnSeekCompleted_MetaData) }; // 3192434829
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnTracksChanged = { "OnTracksChanged", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaPlayer, OnTracksChanged), Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerManaEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTracksChanged_MetaData), NewProp_OnTracksChanged_MetaData) }; // 3192434829
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnSubtitleChanged = { "OnSubtitleChanged", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaPlayer, OnSubtitleChanged), Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerSubtitleChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSubtitleChanged_MetaData), NewProp_OnSubtitleChanged_MetaData) }; // 2667301639
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnEventPoint = { "OnEventPoint", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaPlayer, OnEventPoint), Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerEventPoint__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEventPoint_MetaData), NewProp_OnEventPoint_MetaData) }; // 993988376
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UManaPlayer_Statics::NewProp_ManaTexture = { "ManaTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaPlayer, ManaTexture), Z_Construct_UClass_UManaTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaTexture_MetaData), NewProp_ManaTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UManaPlayer_Statics::NewProp_ManaMovie = { "ManaMovie", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaPlayer, ManaMovie), Z_Construct_UClass_UManaMovie_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaMovie_MetaData), NewProp_ManaMovie_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UManaPlayer_Statics::NewProp_Playlist = { "Playlist", nullptr, (EPropertyFlags)0x0020080000002005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaPlayer, Playlist), Z_Construct_UClass_UManaPlaylist_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Playlist_MetaData), NewProp_Playlist_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UManaPlayer_Statics::NewProp_PlaylistIndex = { "PlaylistIndex", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaPlayer, PlaylistIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaylistIndex_MetaData), NewProp_PlaylistIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UManaPlayer_Statics::NewProp_ManaComponent = { "ManaComponent", nullptr, (EPropertyFlags)0x002208000008200d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaPlayer, ManaComponent), Z_Construct_UClass_UManaComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaComponent_MetaData), NewProp_ManaComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UManaPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaPlayer_Statics::NewProp_PlayOnOpen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaPlayer_Statics::NewProp_Loop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaPlayer_Statics::NewProp_MaxFrameDrop_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaPlayer_Statics::NewProp_MaxFrameDrop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnEndReached,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnMovieClosed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnMovieOpened,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnMovieOpenFailed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnPlaybackResumed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnPlaybackSuspended,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnSeekCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnTracksChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnSubtitleChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnEventPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaPlayer_Statics::NewProp_ManaTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaPlayer_Statics::NewProp_ManaMovie,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaPlayer_Statics::NewProp_Playlist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaPlayer_Statics::NewProp_PlaylistIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaPlayer_Statics::NewProp_ManaComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManaPlayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UManaPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManaPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UManaPlayer_Statics::ClassParams = {
	&UManaPlayer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UManaPlayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UManaPlayer_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManaPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UManaPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UManaPlayer()
{
	if (!Z_Registration_Info_UClass_UManaPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UManaPlayer.OuterSingleton, Z_Construct_UClass_UManaPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UManaPlayer.OuterSingleton;
}
template<> CRIWARERUNTIME_API UClass* StaticClass<UManaPlayer>()
{
	return UManaPlayer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UManaPlayer);
UManaPlayer::~UManaPlayer() {}
// End Class UManaPlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UManaPlayer, UManaPlayer::StaticClass, TEXT("UManaPlayer"), &Z_Registration_Info_UClass_UManaPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManaPlayer), 3183966453U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h_3901580691(TEXT("/Script/CriWareRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
