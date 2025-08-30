// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomSpectrumAnalyzer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomSpectrumAnalyzer() {}

// Begin Cross Module References
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomAsrRack_NoRegister();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomSpectrumAnalyzer();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomSpectrumAnalyzer_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Class UAtomSpectrumAnalyzer Function CreateDspSpectra
struct Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics
{
	struct AtomSpectrumAnalyzer_eventCreateDspSpectra_Parms
	{
		UAtomAsrRack* asr_rack;
		FString bus_name;
		int32 num_bands;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomSpectrumAnalyzer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bus_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_asr_rack;
	static const UECodeGen_Private::FStrPropertyParams NewProp_bus_name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_num_bands;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::NewProp_asr_rack = { "asr_rack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomSpectrumAnalyzer_eventCreateDspSpectra_Parms, asr_rack), Z_Construct_UClass_UAtomAsrRack_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::NewProp_bus_name = { "bus_name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomSpectrumAnalyzer_eventCreateDspSpectra_Parms, bus_name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bus_name_MetaData), NewProp_bus_name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::NewProp_num_bands = { "num_bands", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomSpectrumAnalyzer_eventCreateDspSpectra_Parms, num_bands), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::NewProp_asr_rack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::NewProp_bus_name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::NewProp_num_bands,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomSpectrumAnalyzer, nullptr, "CreateDspSpectra", nullptr, nullptr, Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::AtomSpectrumAnalyzer_eventCreateDspSpectra_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::AtomSpectrumAnalyzer_eventCreateDspSpectra_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomSpectrumAnalyzer::execCreateDspSpectra)
{
	P_GET_OBJECT(UAtomAsrRack,Z_Param_asr_rack);
	P_GET_PROPERTY(FStrProperty,Z_Param_bus_name);
	P_GET_PROPERTY(FIntProperty,Z_Param_num_bands);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAtomSpectrumAnalyzer::CreateDspSpectra(Z_Param_asr_rack,Z_Param_bus_name,Z_Param_num_bands);
	P_NATIVE_END;
}
// End Class UAtomSpectrumAnalyzer Function CreateDspSpectra

// Begin Class UAtomSpectrumAnalyzer Function DestroyDspSpectra
struct Z_Construct_UFunction_UAtomSpectrumAnalyzer_DestroyDspSpectra_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomSpectrumAnalyzer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomSpectrumAnalyzer_DestroyDspSpectra_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomSpectrumAnalyzer, nullptr, "DestroyDspSpectra", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSpectrumAnalyzer_DestroyDspSpectra_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomSpectrumAnalyzer_DestroyDspSpectra_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAtomSpectrumAnalyzer_DestroyDspSpectra()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomSpectrumAnalyzer_DestroyDspSpectra_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomSpectrumAnalyzer::execDestroyDspSpectra)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UAtomSpectrumAnalyzer::DestroyDspSpectra();
	P_NATIVE_END;
}
// End Class UAtomSpectrumAnalyzer Function DestroyDspSpectra

// Begin Class UAtomSpectrumAnalyzer Function GetLevels
struct Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevels_Statics
{
	struct AtomSpectrumAnalyzer_eventGetLevels_Parms
	{
		TArray<float> spectra;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomSpectrumAnalyzer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_spectra_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_spectra;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevels_Statics::NewProp_spectra_Inner = { "spectra", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevels_Statics::NewProp_spectra = { "spectra", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomSpectrumAnalyzer_eventGetLevels_Parms, spectra), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevels_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevels_Statics::NewProp_spectra_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevels_Statics::NewProp_spectra,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevels_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomSpectrumAnalyzer, nullptr, "GetLevels", nullptr, nullptr, Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevels_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevels_Statics::AtomSpectrumAnalyzer_eventGetLevels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevels_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevels_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevels_Statics::AtomSpectrumAnalyzer_eventGetLevels_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevels()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevels_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomSpectrumAnalyzer::execGetLevels)
{
	P_GET_TARRAY_REF(float,Z_Param_Out_spectra);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAtomSpectrumAnalyzer::GetLevels(Z_Param_Out_spectra);
	P_NATIVE_END;
}
// End Class UAtomSpectrumAnalyzer Function GetLevels

// Begin Class UAtomSpectrumAnalyzer Function GetLevelsDB
struct Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB_Statics
{
	struct AtomSpectrumAnalyzer_eventGetLevelsDB_Parms
	{
		float display_range;
		TArray<float> spectra;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomSpectrumAnalyzer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_display_range;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_spectra_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_spectra;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB_Statics::NewProp_display_range = { "display_range", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomSpectrumAnalyzer_eventGetLevelsDB_Parms, display_range), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB_Statics::NewProp_spectra_Inner = { "spectra", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB_Statics::NewProp_spectra = { "spectra", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomSpectrumAnalyzer_eventGetLevelsDB_Parms, spectra), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB_Statics::NewProp_display_range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB_Statics::NewProp_spectra_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB_Statics::NewProp_spectra,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomSpectrumAnalyzer, nullptr, "GetLevelsDB", nullptr, nullptr, Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB_Statics::AtomSpectrumAnalyzer_eventGetLevelsDB_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB_Statics::AtomSpectrumAnalyzer_eventGetLevelsDB_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomSpectrumAnalyzer::execGetLevelsDB)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_display_range);
	P_GET_TARRAY_REF(float,Z_Param_Out_spectra);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAtomSpectrumAnalyzer::GetLevelsDB(Z_Param_display_range,Z_Param_Out_spectra);
	P_NATIVE_END;
}
// End Class UAtomSpectrumAnalyzer Function GetLevelsDB

// Begin Class UAtomSpectrumAnalyzer
void UAtomSpectrumAnalyzer::StaticRegisterNativesUAtomSpectrumAnalyzer()
{
	UClass* Class = UAtomSpectrumAnalyzer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateDspSpectra", &UAtomSpectrumAnalyzer::execCreateDspSpectra },
		{ "DestroyDspSpectra", &UAtomSpectrumAnalyzer::execDestroyDspSpectra },
		{ "GetLevels", &UAtomSpectrumAnalyzer::execGetLevels },
		{ "GetLevelsDB", &UAtomSpectrumAnalyzer::execGetLevelsDB },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomSpectrumAnalyzer);
UClass* Z_Construct_UClass_UAtomSpectrumAnalyzer_NoRegister()
{
	return UAtomSpectrumAnalyzer::StaticClass();
}
struct Z_Construct_UClass_UAtomSpectrumAnalyzer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AtomSpectrumAnalyzer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AtomSpectrumAnalyzer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra, "CreateDspSpectra" }, // 647956608
		{ &Z_Construct_UFunction_UAtomSpectrumAnalyzer_DestroyDspSpectra, "DestroyDspSpectra" }, // 3886971205
		{ &Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevels, "GetLevels" }, // 1719040951
		{ &Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB, "GetLevelsDB" }, // 2387475425
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomSpectrumAnalyzer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAtomSpectrumAnalyzer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSpectrumAnalyzer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomSpectrumAnalyzer_Statics::ClassParams = {
	&UAtomSpectrumAnalyzer::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSpectrumAnalyzer_Statics::Class_MetaDataParams), Z_Construct_UClass_UAtomSpectrumAnalyzer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAtomSpectrumAnalyzer()
{
	if (!Z_Registration_Info_UClass_UAtomSpectrumAnalyzer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomSpectrumAnalyzer.OuterSingleton, Z_Construct_UClass_UAtomSpectrumAnalyzer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAtomSpectrumAnalyzer.OuterSingleton;
}
template<> CRIWARERUNTIME_API UClass* StaticClass<UAtomSpectrumAnalyzer>()
{
	return UAtomSpectrumAnalyzer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomSpectrumAnalyzer);
UAtomSpectrumAnalyzer::~UAtomSpectrumAnalyzer() {}
// End Class UAtomSpectrumAnalyzer

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSpectrumAnalyzer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAtomSpectrumAnalyzer, UAtomSpectrumAnalyzer::StaticClass, TEXT("UAtomSpectrumAnalyzer"), &Z_Registration_Info_UClass_UAtomSpectrumAnalyzer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomSpectrumAnalyzer), 1368368743U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSpectrumAnalyzer_h_1887065233(TEXT("/Script/CriWareRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSpectrumAnalyzer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSpectrumAnalyzer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
