// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/OnManaPlayerSubtitleChangedDelegate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnManaPlayerSubtitleChangedDelegate() {}

// Begin Cross Module References
CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerSubtitleChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Delegate FOnManaPlayerSubtitleChanged
struct Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerSubtitleChanged__DelegateSignature_Statics
{
	struct _Script_CriWareRuntime_eventOnManaPlayerSubtitleChanged_Parms
	{
		FText Subtitle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnManaPlayerSubtitleChangedDelegate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Subtitle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerSubtitleChanged__DelegateSignature_Statics::NewProp_Subtitle = { "Subtitle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CriWareRuntime_eventOnManaPlayerSubtitleChanged_Parms, Subtitle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerSubtitleChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerSubtitleChanged__DelegateSignature_Statics::NewProp_Subtitle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerSubtitleChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerSubtitleChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime, nullptr, "OnManaPlayerSubtitleChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerSubtitleChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerSubtitleChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerSubtitleChanged__DelegateSignature_Statics::_Script_CriWareRuntime_eventOnManaPlayerSubtitleChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerSubtitleChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerSubtitleChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerSubtitleChanged__DelegateSignature_Statics::_Script_CriWareRuntime_eventOnManaPlayerSubtitleChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerSubtitleChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerSubtitleChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnManaPlayerSubtitleChanged_DelegateWrapper(const FMulticastScriptDelegate& OnManaPlayerSubtitleChanged, const FText& Subtitle)
{
	struct _Script_CriWareRuntime_eventOnManaPlayerSubtitleChanged_Parms
	{
		FText Subtitle;
	};
	_Script_CriWareRuntime_eventOnManaPlayerSubtitleChanged_Parms Parms;
	Parms.Subtitle=Subtitle;
	OnManaPlayerSubtitleChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnManaPlayerSubtitleChanged
PRAGMA_ENABLE_DEPRECATION_WARNINGS
