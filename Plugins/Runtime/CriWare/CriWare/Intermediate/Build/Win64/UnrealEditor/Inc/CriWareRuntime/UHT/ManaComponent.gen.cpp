// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/ManaComponent.h"
#include "CriWareRuntime/Public/ManaEventPointInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManaComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaComponent();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaComponent_NoRegister();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaMovie_NoRegister();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaPlaylist_NoRegister();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaTexture_NoRegister();
CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomSpeakerID();
CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaComponentStatus();
CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaFrameAction();
CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaMaxFrameDrop();
CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaPlaybackTimer();
CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaSubtitlesEncoding();
CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnEventPoint__DelegateSignature();
CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnFrameOnTime__DelegateSignature();
CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnMovieChanged__DelegateSignature();
CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnPlayerDestroyed__DelegateSignature();
CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnRequestData__DelegateSignature();
CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnSeekCompleted__DelegateSignature();
CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature();
CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnSubtitleChanged__DelegateSignature();
CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnTrackChanged__DelegateSignature();
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FManaEventPointInfo();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Delegate FOnTrackChanged
struct Z_Construct_UDelegateFunction_UManaComponent_OnTrackChanged__DelegateSignature_Statics
{
	struct ManaComponent_eventOnTrackChanged_Parms
	{
		int32 TrackNumber;
		UManaComponent* ManaComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TrackNumber;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ManaComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UManaComponent_OnTrackChanged__DelegateSignature_Statics::NewProp_TrackNumber = { "TrackNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventOnTrackChanged_Parms, TrackNumber), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UManaComponent_OnTrackChanged__DelegateSignature_Statics::NewProp_ManaComponent = { "ManaComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventOnTrackChanged_Parms, ManaComponent), Z_Construct_UClass_UManaComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaComponent_MetaData), NewProp_ManaComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UManaComponent_OnTrackChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UManaComponent_OnTrackChanged__DelegateSignature_Statics::NewProp_TrackNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UManaComponent_OnTrackChanged__DelegateSignature_Statics::NewProp_ManaComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnTrackChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UManaComponent_OnTrackChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "OnTrackChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UManaComponent_OnTrackChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnTrackChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UManaComponent_OnTrackChanged__DelegateSignature_Statics::ManaComponent_eventOnTrackChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnTrackChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UManaComponent_OnTrackChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UManaComponent_OnTrackChanged__DelegateSignature_Statics::ManaComponent_eventOnTrackChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnTrackChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UManaComponent_OnTrackChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UManaComponent::FOnTrackChanged_DelegateWrapper(const FMulticastScriptDelegate& OnTrackChanged, int32 TrackNumber, UManaComponent* ManaComponent)
{
	struct ManaComponent_eventOnTrackChanged_Parms
	{
		int32 TrackNumber;
		UManaComponent* ManaComponent;
	};
	ManaComponent_eventOnTrackChanged_Parms Parms;
	Parms.TrackNumber=TrackNumber;
	Parms.ManaComponent=ManaComponent;
	OnTrackChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnTrackChanged

// Begin Delegate FOnSubtitleChanged
struct Z_Construct_UDelegateFunction_UManaComponent_OnSubtitleChanged__DelegateSignature_Statics
{
	struct ManaComponent_eventOnSubtitleChanged_Parms
	{
		FText Subtitle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Subtitle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_UManaComponent_OnSubtitleChanged__DelegateSignature_Statics::NewProp_Subtitle = { "Subtitle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventOnSubtitleChanged_Parms, Subtitle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UManaComponent_OnSubtitleChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UManaComponent_OnSubtitleChanged__DelegateSignature_Statics::NewProp_Subtitle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnSubtitleChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UManaComponent_OnSubtitleChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "OnSubtitleChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UManaComponent_OnSubtitleChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnSubtitleChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UManaComponent_OnSubtitleChanged__DelegateSignature_Statics::ManaComponent_eventOnSubtitleChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnSubtitleChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UManaComponent_OnSubtitleChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UManaComponent_OnSubtitleChanged__DelegateSignature_Statics::ManaComponent_eventOnSubtitleChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnSubtitleChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UManaComponent_OnSubtitleChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UManaComponent::FOnSubtitleChanged_DelegateWrapper(const FMulticastScriptDelegate& OnSubtitleChanged, const FText& Subtitle)
{
	struct ManaComponent_eventOnSubtitleChanged_Parms
	{
		FText Subtitle;
	};
	ManaComponent_eventOnSubtitleChanged_Parms Parms;
	Parms.Subtitle=Subtitle;
	OnSubtitleChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSubtitleChanged

// Begin Delegate FOnStatusChanged
struct Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature_Statics
{
	struct ManaComponent_eventOnStatusChanged_Parms
	{
		EManaComponentStatus Status;
		UManaComponent* ManaComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Status;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ManaComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventOnStatusChanged_Parms, Status), Z_Construct_UEnum_CriWareRuntime_EManaComponentStatus, METADATA_PARAMS(0, nullptr) }; // 1856978859
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature_Statics::NewProp_ManaComponent = { "ManaComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventOnStatusChanged_Parms, ManaComponent), Z_Construct_UClass_UManaComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaComponent_MetaData), NewProp_ManaComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature_Statics::NewProp_Status_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature_Statics::NewProp_Status,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature_Statics::NewProp_ManaComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "OnStatusChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature_Statics::ManaComponent_eventOnStatusChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature_Statics::ManaComponent_eventOnStatusChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UManaComponent::FOnStatusChanged_DelegateWrapper(const FMulticastScriptDelegate& OnStatusChanged, EManaComponentStatus Status, UManaComponent* ManaComponent)
{
	struct ManaComponent_eventOnStatusChanged_Parms
	{
		EManaComponentStatus Status;
		UManaComponent* ManaComponent;
	};
	ManaComponent_eventOnStatusChanged_Parms Parms;
	Parms.Status=Status;
	Parms.ManaComponent=ManaComponent;
	OnStatusChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnStatusChanged

// Begin Delegate FOnSeekCompleted
struct Z_Construct_UDelegateFunction_UManaComponent_OnSeekCompleted__DelegateSignature_Statics
{
	struct ManaComponent_eventOnSeekCompleted_Parms
	{
		int32 FrameNumber;
		UManaComponent* ManaComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_FrameNumber;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ManaComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UManaComponent_OnSeekCompleted__DelegateSignature_Statics::NewProp_FrameNumber = { "FrameNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventOnSeekCompleted_Parms, FrameNumber), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UManaComponent_OnSeekCompleted__DelegateSignature_Statics::NewProp_ManaComponent = { "ManaComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventOnSeekCompleted_Parms, ManaComponent), Z_Construct_UClass_UManaComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaComponent_MetaData), NewProp_ManaComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UManaComponent_OnSeekCompleted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UManaComponent_OnSeekCompleted__DelegateSignature_Statics::NewProp_FrameNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UManaComponent_OnSeekCompleted__DelegateSignature_Statics::NewProp_ManaComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnSeekCompleted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UManaComponent_OnSeekCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "OnSeekCompleted__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UManaComponent_OnSeekCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnSeekCompleted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UManaComponent_OnSeekCompleted__DelegateSignature_Statics::ManaComponent_eventOnSeekCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnSeekCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UManaComponent_OnSeekCompleted__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UManaComponent_OnSeekCompleted__DelegateSignature_Statics::ManaComponent_eventOnSeekCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnSeekCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UManaComponent_OnSeekCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UManaComponent::FOnSeekCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnSeekCompleted, int32 FrameNumber, UManaComponent* ManaComponent)
{
	struct ManaComponent_eventOnSeekCompleted_Parms
	{
		int32 FrameNumber;
		UManaComponent* ManaComponent;
	};
	ManaComponent_eventOnSeekCompleted_Parms Parms;
	Parms.FrameNumber=FrameNumber;
	Parms.ManaComponent=ManaComponent;
	OnSeekCompleted.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSeekCompleted

// Begin Delegate FOnRequestData
struct Z_Construct_UDelegateFunction_UManaComponent_OnRequestData__DelegateSignature_Statics
{
	struct ManaComponent_eventOnRequestData_Parms
	{
		UManaComponent* ManaComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ManaComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UManaComponent_OnRequestData__DelegateSignature_Statics::NewProp_ManaComponent = { "ManaComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventOnRequestData_Parms, ManaComponent), Z_Construct_UClass_UManaComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaComponent_MetaData), NewProp_ManaComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UManaComponent_OnRequestData__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UManaComponent_OnRequestData__DelegateSignature_Statics::NewProp_ManaComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnRequestData__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UManaComponent_OnRequestData__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "OnRequestData__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UManaComponent_OnRequestData__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnRequestData__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UManaComponent_OnRequestData__DelegateSignature_Statics::ManaComponent_eventOnRequestData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnRequestData__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UManaComponent_OnRequestData__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UManaComponent_OnRequestData__DelegateSignature_Statics::ManaComponent_eventOnRequestData_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnRequestData__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UManaComponent_OnRequestData__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UManaComponent::FOnRequestData_DelegateWrapper(const FScriptDelegate& OnRequestData, UManaComponent* ManaComponent)
{
	struct ManaComponent_eventOnRequestData_Parms
	{
		UManaComponent* ManaComponent;
	};
	ManaComponent_eventOnRequestData_Parms Parms;
	Parms.ManaComponent=ManaComponent;
	OnRequestData.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnRequestData

// Begin Delegate FOnPlayerDestroyed
struct Z_Construct_UDelegateFunction_UManaComponent_OnPlayerDestroyed__DelegateSignature_Statics
{
	struct ManaComponent_eventOnPlayerDestroyed_Parms
	{
		UManaComponent* ManaComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ManaComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UManaComponent_OnPlayerDestroyed__DelegateSignature_Statics::NewProp_ManaComponent = { "ManaComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventOnPlayerDestroyed_Parms, ManaComponent), Z_Construct_UClass_UManaComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaComponent_MetaData), NewProp_ManaComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UManaComponent_OnPlayerDestroyed__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UManaComponent_OnPlayerDestroyed__DelegateSignature_Statics::NewProp_ManaComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnPlayerDestroyed__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UManaComponent_OnPlayerDestroyed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "OnPlayerDestroyed__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UManaComponent_OnPlayerDestroyed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnPlayerDestroyed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UManaComponent_OnPlayerDestroyed__DelegateSignature_Statics::ManaComponent_eventOnPlayerDestroyed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnPlayerDestroyed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UManaComponent_OnPlayerDestroyed__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UManaComponent_OnPlayerDestroyed__DelegateSignature_Statics::ManaComponent_eventOnPlayerDestroyed_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnPlayerDestroyed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UManaComponent_OnPlayerDestroyed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UManaComponent::FOnPlayerDestroyed_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerDestroyed, UManaComponent* ManaComponent)
{
	struct ManaComponent_eventOnPlayerDestroyed_Parms
	{
		UManaComponent* ManaComponent;
	};
	ManaComponent_eventOnPlayerDestroyed_Parms Parms;
	Parms.ManaComponent=ManaComponent;
	OnPlayerDestroyed.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnPlayerDestroyed

// Begin Delegate FOnMovieChanged
struct Z_Construct_UDelegateFunction_UManaComponent_OnMovieChanged__DelegateSignature_Statics
{
	struct ManaComponent_eventOnMovieChanged_Parms
	{
		UManaMovie* Movie;
		UManaComponent* ManaComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Movie;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ManaComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UManaComponent_OnMovieChanged__DelegateSignature_Statics::NewProp_Movie = { "Movie", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventOnMovieChanged_Parms, Movie), Z_Construct_UClass_UManaMovie_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UManaComponent_OnMovieChanged__DelegateSignature_Statics::NewProp_ManaComponent = { "ManaComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventOnMovieChanged_Parms, ManaComponent), Z_Construct_UClass_UManaComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaComponent_MetaData), NewProp_ManaComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UManaComponent_OnMovieChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UManaComponent_OnMovieChanged__DelegateSignature_Statics::NewProp_Movie,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UManaComponent_OnMovieChanged__DelegateSignature_Statics::NewProp_ManaComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnMovieChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UManaComponent_OnMovieChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "OnMovieChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UManaComponent_OnMovieChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnMovieChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UManaComponent_OnMovieChanged__DelegateSignature_Statics::ManaComponent_eventOnMovieChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnMovieChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UManaComponent_OnMovieChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UManaComponent_OnMovieChanged__DelegateSignature_Statics::ManaComponent_eventOnMovieChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnMovieChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UManaComponent_OnMovieChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UManaComponent::FOnMovieChanged_DelegateWrapper(const FMulticastScriptDelegate& OnMovieChanged, UManaMovie* Movie, UManaComponent* ManaComponent)
{
	struct ManaComponent_eventOnMovieChanged_Parms
	{
		UManaMovie* Movie;
		UManaComponent* ManaComponent;
	};
	ManaComponent_eventOnMovieChanged_Parms Parms;
	Parms.Movie=Movie;
	Parms.ManaComponent=ManaComponent;
	OnMovieChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnMovieChanged

// Begin Delegate FOnFrameOnTime
struct Z_Construct_UDelegateFunction_UManaComponent_OnFrameOnTime__DelegateSignature_Statics
{
	struct ManaComponent_eventOnFrameOnTime_Parms
	{
		int32 FrameNumber;
		UManaComponent* ManaComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_FrameNumber;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ManaComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UManaComponent_OnFrameOnTime__DelegateSignature_Statics::NewProp_FrameNumber = { "FrameNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventOnFrameOnTime_Parms, FrameNumber), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UManaComponent_OnFrameOnTime__DelegateSignature_Statics::NewProp_ManaComponent = { "ManaComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventOnFrameOnTime_Parms, ManaComponent), Z_Construct_UClass_UManaComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaComponent_MetaData), NewProp_ManaComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UManaComponent_OnFrameOnTime__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UManaComponent_OnFrameOnTime__DelegateSignature_Statics::NewProp_FrameNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UManaComponent_OnFrameOnTime__DelegateSignature_Statics::NewProp_ManaComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnFrameOnTime__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UManaComponent_OnFrameOnTime__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "OnFrameOnTime__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UManaComponent_OnFrameOnTime__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnFrameOnTime__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UManaComponent_OnFrameOnTime__DelegateSignature_Statics::ManaComponent_eventOnFrameOnTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnFrameOnTime__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UManaComponent_OnFrameOnTime__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UManaComponent_OnFrameOnTime__DelegateSignature_Statics::ManaComponent_eventOnFrameOnTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnFrameOnTime__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UManaComponent_OnFrameOnTime__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UManaComponent::FOnFrameOnTime_DelegateWrapper(const FMulticastScriptDelegate& OnFrameOnTime, int32 FrameNumber, UManaComponent* ManaComponent)
{
	struct ManaComponent_eventOnFrameOnTime_Parms
	{
		int32 FrameNumber;
		UManaComponent* ManaComponent;
	};
	ManaComponent_eventOnFrameOnTime_Parms Parms;
	Parms.FrameNumber=FrameNumber;
	Parms.ManaComponent=ManaComponent;
	OnFrameOnTime.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnFrameOnTime

// Begin Delegate FOnEventPoint
struct Z_Construct_UDelegateFunction_UManaComponent_OnEventPoint__DelegateSignature_Statics
{
	struct ManaComponent_eventOnEventPoint_Parms
	{
		FManaEventPointInfo EventPointInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventPointInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UManaComponent_OnEventPoint__DelegateSignature_Statics::NewProp_EventPointInfo = { "EventPointInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventOnEventPoint_Parms, EventPointInfo), Z_Construct_UScriptStruct_FManaEventPointInfo, METADATA_PARAMS(0, nullptr) }; // 1824312565
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UManaComponent_OnEventPoint__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UManaComponent_OnEventPoint__DelegateSignature_Statics::NewProp_EventPointInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnEventPoint__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UManaComponent_OnEventPoint__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "OnEventPoint__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UManaComponent_OnEventPoint__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnEventPoint__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UManaComponent_OnEventPoint__DelegateSignature_Statics::ManaComponent_eventOnEventPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnEventPoint__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UManaComponent_OnEventPoint__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UManaComponent_OnEventPoint__DelegateSignature_Statics::ManaComponent_eventOnEventPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnEventPoint__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UManaComponent_OnEventPoint__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UManaComponent::FOnEventPoint_DelegateWrapper(const FMulticastScriptDelegate& OnEventPoint, FManaEventPointInfo EventPointInfo)
{
	struct ManaComponent_eventOnEventPoint_Parms
	{
		FManaEventPointInfo EventPointInfo;
	};
	ManaComponent_eventOnEventPoint_Parms Parms;
	Parms.EventPointInfo=EventPointInfo;
	OnEventPoint.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnEventPoint

// Begin Class UManaComponent Function AdvanceTime
struct Z_Construct_UFunction_UManaComponent_AdvanceTime_Statics
{
	struct ManaComponent_eventAdvanceTime_Parms
	{
		FTimespan DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UManaComponent_AdvanceTime_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventAdvanceTime_Parms, DeltaTime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_AdvanceTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_AdvanceTime_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_AdvanceTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_AdvanceTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "AdvanceTime", nullptr, nullptr, Z_Construct_UFunction_UManaComponent_AdvanceTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_AdvanceTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaComponent_AdvanceTime_Statics::ManaComponent_eventAdvanceTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_AdvanceTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_AdvanceTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaComponent_AdvanceTime_Statics::ManaComponent_eventAdvanceTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaComponent_AdvanceTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_AdvanceTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execAdvanceTime)
{
	P_GET_STRUCT(FTimespan,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AdvanceTime(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class UManaComponent Function AdvanceTime

// Begin Class UManaComponent Function ChangeSubtitlesChannel
struct Z_Construct_UFunction_UManaComponent_ChangeSubtitlesChannel_Statics
{
	struct ManaComponent_eventChangeSubtitlesChannel_Parms
	{
		int32 Channel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Channel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaComponent_ChangeSubtitlesChannel_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventChangeSubtitlesChannel_Parms, Channel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_ChangeSubtitlesChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_ChangeSubtitlesChannel_Statics::NewProp_Channel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_ChangeSubtitlesChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_ChangeSubtitlesChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "ChangeSubtitlesChannel", nullptr, nullptr, Z_Construct_UFunction_UManaComponent_ChangeSubtitlesChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_ChangeSubtitlesChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaComponent_ChangeSubtitlesChannel_Statics::ManaComponent_eventChangeSubtitlesChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_ChangeSubtitlesChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_ChangeSubtitlesChannel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaComponent_ChangeSubtitlesChannel_Statics::ManaComponent_eventChangeSubtitlesChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaComponent_ChangeSubtitlesChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_ChangeSubtitlesChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execChangeSubtitlesChannel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Channel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeSubtitlesChannel(Z_Param_Channel);
	P_NATIVE_END;
}
// End Class UManaComponent Function ChangeSubtitlesChannel

// Begin Class UManaComponent Function ChangeSubtitlesEncoding
struct Z_Construct_UFunction_UManaComponent_ChangeSubtitlesEncoding_Statics
{
	struct ManaComponent_eventChangeSubtitlesEncoding_Parms
	{
		EManaSubtitlesEncoding Encoding;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Encoding_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Encoding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManaComponent_ChangeSubtitlesEncoding_Statics::NewProp_Encoding_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManaComponent_ChangeSubtitlesEncoding_Statics::NewProp_Encoding = { "Encoding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventChangeSubtitlesEncoding_Parms, Encoding), Z_Construct_UEnum_CriWareRuntime_EManaSubtitlesEncoding, METADATA_PARAMS(0, nullptr) }; // 1557399849
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_ChangeSubtitlesEncoding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_ChangeSubtitlesEncoding_Statics::NewProp_Encoding_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_ChangeSubtitlesEncoding_Statics::NewProp_Encoding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_ChangeSubtitlesEncoding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_ChangeSubtitlesEncoding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "ChangeSubtitlesEncoding", nullptr, nullptr, Z_Construct_UFunction_UManaComponent_ChangeSubtitlesEncoding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_ChangeSubtitlesEncoding_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaComponent_ChangeSubtitlesEncoding_Statics::ManaComponent_eventChangeSubtitlesEncoding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_ChangeSubtitlesEncoding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_ChangeSubtitlesEncoding_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaComponent_ChangeSubtitlesEncoding_Statics::ManaComponent_eventChangeSubtitlesEncoding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaComponent_ChangeSubtitlesEncoding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_ChangeSubtitlesEncoding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execChangeSubtitlesEncoding)
{
	P_GET_ENUM(EManaSubtitlesEncoding,Z_Param_Encoding);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeSubtitlesEncoding(EManaSubtitlesEncoding(Z_Param_Encoding));
	P_NATIVE_END;
}
// End Class UManaComponent Function ChangeSubtitlesEncoding

// Begin Class UManaComponent Function EnableSeamless
struct Z_Construct_UFunction_UManaComponent_EnableSeamless_Statics
{
	struct ManaComponent_eventEnableSeamless_Parms
	{
		bool bEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UManaComponent_EnableSeamless_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((ManaComponent_eventEnableSeamless_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaComponent_EnableSeamless_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ManaComponent_eventEnableSeamless_Parms), &Z_Construct_UFunction_UManaComponent_EnableSeamless_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_EnableSeamless_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_EnableSeamless_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_EnableSeamless_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_EnableSeamless_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "EnableSeamless", nullptr, nullptr, Z_Construct_UFunction_UManaComponent_EnableSeamless_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_EnableSeamless_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaComponent_EnableSeamless_Statics::ManaComponent_eventEnableSeamless_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_EnableSeamless_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_EnableSeamless_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaComponent_EnableSeamless_Statics::ManaComponent_eventEnableSeamless_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaComponent_EnableSeamless()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_EnableSeamless_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execEnableSeamless)
{
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableSeamless(Z_Param_bEnable);
	P_NATIVE_END;
}
// End Class UManaComponent Function EnableSeamless

// Begin Class UManaComponent Function EnableSubtitles
struct Z_Construct_UFunction_UManaComponent_EnableSubtitles_Statics
{
	struct ManaComponent_eventEnableSubtitles_Parms
	{
		bool bEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UManaComponent_EnableSubtitles_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((ManaComponent_eventEnableSubtitles_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaComponent_EnableSubtitles_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ManaComponent_eventEnableSubtitles_Parms), &Z_Construct_UFunction_UManaComponent_EnableSubtitles_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_EnableSubtitles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_EnableSubtitles_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_EnableSubtitles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_EnableSubtitles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "EnableSubtitles", nullptr, nullptr, Z_Construct_UFunction_UManaComponent_EnableSubtitles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_EnableSubtitles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaComponent_EnableSubtitles_Statics::ManaComponent_eventEnableSubtitles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_EnableSubtitles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_EnableSubtitles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaComponent_EnableSubtitles_Statics::ManaComponent_eventEnableSubtitles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaComponent_EnableSubtitles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_EnableSubtitles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execEnableSubtitles)
{
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableSubtitles(Z_Param_bEnable);
	P_NATIVE_END;
}
// End Class UManaComponent Function EnableSubtitles

// Begin Class UManaComponent Function GetExtraVolume
struct Z_Construct_UFunction_UManaComponent_GetExtraVolume_Statics
{
	struct ManaComponent_eventGetExtraVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManaComponent_GetExtraVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventGetExtraVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_GetExtraVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_GetExtraVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetExtraVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_GetExtraVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "GetExtraVolume", nullptr, nullptr, Z_Construct_UFunction_UManaComponent_GetExtraVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetExtraVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaComponent_GetExtraVolume_Statics::ManaComponent_eventGetExtraVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetExtraVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_GetExtraVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaComponent_GetExtraVolume_Statics::ManaComponent_eventGetExtraVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaComponent_GetExtraVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_GetExtraVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execGetExtraVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetExtraVolume();
	P_NATIVE_END;
}
// End Class UManaComponent Function GetExtraVolume

// Begin Class UManaComponent Function GetFrameNumber
struct Z_Construct_UFunction_UManaComponent_GetFrameNumber_Statics
{
	struct ManaComponent_eventGetFrameNumber_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaComponent_GetFrameNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventGetFrameNumber_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_GetFrameNumber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_GetFrameNumber_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetFrameNumber_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_GetFrameNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "GetFrameNumber", nullptr, nullptr, Z_Construct_UFunction_UManaComponent_GetFrameNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetFrameNumber_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaComponent_GetFrameNumber_Statics::ManaComponent_eventGetFrameNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetFrameNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_GetFrameNumber_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaComponent_GetFrameNumber_Statics::ManaComponent_eventGetFrameNumber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaComponent_GetFrameNumber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_GetFrameNumber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execGetFrameNumber)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetFrameNumber();
	P_NATIVE_END;
}
// End Class UManaComponent Function GetFrameNumber

// Begin Class UManaComponent Function GetMovieTime
struct Z_Construct_UFunction_UManaComponent_GetMovieTime_Statics
{
	struct ManaComponent_eventGetMovieTime_Parms
	{
		FTimespan ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UManaComponent_GetMovieTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventGetMovieTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_GetMovieTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_GetMovieTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetMovieTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_GetMovieTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "GetMovieTime", nullptr, nullptr, Z_Construct_UFunction_UManaComponent_GetMovieTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetMovieTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaComponent_GetMovieTime_Statics::ManaComponent_eventGetMovieTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetMovieTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_GetMovieTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaComponent_GetMovieTime_Statics::ManaComponent_eventGetMovieTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaComponent_GetMovieTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_GetMovieTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execGetMovieTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTimespan*)Z_Param__Result=P_THIS->GetMovieTime();
	P_NATIVE_END;
}
// End Class UManaComponent Function GetMovieTime

// Begin Class UManaComponent Function GetPosition
struct Z_Construct_UFunction_UManaComponent_GetPosition_Statics
{
	struct ManaComponent_eventGetPosition_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaComponent_GetPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventGetPosition_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_GetPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_GetPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_GetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "GetPosition", nullptr, nullptr, Z_Construct_UFunction_UManaComponent_GetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaComponent_GetPosition_Statics::ManaComponent_eventGetPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_GetPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaComponent_GetPosition_Statics::ManaComponent_eventGetPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaComponent_GetPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_GetPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execGetPosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPosition();
	P_NATIVE_END;
}
// End Class UManaComponent Function GetPosition

// Begin Class UManaComponent Function GetSource
struct Z_Construct_UFunction_UManaComponent_GetSource_Statics
{
	struct ManaComponent_eventGetSource_Parms
	{
		UManaMovie* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaComponent_GetSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventGetSource_Parms, ReturnValue), Z_Construct_UClass_UManaMovie_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_GetSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_GetSource_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_GetSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "GetSource", nullptr, nullptr, Z_Construct_UFunction_UManaComponent_GetSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaComponent_GetSource_Statics::ManaComponent_eventGetSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_GetSource_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaComponent_GetSource_Statics::ManaComponent_eventGetSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaComponent_GetSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_GetSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execGetSource)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UManaMovie**)Z_Param__Result=P_THIS->GetSource();
	P_NATIVE_END;
}
// End Class UManaComponent Function GetSource

// Begin Class UManaComponent Function GetStatus
struct Z_Construct_UFunction_UManaComponent_GetStatus_Statics
{
	struct ManaComponent_eventGetStatus_Parms
	{
		EManaComponentStatus ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManaComponent_GetStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManaComponent_GetStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventGetStatus_Parms, ReturnValue), Z_Construct_UEnum_CriWareRuntime_EManaComponentStatus, METADATA_PARAMS(0, nullptr) }; // 1856978859
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_GetStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_GetStatus_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_GetStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_GetStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "GetStatus", nullptr, nullptr, Z_Construct_UFunction_UManaComponent_GetStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaComponent_GetStatus_Statics::ManaComponent_eventGetStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_GetStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaComponent_GetStatus_Statics::ManaComponent_eventGetStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaComponent_GetStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_GetStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execGetStatus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EManaComponentStatus*)Z_Param__Result=P_THIS->GetStatus();
	P_NATIVE_END;
}
// End Class UManaComponent Function GetStatus

// Begin Class UManaComponent Function GetSubVolume
struct Z_Construct_UFunction_UManaComponent_GetSubVolume_Statics
{
	struct ManaComponent_eventGetSubVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManaComponent_GetSubVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventGetSubVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_GetSubVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_GetSubVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetSubVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_GetSubVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "GetSubVolume", nullptr, nullptr, Z_Construct_UFunction_UManaComponent_GetSubVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetSubVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaComponent_GetSubVolume_Statics::ManaComponent_eventGetSubVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetSubVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_GetSubVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaComponent_GetSubVolume_Statics::ManaComponent_eventGetSubVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaComponent_GetSubVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_GetSubVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execGetSubVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSubVolume();
	P_NATIVE_END;
}
// End Class UManaComponent Function GetSubVolume

// Begin Class UManaComponent Function GetTexture
struct Z_Construct_UFunction_UManaComponent_GetTexture_Statics
{
	struct ManaComponent_eventGetTexture_Parms
	{
		UManaTexture* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaComponent_GetTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventGetTexture_Parms, ReturnValue), Z_Construct_UClass_UManaTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_GetTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_GetTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_GetTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "GetTexture", nullptr, nullptr, Z_Construct_UFunction_UManaComponent_GetTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaComponent_GetTexture_Statics::ManaComponent_eventGetTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_GetTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaComponent_GetTexture_Statics::ManaComponent_eventGetTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaComponent_GetTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_GetTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execGetTexture)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UManaTexture**)Z_Param__Result=P_THIS->GetTexture();
	P_NATIVE_END;
}
// End Class UManaComponent Function GetTexture

// Begin Class UManaComponent Function GetTime
struct Z_Construct_UFunction_UManaComponent_GetTime_Statics
{
	struct ManaComponent_eventGetTime_Parms
	{
		FTimespan ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UManaComponent_GetTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventGetTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_GetTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_GetTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_GetTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "GetTime", nullptr, nullptr, Z_Construct_UFunction_UManaComponent_GetTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaComponent_GetTime_Statics::ManaComponent_eventGetTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_GetTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaComponent_GetTime_Statics::ManaComponent_eventGetTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaComponent_GetTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_GetTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execGetTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTimespan*)Z_Param__Result=P_THIS->GetTime();
	P_NATIVE_END;
}
// End Class UManaComponent Function GetTime

// Begin Class UManaComponent Function GetVolume
struct Z_Construct_UFunction_UManaComponent_GetVolume_Statics
{
	struct ManaComponent_eventGetVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManaComponent_GetVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventGetVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_GetVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_GetVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_GetVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "GetVolume", nullptr, nullptr, Z_Construct_UFunction_UManaComponent_GetVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaComponent_GetVolume_Statics::ManaComponent_eventGetVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_GetVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaComponent_GetVolume_Statics::ManaComponent_eventGetVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaComponent_GetVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_GetVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execGetVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetVolume();
	P_NATIVE_END;
}
// End Class UManaComponent Function GetVolume

// Begin Class UManaComponent Function IsLooping
struct Z_Construct_UFunction_UManaComponent_IsLooping_Statics
{
	struct ManaComponent_eventIsLooping_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UManaComponent_IsLooping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ManaComponent_eventIsLooping_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaComponent_IsLooping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ManaComponent_eventIsLooping_Parms), &Z_Construct_UFunction_UManaComponent_IsLooping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_IsLooping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_IsLooping_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_IsLooping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_IsLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "IsLooping", nullptr, nullptr, Z_Construct_UFunction_UManaComponent_IsLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_IsLooping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaComponent_IsLooping_Statics::ManaComponent_eventIsLooping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_IsLooping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_IsLooping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaComponent_IsLooping_Statics::ManaComponent_eventIsLooping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaComponent_IsLooping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_IsLooping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execIsLooping)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLooping();
	P_NATIVE_END;
}
// End Class UManaComponent Function IsLooping

// Begin Class UManaComponent Function IsPaused
struct Z_Construct_UFunction_UManaComponent_IsPaused_Statics
{
	struct ManaComponent_eventIsPaused_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UManaComponent_IsPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ManaComponent_eventIsPaused_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaComponent_IsPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ManaComponent_eventIsPaused_Parms), &Z_Construct_UFunction_UManaComponent_IsPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_IsPaused_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_IsPaused_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_IsPaused_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_IsPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "IsPaused", nullptr, nullptr, Z_Construct_UFunction_UManaComponent_IsPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_IsPaused_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaComponent_IsPaused_Statics::ManaComponent_eventIsPaused_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_IsPaused_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_IsPaused_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaComponent_IsPaused_Statics::ManaComponent_eventIsPaused_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaComponent_IsPaused()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_IsPaused_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execIsPaused)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPaused();
	P_NATIVE_END;
}
// End Class UManaComponent Function IsPaused

// Begin Class UManaComponent Function IsPlaying
struct Z_Construct_UFunction_UManaComponent_IsPlaying_Statics
{
	struct ManaComponent_eventIsPlaying_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UManaComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ManaComponent_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaComponent_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ManaComponent_eventIsPlaying_Parms), &Z_Construct_UFunction_UManaComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_IsPlaying_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_IsPlaying_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_IsPlaying_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "IsPlaying", nullptr, nullptr, Z_Construct_UFunction_UManaComponent_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_IsPlaying_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaComponent_IsPlaying_Statics::ManaComponent_eventIsPlaying_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_IsPlaying_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_IsPlaying_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaComponent_IsPlaying_Statics::ManaComponent_eventIsPlaying_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaComponent_IsPlaying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_IsPlaying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execIsPlaying)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlaying();
	P_NATIVE_END;
}
// End Class UManaComponent Function IsPlaying

// Begin Class UManaComponent Function IsPreparing
struct Z_Construct_UFunction_UManaComponent_IsPreparing_Statics
{
	struct ManaComponent_eventIsPreparing_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UManaComponent_IsPreparing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ManaComponent_eventIsPreparing_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaComponent_IsPreparing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ManaComponent_eventIsPreparing_Parms), &Z_Construct_UFunction_UManaComponent_IsPreparing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_IsPreparing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_IsPreparing_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_IsPreparing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_IsPreparing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "IsPreparing", nullptr, nullptr, Z_Construct_UFunction_UManaComponent_IsPreparing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_IsPreparing_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaComponent_IsPreparing_Statics::ManaComponent_eventIsPreparing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_IsPreparing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_IsPreparing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaComponent_IsPreparing_Statics::ManaComponent_eventIsPreparing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaComponent_IsPreparing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_IsPreparing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execIsPreparing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPreparing();
	P_NATIVE_END;
}
// End Class UManaComponent Function IsPreparing

// Begin Class UManaComponent Function IsReady
struct Z_Construct_UFunction_UManaComponent_IsReady_Statics
{
	struct ManaComponent_eventIsReady_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UManaComponent_IsReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ManaComponent_eventIsReady_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaComponent_IsReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ManaComponent_eventIsReady_Parms), &Z_Construct_UFunction_UManaComponent_IsReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_IsReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_IsReady_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_IsReady_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_IsReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "IsReady", nullptr, nullptr, Z_Construct_UFunction_UManaComponent_IsReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_IsReady_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaComponent_IsReady_Statics::ManaComponent_eventIsReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_IsReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_IsReady_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaComponent_IsReady_Statics::ManaComponent_eventIsReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaComponent_IsReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_IsReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execIsReady)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsReady();
	P_NATIVE_END;
}
// End Class UManaComponent Function IsReady

// Begin Class UManaComponent Function Loop
struct Z_Construct_UFunction_UManaComponent_Loop_Statics
{
	struct ManaComponent_eventLoop_Parms
	{
		bool bInLoop;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bInLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInLoop;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UManaComponent_Loop_Statics::NewProp_bInLoop_SetBit(void* Obj)
{
	((ManaComponent_eventLoop_Parms*)Obj)->bInLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaComponent_Loop_Statics::NewProp_bInLoop = { "bInLoop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ManaComponent_eventLoop_Parms), &Z_Construct_UFunction_UManaComponent_Loop_Statics::NewProp_bInLoop_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_Loop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_Loop_Statics::NewProp_bInLoop,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_Loop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_Loop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "Loop", nullptr, nullptr, Z_Construct_UFunction_UManaComponent_Loop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_Loop_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaComponent_Loop_Statics::ManaComponent_eventLoop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_Loop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_Loop_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaComponent_Loop_Statics::ManaComponent_eventLoop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaComponent_Loop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_Loop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execLoop)
{
	P_GET_UBOOL(Z_Param_bInLoop);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Loop(Z_Param_bInLoop);
	P_NATIVE_END;
}
// End Class UManaComponent Function Loop

// Begin Class UManaComponent Function Next
struct Z_Construct_UFunction_UManaComponent_Next_Statics
{
	struct ManaComponent_eventNext_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UManaComponent_Next_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ManaComponent_eventNext_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaComponent_Next_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ManaComponent_eventNext_Parms), &Z_Construct_UFunction_UManaComponent_Next_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_Next_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_Next_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_Next_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_Next_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "Next", nullptr, nullptr, Z_Construct_UFunction_UManaComponent_Next_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_Next_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaComponent_Next_Statics::ManaComponent_eventNext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_Next_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_Next_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaComponent_Next_Statics::ManaComponent_eventNext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaComponent_Next()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_Next_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execNext)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Next();
	P_NATIVE_END;
}
// End Class UManaComponent Function Next

// Begin Class UManaComponent Function Pause
struct Z_Construct_UFunction_UManaComponent_Pause_Statics
{
	struct ManaComponent_eventPause_Parms
	{
		bool bPause;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bPause_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPause;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UManaComponent_Pause_Statics::NewProp_bPause_SetBit(void* Obj)
{
	((ManaComponent_eventPause_Parms*)Obj)->bPause = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaComponent_Pause_Statics::NewProp_bPause = { "bPause", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ManaComponent_eventPause_Parms), &Z_Construct_UFunction_UManaComponent_Pause_Statics::NewProp_bPause_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_Pause_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_Pause_Statics::NewProp_bPause,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_Pause_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "Pause", nullptr, nullptr, Z_Construct_UFunction_UManaComponent_Pause_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_Pause_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaComponent_Pause_Statics::ManaComponent_eventPause_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_Pause_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_Pause_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaComponent_Pause_Statics::ManaComponent_eventPause_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaComponent_Pause()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_Pause_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execPause)
{
	P_GET_UBOOL(Z_Param_bPause);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Pause(Z_Param_bPause);
	P_NATIVE_END;
}
// End Class UManaComponent Function Pause

// Begin Class UManaComponent Function Play
struct Z_Construct_UFunction_UManaComponent_Play_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "Play", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_Play_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_Play_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UManaComponent_Play()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_Play_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Play();
	P_NATIVE_END;
}
// End Class UManaComponent Function Play

// Begin Class UManaComponent Function Prepare
struct Z_Construct_UFunction_UManaComponent_Prepare_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_Prepare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "Prepare", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_Prepare_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_Prepare_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UManaComponent_Prepare()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_Prepare_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execPrepare)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Prepare();
	P_NATIVE_END;
}
// End Class UManaComponent Function Prepare

// Begin Class UManaComponent Function PreparePlaylistIndex
struct Z_Construct_UFunction_UManaComponent_PreparePlaylistIndex_Statics
{
	struct ManaComponent_eventPreparePlaylistIndex_Parms
	{
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaComponent_PreparePlaylistIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventPreparePlaylistIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_PreparePlaylistIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_PreparePlaylistIndex_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_PreparePlaylistIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_PreparePlaylistIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "PreparePlaylistIndex", nullptr, nullptr, Z_Construct_UFunction_UManaComponent_PreparePlaylistIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_PreparePlaylistIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaComponent_PreparePlaylistIndex_Statics::ManaComponent_eventPreparePlaylistIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_PreparePlaylistIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_PreparePlaylistIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaComponent_PreparePlaylistIndex_Statics::ManaComponent_eventPreparePlaylistIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaComponent_PreparePlaylistIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_PreparePlaylistIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execPreparePlaylistIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PreparePlaylistIndex(Z_Param_Index);
	P_NATIVE_END;
}
// End Class UManaComponent Function PreparePlaylistIndex

// Begin Class UManaComponent Function Previous
struct Z_Construct_UFunction_UManaComponent_Previous_Statics
{
	struct ManaComponent_eventPrevious_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UManaComponent_Previous_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ManaComponent_eventPrevious_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaComponent_Previous_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ManaComponent_eventPrevious_Parms), &Z_Construct_UFunction_UManaComponent_Previous_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_Previous_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_Previous_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_Previous_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_Previous_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "Previous", nullptr, nullptr, Z_Construct_UFunction_UManaComponent_Previous_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_Previous_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaComponent_Previous_Statics::ManaComponent_eventPrevious_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_Previous_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_Previous_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaComponent_Previous_Statics::ManaComponent_eventPrevious_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaComponent_Previous()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_Previous_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execPrevious)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Previous();
	P_NATIVE_END;
}
// End Class UManaComponent Function Previous

// Begin Class UManaComponent Function RemoveAudioCategory
struct Z_Construct_UFunction_UManaComponent_RemoveAudioCategory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_RemoveAudioCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "RemoveAudioCategory", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_RemoveAudioCategory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_RemoveAudioCategory_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UManaComponent_RemoveAudioCategory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_RemoveAudioCategory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execRemoveAudioCategory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveAudioCategory();
	P_NATIVE_END;
}
// End Class UManaComponent Function RemoveAudioCategory

// Begin Class UManaComponent Function RemoveExtraAudioCategory
struct Z_Construct_UFunction_UManaComponent_RemoveExtraAudioCategory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_RemoveExtraAudioCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "RemoveExtraAudioCategory", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_RemoveExtraAudioCategory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_RemoveExtraAudioCategory_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UManaComponent_RemoveExtraAudioCategory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_RemoveExtraAudioCategory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execRemoveExtraAudioCategory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveExtraAudioCategory();
	P_NATIVE_END;
}
// End Class UManaComponent Function RemoveExtraAudioCategory

// Begin Class UManaComponent Function RemoveSubAudioCategory
struct Z_Construct_UFunction_UManaComponent_RemoveSubAudioCategory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_RemoveSubAudioCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "RemoveSubAudioCategory", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_RemoveSubAudioCategory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_RemoveSubAudioCategory_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UManaComponent_RemoveSubAudioCategory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_RemoveSubAudioCategory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execRemoveSubAudioCategory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveSubAudioCategory();
	P_NATIVE_END;
}
// End Class UManaComponent Function RemoveSubAudioCategory

// Begin Class UManaComponent Function Seek
struct Z_Construct_UFunction_UManaComponent_Seek_Statics
{
	struct ManaComponent_eventSeek_Parms
	{
		FTimespan Time;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UManaComponent_Seek_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventSeek_Parms, Time), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_Seek_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_Seek_Statics::NewProp_Time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_Seek_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_Seek_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "Seek", nullptr, nullptr, Z_Construct_UFunction_UManaComponent_Seek_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_Seek_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaComponent_Seek_Statics::ManaComponent_eventSeek_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_Seek_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_Seek_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaComponent_Seek_Statics::ManaComponent_eventSeek_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaComponent_Seek()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_Seek_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execSeek)
{
	P_GET_STRUCT(FTimespan,Z_Param_Time);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Seek(Z_Param_Time);
	P_NATIVE_END;
}
// End Class UManaComponent Function Seek

// Begin Class UManaComponent Function SeekToPosition
struct Z_Construct_UFunction_UManaComponent_SeekToPosition_Statics
{
	struct ManaComponent_eventSeekToPosition_Parms
	{
		int32 FrameNumber;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_FrameNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaComponent_SeekToPosition_Statics::NewProp_FrameNumber = { "FrameNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventSeekToPosition_Parms, FrameNumber), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_SeekToPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_SeekToPosition_Statics::NewProp_FrameNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SeekToPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_SeekToPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "SeekToPosition", nullptr, nullptr, Z_Construct_UFunction_UManaComponent_SeekToPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SeekToPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaComponent_SeekToPosition_Statics::ManaComponent_eventSeekToPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SeekToPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_SeekToPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaComponent_SeekToPosition_Statics::ManaComponent_eventSeekToPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaComponent_SeekToPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_SeekToPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execSeekToPosition)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_FrameNumber);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SeekToPosition(Z_Param_FrameNumber);
	P_NATIVE_END;
}
// End Class UManaComponent Function SeekToPosition

// Begin Class UManaComponent Function SetAlphaTrack
struct Z_Construct_UFunction_UManaComponent_SetAlphaTrack_Statics
{
	struct ManaComponent_eventSetAlphaTrack_Parms
	{
		int32 Track;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Track;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaComponent_SetAlphaTrack_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventSetAlphaTrack_Parms, Track), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_SetAlphaTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_SetAlphaTrack_Statics::NewProp_Track,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetAlphaTrack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_SetAlphaTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "SetAlphaTrack", nullptr, nullptr, Z_Construct_UFunction_UManaComponent_SetAlphaTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetAlphaTrack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaComponent_SetAlphaTrack_Statics::ManaComponent_eventSetAlphaTrack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetAlphaTrack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_SetAlphaTrack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaComponent_SetAlphaTrack_Statics::ManaComponent_eventSetAlphaTrack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaComponent_SetAlphaTrack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_SetAlphaTrack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execSetAlphaTrack)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Track);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAlphaTrack(Z_Param_Track);
	P_NATIVE_END;
}
// End Class UManaComponent Function SetAlphaTrack

// Begin Class UManaComponent Function SetAudioCategory
struct Z_Construct_UFunction_UManaComponent_SetAudioCategory_Statics
{
	struct ManaComponent_eventSetAudioCategory_Parms
	{
		FString CategoryName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CategoryName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UManaComponent_SetAudioCategory_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventSetAudioCategory_Parms, CategoryName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryName_MetaData), NewProp_CategoryName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_SetAudioCategory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_SetAudioCategory_Statics::NewProp_CategoryName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetAudioCategory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_SetAudioCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "SetAudioCategory", nullptr, nullptr, Z_Construct_UFunction_UManaComponent_SetAudioCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetAudioCategory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaComponent_SetAudioCategory_Statics::ManaComponent_eventSetAudioCategory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetAudioCategory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_SetAudioCategory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaComponent_SetAudioCategory_Statics::ManaComponent_eventSetAudioCategory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaComponent_SetAudioCategory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_SetAudioCategory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execSetAudioCategory)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CategoryName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAudioCategory(Z_Param_CategoryName);
	P_NATIVE_END;
}
// End Class UManaComponent Function SetAudioCategory

// Begin Class UManaComponent Function SetAudioTrack
struct Z_Construct_UFunction_UManaComponent_SetAudioTrack_Statics
{
	struct ManaComponent_eventSetAudioTrack_Parms
	{
		int32 Track;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Track;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaComponent_SetAudioTrack_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventSetAudioTrack_Parms, Track), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_SetAudioTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_SetAudioTrack_Statics::NewProp_Track,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetAudioTrack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_SetAudioTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "SetAudioTrack", nullptr, nullptr, Z_Construct_UFunction_UManaComponent_SetAudioTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetAudioTrack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaComponent_SetAudioTrack_Statics::ManaComponent_eventSetAudioTrack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetAudioTrack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_SetAudioTrack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaComponent_SetAudioTrack_Statics::ManaComponent_eventSetAudioTrack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaComponent_SetAudioTrack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_SetAudioTrack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execSetAudioTrack)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Track);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAudioTrack(Z_Param_Track);
	P_NATIVE_END;
}
// End Class UManaComponent Function SetAudioTrack

// Begin Class UManaComponent Function SetEndFrameAction
struct Z_Construct_UFunction_UManaComponent_SetEndFrameAction_Statics
{
	struct ManaComponent_eventSetEndFrameAction_Parms
	{
		EManaFrameAction InFrameAction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InFrameAction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InFrameAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManaComponent_SetEndFrameAction_Statics::NewProp_InFrameAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManaComponent_SetEndFrameAction_Statics::NewProp_InFrameAction = { "InFrameAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventSetEndFrameAction_Parms, InFrameAction), Z_Construct_UEnum_CriWareRuntime_EManaFrameAction, METADATA_PARAMS(0, nullptr) }; // 1114415206
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_SetEndFrameAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_SetEndFrameAction_Statics::NewProp_InFrameAction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_SetEndFrameAction_Statics::NewProp_InFrameAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetEndFrameAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_SetEndFrameAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "SetEndFrameAction", nullptr, nullptr, Z_Construct_UFunction_UManaComponent_SetEndFrameAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetEndFrameAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaComponent_SetEndFrameAction_Statics::ManaComponent_eventSetEndFrameAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetEndFrameAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_SetEndFrameAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaComponent_SetEndFrameAction_Statics::ManaComponent_eventSetEndFrameAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaComponent_SetEndFrameAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_SetEndFrameAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execSetEndFrameAction)
{
	P_GET_ENUM(EManaFrameAction,Z_Param_InFrameAction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEndFrameAction(EManaFrameAction(Z_Param_InFrameAction));
	P_NATIVE_END;
}
// End Class UManaComponent Function SetEndFrameAction

// Begin Class UManaComponent Function SetExtraAudioCategory
struct Z_Construct_UFunction_UManaComponent_SetExtraAudioCategory_Statics
{
	struct ManaComponent_eventSetExtraAudioCategory_Parms
	{
		FString CategoryName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CategoryName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UManaComponent_SetExtraAudioCategory_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventSetExtraAudioCategory_Parms, CategoryName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryName_MetaData), NewProp_CategoryName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_SetExtraAudioCategory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_SetExtraAudioCategory_Statics::NewProp_CategoryName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetExtraAudioCategory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_SetExtraAudioCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "SetExtraAudioCategory", nullptr, nullptr, Z_Construct_UFunction_UManaComponent_SetExtraAudioCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetExtraAudioCategory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaComponent_SetExtraAudioCategory_Statics::ManaComponent_eventSetExtraAudioCategory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetExtraAudioCategory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_SetExtraAudioCategory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaComponent_SetExtraAudioCategory_Statics::ManaComponent_eventSetExtraAudioCategory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaComponent_SetExtraAudioCategory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_SetExtraAudioCategory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execSetExtraAudioCategory)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CategoryName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetExtraAudioCategory(Z_Param_CategoryName);
	P_NATIVE_END;
}
// End Class UManaComponent Function SetExtraAudioCategory

// Begin Class UManaComponent Function SetExtraAudioTrack
struct Z_Construct_UFunction_UManaComponent_SetExtraAudioTrack_Statics
{
	struct ManaComponent_eventSetExtraAudioTrack_Parms
	{
		int32 Track;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Track;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaComponent_SetExtraAudioTrack_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventSetExtraAudioTrack_Parms, Track), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_SetExtraAudioTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_SetExtraAudioTrack_Statics::NewProp_Track,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetExtraAudioTrack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_SetExtraAudioTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "SetExtraAudioTrack", nullptr, nullptr, Z_Construct_UFunction_UManaComponent_SetExtraAudioTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetExtraAudioTrack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaComponent_SetExtraAudioTrack_Statics::ManaComponent_eventSetExtraAudioTrack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetExtraAudioTrack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_SetExtraAudioTrack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaComponent_SetExtraAudioTrack_Statics::ManaComponent_eventSetExtraAudioTrack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaComponent_SetExtraAudioTrack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_SetExtraAudioTrack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execSetExtraAudioTrack)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Track);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetExtraAudioTrack(Z_Param_Track);
	P_NATIVE_END;
}
// End Class UManaComponent Function SetExtraAudioTrack

// Begin Class UManaComponent Function SetExtraVolume
struct Z_Construct_UFunction_UManaComponent_SetExtraVolume_Statics
{
	struct ManaComponent_eventSetExtraVolume_Parms
	{
		float Volume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManaComponent_SetExtraVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventSetExtraVolume_Parms, Volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_SetExtraVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_SetExtraVolume_Statics::NewProp_Volume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetExtraVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_SetExtraVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "SetExtraVolume", nullptr, nullptr, Z_Construct_UFunction_UManaComponent_SetExtraVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetExtraVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaComponent_SetExtraVolume_Statics::ManaComponent_eventSetExtraVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetExtraVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_SetExtraVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaComponent_SetExtraVolume_Statics::ManaComponent_eventSetExtraVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaComponent_SetExtraVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_SetExtraVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execSetExtraVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetExtraVolume(Z_Param_Volume);
	P_NATIVE_END;
}
// End Class UManaComponent Function SetExtraVolume

// Begin Class UManaComponent Function SetFile
struct Z_Construct_UFunction_UManaComponent_SetFile_Statics
{
	struct ManaComponent_eventSetFile_Parms
	{
		FString MovieFilePath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovieFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MovieFilePath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UManaComponent_SetFile_Statics::NewProp_MovieFilePath = { "MovieFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventSetFile_Parms, MovieFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovieFilePath_MetaData), NewProp_MovieFilePath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_SetFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_SetFile_Statics::NewProp_MovieFilePath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_SetFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "SetFile", nullptr, nullptr, Z_Construct_UFunction_UManaComponent_SetFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaComponent_SetFile_Statics::ManaComponent_eventSetFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_SetFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaComponent_SetFile_Statics::ManaComponent_eventSetFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaComponent_SetFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_SetFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execSetFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MovieFilePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFile(Z_Param_MovieFilePath);
	P_NATIVE_END;
}
// End Class UManaComponent Function SetFile

// Begin Class UManaComponent Function SetMaxDropFrames
struct Z_Construct_UFunction_UManaComponent_SetMaxDropFrames_Statics
{
	struct ManaComponent_eventSetMaxDropFrames_Parms
	{
		EManaMaxFrameDrop InMaxDropFrames;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InMaxDropFrames_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InMaxDropFrames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManaComponent_SetMaxDropFrames_Statics::NewProp_InMaxDropFrames_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManaComponent_SetMaxDropFrames_Statics::NewProp_InMaxDropFrames = { "InMaxDropFrames", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventSetMaxDropFrames_Parms, InMaxDropFrames), Z_Construct_UEnum_CriWareRuntime_EManaMaxFrameDrop, METADATA_PARAMS(0, nullptr) }; // 1699464272
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_SetMaxDropFrames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_SetMaxDropFrames_Statics::NewProp_InMaxDropFrames_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_SetMaxDropFrames_Statics::NewProp_InMaxDropFrames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetMaxDropFrames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_SetMaxDropFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "SetMaxDropFrames", nullptr, nullptr, Z_Construct_UFunction_UManaComponent_SetMaxDropFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetMaxDropFrames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaComponent_SetMaxDropFrames_Statics::ManaComponent_eventSetMaxDropFrames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetMaxDropFrames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_SetMaxDropFrames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaComponent_SetMaxDropFrames_Statics::ManaComponent_eventSetMaxDropFrames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaComponent_SetMaxDropFrames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_SetMaxDropFrames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execSetMaxDropFrames)
{
	P_GET_ENUM(EManaMaxFrameDrop,Z_Param_InMaxDropFrames);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMaxDropFrames(EManaMaxFrameDrop(Z_Param_InMaxDropFrames));
	P_NATIVE_END;
}
// End Class UManaComponent Function SetMaxDropFrames

// Begin Class UManaComponent Function SetMovie
struct Z_Construct_UFunction_UManaComponent_SetMovie_Statics
{
	struct ManaComponent_eventSetMovie_Parms
	{
		UManaMovie* InMovie;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMovie;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaComponent_SetMovie_Statics::NewProp_InMovie = { "InMovie", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventSetMovie_Parms, InMovie), Z_Construct_UClass_UManaMovie_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_SetMovie_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_SetMovie_Statics::NewProp_InMovie,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetMovie_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_SetMovie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "SetMovie", nullptr, nullptr, Z_Construct_UFunction_UManaComponent_SetMovie_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetMovie_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaComponent_SetMovie_Statics::ManaComponent_eventSetMovie_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetMovie_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_SetMovie_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaComponent_SetMovie_Statics::ManaComponent_eventSetMovie_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaComponent_SetMovie()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_SetMovie_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execSetMovie)
{
	P_GET_OBJECT(UManaMovie,Z_Param_InMovie);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMovie(Z_Param_InMovie);
	P_NATIVE_END;
}
// End Class UManaComponent Function SetMovie

// Begin Class UManaComponent Function SetPlaybackTimer
struct Z_Construct_UFunction_UManaComponent_SetPlaybackTimer_Statics
{
	struct ManaComponent_eventSetPlaybackTimer_Parms
	{
		EManaPlaybackTimer InPlaybackTimer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InPlaybackTimer_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InPlaybackTimer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManaComponent_SetPlaybackTimer_Statics::NewProp_InPlaybackTimer_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManaComponent_SetPlaybackTimer_Statics::NewProp_InPlaybackTimer = { "InPlaybackTimer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventSetPlaybackTimer_Parms, InPlaybackTimer), Z_Construct_UEnum_CriWareRuntime_EManaPlaybackTimer, METADATA_PARAMS(0, nullptr) }; // 1950816337
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_SetPlaybackTimer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_SetPlaybackTimer_Statics::NewProp_InPlaybackTimer_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_SetPlaybackTimer_Statics::NewProp_InPlaybackTimer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetPlaybackTimer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_SetPlaybackTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "SetPlaybackTimer", nullptr, nullptr, Z_Construct_UFunction_UManaComponent_SetPlaybackTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetPlaybackTimer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaComponent_SetPlaybackTimer_Statics::ManaComponent_eventSetPlaybackTimer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetPlaybackTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_SetPlaybackTimer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaComponent_SetPlaybackTimer_Statics::ManaComponent_eventSetPlaybackTimer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaComponent_SetPlaybackTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_SetPlaybackTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execSetPlaybackTimer)
{
	P_GET_ENUM(EManaPlaybackTimer,Z_Param_InPlaybackTimer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlaybackTimer(EManaPlaybackTimer(Z_Param_InPlaybackTimer));
	P_NATIVE_END;
}
// End Class UManaComponent Function SetPlaybackTimer

// Begin Class UManaComponent Function SetSubAudioCategory
struct Z_Construct_UFunction_UManaComponent_SetSubAudioCategory_Statics
{
	struct ManaComponent_eventSetSubAudioCategory_Parms
	{
		FString CategoryName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CategoryName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UManaComponent_SetSubAudioCategory_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventSetSubAudioCategory_Parms, CategoryName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryName_MetaData), NewProp_CategoryName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_SetSubAudioCategory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_SetSubAudioCategory_Statics::NewProp_CategoryName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetSubAudioCategory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_SetSubAudioCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "SetSubAudioCategory", nullptr, nullptr, Z_Construct_UFunction_UManaComponent_SetSubAudioCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetSubAudioCategory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaComponent_SetSubAudioCategory_Statics::ManaComponent_eventSetSubAudioCategory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetSubAudioCategory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_SetSubAudioCategory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaComponent_SetSubAudioCategory_Statics::ManaComponent_eventSetSubAudioCategory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaComponent_SetSubAudioCategory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_SetSubAudioCategory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execSetSubAudioCategory)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CategoryName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSubAudioCategory(Z_Param_CategoryName);
	P_NATIVE_END;
}
// End Class UManaComponent Function SetSubAudioCategory

// Begin Class UManaComponent Function SetSubAudioSendLevel
struct Z_Construct_UFunction_UManaComponent_SetSubAudioSendLevel_Statics
{
	struct ManaComponent_eventSetSubAudioSendLevel_Parms
	{
		int32 Channel;
		EAtomSpeakerID SpeakerId;
		float Volume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Channel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SpeakerId_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SpeakerId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaComponent_SetSubAudioSendLevel_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventSetSubAudioSendLevel_Parms, Channel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManaComponent_SetSubAudioSendLevel_Statics::NewProp_SpeakerId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManaComponent_SetSubAudioSendLevel_Statics::NewProp_SpeakerId = { "SpeakerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventSetSubAudioSendLevel_Parms, SpeakerId), Z_Construct_UEnum_CriWareRuntime_EAtomSpeakerID, METADATA_PARAMS(0, nullptr) }; // 2617091793
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManaComponent_SetSubAudioSendLevel_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventSetSubAudioSendLevel_Parms, Volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_SetSubAudioSendLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_SetSubAudioSendLevel_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_SetSubAudioSendLevel_Statics::NewProp_SpeakerId_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_SetSubAudioSendLevel_Statics::NewProp_SpeakerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_SetSubAudioSendLevel_Statics::NewProp_Volume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetSubAudioSendLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_SetSubAudioSendLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "SetSubAudioSendLevel", nullptr, nullptr, Z_Construct_UFunction_UManaComponent_SetSubAudioSendLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetSubAudioSendLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaComponent_SetSubAudioSendLevel_Statics::ManaComponent_eventSetSubAudioSendLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetSubAudioSendLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_SetSubAudioSendLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaComponent_SetSubAudioSendLevel_Statics::ManaComponent_eventSetSubAudioSendLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaComponent_SetSubAudioSendLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_SetSubAudioSendLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execSetSubAudioSendLevel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Channel);
	P_GET_ENUM(EAtomSpeakerID,Z_Param_SpeakerId);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSubAudioSendLevel(Z_Param_Channel,EAtomSpeakerID(Z_Param_SpeakerId),Z_Param_Volume);
	P_NATIVE_END;
}
// End Class UManaComponent Function SetSubAudioSendLevel

// Begin Class UManaComponent Function SetSubAudioTrack
struct Z_Construct_UFunction_UManaComponent_SetSubAudioTrack_Statics
{
	struct ManaComponent_eventSetSubAudioTrack_Parms
	{
		int32 Track;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Track;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaComponent_SetSubAudioTrack_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventSetSubAudioTrack_Parms, Track), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_SetSubAudioTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_SetSubAudioTrack_Statics::NewProp_Track,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetSubAudioTrack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_SetSubAudioTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "SetSubAudioTrack", nullptr, nullptr, Z_Construct_UFunction_UManaComponent_SetSubAudioTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetSubAudioTrack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaComponent_SetSubAudioTrack_Statics::ManaComponent_eventSetSubAudioTrack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetSubAudioTrack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_SetSubAudioTrack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaComponent_SetSubAudioTrack_Statics::ManaComponent_eventSetSubAudioTrack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaComponent_SetSubAudioTrack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_SetSubAudioTrack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execSetSubAudioTrack)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Track);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSubAudioTrack(Z_Param_Track);
	P_NATIVE_END;
}
// End Class UManaComponent Function SetSubAudioTrack

// Begin Class UManaComponent Function SetSubVolume
struct Z_Construct_UFunction_UManaComponent_SetSubVolume_Statics
{
	struct ManaComponent_eventSetSubVolume_Parms
	{
		float Volume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManaComponent_SetSubVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventSetSubVolume_Parms, Volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_SetSubVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_SetSubVolume_Statics::NewProp_Volume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetSubVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_SetSubVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "SetSubVolume", nullptr, nullptr, Z_Construct_UFunction_UManaComponent_SetSubVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetSubVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaComponent_SetSubVolume_Statics::ManaComponent_eventSetSubVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetSubVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_SetSubVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaComponent_SetSubVolume_Statics::ManaComponent_eventSetSubVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaComponent_SetSubVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_SetSubVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execSetSubVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSubVolume(Z_Param_Volume);
	P_NATIVE_END;
}
// End Class UManaComponent Function SetSubVolume

// Begin Class UManaComponent Function SetTexture
struct Z_Construct_UFunction_UManaComponent_SetTexture_Statics
{
	struct ManaComponent_eventSetTexture_Parms
	{
		UManaTexture* Texture;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaComponent_SetTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventSetTexture_Parms, Texture), Z_Construct_UClass_UManaTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_SetTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_SetTexture_Statics::NewProp_Texture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_SetTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "SetTexture", nullptr, nullptr, Z_Construct_UFunction_UManaComponent_SetTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaComponent_SetTexture_Statics::ManaComponent_eventSetTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_SetTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaComponent_SetTexture_Statics::ManaComponent_eventSetTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaComponent_SetTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_SetTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execSetTexture)
{
	P_GET_OBJECT(UManaTexture,Z_Param_Texture);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTexture(Z_Param_Texture);
	P_NATIVE_END;
}
// End Class UManaComponent Function SetTexture

// Begin Class UManaComponent Function SetVolume
struct Z_Construct_UFunction_UManaComponent_SetVolume_Statics
{
	struct ManaComponent_eventSetVolume_Parms
	{
		float Volume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManaComponent_SetVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventSetVolume_Parms, Volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_SetVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_SetVolume_Statics::NewProp_Volume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_SetVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "SetVolume", nullptr, nullptr, Z_Construct_UFunction_UManaComponent_SetVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaComponent_SetVolume_Statics::ManaComponent_eventSetVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_SetVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaComponent_SetVolume_Statics::ManaComponent_eventSetVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaComponent_SetVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_SetVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execSetVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVolume(Z_Param_Volume);
	P_NATIVE_END;
}
// End Class UManaComponent Function SetVolume

// Begin Class UManaComponent Function Stop
struct Z_Construct_UFunction_UManaComponent_Stop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "Stop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_Stop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_Stop_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UManaComponent_Stop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_Stop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Stop();
	P_NATIVE_END;
}
// End Class UManaComponent Function Stop

// Begin Class UManaComponent Function ToIndex
struct Z_Construct_UFunction_UManaComponent_ToIndex_Statics
{
	struct ManaComponent_eventToIndex_Parms
	{
		int32 Index;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaComponent_ToIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventToIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UManaComponent_ToIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ManaComponent_eventToIndex_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaComponent_ToIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ManaComponent_eventToIndex_Parms), &Z_Construct_UFunction_UManaComponent_ToIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_ToIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_ToIndex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_ToIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_ToIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_ToIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "ToIndex", nullptr, nullptr, Z_Construct_UFunction_UManaComponent_ToIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_ToIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaComponent_ToIndex_Statics::ManaComponent_eventToIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_ToIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_ToIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaComponent_ToIndex_Statics::ManaComponent_eventToIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaComponent_ToIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_ToIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execToIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ToIndex(Z_Param_Index);
	P_NATIVE_END;
}
// End Class UManaComponent Function ToIndex

// Begin Class UManaComponent
void UManaComponent::StaticRegisterNativesUManaComponent()
{
	UClass* Class = UManaComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AdvanceTime", &UManaComponent::execAdvanceTime },
		{ "ChangeSubtitlesChannel", &UManaComponent::execChangeSubtitlesChannel },
		{ "ChangeSubtitlesEncoding", &UManaComponent::execChangeSubtitlesEncoding },
		{ "EnableSeamless", &UManaComponent::execEnableSeamless },
		{ "EnableSubtitles", &UManaComponent::execEnableSubtitles },
		{ "GetExtraVolume", &UManaComponent::execGetExtraVolume },
		{ "GetFrameNumber", &UManaComponent::execGetFrameNumber },
		{ "GetMovieTime", &UManaComponent::execGetMovieTime },
		{ "GetPosition", &UManaComponent::execGetPosition },
		{ "GetSource", &UManaComponent::execGetSource },
		{ "GetStatus", &UManaComponent::execGetStatus },
		{ "GetSubVolume", &UManaComponent::execGetSubVolume },
		{ "GetTexture", &UManaComponent::execGetTexture },
		{ "GetTime", &UManaComponent::execGetTime },
		{ "GetVolume", &UManaComponent::execGetVolume },
		{ "IsLooping", &UManaComponent::execIsLooping },
		{ "IsPaused", &UManaComponent::execIsPaused },
		{ "IsPlaying", &UManaComponent::execIsPlaying },
		{ "IsPreparing", &UManaComponent::execIsPreparing },
		{ "IsReady", &UManaComponent::execIsReady },
		{ "Loop", &UManaComponent::execLoop },
		{ "Next", &UManaComponent::execNext },
		{ "Pause", &UManaComponent::execPause },
		{ "Play", &UManaComponent::execPlay },
		{ "Prepare", &UManaComponent::execPrepare },
		{ "PreparePlaylistIndex", &UManaComponent::execPreparePlaylistIndex },
		{ "Previous", &UManaComponent::execPrevious },
		{ "RemoveAudioCategory", &UManaComponent::execRemoveAudioCategory },
		{ "RemoveExtraAudioCategory", &UManaComponent::execRemoveExtraAudioCategory },
		{ "RemoveSubAudioCategory", &UManaComponent::execRemoveSubAudioCategory },
		{ "Seek", &UManaComponent::execSeek },
		{ "SeekToPosition", &UManaComponent::execSeekToPosition },
		{ "SetAlphaTrack", &UManaComponent::execSetAlphaTrack },
		{ "SetAudioCategory", &UManaComponent::execSetAudioCategory },
		{ "SetAudioTrack", &UManaComponent::execSetAudioTrack },
		{ "SetEndFrameAction", &UManaComponent::execSetEndFrameAction },
		{ "SetExtraAudioCategory", &UManaComponent::execSetExtraAudioCategory },
		{ "SetExtraAudioTrack", &UManaComponent::execSetExtraAudioTrack },
		{ "SetExtraVolume", &UManaComponent::execSetExtraVolume },
		{ "SetFile", &UManaComponent::execSetFile },
		{ "SetMaxDropFrames", &UManaComponent::execSetMaxDropFrames },
		{ "SetMovie", &UManaComponent::execSetMovie },
		{ "SetPlaybackTimer", &UManaComponent::execSetPlaybackTimer },
		{ "SetSubAudioCategory", &UManaComponent::execSetSubAudioCategory },
		{ "SetSubAudioSendLevel", &UManaComponent::execSetSubAudioSendLevel },
		{ "SetSubAudioTrack", &UManaComponent::execSetSubAudioTrack },
		{ "SetSubVolume", &UManaComponent::execSetSubVolume },
		{ "SetTexture", &UManaComponent::execSetTexture },
		{ "SetVolume", &UManaComponent::execSetVolume },
		{ "Stop", &UManaComponent::execStop },
		{ "ToIndex", &UManaComponent::execToIndex },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UManaComponent);
UClass* Z_Construct_UClass_UManaComponent_NoRegister()
{
	return UManaComponent::StaticClass();
}
struct Z_Construct_UClass_UManaComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ManaComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Movie_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEventPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSubtitleChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStatusChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMovieChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSeekCompleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTrackChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFrameOnTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerDestroyed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRequestData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Playlist_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaylistIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaTrack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioTrack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubAudioTrack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtraAudioTrack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioCategoryName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubAudioCategoryName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtraAudioCategoryName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSubtitlesEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubtitlesChannel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubtitlesEncoding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndFrameAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxFrameDrop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Movie;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEventPoint;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSubtitleChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStatusChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMovieChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSeekCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTrackChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFrameOnTime;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerDestroyed;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnRequestData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Playlist;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlaylistIndex;
	static void NewProp_bLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AlphaTrack;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AudioTrack;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SubAudioTrack;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExtraAudioTrack;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AudioCategoryName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SubAudioCategoryName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExtraAudioCategoryName;
	static void NewProp_bSubtitlesEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSubtitlesEnabled;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SubtitlesChannel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SubtitlesEncoding_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SubtitlesEncoding;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EndFrameAction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EndFrameAction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlaybackTimer_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlaybackTimer;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaxFrameDrop_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MaxFrameDrop;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UManaComponent_AdvanceTime, "AdvanceTime" }, // 2322764334
		{ &Z_Construct_UFunction_UManaComponent_ChangeSubtitlesChannel, "ChangeSubtitlesChannel" }, // 379719282
		{ &Z_Construct_UFunction_UManaComponent_ChangeSubtitlesEncoding, "ChangeSubtitlesEncoding" }, // 3908291983
		{ &Z_Construct_UFunction_UManaComponent_EnableSeamless, "EnableSeamless" }, // 3411219637
		{ &Z_Construct_UFunction_UManaComponent_EnableSubtitles, "EnableSubtitles" }, // 98482498
		{ &Z_Construct_UFunction_UManaComponent_GetExtraVolume, "GetExtraVolume" }, // 1786202872
		{ &Z_Construct_UFunction_UManaComponent_GetFrameNumber, "GetFrameNumber" }, // 2604930360
		{ &Z_Construct_UFunction_UManaComponent_GetMovieTime, "GetMovieTime" }, // 1449336853
		{ &Z_Construct_UFunction_UManaComponent_GetPosition, "GetPosition" }, // 2262246921
		{ &Z_Construct_UFunction_UManaComponent_GetSource, "GetSource" }, // 1716933798
		{ &Z_Construct_UFunction_UManaComponent_GetStatus, "GetStatus" }, // 3627651066
		{ &Z_Construct_UFunction_UManaComponent_GetSubVolume, "GetSubVolume" }, // 1476255981
		{ &Z_Construct_UFunction_UManaComponent_GetTexture, "GetTexture" }, // 3784616566
		{ &Z_Construct_UFunction_UManaComponent_GetTime, "GetTime" }, // 1833784453
		{ &Z_Construct_UFunction_UManaComponent_GetVolume, "GetVolume" }, // 2443379421
		{ &Z_Construct_UFunction_UManaComponent_IsLooping, "IsLooping" }, // 250134140
		{ &Z_Construct_UFunction_UManaComponent_IsPaused, "IsPaused" }, // 2673195953
		{ &Z_Construct_UFunction_UManaComponent_IsPlaying, "IsPlaying" }, // 4030607968
		{ &Z_Construct_UFunction_UManaComponent_IsPreparing, "IsPreparing" }, // 1202046739
		{ &Z_Construct_UFunction_UManaComponent_IsReady, "IsReady" }, // 1721757724
		{ &Z_Construct_UFunction_UManaComponent_Loop, "Loop" }, // 3149525661
		{ &Z_Construct_UFunction_UManaComponent_Next, "Next" }, // 862692611
		{ &Z_Construct_UDelegateFunction_UManaComponent_OnEventPoint__DelegateSignature, "OnEventPoint__DelegateSignature" }, // 573670108
		{ &Z_Construct_UDelegateFunction_UManaComponent_OnFrameOnTime__DelegateSignature, "OnFrameOnTime__DelegateSignature" }, // 2331023537
		{ &Z_Construct_UDelegateFunction_UManaComponent_OnMovieChanged__DelegateSignature, "OnMovieChanged__DelegateSignature" }, // 514746267
		{ &Z_Construct_UDelegateFunction_UManaComponent_OnPlayerDestroyed__DelegateSignature, "OnPlayerDestroyed__DelegateSignature" }, // 2746892333
		{ &Z_Construct_UDelegateFunction_UManaComponent_OnRequestData__DelegateSignature, "OnRequestData__DelegateSignature" }, // 426618987
		{ &Z_Construct_UDelegateFunction_UManaComponent_OnSeekCompleted__DelegateSignature, "OnSeekCompleted__DelegateSignature" }, // 2789087946
		{ &Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature, "OnStatusChanged__DelegateSignature" }, // 2383893417
		{ &Z_Construct_UDelegateFunction_UManaComponent_OnSubtitleChanged__DelegateSignature, "OnSubtitleChanged__DelegateSignature" }, // 3347305306
		{ &Z_Construct_UDelegateFunction_UManaComponent_OnTrackChanged__DelegateSignature, "OnTrackChanged__DelegateSignature" }, // 1381373137
		{ &Z_Construct_UFunction_UManaComponent_Pause, "Pause" }, // 2167384661
		{ &Z_Construct_UFunction_UManaComponent_Play, "Play" }, // 2291142009
		{ &Z_Construct_UFunction_UManaComponent_Prepare, "Prepare" }, // 2124431581
		{ &Z_Construct_UFunction_UManaComponent_PreparePlaylistIndex, "PreparePlaylistIndex" }, // 3370548382
		{ &Z_Construct_UFunction_UManaComponent_Previous, "Previous" }, // 1280464214
		{ &Z_Construct_UFunction_UManaComponent_RemoveAudioCategory, "RemoveAudioCategory" }, // 2159298001
		{ &Z_Construct_UFunction_UManaComponent_RemoveExtraAudioCategory, "RemoveExtraAudioCategory" }, // 2260036815
		{ &Z_Construct_UFunction_UManaComponent_RemoveSubAudioCategory, "RemoveSubAudioCategory" }, // 4293118396
		{ &Z_Construct_UFunction_UManaComponent_Seek, "Seek" }, // 3863872120
		{ &Z_Construct_UFunction_UManaComponent_SeekToPosition, "SeekToPosition" }, // 3938594828
		{ &Z_Construct_UFunction_UManaComponent_SetAlphaTrack, "SetAlphaTrack" }, // 2543528126
		{ &Z_Construct_UFunction_UManaComponent_SetAudioCategory, "SetAudioCategory" }, // 2960545599
		{ &Z_Construct_UFunction_UManaComponent_SetAudioTrack, "SetAudioTrack" }, // 3913268278
		{ &Z_Construct_UFunction_UManaComponent_SetEndFrameAction, "SetEndFrameAction" }, // 1728057954
		{ &Z_Construct_UFunction_UManaComponent_SetExtraAudioCategory, "SetExtraAudioCategory" }, // 4022441811
		{ &Z_Construct_UFunction_UManaComponent_SetExtraAudioTrack, "SetExtraAudioTrack" }, // 2934036300
		{ &Z_Construct_UFunction_UManaComponent_SetExtraVolume, "SetExtraVolume" }, // 3635036008
		{ &Z_Construct_UFunction_UManaComponent_SetFile, "SetFile" }, // 147172771
		{ &Z_Construct_UFunction_UManaComponent_SetMaxDropFrames, "SetMaxDropFrames" }, // 13110305
		{ &Z_Construct_UFunction_UManaComponent_SetMovie, "SetMovie" }, // 464151490
		{ &Z_Construct_UFunction_UManaComponent_SetPlaybackTimer, "SetPlaybackTimer" }, // 2538275723
		{ &Z_Construct_UFunction_UManaComponent_SetSubAudioCategory, "SetSubAudioCategory" }, // 3792251687
		{ &Z_Construct_UFunction_UManaComponent_SetSubAudioSendLevel, "SetSubAudioSendLevel" }, // 1582698649
		{ &Z_Construct_UFunction_UManaComponent_SetSubAudioTrack, "SetSubAudioTrack" }, // 1578993041
		{ &Z_Construct_UFunction_UManaComponent_SetSubVolume, "SetSubVolume" }, // 1410810611
		{ &Z_Construct_UFunction_UManaComponent_SetTexture, "SetTexture" }, // 611283458
		{ &Z_Construct_UFunction_UManaComponent_SetVolume, "SetVolume" }, // 1540421195
		{ &Z_Construct_UFunction_UManaComponent_Stop, "Stop" }, // 3318371462
		{ &Z_Construct_UFunction_UManaComponent_ToIndex, "ToIndex" }, // 185889359
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManaComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_Movie = { "Movie", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaComponent, Movie), Z_Construct_UClass_UManaTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Movie_MetaData), NewProp_Movie_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_OnEventPoint = { "OnEventPoint", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaComponent, OnEventPoint), Z_Construct_UDelegateFunction_UManaComponent_OnEventPoint__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEventPoint_MetaData), NewProp_OnEventPoint_MetaData) }; // 573670108
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_OnSubtitleChanged = { "OnSubtitleChanged", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaComponent, OnSubtitleChanged), Z_Construct_UDelegateFunction_UManaComponent_OnSubtitleChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSubtitleChanged_MetaData), NewProp_OnSubtitleChanged_MetaData) }; // 3347305306
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_OnStatusChanged = { "OnStatusChanged", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaComponent, OnStatusChanged), Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStatusChanged_MetaData), NewProp_OnStatusChanged_MetaData) }; // 2383893417
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_OnMovieChanged = { "OnMovieChanged", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaComponent, OnMovieChanged), Z_Construct_UDelegateFunction_UManaComponent_OnMovieChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMovieChanged_MetaData), NewProp_OnMovieChanged_MetaData) }; // 514746267
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_OnSeekCompleted = { "OnSeekCompleted", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaComponent, OnSeekCompleted), Z_Construct_UDelegateFunction_UManaComponent_OnSeekCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSeekCompleted_MetaData), NewProp_OnSeekCompleted_MetaData) }; // 2789087946
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_OnTrackChanged = { "OnTrackChanged", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaComponent, OnTrackChanged), Z_Construct_UDelegateFunction_UManaComponent_OnTrackChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTrackChanged_MetaData), NewProp_OnTrackChanged_MetaData) }; // 1381373137
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_OnFrameOnTime = { "OnFrameOnTime", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaComponent, OnFrameOnTime), Z_Construct_UDelegateFunction_UManaComponent_OnFrameOnTime__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFrameOnTime_MetaData), NewProp_OnFrameOnTime_MetaData) }; // 2331023537
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_OnPlayerDestroyed = { "OnPlayerDestroyed", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaComponent, OnPlayerDestroyed), Z_Construct_UDelegateFunction_UManaComponent_OnPlayerDestroyed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayerDestroyed_MetaData), NewProp_OnPlayerDestroyed_MetaData) }; // 2746892333
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_OnRequestData = { "OnRequestData", nullptr, (EPropertyFlags)0x0010000000080005, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaComponent, OnRequestData), Z_Construct_UDelegateFunction_UManaComponent_OnRequestData__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRequestData_MetaData), NewProp_OnRequestData_MetaData) }; // 426618987
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_Playlist = { "Playlist", nullptr, (EPropertyFlags)0x0020080000002005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaComponent, Playlist), Z_Construct_UClass_UManaPlaylist_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Playlist_MetaData), NewProp_Playlist_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_PlaylistIndex = { "PlaylistIndex", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaComponent, PlaylistIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaylistIndex_MetaData), NewProp_PlaylistIndex_MetaData) };
void Z_Construct_UClass_UManaComponent_Statics::NewProp_bLoop_SetBit(void* Obj)
{
	((UManaComponent*)Obj)->bLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UManaComponent), &Z_Construct_UClass_UManaComponent_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLoop_MetaData), NewProp_bLoop_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_AlphaTrack = { "AlphaTrack", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaComponent, AlphaTrack), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaTrack_MetaData), NewProp_AlphaTrack_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_AudioTrack = { "AudioTrack", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaComponent, AudioTrack), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioTrack_MetaData), NewProp_AudioTrack_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_SubAudioTrack = { "SubAudioTrack", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaComponent, SubAudioTrack), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubAudioTrack_MetaData), NewProp_SubAudioTrack_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_ExtraAudioTrack = { "ExtraAudioTrack", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaComponent, ExtraAudioTrack), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtraAudioTrack_MetaData), NewProp_ExtraAudioTrack_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_AudioCategoryName = { "AudioCategoryName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaComponent, AudioCategoryName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioCategoryName_MetaData), NewProp_AudioCategoryName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_SubAudioCategoryName = { "SubAudioCategoryName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaComponent, SubAudioCategoryName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubAudioCategoryName_MetaData), NewProp_SubAudioCategoryName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_ExtraAudioCategoryName = { "ExtraAudioCategoryName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaComponent, ExtraAudioCategoryName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtraAudioCategoryName_MetaData), NewProp_ExtraAudioCategoryName_MetaData) };
void Z_Construct_UClass_UManaComponent_Statics::NewProp_bSubtitlesEnabled_SetBit(void* Obj)
{
	((UManaComponent*)Obj)->bSubtitlesEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_bSubtitlesEnabled = { "bSubtitlesEnabled", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UManaComponent), &Z_Construct_UClass_UManaComponent_Statics::NewProp_bSubtitlesEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSubtitlesEnabled_MetaData), NewProp_bSubtitlesEnabled_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_SubtitlesChannel = { "SubtitlesChannel", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaComponent, SubtitlesChannel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubtitlesChannel_MetaData), NewProp_SubtitlesChannel_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_SubtitlesEncoding_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_SubtitlesEncoding = { "SubtitlesEncoding", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaComponent, SubtitlesEncoding), Z_Construct_UEnum_CriWareRuntime_EManaSubtitlesEncoding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubtitlesEncoding_MetaData), NewProp_SubtitlesEncoding_MetaData) }; // 1557399849
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_EndFrameAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_EndFrameAction = { "EndFrameAction", nullptr, (EPropertyFlags)0x00200c0000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaComponent, EndFrameAction), Z_Construct_UEnum_CriWareRuntime_EManaFrameAction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndFrameAction_MetaData), NewProp_EndFrameAction_MetaData) }; // 1114415206
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_PlaybackTimer_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_PlaybackTimer = { "PlaybackTimer", nullptr, (EPropertyFlags)0x00200c0000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaComponent, PlaybackTimer), Z_Construct_UEnum_CriWareRuntime_EManaPlaybackTimer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaybackTimer_MetaData), NewProp_PlaybackTimer_MetaData) }; // 1950816337
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_MaxFrameDrop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_MaxFrameDrop = { "MaxFrameDrop", nullptr, (EPropertyFlags)0x00200c0000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaComponent, MaxFrameDrop), Z_Construct_UEnum_CriWareRuntime_EManaMaxFrameDrop, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxFrameDrop_MetaData), NewProp_MaxFrameDrop_MetaData) }; // 1699464272
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UManaComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_Movie,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_OnEventPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_OnSubtitleChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_OnStatusChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_OnMovieChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_OnSeekCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_OnTrackChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_OnFrameOnTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_OnPlayerDestroyed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_OnRequestData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_Playlist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_PlaylistIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_bLoop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_AlphaTrack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_AudioTrack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_SubAudioTrack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_ExtraAudioTrack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_AudioCategoryName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_SubAudioCategoryName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_ExtraAudioCategoryName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_bSubtitlesEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_SubtitlesChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_SubtitlesEncoding_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_SubtitlesEncoding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_EndFrameAction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_EndFrameAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_PlaybackTimer_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_PlaybackTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_MaxFrameDrop_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_MaxFrameDrop,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UManaComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UManaComponent_Statics::ClassParams = {
	&UManaComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UManaComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UManaComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UManaComponent()
{
	if (!Z_Registration_Info_UClass_UManaComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UManaComponent.OuterSingleton, Z_Construct_UClass_UManaComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UManaComponent.OuterSingleton;
}
template<> CRIWARERUNTIME_API UClass* StaticClass<UManaComponent>()
{
	return UManaComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UManaComponent);
UManaComponent::~UManaComponent() {}
// End Class UManaComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UManaComponent, UManaComponent::StaticClass, TEXT("UManaComponent"), &Z_Registration_Info_UClass_UManaComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManaComponent), 2766738088U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_4244184691(TEXT("/Script/CriWareRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
