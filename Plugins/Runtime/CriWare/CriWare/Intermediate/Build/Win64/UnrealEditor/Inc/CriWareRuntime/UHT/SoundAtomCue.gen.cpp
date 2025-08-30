// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/SoundAtomCue.h"
#include "CriWareRuntime/Public/AtomAisacControlWithVelocityParam.h"
#include "CriWareRuntime/Public/AtomCueInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundAtomCue() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtom3dRegion_NoRegister();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCueSheet_NoRegister();
CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomLoopSetting();
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAisacControlWithVelocityParam();
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfo();
ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Class USoundAtomCue Function BP_GetCueInfo
struct Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo_Statics
{
	struct SoundAtomCue_eventBP_GetCueInfo_Parms
	{
		FAtomCueInfo CueInfo;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CueInfo;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo_Statics::NewProp_CueInfo = { "CueInfo", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundAtomCue_eventBP_GetCueInfo_Parms, CueInfo), Z_Construct_UScriptStruct_FAtomCueInfo, METADATA_PARAMS(0, nullptr) }; // 2085705809
void Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SoundAtomCue_eventBP_GetCueInfo_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SoundAtomCue_eventBP_GetCueInfo_Parms), &Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo_Statics::NewProp_CueInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, nullptr, "BP_GetCueInfo", nullptr, nullptr, Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo_Statics::SoundAtomCue_eventBP_GetCueInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo_Statics::SoundAtomCue_eventBP_GetCueInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundAtomCue::execBP_GetCueInfo)
{
	P_GET_STRUCT_REF(FAtomCueInfo,Z_Param_Out_CueInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BP_GetCueInfo(Z_Param_Out_CueInfo);
	P_NATIVE_END;
}
// End Class USoundAtomCue Function BP_GetCueInfo

// Begin Class USoundAtomCue Function GetCullDistance
struct Z_Construct_UFunction_USoundAtomCue_GetCullDistance_Statics
{
	struct SoundAtomCue_eventGetCullDistance_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundAtomCue_GetCullDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundAtomCue_eventGetCullDistance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCue_GetCullDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_GetCullDistance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetCullDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCue_GetCullDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, nullptr, "GetCullDistance", nullptr, nullptr, Z_Construct_UFunction_USoundAtomCue_GetCullDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetCullDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundAtomCue_GetCullDistance_Statics::SoundAtomCue_eventGetCullDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetCullDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundAtomCue_GetCullDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundAtomCue_GetCullDistance_Statics::SoundAtomCue_eventGetCullDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundAtomCue_GetCullDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCue_GetCullDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundAtomCue::execGetCullDistance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCullDistance();
	P_NATIVE_END;
}
// End Class USoundAtomCue Function GetCullDistance

// Begin Class USoundAtomCue Function GetCullDistanceMarginToApply
struct Z_Construct_UFunction_USoundAtomCue_GetCullDistanceMarginToApply_Statics
{
	struct SoundAtomCue_eventGetCullDistanceMarginToApply_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundAtomCue_GetCullDistanceMarginToApply_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundAtomCue_eventGetCullDistanceMarginToApply_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCue_GetCullDistanceMarginToApply_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_GetCullDistanceMarginToApply_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetCullDistanceMarginToApply_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCue_GetCullDistanceMarginToApply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, nullptr, "GetCullDistanceMarginToApply", nullptr, nullptr, Z_Construct_UFunction_USoundAtomCue_GetCullDistanceMarginToApply_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetCullDistanceMarginToApply_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundAtomCue_GetCullDistanceMarginToApply_Statics::SoundAtomCue_eventGetCullDistanceMarginToApply_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetCullDistanceMarginToApply_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundAtomCue_GetCullDistanceMarginToApply_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundAtomCue_GetCullDistanceMarginToApply_Statics::SoundAtomCue_eventGetCullDistanceMarginToApply_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundAtomCue_GetCullDistanceMarginToApply()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCue_GetCullDistanceMarginToApply_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundAtomCue::execGetCullDistanceMarginToApply)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCullDistanceMarginToApply();
	P_NATIVE_END;
}
// End Class USoundAtomCue Function GetCullDistanceMarginToApply

// Begin Class USoundAtomCue Function GetCullingBoundaryDistanceToUse
struct Z_Construct_UFunction_USoundAtomCue_GetCullingBoundaryDistanceToUse_Statics
{
	struct SoundAtomCue_eventGetCullingBoundaryDistanceToUse_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundAtomCue_GetCullingBoundaryDistanceToUse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundAtomCue_eventGetCullingBoundaryDistanceToUse_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCue_GetCullingBoundaryDistanceToUse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_GetCullingBoundaryDistanceToUse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetCullingBoundaryDistanceToUse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCue_GetCullingBoundaryDistanceToUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, nullptr, "GetCullingBoundaryDistanceToUse", nullptr, nullptr, Z_Construct_UFunction_USoundAtomCue_GetCullingBoundaryDistanceToUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetCullingBoundaryDistanceToUse_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundAtomCue_GetCullingBoundaryDistanceToUse_Statics::SoundAtomCue_eventGetCullingBoundaryDistanceToUse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetCullingBoundaryDistanceToUse_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundAtomCue_GetCullingBoundaryDistanceToUse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundAtomCue_GetCullingBoundaryDistanceToUse_Statics::SoundAtomCue_eventGetCullingBoundaryDistanceToUse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundAtomCue_GetCullingBoundaryDistanceToUse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCue_GetCullingBoundaryDistanceToUse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundAtomCue::execGetCullingBoundaryDistanceToUse)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCullingBoundaryDistanceToUse();
	P_NATIVE_END;
}
// End Class USoundAtomCue Function GetCullingBoundaryDistanceToUse

// Begin Class USoundAtomCue Function GetCullingMarginDistanceToUse
struct Z_Construct_UFunction_USoundAtomCue_GetCullingMarginDistanceToUse_Statics
{
	struct SoundAtomCue_eventGetCullingMarginDistanceToUse_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundAtomCue_GetCullingMarginDistanceToUse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundAtomCue_eventGetCullingMarginDistanceToUse_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCue_GetCullingMarginDistanceToUse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_GetCullingMarginDistanceToUse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetCullingMarginDistanceToUse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCue_GetCullingMarginDistanceToUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, nullptr, "GetCullingMarginDistanceToUse", nullptr, nullptr, Z_Construct_UFunction_USoundAtomCue_GetCullingMarginDistanceToUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetCullingMarginDistanceToUse_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundAtomCue_GetCullingMarginDistanceToUse_Statics::SoundAtomCue_eventGetCullingMarginDistanceToUse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetCullingMarginDistanceToUse_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundAtomCue_GetCullingMarginDistanceToUse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundAtomCue_GetCullingMarginDistanceToUse_Statics::SoundAtomCue_eventGetCullingMarginDistanceToUse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundAtomCue_GetCullingMarginDistanceToUse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCue_GetCullingMarginDistanceToUse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundAtomCue::execGetCullingMarginDistanceToUse)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCullingMarginDistanceToUse();
	P_NATIVE_END;
}
// End Class USoundAtomCue Function GetCullingMarginDistanceToUse

// Begin Class USoundAtomCue Function GetEconomicTickBoundaryDistanceToUse
struct Z_Construct_UFunction_USoundAtomCue_GetEconomicTickBoundaryDistanceToUse_Statics
{
	struct SoundAtomCue_eventGetEconomicTickBoundaryDistanceToUse_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundAtomCue_GetEconomicTickBoundaryDistanceToUse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundAtomCue_eventGetEconomicTickBoundaryDistanceToUse_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCue_GetEconomicTickBoundaryDistanceToUse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_GetEconomicTickBoundaryDistanceToUse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickBoundaryDistanceToUse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCue_GetEconomicTickBoundaryDistanceToUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, nullptr, "GetEconomicTickBoundaryDistanceToUse", nullptr, nullptr, Z_Construct_UFunction_USoundAtomCue_GetEconomicTickBoundaryDistanceToUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickBoundaryDistanceToUse_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickBoundaryDistanceToUse_Statics::SoundAtomCue_eventGetEconomicTickBoundaryDistanceToUse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickBoundaryDistanceToUse_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundAtomCue_GetEconomicTickBoundaryDistanceToUse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickBoundaryDistanceToUse_Statics::SoundAtomCue_eventGetEconomicTickBoundaryDistanceToUse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundAtomCue_GetEconomicTickBoundaryDistanceToUse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCue_GetEconomicTickBoundaryDistanceToUse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundAtomCue::execGetEconomicTickBoundaryDistanceToUse)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetEconomicTickBoundaryDistanceToUse();
	P_NATIVE_END;
}
// End Class USoundAtomCue Function GetEconomicTickBoundaryDistanceToUse

// Begin Class USoundAtomCue Function GetEconomicTickDistance
struct Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistance_Statics
{
	struct SoundAtomCue_eventGetEconomicTickDistance_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundAtomCue_eventGetEconomicTickDistance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, nullptr, "GetEconomicTickDistance", nullptr, nullptr, Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistance_Statics::SoundAtomCue_eventGetEconomicTickDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistance_Statics::SoundAtomCue_eventGetEconomicTickDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundAtomCue::execGetEconomicTickDistance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetEconomicTickDistance();
	P_NATIVE_END;
}
// End Class USoundAtomCue Function GetEconomicTickDistance

// Begin Class USoundAtomCue Function GetEconomicTickDistanceMarginToApply
struct Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistanceMarginToApply_Statics
{
	struct SoundAtomCue_eventGetEconomicTickDistanceMarginToApply_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistanceMarginToApply_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundAtomCue_eventGetEconomicTickDistanceMarginToApply_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistanceMarginToApply_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistanceMarginToApply_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistanceMarginToApply_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistanceMarginToApply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, nullptr, "GetEconomicTickDistanceMarginToApply", nullptr, nullptr, Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistanceMarginToApply_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistanceMarginToApply_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistanceMarginToApply_Statics::SoundAtomCue_eventGetEconomicTickDistanceMarginToApply_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistanceMarginToApply_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistanceMarginToApply_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistanceMarginToApply_Statics::SoundAtomCue_eventGetEconomicTickDistanceMarginToApply_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistanceMarginToApply()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistanceMarginToApply_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundAtomCue::execGetEconomicTickDistanceMarginToApply)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetEconomicTickDistanceMarginToApply();
	P_NATIVE_END;
}
// End Class USoundAtomCue Function GetEconomicTickDistanceMarginToApply

// Begin Class USoundAtomCue Function GetEconomicTickFrequencyToApply
struct Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToApply_Statics
{
	struct SoundAtomCue_eventGetEconomicTickFrequencyToApply_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToApply_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundAtomCue_eventGetEconomicTickFrequencyToApply_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToApply_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToApply_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToApply_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToApply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, nullptr, "GetEconomicTickFrequencyToApply", nullptr, nullptr, Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToApply_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToApply_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToApply_Statics::SoundAtomCue_eventGetEconomicTickFrequencyToApply_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToApply_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToApply_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToApply_Statics::SoundAtomCue_eventGetEconomicTickFrequencyToApply_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToApply()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToApply_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundAtomCue::execGetEconomicTickFrequencyToApply)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetEconomicTickFrequencyToApply();
	P_NATIVE_END;
}
// End Class USoundAtomCue Function GetEconomicTickFrequencyToApply

// Begin Class USoundAtomCue Function GetEconomicTickFrequencyToUse
struct Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToUse_Statics
{
	struct SoundAtomCue_eventGetEconomicTickFrequencyToUse_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToUse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundAtomCue_eventGetEconomicTickFrequencyToUse_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToUse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToUse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToUse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, nullptr, "GetEconomicTickFrequencyToUse", nullptr, nullptr, Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToUse_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToUse_Statics::SoundAtomCue_eventGetEconomicTickFrequencyToUse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToUse_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToUse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToUse_Statics::SoundAtomCue_eventGetEconomicTickFrequencyToUse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToUse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToUse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundAtomCue::execGetEconomicTickFrequencyToUse)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetEconomicTickFrequencyToUse();
	P_NATIVE_END;
}
// End Class USoundAtomCue Function GetEconomicTickFrequencyToUse

// Begin Class USoundAtomCue Function GetEconomicTickMarginDistanceToUse
struct Z_Construct_UFunction_USoundAtomCue_GetEconomicTickMarginDistanceToUse_Statics
{
	struct SoundAtomCue_eventGetEconomicTickMarginDistanceToUse_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundAtomCue_GetEconomicTickMarginDistanceToUse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundAtomCue_eventGetEconomicTickMarginDistanceToUse_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCue_GetEconomicTickMarginDistanceToUse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_GetEconomicTickMarginDistanceToUse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickMarginDistanceToUse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCue_GetEconomicTickMarginDistanceToUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, nullptr, "GetEconomicTickMarginDistanceToUse", nullptr, nullptr, Z_Construct_UFunction_USoundAtomCue_GetEconomicTickMarginDistanceToUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickMarginDistanceToUse_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickMarginDistanceToUse_Statics::SoundAtomCue_eventGetEconomicTickMarginDistanceToUse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickMarginDistanceToUse_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundAtomCue_GetEconomicTickMarginDistanceToUse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickMarginDistanceToUse_Statics::SoundAtomCue_eventGetEconomicTickMarginDistanceToUse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundAtomCue_GetEconomicTickMarginDistanceToUse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCue_GetEconomicTickMarginDistanceToUse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundAtomCue::execGetEconomicTickMarginDistanceToUse)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetEconomicTickMarginDistanceToUse();
	P_NATIVE_END;
}
// End Class USoundAtomCue Function GetEconomicTickMarginDistanceToUse

// Begin Class USoundAtomCue Function GetMaxAttenuationDistanceToApply
struct Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToApply_Statics
{
	struct SoundAtomCue_eventGetMaxAttenuationDistanceToApply_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToApply_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundAtomCue_eventGetMaxAttenuationDistanceToApply_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToApply_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToApply_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToApply_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToApply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, nullptr, "GetMaxAttenuationDistanceToApply", nullptr, nullptr, Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToApply_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToApply_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToApply_Statics::SoundAtomCue_eventGetMaxAttenuationDistanceToApply_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToApply_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToApply_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToApply_Statics::SoundAtomCue_eventGetMaxAttenuationDistanceToApply_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToApply()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToApply_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundAtomCue::execGetMaxAttenuationDistanceToApply)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxAttenuationDistanceToApply();
	P_NATIVE_END;
}
// End Class USoundAtomCue Function GetMaxAttenuationDistanceToApply

// Begin Class USoundAtomCue Function GetMaxAttenuationDistanceToUse
struct Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToUse_Statics
{
	struct SoundAtomCue_eventGetMaxAttenuationDistanceToUse_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToUse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundAtomCue_eventGetMaxAttenuationDistanceToUse_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToUse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToUse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToUse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, nullptr, "GetMaxAttenuationDistanceToUse", nullptr, nullptr, Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToUse_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToUse_Statics::SoundAtomCue_eventGetMaxAttenuationDistanceToUse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToUse_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToUse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToUse_Statics::SoundAtomCue_eventGetMaxAttenuationDistanceToUse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToUse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToUse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundAtomCue::execGetMaxAttenuationDistanceToUse)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxAttenuationDistanceToUse();
	P_NATIVE_END;
}
// End Class USoundAtomCue Function GetMaxAttenuationDistanceToUse

// Begin Class USoundAtomCue Function IsEconomicTickEnabled
struct Z_Construct_UFunction_USoundAtomCue_IsEconomicTickEnabled_Statics
{
	struct SoundAtomCue_eventIsEconomicTickEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USoundAtomCue_IsEconomicTickEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SoundAtomCue_eventIsEconomicTickEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundAtomCue_IsEconomicTickEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SoundAtomCue_eventIsEconomicTickEnabled_Parms), &Z_Construct_UFunction_USoundAtomCue_IsEconomicTickEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCue_IsEconomicTickEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_IsEconomicTickEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_IsEconomicTickEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCue_IsEconomicTickEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, nullptr, "IsEconomicTickEnabled", nullptr, nullptr, Z_Construct_UFunction_USoundAtomCue_IsEconomicTickEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_IsEconomicTickEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundAtomCue_IsEconomicTickEnabled_Statics::SoundAtomCue_eventIsEconomicTickEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_IsEconomicTickEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundAtomCue_IsEconomicTickEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundAtomCue_IsEconomicTickEnabled_Statics::SoundAtomCue_eventIsEconomicTickEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundAtomCue_IsEconomicTickEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCue_IsEconomicTickEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundAtomCue::execIsEconomicTickEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsEconomicTickEnabled();
	P_NATIVE_END;
}
// End Class USoundAtomCue Function IsEconomicTickEnabled

// Begin Class USoundAtomCue Function IsLooping
struct Z_Construct_UFunction_USoundAtomCue_IsLooping_Statics
{
	struct SoundAtomCue_eventIsLooping_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USoundAtomCue_IsLooping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SoundAtomCue_eventIsLooping_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundAtomCue_IsLooping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SoundAtomCue_eventIsLooping_Parms), &Z_Construct_UFunction_USoundAtomCue_IsLooping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCue_IsLooping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_IsLooping_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_IsLooping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCue_IsLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, nullptr, "IsLooping", nullptr, nullptr, Z_Construct_UFunction_USoundAtomCue_IsLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_IsLooping_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundAtomCue_IsLooping_Statics::SoundAtomCue_eventIsLooping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_IsLooping_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundAtomCue_IsLooping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundAtomCue_IsLooping_Statics::SoundAtomCue_eventIsLooping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundAtomCue_IsLooping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCue_IsLooping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundAtomCue::execIsLooping)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLooping();
	P_NATIVE_END;
}
// End Class USoundAtomCue Function IsLooping

// Begin Class USoundAtomCue Function Validate
struct Z_Construct_UFunction_USoundAtomCue_Validate_Statics
{
	struct SoundAtomCue_eventValidate_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USoundAtomCue_Validate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SoundAtomCue_eventValidate_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundAtomCue_Validate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SoundAtomCue_eventValidate_Parms), &Z_Construct_UFunction_USoundAtomCue_Validate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCue_Validate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_Validate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_Validate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCue_Validate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, nullptr, "Validate", nullptr, nullptr, Z_Construct_UFunction_USoundAtomCue_Validate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_Validate_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundAtomCue_Validate_Statics::SoundAtomCue_eventValidate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_Validate_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundAtomCue_Validate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundAtomCue_Validate_Statics::SoundAtomCue_eventValidate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundAtomCue_Validate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCue_Validate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundAtomCue::execValidate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Validate();
	P_NATIVE_END;
}
// End Class USoundAtomCue Function Validate

// Begin Class USoundAtomCue
void USoundAtomCue::StaticRegisterNativesUSoundAtomCue()
{
	UClass* Class = USoundAtomCue::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BP_GetCueInfo", &USoundAtomCue::execBP_GetCueInfo },
		{ "GetCullDistance", &USoundAtomCue::execGetCullDistance },
		{ "GetCullDistanceMarginToApply", &USoundAtomCue::execGetCullDistanceMarginToApply },
		{ "GetCullingBoundaryDistanceToUse", &USoundAtomCue::execGetCullingBoundaryDistanceToUse },
		{ "GetCullingMarginDistanceToUse", &USoundAtomCue::execGetCullingMarginDistanceToUse },
		{ "GetEconomicTickBoundaryDistanceToUse", &USoundAtomCue::execGetEconomicTickBoundaryDistanceToUse },
		{ "GetEconomicTickDistance", &USoundAtomCue::execGetEconomicTickDistance },
		{ "GetEconomicTickDistanceMarginToApply", &USoundAtomCue::execGetEconomicTickDistanceMarginToApply },
		{ "GetEconomicTickFrequencyToApply", &USoundAtomCue::execGetEconomicTickFrequencyToApply },
		{ "GetEconomicTickFrequencyToUse", &USoundAtomCue::execGetEconomicTickFrequencyToUse },
		{ "GetEconomicTickMarginDistanceToUse", &USoundAtomCue::execGetEconomicTickMarginDistanceToUse },
		{ "GetMaxAttenuationDistanceToApply", &USoundAtomCue::execGetMaxAttenuationDistanceToApply },
		{ "GetMaxAttenuationDistanceToUse", &USoundAtomCue::execGetMaxAttenuationDistanceToUse },
		{ "IsEconomicTickEnabled", &USoundAtomCue::execIsEconomicTickEnabled },
		{ "IsLooping", &USoundAtomCue::execIsLooping },
		{ "Validate", &USoundAtomCue::execValidate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundAtomCue);
UClass* Z_Construct_UClass_USoundAtomCue_NoRegister()
{
	return USoundAtomCue::StaticClass();
}
struct Z_Construct_UClass_USoundAtomCue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SoundAtomCue.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CueSheet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CueName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoopSetting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyAtomParameter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstWaveDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAudioVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMovable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanStraddleAudioVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDistanceToEnableAudioVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinDistanceToEnableAudioVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAreaSoundVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateRateForFrame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Region_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnableChangingAisacValueWithComponentVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AisacControlSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEconomicTick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideEconomicTickSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EconomicTickDistanceMargin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EconomicTickFrequency_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDistanceCulling_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideCullSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CullDistanceMargin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EconomicTickMarginDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLoopSettingByAtomCraft_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCullingSoundPlayingProcessByDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLegacyCullingSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxProcessDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideCullingSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CullingMarginDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAttenuation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CueSheet;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CueName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LoopSetting_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LoopSetting;
	static void NewProp_bApplyAtomParameter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyAtomParameter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FirstWaveDuration;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings;
	static void NewProp_bEnableAudioVolume_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAudioVolume;
	static void NewProp_bIsMovable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMovable;
	static void NewProp_bCanStraddleAudioVolume_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanStraddleAudioVolume;
	static void NewProp_bUseDistanceToEnableAudioVolume_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDistanceToEnableAudioVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDistanceToEnableAudioVolume;
	static void NewProp_bUseAreaSoundVolume_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAreaSoundVolume;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UpdateRateForFrame;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Region;
	static void NewProp_bIsEnableChangingAisacValueWithComponentVelocity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnableChangingAisacValueWithComponentVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AisacControlSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AisacControlSettings;
	static void NewProp_bEconomicTick_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEconomicTick;
	static void NewProp_bOverrideEconomicTickSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideEconomicTickSettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EconomicTickDistanceMargin;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EconomicTickFrequency;
	static void NewProp_bEnableDistanceCulling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDistanceCulling;
	static void NewProp_bOverrideCullSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideCullSettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CullDistanceMargin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EconomicTickMarginDistance;
	static void NewProp_bLoopSettingByAtomCraft_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoopSettingByAtomCraft;
	static void NewProp_bCullingSoundPlayingProcessByDistance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCullingSoundPlayingProcessByDistance;
	static void NewProp_bUseLegacyCullingSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLegacyCullingSettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxProcessDistance;
	static void NewProp_bOverrideCullingSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideCullingSettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CullingMarginDistance;
	static void NewProp_bLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultAttenuation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo, "BP_GetCueInfo" }, // 3521315941
		{ &Z_Construct_UFunction_USoundAtomCue_GetCullDistance, "GetCullDistance" }, // 2157605814
		{ &Z_Construct_UFunction_USoundAtomCue_GetCullDistanceMarginToApply, "GetCullDistanceMarginToApply" }, // 1025844457
		{ &Z_Construct_UFunction_USoundAtomCue_GetCullingBoundaryDistanceToUse, "GetCullingBoundaryDistanceToUse" }, // 3697375290
		{ &Z_Construct_UFunction_USoundAtomCue_GetCullingMarginDistanceToUse, "GetCullingMarginDistanceToUse" }, // 1906729020
		{ &Z_Construct_UFunction_USoundAtomCue_GetEconomicTickBoundaryDistanceToUse, "GetEconomicTickBoundaryDistanceToUse" }, // 3339426114
		{ &Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistance, "GetEconomicTickDistance" }, // 1798830065
		{ &Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistanceMarginToApply, "GetEconomicTickDistanceMarginToApply" }, // 60754930
		{ &Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToApply, "GetEconomicTickFrequencyToApply" }, // 4255931970
		{ &Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToUse, "GetEconomicTickFrequencyToUse" }, // 2963457694
		{ &Z_Construct_UFunction_USoundAtomCue_GetEconomicTickMarginDistanceToUse, "GetEconomicTickMarginDistanceToUse" }, // 2022878442
		{ &Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToApply, "GetMaxAttenuationDistanceToApply" }, // 3589969180
		{ &Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToUse, "GetMaxAttenuationDistanceToUse" }, // 1144445591
		{ &Z_Construct_UFunction_USoundAtomCue_IsEconomicTickEnabled, "IsEconomicTickEnabled" }, // 1844298426
		{ &Z_Construct_UFunction_USoundAtomCue_IsLooping, "IsLooping" }, // 2140204457
		{ &Z_Construct_UFunction_USoundAtomCue_Validate, "Validate" }, // 4032203530
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundAtomCue>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CueSheet = { "CueSheet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundAtomCue, CueSheet), Z_Construct_UClass_USoundAtomCueSheet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CueSheet_MetaData), NewProp_CueSheet_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CueName = { "CueName", nullptr, (EPropertyFlags)0x0010010000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundAtomCue, CueName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CueName_MetaData), NewProp_CueName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_LoopSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_LoopSetting = { "LoopSetting", nullptr, (EPropertyFlags)0x0010010000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundAtomCue, LoopSetting), Z_Construct_UEnum_CriWareRuntime_EAtomLoopSetting, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoopSetting_MetaData), NewProp_LoopSetting_MetaData) }; // 3027281822
void Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bApplyAtomParameter_SetBit(void* Obj)
{
	((USoundAtomCue*)Obj)->bApplyAtomParameter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bApplyAtomParameter = { "bApplyAtomParameter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USoundAtomCue), &Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bApplyAtomParameter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyAtomParameter_MetaData), NewProp_bApplyAtomParameter_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010010000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundAtomCue, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_FirstWaveDuration = { "FirstWaveDuration", nullptr, (EPropertyFlags)0x0010010000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundAtomCue, FirstWaveDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstWaveDuration_MetaData), NewProp_FirstWaveDuration_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundAtomCue, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttenuationSettings_MetaData), NewProp_AttenuationSettings_MetaData) };
void Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEnableAudioVolume_SetBit(void* Obj)
{
	((USoundAtomCue*)Obj)->bEnableAudioVolume = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEnableAudioVolume = { "bEnableAudioVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USoundAtomCue), &Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEnableAudioVolume_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableAudioVolume_MetaData), NewProp_bEnableAudioVolume_MetaData) };
void Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bIsMovable_SetBit(void* Obj)
{
	((USoundAtomCue*)Obj)->bIsMovable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bIsMovable = { "bIsMovable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USoundAtomCue), &Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bIsMovable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMovable_MetaData), NewProp_bIsMovable_MetaData) };
void Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bCanStraddleAudioVolume_SetBit(void* Obj)
{
	((USoundAtomCue*)Obj)->bCanStraddleAudioVolume = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bCanStraddleAudioVolume = { "bCanStraddleAudioVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USoundAtomCue), &Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bCanStraddleAudioVolume_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanStraddleAudioVolume_MetaData), NewProp_bCanStraddleAudioVolume_MetaData) };
void Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseDistanceToEnableAudioVolume_SetBit(void* Obj)
{
	((USoundAtomCue*)Obj)->bUseDistanceToEnableAudioVolume = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseDistanceToEnableAudioVolume = { "bUseDistanceToEnableAudioVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USoundAtomCue), &Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseDistanceToEnableAudioVolume_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDistanceToEnableAudioVolume_MetaData), NewProp_bUseDistanceToEnableAudioVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_MinDistanceToEnableAudioVolume = { "MinDistanceToEnableAudioVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundAtomCue, MinDistanceToEnableAudioVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinDistanceToEnableAudioVolume_MetaData), NewProp_MinDistanceToEnableAudioVolume_MetaData) };
void Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseAreaSoundVolume_SetBit(void* Obj)
{
	((USoundAtomCue*)Obj)->bUseAreaSoundVolume = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseAreaSoundVolume = { "bUseAreaSoundVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USoundAtomCue), &Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseAreaSoundVolume_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAreaSoundVolume_MetaData), NewProp_bUseAreaSoundVolume_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_UpdateRateForFrame = { "UpdateRateForFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundAtomCue, UpdateRateForFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateRateForFrame_MetaData), NewProp_UpdateRateForFrame_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundAtomCue, Region), Z_Construct_UClass_UAtom3dRegion_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Region_MetaData), NewProp_Region_MetaData) };
void Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bIsEnableChangingAisacValueWithComponentVelocity_SetBit(void* Obj)
{
	((USoundAtomCue*)Obj)->bIsEnableChangingAisacValueWithComponentVelocity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bIsEnableChangingAisacValueWithComponentVelocity = { "bIsEnableChangingAisacValueWithComponentVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USoundAtomCue), &Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bIsEnableChangingAisacValueWithComponentVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsEnableChangingAisacValueWithComponentVelocity_MetaData), NewProp_bIsEnableChangingAisacValueWithComponentVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_AisacControlSettings_Inner = { "AisacControlSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAtomAisacControlWithVelocityParam, METADATA_PARAMS(0, nullptr) }; // 2114040532
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_AisacControlSettings = { "AisacControlSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundAtomCue, AisacControlSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AisacControlSettings_MetaData), NewProp_AisacControlSettings_MetaData) }; // 2114040532
void Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEconomicTick_SetBit(void* Obj)
{
	((USoundAtomCue*)Obj)->bEconomicTick = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEconomicTick = { "bEconomicTick", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USoundAtomCue), &Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEconomicTick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEconomicTick_MetaData), NewProp_bEconomicTick_MetaData) };
void Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideEconomicTickSettings_SetBit(void* Obj)
{
	((USoundAtomCue*)Obj)->bOverrideEconomicTickSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideEconomicTickSettings = { "bOverrideEconomicTickSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USoundAtomCue), &Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideEconomicTickSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideEconomicTickSettings_MetaData), NewProp_bOverrideEconomicTickSettings_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_EconomicTickDistanceMargin = { "EconomicTickDistanceMargin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundAtomCue, EconomicTickDistanceMargin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EconomicTickDistanceMargin_MetaData), NewProp_EconomicTickDistanceMargin_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_EconomicTickFrequency = { "EconomicTickFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundAtomCue, EconomicTickFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EconomicTickFrequency_MetaData), NewProp_EconomicTickFrequency_MetaData) };
void Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEnableDistanceCulling_SetBit(void* Obj)
{
	((USoundAtomCue*)Obj)->bEnableDistanceCulling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEnableDistanceCulling = { "bEnableDistanceCulling", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USoundAtomCue), &Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEnableDistanceCulling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDistanceCulling_MetaData), NewProp_bEnableDistanceCulling_MetaData) };
void Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideCullSettings_SetBit(void* Obj)
{
	((USoundAtomCue*)Obj)->bOverrideCullSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideCullSettings = { "bOverrideCullSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USoundAtomCue), &Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideCullSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideCullSettings_MetaData), NewProp_bOverrideCullSettings_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CullDistanceMargin = { "CullDistanceMargin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundAtomCue, CullDistanceMargin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CullDistanceMargin_MetaData), NewProp_CullDistanceMargin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_EconomicTickMarginDistance = { "EconomicTickMarginDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundAtomCue, EconomicTickMarginDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EconomicTickMarginDistance_MetaData), NewProp_EconomicTickMarginDistance_MetaData) };
void Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bLoopSettingByAtomCraft_SetBit(void* Obj)
{
	((USoundAtomCue*)Obj)->bLoopSettingByAtomCraft = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bLoopSettingByAtomCraft = { "bLoopSettingByAtomCraft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USoundAtomCue), &Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bLoopSettingByAtomCraft_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLoopSettingByAtomCraft_MetaData), NewProp_bLoopSettingByAtomCraft_MetaData) };
void Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bCullingSoundPlayingProcessByDistance_SetBit(void* Obj)
{
	((USoundAtomCue*)Obj)->bCullingSoundPlayingProcessByDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bCullingSoundPlayingProcessByDistance = { "bCullingSoundPlayingProcessByDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USoundAtomCue), &Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bCullingSoundPlayingProcessByDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCullingSoundPlayingProcessByDistance_MetaData), NewProp_bCullingSoundPlayingProcessByDistance_MetaData) };
void Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseLegacyCullingSettings_SetBit(void* Obj)
{
	((USoundAtomCue*)Obj)->bUseLegacyCullingSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseLegacyCullingSettings = { "bUseLegacyCullingSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USoundAtomCue), &Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseLegacyCullingSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLegacyCullingSettings_MetaData), NewProp_bUseLegacyCullingSettings_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_MaxProcessDistance = { "MaxProcessDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundAtomCue, MaxProcessDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxProcessDistance_MetaData), NewProp_MaxProcessDistance_MetaData) };
void Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideCullingSettings_SetBit(void* Obj)
{
	((USoundAtomCue*)Obj)->bOverrideCullingSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideCullingSettings = { "bOverrideCullingSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USoundAtomCue), &Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideCullingSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideCullingSettings_MetaData), NewProp_bOverrideCullingSettings_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CullingMarginDistance = { "CullingMarginDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundAtomCue, CullingMarginDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CullingMarginDistance_MetaData), NewProp_CullingMarginDistance_MetaData) };
void Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bLoop_SetBit(void* Obj)
{
	((USoundAtomCue*)Obj)->bLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USoundAtomCue), &Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLoop_MetaData), NewProp_bLoop_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_DefaultAttenuation = { "DefaultAttenuation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundAtomCue, DefaultAttenuation), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAttenuation_MetaData), NewProp_DefaultAttenuation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundAtomCue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CueSheet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CueName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_LoopSetting_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_LoopSetting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bApplyAtomParameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_FirstWaveDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_AttenuationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEnableAudioVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bIsMovable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bCanStraddleAudioVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseDistanceToEnableAudioVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_MinDistanceToEnableAudioVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseAreaSoundVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_UpdateRateForFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_Region,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bIsEnableChangingAisacValueWithComponentVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_AisacControlSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_AisacControlSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEconomicTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideEconomicTickSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_EconomicTickDistanceMargin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_EconomicTickFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEnableDistanceCulling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideCullSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CullDistanceMargin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_EconomicTickMarginDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bLoopSettingByAtomCraft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bCullingSoundPlayingProcessByDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseLegacyCullingSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_MaxProcessDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideCullingSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CullingMarginDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bLoop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_DefaultAttenuation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USoundAtomCue_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundAtomCue_Statics::ClassParams = {
	&USoundAtomCue::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USoundAtomCue_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::Class_MetaDataParams), Z_Construct_UClass_USoundAtomCue_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USoundAtomCue()
{
	if (!Z_Registration_Info_UClass_USoundAtomCue.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundAtomCue.OuterSingleton, Z_Construct_UClass_USoundAtomCue_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USoundAtomCue.OuterSingleton;
}
template<> CRIWARERUNTIME_API UClass* StaticClass<USoundAtomCue>()
{
	return USoundAtomCue::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USoundAtomCue);
USoundAtomCue::~USoundAtomCue() {}
// End Class USoundAtomCue

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCue_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USoundAtomCue, USoundAtomCue::StaticClass, TEXT("USoundAtomCue"), &Z_Registration_Info_UClass_USoundAtomCue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundAtomCue), 99526147U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCue_h_1681450493(TEXT("/Script/CriWareRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCue_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
