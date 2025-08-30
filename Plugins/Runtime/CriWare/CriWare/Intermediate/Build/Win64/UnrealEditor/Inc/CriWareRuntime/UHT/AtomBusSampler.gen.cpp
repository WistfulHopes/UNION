// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomBusSampler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomBusSampler() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomBusSampler();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomBusSampler_NoRegister();
CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingFinished__DelegateSignature();
CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingStarted__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Delegate FOnRecordingStarted
struct Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingStarted__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomBusSampler.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingStarted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusSampler, nullptr, "OnRecordingStarted__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingStarted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingStarted__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingStarted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingStarted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UAtomBusSampler::FOnRecordingStarted_DelegateWrapper(const FMulticastScriptDelegate& OnRecordingStarted)
{
	OnRecordingStarted.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnRecordingStarted

// Begin Delegate FOnRecordingFinished
struct Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingFinished__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomBusSampler.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusSampler, nullptr, "OnRecordingFinished__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingFinished__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingFinished__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingFinished__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingFinished__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UAtomBusSampler::FOnRecordingFinished_DelegateWrapper(const FMulticastScriptDelegate& OnRecordingFinished)
{
	OnRecordingFinished.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnRecordingFinished

// Begin Class UAtomBusSampler Function CanPlayRecordedSound
struct Z_Construct_UFunction_UAtomBusSampler_CanPlayRecordedSound_Statics
{
	struct AtomBusSampler_eventCanPlayRecordedSound_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomBusSampler.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAtomBusSampler_CanPlayRecordedSound_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AtomBusSampler_eventCanPlayRecordedSound_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomBusSampler_CanPlayRecordedSound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AtomBusSampler_eventCanPlayRecordedSound_Parms), &Z_Construct_UFunction_UAtomBusSampler_CanPlayRecordedSound_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusSampler_CanPlayRecordedSound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusSampler_CanPlayRecordedSound_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_CanPlayRecordedSound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusSampler_CanPlayRecordedSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusSampler, nullptr, "CanPlayRecordedSound", nullptr, nullptr, Z_Construct_UFunction_UAtomBusSampler_CanPlayRecordedSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_CanPlayRecordedSound_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomBusSampler_CanPlayRecordedSound_Statics::AtomBusSampler_eventCanPlayRecordedSound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_CanPlayRecordedSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomBusSampler_CanPlayRecordedSound_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomBusSampler_CanPlayRecordedSound_Statics::AtomBusSampler_eventCanPlayRecordedSound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomBusSampler_CanPlayRecordedSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusSampler_CanPlayRecordedSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomBusSampler::execCanPlayRecordedSound)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanPlayRecordedSound();
	P_NATIVE_END;
}
// End Class UAtomBusSampler Function CanPlayRecordedSound

// Begin Class UAtomBusSampler Function CanRecord
struct Z_Construct_UFunction_UAtomBusSampler_CanRecord_Statics
{
	struct AtomBusSampler_eventCanRecord_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomBusSampler.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAtomBusSampler_CanRecord_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AtomBusSampler_eventCanRecord_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomBusSampler_CanRecord_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AtomBusSampler_eventCanRecord_Parms), &Z_Construct_UFunction_UAtomBusSampler_CanRecord_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusSampler_CanRecord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusSampler_CanRecord_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_CanRecord_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusSampler_CanRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusSampler, nullptr, "CanRecord", nullptr, nullptr, Z_Construct_UFunction_UAtomBusSampler_CanRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_CanRecord_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomBusSampler_CanRecord_Statics::AtomBusSampler_eventCanRecord_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_CanRecord_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomBusSampler_CanRecord_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomBusSampler_CanRecord_Statics::AtomBusSampler_eventCanRecord_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomBusSampler_CanRecord()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusSampler_CanRecord_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomBusSampler::execCanRecord)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanRecord();
	P_NATIVE_END;
}
// End Class UAtomBusSampler Function CanRecord

// Begin Class UAtomBusSampler Function FinishRecording
struct Z_Construct_UFunction_UAtomBusSampler_FinishRecording_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomBusSampler.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusSampler_FinishRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusSampler, nullptr, "FinishRecording", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_FinishRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomBusSampler_FinishRecording_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAtomBusSampler_FinishRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusSampler_FinishRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomBusSampler::execFinishRecording)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishRecording();
	P_NATIVE_END;
}
// End Class UAtomBusSampler Function FinishRecording

// Begin Class UAtomBusSampler Function IsPausedRecordedSound
struct Z_Construct_UFunction_UAtomBusSampler_IsPausedRecordedSound_Statics
{
	struct AtomBusSampler_eventIsPausedRecordedSound_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomBusSampler.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAtomBusSampler_IsPausedRecordedSound_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AtomBusSampler_eventIsPausedRecordedSound_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomBusSampler_IsPausedRecordedSound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AtomBusSampler_eventIsPausedRecordedSound_Parms), &Z_Construct_UFunction_UAtomBusSampler_IsPausedRecordedSound_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusSampler_IsPausedRecordedSound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusSampler_IsPausedRecordedSound_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_IsPausedRecordedSound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusSampler_IsPausedRecordedSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusSampler, nullptr, "IsPausedRecordedSound", nullptr, nullptr, Z_Construct_UFunction_UAtomBusSampler_IsPausedRecordedSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_IsPausedRecordedSound_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomBusSampler_IsPausedRecordedSound_Statics::AtomBusSampler_eventIsPausedRecordedSound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_IsPausedRecordedSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomBusSampler_IsPausedRecordedSound_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomBusSampler_IsPausedRecordedSound_Statics::AtomBusSampler_eventIsPausedRecordedSound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomBusSampler_IsPausedRecordedSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusSampler_IsPausedRecordedSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomBusSampler::execIsPausedRecordedSound)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPausedRecordedSound();
	P_NATIVE_END;
}
// End Class UAtomBusSampler Function IsPausedRecordedSound

// Begin Class UAtomBusSampler Function IsPlayingRecordedSound
struct Z_Construct_UFunction_UAtomBusSampler_IsPlayingRecordedSound_Statics
{
	struct AtomBusSampler_eventIsPlayingRecordedSound_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomBusSampler.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAtomBusSampler_IsPlayingRecordedSound_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AtomBusSampler_eventIsPlayingRecordedSound_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomBusSampler_IsPlayingRecordedSound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AtomBusSampler_eventIsPlayingRecordedSound_Parms), &Z_Construct_UFunction_UAtomBusSampler_IsPlayingRecordedSound_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusSampler_IsPlayingRecordedSound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusSampler_IsPlayingRecordedSound_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_IsPlayingRecordedSound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusSampler_IsPlayingRecordedSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusSampler, nullptr, "IsPlayingRecordedSound", nullptr, nullptr, Z_Construct_UFunction_UAtomBusSampler_IsPlayingRecordedSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_IsPlayingRecordedSound_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomBusSampler_IsPlayingRecordedSound_Statics::AtomBusSampler_eventIsPlayingRecordedSound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_IsPlayingRecordedSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomBusSampler_IsPlayingRecordedSound_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomBusSampler_IsPlayingRecordedSound_Statics::AtomBusSampler_eventIsPlayingRecordedSound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomBusSampler_IsPlayingRecordedSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusSampler_IsPlayingRecordedSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomBusSampler::execIsPlayingRecordedSound)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlayingRecordedSound();
	P_NATIVE_END;
}
// End Class UAtomBusSampler Function IsPlayingRecordedSound

// Begin Class UAtomBusSampler Function IsRecording
struct Z_Construct_UFunction_UAtomBusSampler_IsRecording_Statics
{
	struct AtomBusSampler_eventIsRecording_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomBusSampler.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAtomBusSampler_IsRecording_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AtomBusSampler_eventIsRecording_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomBusSampler_IsRecording_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AtomBusSampler_eventIsRecording_Parms), &Z_Construct_UFunction_UAtomBusSampler_IsRecording_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusSampler_IsRecording_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusSampler_IsRecording_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_IsRecording_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusSampler_IsRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusSampler, nullptr, "IsRecording", nullptr, nullptr, Z_Construct_UFunction_UAtomBusSampler_IsRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_IsRecording_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomBusSampler_IsRecording_Statics::AtomBusSampler_eventIsRecording_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_IsRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomBusSampler_IsRecording_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomBusSampler_IsRecording_Statics::AtomBusSampler_eventIsRecording_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomBusSampler_IsRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusSampler_IsRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomBusSampler::execIsRecording)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsRecording();
	P_NATIVE_END;
}
// End Class UAtomBusSampler Function IsRecording

// Begin Class UAtomBusSampler Function PauseRecordedSound
struct Z_Construct_UFunction_UAtomBusSampler_PauseRecordedSound_Statics
{
	struct AtomBusSampler_eventPauseRecordedSound_Parms
	{
		bool bPause;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomBusSampler.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bPause_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPause;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAtomBusSampler_PauseRecordedSound_Statics::NewProp_bPause_SetBit(void* Obj)
{
	((AtomBusSampler_eventPauseRecordedSound_Parms*)Obj)->bPause = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomBusSampler_PauseRecordedSound_Statics::NewProp_bPause = { "bPause", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AtomBusSampler_eventPauseRecordedSound_Parms), &Z_Construct_UFunction_UAtomBusSampler_PauseRecordedSound_Statics::NewProp_bPause_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusSampler_PauseRecordedSound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusSampler_PauseRecordedSound_Statics::NewProp_bPause,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_PauseRecordedSound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusSampler_PauseRecordedSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusSampler, nullptr, "PauseRecordedSound", nullptr, nullptr, Z_Construct_UFunction_UAtomBusSampler_PauseRecordedSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_PauseRecordedSound_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomBusSampler_PauseRecordedSound_Statics::AtomBusSampler_eventPauseRecordedSound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_PauseRecordedSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomBusSampler_PauseRecordedSound_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomBusSampler_PauseRecordedSound_Statics::AtomBusSampler_eventPauseRecordedSound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomBusSampler_PauseRecordedSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusSampler_PauseRecordedSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomBusSampler::execPauseRecordedSound)
{
	P_GET_UBOOL(Z_Param_bPause);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PauseRecordedSound(Z_Param_bPause);
	P_NATIVE_END;
}
// End Class UAtomBusSampler Function PauseRecordedSound

// Begin Class UAtomBusSampler Function PauseRecording
struct Z_Construct_UFunction_UAtomBusSampler_PauseRecording_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomBusSampler.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusSampler_PauseRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusSampler, nullptr, "PauseRecording", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_PauseRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomBusSampler_PauseRecording_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAtomBusSampler_PauseRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusSampler_PauseRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomBusSampler::execPauseRecording)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PauseRecording();
	P_NATIVE_END;
}
// End Class UAtomBusSampler Function PauseRecording

// Begin Class UAtomBusSampler Function PlayRecordedSound
struct Z_Construct_UFunction_UAtomBusSampler_PlayRecordedSound_Statics
{
	struct AtomBusSampler_eventPlayRecordedSound_Parms
	{
		int32 Milliseconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomBusSampler.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Milliseconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomBusSampler_PlayRecordedSound_Statics::NewProp_Milliseconds = { "Milliseconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomBusSampler_eventPlayRecordedSound_Parms, Milliseconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusSampler_PlayRecordedSound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusSampler_PlayRecordedSound_Statics::NewProp_Milliseconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_PlayRecordedSound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusSampler_PlayRecordedSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusSampler, nullptr, "PlayRecordedSound", nullptr, nullptr, Z_Construct_UFunction_UAtomBusSampler_PlayRecordedSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_PlayRecordedSound_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomBusSampler_PlayRecordedSound_Statics::AtomBusSampler_eventPlayRecordedSound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_PlayRecordedSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomBusSampler_PlayRecordedSound_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomBusSampler_PlayRecordedSound_Statics::AtomBusSampler_eventPlayRecordedSound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomBusSampler_PlayRecordedSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusSampler_PlayRecordedSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomBusSampler::execPlayRecordedSound)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Milliseconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayRecordedSound(Z_Param_Milliseconds);
	P_NATIVE_END;
}
// End Class UAtomBusSampler Function PlayRecordedSound

// Begin Class UAtomBusSampler Function ResumeRecording
struct Z_Construct_UFunction_UAtomBusSampler_ResumeRecording_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomBusSampler.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusSampler_ResumeRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusSampler, nullptr, "ResumeRecording", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_ResumeRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomBusSampler_ResumeRecording_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAtomBusSampler_ResumeRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusSampler_ResumeRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomBusSampler::execResumeRecording)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResumeRecording();
	P_NATIVE_END;
}
// End Class UAtomBusSampler Function ResumeRecording

// Begin Class UAtomBusSampler Function StartRecording
struct Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics
{
	struct AtomBusSampler_eventStartRecording_Parms
	{
		float InExpectedDuration;
		int32 InAsrRack;
		FString InBusName;
		bool BusOutput;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomBusSampler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBusName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InExpectedDuration;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InAsrRack;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InBusName;
	static void NewProp_BusOutput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BusOutput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::NewProp_InExpectedDuration = { "InExpectedDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomBusSampler_eventStartRecording_Parms, InExpectedDuration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::NewProp_InAsrRack = { "InAsrRack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomBusSampler_eventStartRecording_Parms, InAsrRack), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::NewProp_InBusName = { "InBusName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomBusSampler_eventStartRecording_Parms, InBusName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBusName_MetaData), NewProp_InBusName_MetaData) };
void Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::NewProp_BusOutput_SetBit(void* Obj)
{
	((AtomBusSampler_eventStartRecording_Parms*)Obj)->BusOutput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::NewProp_BusOutput = { "BusOutput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AtomBusSampler_eventStartRecording_Parms), &Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::NewProp_BusOutput_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::NewProp_InExpectedDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::NewProp_InAsrRack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::NewProp_InBusName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::NewProp_BusOutput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusSampler, nullptr, "StartRecording", nullptr, nullptr, Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::AtomBusSampler_eventStartRecording_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::AtomBusSampler_eventStartRecording_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomBusSampler_StartRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomBusSampler::execStartRecording)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InExpectedDuration);
	P_GET_PROPERTY(FIntProperty,Z_Param_InAsrRack);
	P_GET_PROPERTY(FStrProperty,Z_Param_InBusName);
	P_GET_UBOOL(Z_Param_BusOutput);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartRecording(Z_Param_InExpectedDuration,Z_Param_InAsrRack,Z_Param_InBusName,Z_Param_BusOutput);
	P_NATIVE_END;
}
// End Class UAtomBusSampler Function StartRecording

// Begin Class UAtomBusSampler Function StopRecordedSound
struct Z_Construct_UFunction_UAtomBusSampler_StopRecordedSound_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomBusSampler.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusSampler_StopRecordedSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusSampler, nullptr, "StopRecordedSound", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_StopRecordedSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomBusSampler_StopRecordedSound_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAtomBusSampler_StopRecordedSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusSampler_StopRecordedSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomBusSampler::execStopRecordedSound)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopRecordedSound();
	P_NATIVE_END;
}
// End Class UAtomBusSampler Function StopRecordedSound

// Begin Class UAtomBusSampler Function StopRecordedSoundWithoutReleaseTime
struct Z_Construct_UFunction_UAtomBusSampler_StopRecordedSoundWithoutReleaseTime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomBusSampler.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusSampler_StopRecordedSoundWithoutReleaseTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusSampler, nullptr, "StopRecordedSoundWithoutReleaseTime", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_StopRecordedSoundWithoutReleaseTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomBusSampler_StopRecordedSoundWithoutReleaseTime_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAtomBusSampler_StopRecordedSoundWithoutReleaseTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusSampler_StopRecordedSoundWithoutReleaseTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomBusSampler::execStopRecordedSoundWithoutReleaseTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopRecordedSoundWithoutReleaseTime();
	P_NATIVE_END;
}
// End Class UAtomBusSampler Function StopRecordedSoundWithoutReleaseTime

// Begin Class UAtomBusSampler
void UAtomBusSampler::StaticRegisterNativesUAtomBusSampler()
{
	UClass* Class = UAtomBusSampler::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanPlayRecordedSound", &UAtomBusSampler::execCanPlayRecordedSound },
		{ "CanRecord", &UAtomBusSampler::execCanRecord },
		{ "FinishRecording", &UAtomBusSampler::execFinishRecording },
		{ "IsPausedRecordedSound", &UAtomBusSampler::execIsPausedRecordedSound },
		{ "IsPlayingRecordedSound", &UAtomBusSampler::execIsPlayingRecordedSound },
		{ "IsRecording", &UAtomBusSampler::execIsRecording },
		{ "PauseRecordedSound", &UAtomBusSampler::execPauseRecordedSound },
		{ "PauseRecording", &UAtomBusSampler::execPauseRecording },
		{ "PlayRecordedSound", &UAtomBusSampler::execPlayRecordedSound },
		{ "ResumeRecording", &UAtomBusSampler::execResumeRecording },
		{ "StartRecording", &UAtomBusSampler::execStartRecording },
		{ "StopRecordedSound", &UAtomBusSampler::execStopRecordedSound },
		{ "StopRecordedSoundWithoutReleaseTime", &UAtomBusSampler::execStopRecordedSoundWithoutReleaseTime },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBusSampler);
UClass* Z_Construct_UClass_UAtomBusSampler_NoRegister()
{
	return UAtomBusSampler::StaticClass();
}
struct Z_Construct_UClass_UAtomBusSampler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AtomBusSampler.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AtomBusSampler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRecordingStarted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomBusSampler" },
		{ "ModuleRelativePath", "Public/AtomBusSampler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRecordingFinished_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomBusSampler" },
		{ "ModuleRelativePath", "Public/AtomBusSampler.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRecordingStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRecordingFinished;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomBusSampler_CanPlayRecordedSound, "CanPlayRecordedSound" }, // 3937244698
		{ &Z_Construct_UFunction_UAtomBusSampler_CanRecord, "CanRecord" }, // 4099749635
		{ &Z_Construct_UFunction_UAtomBusSampler_FinishRecording, "FinishRecording" }, // 871879228
		{ &Z_Construct_UFunction_UAtomBusSampler_IsPausedRecordedSound, "IsPausedRecordedSound" }, // 1591267862
		{ &Z_Construct_UFunction_UAtomBusSampler_IsPlayingRecordedSound, "IsPlayingRecordedSound" }, // 2873820272
		{ &Z_Construct_UFunction_UAtomBusSampler_IsRecording, "IsRecording" }, // 3940551577
		{ &Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingFinished__DelegateSignature, "OnRecordingFinished__DelegateSignature" }, // 177454098
		{ &Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingStarted__DelegateSignature, "OnRecordingStarted__DelegateSignature" }, // 2782237524
		{ &Z_Construct_UFunction_UAtomBusSampler_PauseRecordedSound, "PauseRecordedSound" }, // 546220086
		{ &Z_Construct_UFunction_UAtomBusSampler_PauseRecording, "PauseRecording" }, // 1927982585
		{ &Z_Construct_UFunction_UAtomBusSampler_PlayRecordedSound, "PlayRecordedSound" }, // 3329168697
		{ &Z_Construct_UFunction_UAtomBusSampler_ResumeRecording, "ResumeRecording" }, // 2478288116
		{ &Z_Construct_UFunction_UAtomBusSampler_StartRecording, "StartRecording" }, // 2675451468
		{ &Z_Construct_UFunction_UAtomBusSampler_StopRecordedSound, "StopRecordedSound" }, // 1041816833
		{ &Z_Construct_UFunction_UAtomBusSampler_StopRecordedSoundWithoutReleaseTime, "StopRecordedSoundWithoutReleaseTime" }, // 1937712594
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusSampler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAtomBusSampler_Statics::NewProp_OnRecordingStarted = { "OnRecordingStarted", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAtomBusSampler, OnRecordingStarted), Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingStarted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRecordingStarted_MetaData), NewProp_OnRecordingStarted_MetaData) }; // 2782237524
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAtomBusSampler_Statics::NewProp_OnRecordingFinished = { "OnRecordingFinished", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAtomBusSampler, OnRecordingFinished), Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingFinished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRecordingFinished_MetaData), NewProp_OnRecordingFinished_MetaData) }; // 177454098
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomBusSampler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusSampler_Statics::NewProp_OnRecordingStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusSampler_Statics::NewProp_OnRecordingFinished,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusSampler_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAtomBusSampler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusSampler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusSampler_Statics::ClassParams = {
	&UAtomBusSampler::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAtomBusSampler_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusSampler_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusSampler_Statics::Class_MetaDataParams), Z_Construct_UClass_UAtomBusSampler_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAtomBusSampler()
{
	if (!Z_Registration_Info_UClass_UAtomBusSampler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBusSampler.OuterSingleton, Z_Construct_UClass_UAtomBusSampler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAtomBusSampler.OuterSingleton;
}
template<> CRIWARERUNTIME_API UClass* StaticClass<UAtomBusSampler>()
{
	return UAtomBusSampler::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusSampler);
UAtomBusSampler::~UAtomBusSampler() {}
// End Class UAtomBusSampler

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomBusSampler_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAtomBusSampler, UAtomBusSampler::StaticClass, TEXT("UAtomBusSampler"), &Z_Registration_Info_UClass_UAtomBusSampler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBusSampler), 694319879U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomBusSampler_h_4267542935(TEXT("/Script/CriWareRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomBusSampler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomBusSampler_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
