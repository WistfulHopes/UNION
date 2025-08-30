// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomProfileData.h"
#include "CriWareRuntime/Public/AtomProfileItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomProfileData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomProfileData();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomProfileData_NoRegister();
CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomProfileSortType();
CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomSortOrderType();
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomProfileItem();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Class UAtomProfileData Function CriWareAdx2ProfileDataSort
struct Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics
{
	struct AtomProfileData_eventCriWareAdx2ProfileDataSort_Parms
	{
		TArray<FAtomProfileItem> original_item;
		EAtomProfileSortType sort_type;
		EAtomSortOrderType order_type;
		TArray<FAtomProfileItem> sorted_item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomProfileData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_original_item_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_original_item;
	static const UECodeGen_Private::FBytePropertyParams NewProp_sort_type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_sort_type;
	static const UECodeGen_Private::FBytePropertyParams NewProp_order_type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_order_type;
	static const UECodeGen_Private::FStructPropertyParams NewProp_sorted_item_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_sorted_item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::NewProp_original_item_Inner = { "original_item", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAtomProfileItem, METADATA_PARAMS(0, nullptr) }; // 4265562599
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::NewProp_original_item = { "original_item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomProfileData_eventCriWareAdx2ProfileDataSort_Parms, original_item), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4265562599
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::NewProp_sort_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::NewProp_sort_type = { "sort_type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomProfileData_eventCriWareAdx2ProfileDataSort_Parms, sort_type), Z_Construct_UEnum_CriWareRuntime_EAtomProfileSortType, METADATA_PARAMS(0, nullptr) }; // 3655013600
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::NewProp_order_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::NewProp_order_type = { "order_type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomProfileData_eventCriWareAdx2ProfileDataSort_Parms, order_type), Z_Construct_UEnum_CriWareRuntime_EAtomSortOrderType, METADATA_PARAMS(0, nullptr) }; // 458775466
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::NewProp_sorted_item_Inner = { "sorted_item", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAtomProfileItem, METADATA_PARAMS(0, nullptr) }; // 4265562599
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::NewProp_sorted_item = { "sorted_item", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomProfileData_eventCriWareAdx2ProfileDataSort_Parms, sorted_item), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4265562599
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::NewProp_original_item_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::NewProp_original_item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::NewProp_sort_type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::NewProp_sort_type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::NewProp_order_type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::NewProp_order_type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::NewProp_sorted_item_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::NewProp_sorted_item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomProfileData, nullptr, "CriWareAdx2ProfileDataSort", nullptr, nullptr, Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::AtomProfileData_eventCriWareAdx2ProfileDataSort_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::AtomProfileData_eventCriWareAdx2ProfileDataSort_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomProfileData::execCriWareAdx2ProfileDataSort)
{
	P_GET_TARRAY(FAtomProfileItem,Z_Param_original_item);
	P_GET_ENUM(EAtomProfileSortType,Z_Param_sort_type);
	P_GET_ENUM(EAtomSortOrderType,Z_Param_order_type);
	P_GET_TARRAY_REF(FAtomProfileItem,Z_Param_Out_sorted_item);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAtomProfileData::CriWareAdx2ProfileDataSort(Z_Param_original_item,EAtomProfileSortType(Z_Param_sort_type),EAtomSortOrderType(Z_Param_order_type),Z_Param_Out_sorted_item);
	P_NATIVE_END;
}
// End Class UAtomProfileData Function CriWareAdx2ProfileDataSort

// Begin Class UAtomProfileData Function CriWareAdx2ProfileDataUpdate
struct Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics
{
	struct AtomProfileData_eventCriWareAdx2ProfileDataUpdate_Parms
	{
		const UObject* WorldContextObject;
		TArray<FAtomProfileItem> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomProfileData.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomProfileData_eventCriWareAdx2ProfileDataUpdate_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAtomProfileItem, METADATA_PARAMS(0, nullptr) }; // 4265562599
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomProfileData_eventCriWareAdx2ProfileDataUpdate_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4265562599
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomProfileData, nullptr, "CriWareAdx2ProfileDataUpdate", nullptr, nullptr, Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::AtomProfileData_eventCriWareAdx2ProfileDataUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::AtomProfileData_eventCriWareAdx2ProfileDataUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomProfileData::execCriWareAdx2ProfileDataUpdate)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FAtomProfileItem>*)Z_Param__Result=UAtomProfileData::CriWareAdx2ProfileDataUpdate(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UAtomProfileData Function CriWareAdx2ProfileDataUpdate

// Begin Class UAtomProfileData
void UAtomProfileData::StaticRegisterNativesUAtomProfileData()
{
	UClass* Class = UAtomProfileData::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CriWareAdx2ProfileDataSort", &UAtomProfileData::execCriWareAdx2ProfileDataSort },
		{ "CriWareAdx2ProfileDataUpdate", &UAtomProfileData::execCriWareAdx2ProfileDataUpdate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomProfileData);
UClass* Z_Construct_UClass_UAtomProfileData_NoRegister()
{
	return UAtomProfileData::StaticClass();
}
struct Z_Construct_UClass_UAtomProfileData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AtomProfileData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AtomProfileData.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort, "CriWareAdx2ProfileDataSort" }, // 3764538636
		{ &Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate, "CriWareAdx2ProfileDataUpdate" }, // 42809155
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomProfileData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAtomProfileData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAtomProfileData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomProfileData_Statics::ClassParams = {
	&UAtomProfileData::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAtomProfileData_Statics::Class_MetaDataParams), Z_Construct_UClass_UAtomProfileData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAtomProfileData()
{
	if (!Z_Registration_Info_UClass_UAtomProfileData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomProfileData.OuterSingleton, Z_Construct_UClass_UAtomProfileData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAtomProfileData.OuterSingleton;
}
template<> CRIWARERUNTIME_API UClass* StaticClass<UAtomProfileData>()
{
	return UAtomProfileData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomProfileData);
UAtomProfileData::~UAtomProfileData() {}
// End Class UAtomProfileData

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomProfileData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAtomProfileData, UAtomProfileData::StaticClass, TEXT("UAtomProfileData"), &Z_Registration_Info_UClass_UAtomProfileData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomProfileData), 1360202064U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomProfileData_h_2743743601(TEXT("/Script/CriWareRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomProfileData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomProfileData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
