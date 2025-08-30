// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomDeviceWatcher.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomDeviceWatcher() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomDeviceWatcher();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomDeviceWatcher_NoRegister();
CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UAtomDeviceWatcher_OnDeviceUpdated__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Delegate FOnDeviceUpdated
struct Z_Construct_UDelegateFunction_UAtomDeviceWatcher_OnDeviceUpdated__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomDeviceWatcher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAtomDeviceWatcher_OnDeviceUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomDeviceWatcher, nullptr, "OnDeviceUpdated__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAtomDeviceWatcher_OnDeviceUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UAtomDeviceWatcher_OnDeviceUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UAtomDeviceWatcher_OnDeviceUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UAtomDeviceWatcher_OnDeviceUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UAtomDeviceWatcher::FOnDeviceUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnDeviceUpdated)
{
	OnDeviceUpdated.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnDeviceUpdated

// Begin Class UAtomDeviceWatcher Function GetDeviceChannelCount
struct Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceChannelCount_Statics
{
	struct AtomDeviceWatcher_eventGetDeviceChannelCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomDeviceWatcher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceChannelCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomDeviceWatcher_eventGetDeviceChannelCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceChannelCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceChannelCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceChannelCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceChannelCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomDeviceWatcher, nullptr, "GetDeviceChannelCount", nullptr, nullptr, Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceChannelCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceChannelCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceChannelCount_Statics::AtomDeviceWatcher_eventGetDeviceChannelCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceChannelCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceChannelCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceChannelCount_Statics::AtomDeviceWatcher_eventGetDeviceChannelCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceChannelCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceChannelCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomDeviceWatcher::execGetDeviceChannelCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetDeviceChannelCount();
	P_NATIVE_END;
}
// End Class UAtomDeviceWatcher Function GetDeviceChannelCount

// Begin Class UAtomDeviceWatcher Function GetDeviceName
struct Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceName_Statics
{
	struct AtomDeviceWatcher_eventGetDeviceName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomDeviceWatcher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomDeviceWatcher_eventGetDeviceName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomDeviceWatcher, nullptr, "GetDeviceName", nullptr, nullptr, Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceName_Statics::AtomDeviceWatcher_eventGetDeviceName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceName_Statics::AtomDeviceWatcher_eventGetDeviceName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomDeviceWatcher::execGetDeviceName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetDeviceName();
	P_NATIVE_END;
}
// End Class UAtomDeviceWatcher Function GetDeviceName

// Begin Class UAtomDeviceWatcher
void UAtomDeviceWatcher::StaticRegisterNativesUAtomDeviceWatcher()
{
	UClass* Class = UAtomDeviceWatcher::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDeviceChannelCount", &UAtomDeviceWatcher::execGetDeviceChannelCount },
		{ "GetDeviceName", &UAtomDeviceWatcher::execGetDeviceName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomDeviceWatcher);
UClass* Z_Construct_UClass_UAtomDeviceWatcher_NoRegister()
{
	return UAtomDeviceWatcher::StaticClass();
}
struct Z_Construct_UClass_UAtomDeviceWatcher_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AtomDeviceWatcher.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AtomDeviceWatcher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDeviceUpdated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomDeviceWatcher" },
		{ "ModuleRelativePath", "Public/AtomDeviceWatcher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeviceUpdated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceChannelCount, "GetDeviceChannelCount" }, // 1395740502
		{ &Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceName, "GetDeviceName" }, // 1419829420
		{ &Z_Construct_UDelegateFunction_UAtomDeviceWatcher_OnDeviceUpdated__DelegateSignature, "OnDeviceUpdated__DelegateSignature" }, // 2005991901
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomDeviceWatcher>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAtomDeviceWatcher_Statics::NewProp_OnDeviceUpdated = { "OnDeviceUpdated", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAtomDeviceWatcher, OnDeviceUpdated), Z_Construct_UDelegateFunction_UAtomDeviceWatcher_OnDeviceUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDeviceUpdated_MetaData), NewProp_OnDeviceUpdated_MetaData) }; // 2005991901
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomDeviceWatcher_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomDeviceWatcher_Statics::NewProp_OnDeviceUpdated,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAtomDeviceWatcher_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAtomDeviceWatcher_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAtomDeviceWatcher_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomDeviceWatcher_Statics::ClassParams = {
	&UAtomDeviceWatcher::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAtomDeviceWatcher_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAtomDeviceWatcher_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAtomDeviceWatcher_Statics::Class_MetaDataParams), Z_Construct_UClass_UAtomDeviceWatcher_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAtomDeviceWatcher()
{
	if (!Z_Registration_Info_UClass_UAtomDeviceWatcher.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomDeviceWatcher.OuterSingleton, Z_Construct_UClass_UAtomDeviceWatcher_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAtomDeviceWatcher.OuterSingleton;
}
template<> CRIWARERUNTIME_API UClass* StaticClass<UAtomDeviceWatcher>()
{
	return UAtomDeviceWatcher::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomDeviceWatcher);
UAtomDeviceWatcher::~UAtomDeviceWatcher() {}
// End Class UAtomDeviceWatcher

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomDeviceWatcher_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAtomDeviceWatcher, UAtomDeviceWatcher::StaticClass, TEXT("UAtomDeviceWatcher"), &Z_Registration_Info_UClass_UAtomDeviceWatcher, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomDeviceWatcher), 3667491397U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomDeviceWatcher_h_3519393709(TEXT("/Script/CriWareRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomDeviceWatcher_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomDeviceWatcher_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
