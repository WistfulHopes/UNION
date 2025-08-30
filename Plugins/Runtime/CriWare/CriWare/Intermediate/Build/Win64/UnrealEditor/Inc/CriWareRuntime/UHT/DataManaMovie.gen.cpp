// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/DataManaMovie.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataManaMovie() {}

// Begin Cross Module References
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UDataManaMovie();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UDataManaMovie_NoRegister();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaMovie();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Class UDataManaMovie Function GetDataArray
struct Z_Construct_UFunction_UDataManaMovie_GetDataArray_Statics
{
	struct DataManaMovie_eventGetDataArray_Parms
	{
		TArray<uint8> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataManaMovie.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataManaMovie_GetDataArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataManaMovie_GetDataArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataManaMovie_eventGetDataArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataManaMovie_GetDataArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataManaMovie_GetDataArray_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataManaMovie_GetDataArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataManaMovie_GetDataArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataManaMovie_GetDataArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataManaMovie, nullptr, "GetDataArray", nullptr, nullptr, Z_Construct_UFunction_UDataManaMovie_GetDataArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataManaMovie_GetDataArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataManaMovie_GetDataArray_Statics::DataManaMovie_eventGetDataArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataManaMovie_GetDataArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataManaMovie_GetDataArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDataManaMovie_GetDataArray_Statics::DataManaMovie_eventGetDataArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataManaMovie_GetDataArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataManaMovie_GetDataArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataManaMovie::execGetDataArray)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<uint8>*)Z_Param__Result=P_THIS->GetDataArray();
	P_NATIVE_END;
}
// End Class UDataManaMovie Function GetDataArray

// Begin Class UDataManaMovie Function SetDataArray
struct Z_Construct_UFunction_UDataManaMovie_SetDataArray_Statics
{
	struct DataManaMovie_eventSetDataArray_Parms
	{
		TArray<uint8> InDataArray;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataManaMovie.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InDataArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InDataArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataManaMovie_SetDataArray_Statics::NewProp_InDataArray_Inner = { "InDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataManaMovie_SetDataArray_Statics::NewProp_InDataArray = { "InDataArray", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataManaMovie_eventSetDataArray_Parms, InDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataManaMovie_SetDataArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataManaMovie_SetDataArray_Statics::NewProp_InDataArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataManaMovie_SetDataArray_Statics::NewProp_InDataArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataManaMovie_SetDataArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataManaMovie_SetDataArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataManaMovie, nullptr, "SetDataArray", nullptr, nullptr, Z_Construct_UFunction_UDataManaMovie_SetDataArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataManaMovie_SetDataArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataManaMovie_SetDataArray_Statics::DataManaMovie_eventSetDataArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataManaMovie_SetDataArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataManaMovie_SetDataArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDataManaMovie_SetDataArray_Statics::DataManaMovie_eventSetDataArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataManaMovie_SetDataArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataManaMovie_SetDataArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataManaMovie::execSetDataArray)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_InDataArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDataArray(Z_Param_Out_InDataArray);
	P_NATIVE_END;
}
// End Class UDataManaMovie Function SetDataArray

// Begin Class UDataManaMovie
void UDataManaMovie::StaticRegisterNativesUDataManaMovie()
{
	UClass* Class = UDataManaMovie::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDataArray", &UDataManaMovie::execGetDataArray },
		{ "SetDataArray", &UDataManaMovie::execSetDataArray },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataManaMovie);
UClass* Z_Construct_UClass_UDataManaMovie_NoRegister()
{
	return UDataManaMovie::StaticClass();
}
struct Z_Construct_UClass_UDataManaMovie_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DataManaMovie.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DataManaMovie.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDataManaMovie_GetDataArray, "GetDataArray" }, // 2010330371
		{ &Z_Construct_UFunction_UDataManaMovie_SetDataArray, "SetDataArray" }, // 1996415280
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataManaMovie>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDataManaMovie_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UManaMovie,
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataManaMovie_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataManaMovie_Statics::ClassParams = {
	&UDataManaMovie::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataManaMovie_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataManaMovie_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataManaMovie()
{
	if (!Z_Registration_Info_UClass_UDataManaMovie.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataManaMovie.OuterSingleton, Z_Construct_UClass_UDataManaMovie_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataManaMovie.OuterSingleton;
}
template<> CRIWARERUNTIME_API UClass* StaticClass<UDataManaMovie>()
{
	return UDataManaMovie::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataManaMovie);
UDataManaMovie::~UDataManaMovie() {}
// End Class UDataManaMovie

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_DataManaMovie_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataManaMovie, UDataManaMovie::StaticClass, TEXT("UDataManaMovie"), &Z_Registration_Info_UClass_UDataManaMovie, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataManaMovie), 2536731463U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_DataManaMovie_h_3792047460(TEXT("/Script/CriWareRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_DataManaMovie_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_DataManaMovie_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
