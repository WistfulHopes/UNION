// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/OnManaPlayerMovieOpenedDelegate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnManaPlayerMovieOpenedDelegate() {}

// Begin Cross Module References
CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerMovieOpened__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Delegate FOnManaPlayerMovieOpened
struct Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerMovieOpened__DelegateSignature_Statics
{
	struct _Script_CriWareRuntime_eventOnManaPlayerMovieOpened_Parms
	{
		FString OpenedUrl;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnManaPlayerMovieOpenedDelegate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpenedUrl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OpenedUrl;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerMovieOpened__DelegateSignature_Statics::NewProp_OpenedUrl = { "OpenedUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CriWareRuntime_eventOnManaPlayerMovieOpened_Parms, OpenedUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenedUrl_MetaData), NewProp_OpenedUrl_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerMovieOpened__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerMovieOpened__DelegateSignature_Statics::NewProp_OpenedUrl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerMovieOpened__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerMovieOpened__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime, nullptr, "OnManaPlayerMovieOpened__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerMovieOpened__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerMovieOpened__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerMovieOpened__DelegateSignature_Statics::_Script_CriWareRuntime_eventOnManaPlayerMovieOpened_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerMovieOpened__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerMovieOpened__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerMovieOpened__DelegateSignature_Statics::_Script_CriWareRuntime_eventOnManaPlayerMovieOpened_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerMovieOpened__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerMovieOpened__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnManaPlayerMovieOpened_DelegateWrapper(const FMulticastScriptDelegate& OnManaPlayerMovieOpened, const FString& OpenedUrl)
{
	struct _Script_CriWareRuntime_eventOnManaPlayerMovieOpened_Parms
	{
		FString OpenedUrl;
	};
	_Script_CriWareRuntime_eventOnManaPlayerMovieOpened_Parms Parms;
	Parms.OpenedUrl=OpenedUrl;
	OnManaPlayerMovieOpened.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnManaPlayerMovieOpened
PRAGMA_ENABLE_DEPRECATION_WARNINGS
