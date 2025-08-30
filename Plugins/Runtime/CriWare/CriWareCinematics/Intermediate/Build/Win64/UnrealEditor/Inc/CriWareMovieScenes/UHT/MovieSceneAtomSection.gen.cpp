// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareMovieScenes/Public/MovieSceneAtomSection.h"
#include "CriWareRuntime/Public/AtomSelectorParam.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneFloatChannel.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneActorReferenceSection.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneParameterSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAtomSection() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
CRIWAREMOVIESCENES_API UClass* Z_Construct_UClass_UMovieSceneAtomSection();
CRIWAREMOVIESCENES_API UClass* Z_Construct_UClass_UMovieSceneAtomSection_NoRegister();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSelectorParam();
ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneActorReferenceData();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FScalarParameterNameAndCurve();
UPackage* Z_Construct_UPackage__Script_CriWareMovieScenes();
// End Cross Module References

// Begin Class UMovieSceneAtomSection Function GetStartOffset
struct Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset_Statics
{
	struct MovieSceneAtomSection_eventGetStartOffset_Parms
	{
		FFrameNumber ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneAtomSection_eventGetStartOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneAtomSection, nullptr, "GetStartOffset", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset_Statics::MovieSceneAtomSection_eventGetStartOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset_Statics::MovieSceneAtomSection_eventGetStartOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneAtomSection::execGetStartOffset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FFrameNumber*)Z_Param__Result=P_THIS->GetStartOffset();
	P_NATIVE_END;
}
// End Class UMovieSceneAtomSection Function GetStartOffset

// Begin Class UMovieSceneAtomSection Function IsLooping
struct Z_Construct_UFunction_UMovieSceneAtomSection_IsLooping_Statics
{
	struct MovieSceneAtomSection_eventIsLooping_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMovieSceneAtomSection_IsLooping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MovieSceneAtomSection_eventIsLooping_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneAtomSection_IsLooping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieSceneAtomSection_eventIsLooping_Parms), &Z_Construct_UFunction_UMovieSceneAtomSection_IsLooping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneAtomSection_IsLooping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAtomSection_IsLooping_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAtomSection_IsLooping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneAtomSection_IsLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneAtomSection, nullptr, "IsLooping", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneAtomSection_IsLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAtomSection_IsLooping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneAtomSection_IsLooping_Statics::MovieSceneAtomSection_eventIsLooping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAtomSection_IsLooping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneAtomSection_IsLooping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneAtomSection_IsLooping_Statics::MovieSceneAtomSection_eventIsLooping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneAtomSection_IsLooping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneAtomSection_IsLooping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneAtomSection::execIsLooping)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLooping();
	P_NATIVE_END;
}
// End Class UMovieSceneAtomSection Function IsLooping

// Begin Class UMovieSceneAtomSection Function SetStartOffset
struct Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset_Statics
{
	struct MovieSceneAtomSection_eventSetStartOffset_Parms
	{
		FFrameNumber InStartOffset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InStartOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset_Statics::NewProp_InStartOffset = { "InStartOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneAtomSection_eventSetStartOffset_Parms, InStartOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset_Statics::NewProp_InStartOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneAtomSection, nullptr, "SetStartOffset", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset_Statics::MovieSceneAtomSection_eventSetStartOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset_Statics::MovieSceneAtomSection_eventSetStartOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneAtomSection::execSetStartOffset)
{
	P_GET_STRUCT(FFrameNumber,Z_Param_InStartOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStartOffset(Z_Param_InStartOffset);
	P_NATIVE_END;
}
// End Class UMovieSceneAtomSection Function SetStartOffset

// Begin Class UMovieSceneAtomSection
void UMovieSceneAtomSection::StaticRegisterNativesUMovieSceneAtomSection()
{
	UClass* Class = UMovieSceneAtomSection::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetStartOffset", &UMovieSceneAtomSection::execGetStartOffset },
		{ "IsLooping", &UMovieSceneAtomSection::execIsLooping },
		{ "SetStartOffset", &UMovieSceneAtomSection::execSetStartOffset },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneAtomSection);
UClass* Z_Construct_UClass_UMovieSceneAtomSection_NoRegister()
{
	return UMovieSceneAtomSection::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneAtomSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MovieSceneAtomSection.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneAtomSection" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartFrameOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneAtomSection" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneAtomSection" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneAtomSection" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachActorData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneAtomSection" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScalarParameterNamesAndCurves_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneAtomSection" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuppressSubtitles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneAtomSection" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAttenuation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneAtomSection" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneAtomSection" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bContinueSoundWhenSequenceIsEnd_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneAtomSection" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AsrRackIDs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneAtomSection" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectorLabels_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneAtomSection" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneAtomSection" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartFrameOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SoundVolume;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PitchMultiplier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttachActorData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarParameterNamesAndCurves_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ScalarParameterNamesAndCurves;
	static void NewProp_bSuppressSubtitles_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuppressSubtitles;
	static void NewProp_bOverrideAttenuation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAttenuation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings;
	static void NewProp_bContinueSoundWhenSequenceIsEnd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bContinueSoundWhenSequenceIsEnd;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AsrRackIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AsrRackIDs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectorLabels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectorLabels;
	static void NewProp_bLooping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset, "GetStartOffset" }, // 424168336
		{ &Z_Construct_UFunction_UMovieSceneAtomSection_IsLooping, "IsLooping" }, // 4013172923
		{ &Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset, "SetStartOffset" }, // 1087774588
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneAtomSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAtomSection, Sound), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sound_MetaData), NewProp_Sound_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_StartFrameOffset = { "StartFrameOffset", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAtomSection, StartFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartFrameOffset_MetaData), NewProp_StartFrameOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_SoundVolume = { "SoundVolume", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAtomSection, SoundVolume), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundVolume_MetaData), NewProp_SoundVolume_MetaData) }; // 139010471
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAtomSection, PitchMultiplier), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchMultiplier_MetaData), NewProp_PitchMultiplier_MetaData) }; // 139010471
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AttachActorData = { "AttachActorData", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAtomSection, AttachActorData), Z_Construct_UScriptStruct_FMovieSceneActorReferenceData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachActorData_MetaData), NewProp_AttachActorData_MetaData) }; // 359755361
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_ScalarParameterNamesAndCurves_Inner = { "ScalarParameterNamesAndCurves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FScalarParameterNameAndCurve, METADATA_PARAMS(0, nullptr) }; // 3238749462
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_ScalarParameterNamesAndCurves = { "ScalarParameterNamesAndCurves", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAtomSection, ScalarParameterNamesAndCurves), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScalarParameterNamesAndCurves_MetaData), NewProp_ScalarParameterNamesAndCurves_MetaData) }; // 3238749462
void Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bSuppressSubtitles_SetBit(void* Obj)
{
	((UMovieSceneAtomSection*)Obj)->bSuppressSubtitles = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bSuppressSubtitles = { "bSuppressSubtitles", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieSceneAtomSection), &Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bSuppressSubtitles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuppressSubtitles_MetaData), NewProp_bSuppressSubtitles_MetaData) };
void Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bOverrideAttenuation_SetBit(void* Obj)
{
	((UMovieSceneAtomSection*)Obj)->bOverrideAttenuation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bOverrideAttenuation = { "bOverrideAttenuation", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieSceneAtomSection), &Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bOverrideAttenuation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideAttenuation_MetaData), NewProp_bOverrideAttenuation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAtomSection, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttenuationSettings_MetaData), NewProp_AttenuationSettings_MetaData) };
void Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bContinueSoundWhenSequenceIsEnd_SetBit(void* Obj)
{
	((UMovieSceneAtomSection*)Obj)->bContinueSoundWhenSequenceIsEnd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bContinueSoundWhenSequenceIsEnd = { "bContinueSoundWhenSequenceIsEnd", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieSceneAtomSection), &Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bContinueSoundWhenSequenceIsEnd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bContinueSoundWhenSequenceIsEnd_MetaData), NewProp_bContinueSoundWhenSequenceIsEnd_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AsrRackIDs_Inner = { "AsrRackIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AsrRackIDs = { "AsrRackIDs", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAtomSection, AsrRackIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AsrRackIDs_MetaData), NewProp_AsrRackIDs_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_SelectorLabels_Inner = { "SelectorLabels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAtomSelectorParam, METADATA_PARAMS(0, nullptr) }; // 171946896
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_SelectorLabels = { "SelectorLabels", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAtomSection, SelectorLabels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectorLabels_MetaData), NewProp_SelectorLabels_MetaData) }; // 171946896
void Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bLooping_SetBit(void* Obj)
{
	((UMovieSceneAtomSection*)Obj)->bLooping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieSceneAtomSection), &Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLooping_MetaData), NewProp_bLooping_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneAtomSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Sound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_StartFrameOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_SoundVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_PitchMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AttachActorData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_ScalarParameterNamesAndCurves_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_ScalarParameterNamesAndCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bSuppressSubtitles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bOverrideAttenuation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AttenuationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bContinueSoundWhenSequenceIsEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AsrRackIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AsrRackIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_SelectorLabels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_SelectorLabels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bLooping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneAtomSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareMovieScenes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::ClassParams = {
	&UMovieSceneAtomSection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMovieSceneAtomSection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneAtomSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneAtomSection()
{
	if (!Z_Registration_Info_UClass_UMovieSceneAtomSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneAtomSection.OuterSingleton, Z_Construct_UClass_UMovieSceneAtomSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneAtomSection.OuterSingleton;
}
template<> CRIWAREMOVIESCENES_API UClass* StaticClass<UMovieSceneAtomSection>()
{
	return UMovieSceneAtomSection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneAtomSection);
UMovieSceneAtomSection::~UMovieSceneAtomSection() {}
// End Class UMovieSceneAtomSection

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneAtomSection, UMovieSceneAtomSection::StaticClass, TEXT("UMovieSceneAtomSection"), &Z_Registration_Info_UClass_UMovieSceneAtomSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneAtomSection), 770073851U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSection_h_1753085669(TEXT("/Script/CriWareMovieScenes"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
