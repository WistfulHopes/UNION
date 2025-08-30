// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomAudioVolume.h"
#include "CriWareRuntime/Public/AtomAudioVolumeParameters.h"
#include "CriWareRuntime/Public/SnapshotSwitchSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomAudioVolume() {}

// Begin Cross Module References
CRIWARERUNTIME_API UClass* Z_Construct_UClass_AAtomAudioVolume();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_AAtomAudioVolume_NoRegister();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_AAtomEntranceVolume_NoRegister();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomAudioVolumeSettings_NoRegister();
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAudioVolumeParameters();
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSnapshotSwitchSettings();
ENGINE_API UClass* Z_Construct_UClass_AVolume();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Class AAtomAudioVolume Function EnableAllAudioVolume
struct Z_Construct_UFunction_AAtomAudioVolume_EnableAllAudioVolume_Statics
{
	struct AtomAudioVolume_eventEnableAllAudioVolume_Parms
	{
		bool bEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomAudioVolume.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AAtomAudioVolume_EnableAllAudioVolume_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((AtomAudioVolume_eventEnableAllAudioVolume_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAtomAudioVolume_EnableAllAudioVolume_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AtomAudioVolume_eventEnableAllAudioVolume_Parms), &Z_Construct_UFunction_AAtomAudioVolume_EnableAllAudioVolume_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtomAudioVolume_EnableAllAudioVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtomAudioVolume_EnableAllAudioVolume_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAudioVolume_EnableAllAudioVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomAudioVolume_EnableAllAudioVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomAudioVolume, nullptr, "EnableAllAudioVolume", nullptr, nullptr, Z_Construct_UFunction_AAtomAudioVolume_EnableAllAudioVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAudioVolume_EnableAllAudioVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAtomAudioVolume_EnableAllAudioVolume_Statics::AtomAudioVolume_eventEnableAllAudioVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAudioVolume_EnableAllAudioVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAtomAudioVolume_EnableAllAudioVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAtomAudioVolume_EnableAllAudioVolume_Statics::AtomAudioVolume_eventEnableAllAudioVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAtomAudioVolume_EnableAllAudioVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAtomAudioVolume_EnableAllAudioVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAtomAudioVolume::execEnableAllAudioVolume)
{
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	AAtomAudioVolume::EnableAllAudioVolume(Z_Param_bEnable);
	P_NATIVE_END;
}
// End Class AAtomAudioVolume Function EnableAllAudioVolume

// Begin Class AAtomAudioVolume Function GetEnabled
struct Z_Construct_UFunction_AAtomAudioVolume_GetEnabled_Statics
{
	struct AtomAudioVolume_eventGetEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomAudioVolume.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AAtomAudioVolume_GetEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AtomAudioVolume_eventGetEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAtomAudioVolume_GetEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AtomAudioVolume_eventGetEnabled_Parms), &Z_Construct_UFunction_AAtomAudioVolume_GetEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtomAudioVolume_GetEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtomAudioVolume_GetEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAudioVolume_GetEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomAudioVolume_GetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomAudioVolume, nullptr, "GetEnabled", nullptr, nullptr, Z_Construct_UFunction_AAtomAudioVolume_GetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAudioVolume_GetEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAtomAudioVolume_GetEnabled_Statics::AtomAudioVolume_eventGetEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAudioVolume_GetEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAtomAudioVolume_GetEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAtomAudioVolume_GetEnabled_Statics::AtomAudioVolume_eventGetEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAtomAudioVolume_GetEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAtomAudioVolume_GetEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAtomAudioVolume::execGetEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetEnabled();
	P_NATIVE_END;
}
// End Class AAtomAudioVolume Function GetEnabled

// Begin Class AAtomAudioVolume Function GetPriority
struct Z_Construct_UFunction_AAtomAudioVolume_GetPriority_Statics
{
	struct AtomAudioVolume_eventGetPriority_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomAudioVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAtomAudioVolume_GetPriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomAudioVolume_eventGetPriority_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtomAudioVolume_GetPriority_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtomAudioVolume_GetPriority_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAudioVolume_GetPriority_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomAudioVolume_GetPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomAudioVolume, nullptr, "GetPriority", nullptr, nullptr, Z_Construct_UFunction_AAtomAudioVolume_GetPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAudioVolume_GetPriority_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAtomAudioVolume_GetPriority_Statics::AtomAudioVolume_eventGetPriority_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAudioVolume_GetPriority_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAtomAudioVolume_GetPriority_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAtomAudioVolume_GetPriority_Statics::AtomAudioVolume_eventGetPriority_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAtomAudioVolume_GetPriority()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAtomAudioVolume_GetPriority_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAtomAudioVolume::execGetPriority)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPriority();
	P_NATIVE_END;
}
// End Class AAtomAudioVolume Function GetPriority

// Begin Class AAtomAudioVolume Function OnRep_bEnabled
struct Z_Construct_UFunction_AAtomAudioVolume_OnRep_bEnabled_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomAudioVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomAudioVolume_OnRep_bEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomAudioVolume, nullptr, "OnRep_bEnabled", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAudioVolume_OnRep_bEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAtomAudioVolume_OnRep_bEnabled_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAtomAudioVolume_OnRep_bEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAtomAudioVolume_OnRep_bEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAtomAudioVolume::execOnRep_bEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_bEnabled();
	P_NATIVE_END;
}
// End Class AAtomAudioVolume Function OnRep_bEnabled

// Begin Class AAtomAudioVolume Function SetEnabled
struct Z_Construct_UFunction_AAtomAudioVolume_SetEnabled_Statics
{
	struct AtomAudioVolume_eventSetEnabled_Parms
	{
		bool bNewEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomAudioVolume.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AAtomAudioVolume_SetEnabled_Statics::NewProp_bNewEnabled_SetBit(void* Obj)
{
	((AtomAudioVolume_eventSetEnabled_Parms*)Obj)->bNewEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAtomAudioVolume_SetEnabled_Statics::NewProp_bNewEnabled = { "bNewEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AtomAudioVolume_eventSetEnabled_Parms), &Z_Construct_UFunction_AAtomAudioVolume_SetEnabled_Statics::NewProp_bNewEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtomAudioVolume_SetEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtomAudioVolume_SetEnabled_Statics::NewProp_bNewEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAudioVolume_SetEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomAudioVolume_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomAudioVolume, nullptr, "SetEnabled", nullptr, nullptr, Z_Construct_UFunction_AAtomAudioVolume_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAudioVolume_SetEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAtomAudioVolume_SetEnabled_Statics::AtomAudioVolume_eventSetEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAudioVolume_SetEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAtomAudioVolume_SetEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAtomAudioVolume_SetEnabled_Statics::AtomAudioVolume_eventSetEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAtomAudioVolume_SetEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAtomAudioVolume_SetEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAtomAudioVolume::execSetEnabled)
{
	P_GET_UBOOL(Z_Param_bNewEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnabled(Z_Param_bNewEnabled);
	P_NATIVE_END;
}
// End Class AAtomAudioVolume Function SetEnabled

// Begin Class AAtomAudioVolume Function SetPriority
struct Z_Construct_UFunction_AAtomAudioVolume_SetPriority_Statics
{
	struct AtomAudioVolume_eventSetPriority_Parms
	{
		float NewPriority;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomAudioVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewPriority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAtomAudioVolume_SetPriority_Statics::NewProp_NewPriority = { "NewPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomAudioVolume_eventSetPriority_Parms, NewPriority), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtomAudioVolume_SetPriority_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtomAudioVolume_SetPriority_Statics::NewProp_NewPriority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAudioVolume_SetPriority_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomAudioVolume_SetPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomAudioVolume, nullptr, "SetPriority", nullptr, nullptr, Z_Construct_UFunction_AAtomAudioVolume_SetPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAudioVolume_SetPriority_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAtomAudioVolume_SetPriority_Statics::AtomAudioVolume_eventSetPriority_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAudioVolume_SetPriority_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAtomAudioVolume_SetPriority_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAtomAudioVolume_SetPriority_Statics::AtomAudioVolume_eventSetPriority_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAtomAudioVolume_SetPriority()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAtomAudioVolume_SetPriority_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAtomAudioVolume::execSetPriority)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewPriority);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPriority(Z_Param_NewPriority);
	P_NATIVE_END;
}
// End Class AAtomAudioVolume Function SetPriority

// Begin Class AAtomAudioVolume Function SetReverbSettings
struct Z_Construct_UFunction_AAtomAudioVolume_SetReverbSettings_Statics
{
	struct AtomAudioVolume_eventSetReverbSettings_Parms
	{
		FSnapshotSwitchSettings NewReverbSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomAudioVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewReverbSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewReverbSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAtomAudioVolume_SetReverbSettings_Statics::NewProp_NewReverbSettings = { "NewReverbSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomAudioVolume_eventSetReverbSettings_Parms, NewReverbSettings), Z_Construct_UScriptStruct_FSnapshotSwitchSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewReverbSettings_MetaData), NewProp_NewReverbSettings_MetaData) }; // 918467453
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtomAudioVolume_SetReverbSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtomAudioVolume_SetReverbSettings_Statics::NewProp_NewReverbSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAudioVolume_SetReverbSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomAudioVolume_SetReverbSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomAudioVolume, nullptr, "SetReverbSettings", nullptr, nullptr, Z_Construct_UFunction_AAtomAudioVolume_SetReverbSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAudioVolume_SetReverbSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAtomAudioVolume_SetReverbSettings_Statics::AtomAudioVolume_eventSetReverbSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAudioVolume_SetReverbSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAtomAudioVolume_SetReverbSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAtomAudioVolume_SetReverbSettings_Statics::AtomAudioVolume_eventSetReverbSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAtomAudioVolume_SetReverbSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAtomAudioVolume_SetReverbSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAtomAudioVolume::execSetReverbSettings)
{
	P_GET_STRUCT_REF(FSnapshotSwitchSettings,Z_Param_Out_NewReverbSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetReverbSettings(Z_Param_Out_NewReverbSettings);
	P_NATIVE_END;
}
// End Class AAtomAudioVolume Function SetReverbSettings

// Begin Class AAtomAudioVolume
void AAtomAudioVolume::StaticRegisterNativesAAtomAudioVolume()
{
	UClass* Class = AAtomAudioVolume::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EnableAllAudioVolume", &AAtomAudioVolume::execEnableAllAudioVolume },
		{ "GetEnabled", &AAtomAudioVolume::execGetEnabled },
		{ "GetPriority", &AAtomAudioVolume::execGetPriority },
		{ "OnRep_bEnabled", &AAtomAudioVolume::execOnRep_bEnabled },
		{ "SetEnabled", &AAtomAudioVolume::execSetEnabled },
		{ "SetPriority", &AAtomAudioVolume::execSetPriority },
		{ "SetReverbSettings", &AAtomAudioVolume::execSetReverbSettings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAtomAudioVolume);
UClass* Z_Construct_UClass_AAtomAudioVolume_NoRegister()
{
	return AAtomAudioVolume::StaticClass();
}
struct Z_Construct_UClass_AAtomAudioVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "AtomAudioVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AtomAudioVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAudioVolume" },
		{ "ModuleRelativePath", "Public/AtomAudioVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAudioVolume" },
		{ "ModuleRelativePath", "Public/AtomAudioVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionProfile_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAudioVolume" },
		{ "ModuleRelativePath", "Public/AtomAudioVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSettingEntranceVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAudioVolume" },
		{ "ModuleRelativePath", "Public/AtomAudioVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSettingNeighbourAudioVolumeToEntranceVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAudioVolume" },
		{ "ModuleRelativePath", "Public/AtomAudioVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioVolumeTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAudioVolume" },
		{ "ModuleRelativePath", "Public/AtomAudioVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAtomAudioVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAudioVolume" },
		{ "ModuleRelativePath", "Public/AtomAudioVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AtomAudioVolumeSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAudioVolume" },
		{ "ModuleRelativePath", "Public/AtomAudioVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AtomAudioVolumeSettingsOverrides_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAudioVolume" },
		{ "ModuleRelativePath", "Public/AtomAudioVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntranceVolumes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAudioVolume" },
		{ "ModuleRelativePath", "Public/AtomAudioVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Priority;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CollisionProfile;
	static void NewProp_bAutoSettingEntranceVolume_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSettingEntranceVolume;
	static void NewProp_bAutoSettingNeighbourAudioVolumeToEntranceVolume_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSettingNeighbourAudioVolumeToEntranceVolume;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AudioVolumeTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AudioVolumeTags;
	static void NewProp_bOverrideAtomAudioVolume_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAtomAudioVolume;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AtomAudioVolumeSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AtomAudioVolumeSettingsOverrides;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EntranceVolumes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EntranceVolumes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAtomAudioVolume_EnableAllAudioVolume, "EnableAllAudioVolume" }, // 1939335529
		{ &Z_Construct_UFunction_AAtomAudioVolume_GetEnabled, "GetEnabled" }, // 3282423596
		{ &Z_Construct_UFunction_AAtomAudioVolume_GetPriority, "GetPriority" }, // 3999296004
		{ &Z_Construct_UFunction_AAtomAudioVolume_OnRep_bEnabled, "OnRep_bEnabled" }, // 1481094476
		{ &Z_Construct_UFunction_AAtomAudioVolume_SetEnabled, "SetEnabled" }, // 1672131102
		{ &Z_Construct_UFunction_AAtomAudioVolume_SetPriority, "SetPriority" }, // 886670266
		{ &Z_Construct_UFunction_AAtomAudioVolume_SetReverbSettings, "SetReverbSettings" }, // 328792599
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAtomAudioVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAtomAudioVolume, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
void Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((AAtomAudioVolume*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bEnabled = { "bEnabled", "OnRep_bEnabled", (EPropertyFlags)0x0040000100000025, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AAtomAudioVolume), &Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_CollisionProfile = { "CollisionProfile", nullptr, (EPropertyFlags)0x0040040000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAtomAudioVolume, CollisionProfile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionProfile_MetaData), NewProp_CollisionProfile_MetaData) };
void Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bAutoSettingEntranceVolume_SetBit(void* Obj)
{
	((AAtomAudioVolume*)Obj)->bAutoSettingEntranceVolume = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bAutoSettingEntranceVolume = { "bAutoSettingEntranceVolume", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAtomAudioVolume), &Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bAutoSettingEntranceVolume_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoSettingEntranceVolume_MetaData), NewProp_bAutoSettingEntranceVolume_MetaData) };
void Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bAutoSettingNeighbourAudioVolumeToEntranceVolume_SetBit(void* Obj)
{
	((AAtomAudioVolume*)Obj)->bAutoSettingNeighbourAudioVolumeToEntranceVolume = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bAutoSettingNeighbourAudioVolumeToEntranceVolume = { "bAutoSettingNeighbourAudioVolumeToEntranceVolume", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAtomAudioVolume), &Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bAutoSettingNeighbourAudioVolumeToEntranceVolume_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoSettingNeighbourAudioVolumeToEntranceVolume_MetaData), NewProp_bAutoSettingNeighbourAudioVolumeToEntranceVolume_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_AudioVolumeTags_Inner = { "AudioVolumeTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_AudioVolumeTags = { "AudioVolumeTags", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAtomAudioVolume, AudioVolumeTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioVolumeTags_MetaData), NewProp_AudioVolumeTags_MetaData) };
void Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bOverrideAtomAudioVolume_SetBit(void* Obj)
{
	((AAtomAudioVolume*)Obj)->bOverrideAtomAudioVolume = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bOverrideAtomAudioVolume = { "bOverrideAtomAudioVolume", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAtomAudioVolume), &Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bOverrideAtomAudioVolume_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideAtomAudioVolume_MetaData), NewProp_bOverrideAtomAudioVolume_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_AtomAudioVolumeSettings = { "AtomAudioVolumeSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAtomAudioVolume, AtomAudioVolumeSettings), Z_Construct_UClass_UAtomAudioVolumeSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AtomAudioVolumeSettings_MetaData), NewProp_AtomAudioVolumeSettings_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_AtomAudioVolumeSettingsOverrides = { "AtomAudioVolumeSettingsOverrides", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAtomAudioVolume, AtomAudioVolumeSettingsOverrides), Z_Construct_UScriptStruct_FAtomAudioVolumeParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AtomAudioVolumeSettingsOverrides_MetaData), NewProp_AtomAudioVolumeSettingsOverrides_MetaData) }; // 3801256293
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_EntranceVolumes_Inner = { "EntranceVolumes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AAtomEntranceVolume_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_EntranceVolumes = { "EntranceVolumes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAtomAudioVolume, EntranceVolumes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntranceVolumes_MetaData), NewProp_EntranceVolumes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAtomAudioVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_CollisionProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bAutoSettingEntranceVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bAutoSettingNeighbourAudioVolumeToEntranceVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_AudioVolumeTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_AudioVolumeTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bOverrideAtomAudioVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_AtomAudioVolumeSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_AtomAudioVolumeSettingsOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_EntranceVolumes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_EntranceVolumes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAudioVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAtomAudioVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AVolume,
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAudioVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAtomAudioVolume_Statics::ClassParams = {
	&AAtomAudioVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAtomAudioVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAudioVolume_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAudioVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_AAtomAudioVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAtomAudioVolume()
{
	if (!Z_Registration_Info_UClass_AAtomAudioVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAtomAudioVolume.OuterSingleton, Z_Construct_UClass_AAtomAudioVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAtomAudioVolume.OuterSingleton;
}
template<> CRIWARERUNTIME_API UClass* StaticClass<AAtomAudioVolume>()
{
	return AAtomAudioVolume::StaticClass();
}
void AAtomAudioVolume::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_bEnabled(TEXT("bEnabled"));
	const bool bIsValid = true
		&& Name_bEnabled == ClassReps[(int32)ENetFields_Private::bEnabled].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AAtomAudioVolume"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAtomAudioVolume);
AAtomAudioVolume::~AAtomAudioVolume() {}
// End Class AAtomAudioVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAudioVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAtomAudioVolume, AAtomAudioVolume::StaticClass, TEXT("AAtomAudioVolume"), &Z_Registration_Info_UClass_AAtomAudioVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAtomAudioVolume), 630617403U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAudioVolume_h_53425103(TEXT("/Script/CriWareRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAudioVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAudioVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
