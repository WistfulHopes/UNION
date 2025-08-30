// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/OnManaPlayerEventPointDelegate.h"
#include "CriWareRuntime/Public/ManaEventPointInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnManaPlayerEventPointDelegate() {}

// Begin Cross Module References
CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerEventPoint__DelegateSignature();
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FManaEventPointInfo();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Delegate FOnManaPlayerEventPoint
struct Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerEventPoint__DelegateSignature_Statics
{
	struct _Script_CriWareRuntime_eventOnManaPlayerEventPoint_Parms
	{
		FManaEventPointInfo EventPointInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnManaPlayerEventPointDelegate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventPointInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerEventPoint__DelegateSignature_Statics::NewProp_EventPointInfo = { "EventPointInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CriWareRuntime_eventOnManaPlayerEventPoint_Parms, EventPointInfo), Z_Construct_UScriptStruct_FManaEventPointInfo, METADATA_PARAMS(0, nullptr) }; // 1824312565
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerEventPoint__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerEventPoint__DelegateSignature_Statics::NewProp_EventPointInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerEventPoint__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerEventPoint__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime, nullptr, "OnManaPlayerEventPoint__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerEventPoint__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerEventPoint__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerEventPoint__DelegateSignature_Statics::_Script_CriWareRuntime_eventOnManaPlayerEventPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerEventPoint__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerEventPoint__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerEventPoint__DelegateSignature_Statics::_Script_CriWareRuntime_eventOnManaPlayerEventPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerEventPoint__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerEventPoint__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnManaPlayerEventPoint_DelegateWrapper(const FMulticastScriptDelegate& OnManaPlayerEventPoint, FManaEventPointInfo EventPointInfo)
{
	struct _Script_CriWareRuntime_eventOnManaPlayerEventPoint_Parms
	{
		FManaEventPointInfo EventPointInfo;
	};
	_Script_CriWareRuntime_eventOnManaPlayerEventPoint_Parms Parms;
	Parms.EventPointInfo=EventPointInfo;
	OnManaPlayerEventPoint.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnManaPlayerEventPoint
PRAGMA_ENABLE_DEPRECATION_WARNINGS
