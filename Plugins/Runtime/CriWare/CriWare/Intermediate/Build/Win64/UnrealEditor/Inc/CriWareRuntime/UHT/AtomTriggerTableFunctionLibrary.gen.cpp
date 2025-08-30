// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomTriggerTableFunctionLibrary.h"
#include "CriWareRuntime/Public/AtomTriggerRow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomTriggerTableFunctionLibrary() {}

// Begin Cross Module References
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomTriggerTableFunctionLibrary();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomTriggerTableFunctionLibrary_NoRegister();
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomTriggerRow();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Class UAtomTriggerTableFunctionLibrary Function GetDataTableRowFromName
struct Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics
{
	struct AtomTriggerTableFunctionLibrary_eventGetDataTableRowFromName_Parms
	{
		UDataTable* Table;
		FName RowName;
		FAtomTriggerRow OutRow;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomTriggerTableFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Table;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RowName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutRow;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::NewProp_Table = { "Table", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomTriggerTableFunctionLibrary_eventGetDataTableRowFromName_Parms, Table), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomTriggerTableFunctionLibrary_eventGetDataTableRowFromName_Parms, RowName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomTriggerTableFunctionLibrary_eventGetDataTableRowFromName_Parms, OutRow), Z_Construct_UScriptStruct_FAtomTriggerRow, METADATA_PARAMS(0, nullptr) }; // 1720239811
void Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AtomTriggerTableFunctionLibrary_eventGetDataTableRowFromName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AtomTriggerTableFunctionLibrary_eventGetDataTableRowFromName_Parms), &Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::NewProp_Table,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::NewProp_RowName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::NewProp_OutRow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomTriggerTableFunctionLibrary, nullptr, "GetDataTableRowFromName", nullptr, nullptr, Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::AtomTriggerTableFunctionLibrary_eventGetDataTableRowFromName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::AtomTriggerTableFunctionLibrary_eventGetDataTableRowFromName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomTriggerTableFunctionLibrary::execGetDataTableRowFromName)
{
	P_GET_OBJECT(UDataTable,Z_Param_Table);
	P_GET_PROPERTY(FNameProperty,Z_Param_RowName);
	P_GET_STRUCT_REF(FAtomTriggerRow,Z_Param_Out_OutRow);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAtomTriggerTableFunctionLibrary::GetDataTableRowFromName(Z_Param_Table,Z_Param_RowName,Z_Param_Out_OutRow);
	P_NATIVE_END;
}
// End Class UAtomTriggerTableFunctionLibrary Function GetDataTableRowFromName

// Begin Class UAtomTriggerTableFunctionLibrary
void UAtomTriggerTableFunctionLibrary::StaticRegisterNativesUAtomTriggerTableFunctionLibrary()
{
	UClass* Class = UAtomTriggerTableFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDataTableRowFromName", &UAtomTriggerTableFunctionLibrary::execGetDataTableRowFromName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomTriggerTableFunctionLibrary);
UClass* Z_Construct_UClass_UAtomTriggerTableFunctionLibrary_NoRegister()
{
	return UAtomTriggerTableFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UAtomTriggerTableFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AtomTriggerTableFunctionLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AtomTriggerTableFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName, "GetDataTableRowFromName" }, // 2505931112
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomTriggerTableFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAtomTriggerTableFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAtomTriggerTableFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomTriggerTableFunctionLibrary_Statics::ClassParams = {
	&UAtomTriggerTableFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAtomTriggerTableFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAtomTriggerTableFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAtomTriggerTableFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UAtomTriggerTableFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomTriggerTableFunctionLibrary.OuterSingleton, Z_Construct_UClass_UAtomTriggerTableFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAtomTriggerTableFunctionLibrary.OuterSingleton;
}
template<> CRIWARERUNTIME_API UClass* StaticClass<UAtomTriggerTableFunctionLibrary>()
{
	return UAtomTriggerTableFunctionLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomTriggerTableFunctionLibrary);
UAtomTriggerTableFunctionLibrary::~UAtomTriggerTableFunctionLibrary() {}
// End Class UAtomTriggerTableFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomTriggerTableFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAtomTriggerTableFunctionLibrary, UAtomTriggerTableFunctionLibrary::StaticClass, TEXT("UAtomTriggerTableFunctionLibrary"), &Z_Registration_Info_UClass_UAtomTriggerTableFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomTriggerTableFunctionLibrary), 3588775101U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomTriggerTableFunctionLibrary_h_2838173156(TEXT("/Script/CriWareRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomTriggerTableFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomTriggerTableFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
