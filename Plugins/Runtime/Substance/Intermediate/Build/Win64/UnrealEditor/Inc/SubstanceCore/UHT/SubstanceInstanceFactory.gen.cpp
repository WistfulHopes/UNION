// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubstanceCore/Public/SubstanceInstanceFactory.h"
#include "SubstanceCore/Public/SubstanceGraphDesc.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubstanceInstanceFactory() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceGraphInstance_NoRegister();
SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceInstanceFactory();
SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceInstanceFactory_NoRegister();
SUBSTANCECORE_API UEnum* Z_Construct_UEnum_SubstanceCore_ESubstanceGenerationMode();
SUBSTANCECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSubstanceGraphDesc();
UPackage* Z_Construct_UPackage__Script_SubstanceCore();
// End Cross Module References

// Begin Class USubstanceInstanceFactory Function CreateGraphInstance
struct Z_Construct_UFunction_USubstanceInstanceFactory_CreateGraphInstance_Statics
{
	struct SubstanceInstanceFactory_eventCreateGraphInstance_Parms
	{
		FSubstanceGraphDesc GraphDesc;
		FString PackageName;
		USubstanceGraphInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubstanceInstanceFactory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphDesc;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PackageName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubstanceInstanceFactory_CreateGraphInstance_Statics::NewProp_GraphDesc = { "GraphDesc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceInstanceFactory_eventCreateGraphInstance_Parms, GraphDesc), Z_Construct_UScriptStruct_FSubstanceGraphDesc, METADATA_PARAMS(0, nullptr) }; // 119423006
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceInstanceFactory_CreateGraphInstance_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceInstanceFactory_eventCreateGraphInstance_Parms, PackageName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackageName_MetaData), NewProp_PackageName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceInstanceFactory_CreateGraphInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceInstanceFactory_eventCreateGraphInstance_Parms, ReturnValue), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceInstanceFactory_CreateGraphInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceInstanceFactory_CreateGraphInstance_Statics::NewProp_GraphDesc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceInstanceFactory_CreateGraphInstance_Statics::NewProp_PackageName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceInstanceFactory_CreateGraphInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceInstanceFactory_CreateGraphInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceInstanceFactory_CreateGraphInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceInstanceFactory, nullptr, "CreateGraphInstance", nullptr, nullptr, Z_Construct_UFunction_USubstanceInstanceFactory_CreateGraphInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceInstanceFactory_CreateGraphInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceInstanceFactory_CreateGraphInstance_Statics::SubstanceInstanceFactory_eventCreateGraphInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceInstanceFactory_CreateGraphInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceInstanceFactory_CreateGraphInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubstanceInstanceFactory_CreateGraphInstance_Statics::SubstanceInstanceFactory_eventCreateGraphInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceInstanceFactory_CreateGraphInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceInstanceFactory_CreateGraphInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceInstanceFactory::execCreateGraphInstance)
{
	P_GET_STRUCT(FSubstanceGraphDesc,Z_Param_GraphDesc);
	P_GET_PROPERTY(FStrProperty,Z_Param_PackageName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USubstanceGraphInstance**)Z_Param__Result=P_THIS->CreateGraphInstance(Z_Param_GraphDesc,Z_Param_PackageName);
	P_NATIVE_END;
}
// End Class USubstanceInstanceFactory Function CreateGraphInstance

// Begin Class USubstanceInstanceFactory Function GetGraphDescs
struct Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphDescs_Statics
{
	struct SubstanceInstanceFactory_eventGetGraphDescs_Parms
	{
		TArray<FSubstanceGraphDesc> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubstanceInstanceFactory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphDescs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSubstanceGraphDesc, METADATA_PARAMS(0, nullptr) }; // 119423006
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphDescs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceInstanceFactory_eventGetGraphDescs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 119423006
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphDescs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphDescs_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphDescs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphDescs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphDescs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceInstanceFactory, nullptr, "GetGraphDescs", nullptr, nullptr, Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphDescs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphDescs_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphDescs_Statics::SubstanceInstanceFactory_eventGetGraphDescs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphDescs_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphDescs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphDescs_Statics::SubstanceInstanceFactory_eventGetGraphDescs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphDescs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphDescs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceInstanceFactory::execGetGraphDescs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FSubstanceGraphDesc>*)Z_Param__Result=P_THIS->GetGraphDescs();
	P_NATIVE_END;
}
// End Class USubstanceInstanceFactory Function GetGraphDescs

// Begin Class USubstanceInstanceFactory Function GetGraphInstances
struct Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphInstances_Statics
{
	struct SubstanceInstanceFactory_eventGetGraphInstances_Parms
	{
		TArray<USubstanceGraphInstance*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubstanceInstanceFactory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphInstances_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphInstances_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceInstanceFactory_eventGetGraphInstances_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphInstances_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphInstances_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphInstances_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphInstances_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceInstanceFactory, nullptr, "GetGraphInstances", nullptr, nullptr, Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphInstances_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphInstances_Statics::SubstanceInstanceFactory_eventGetGraphInstances_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphInstances_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphInstances_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphInstances_Statics::SubstanceInstanceFactory_eventGetGraphInstances_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphInstances()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphInstances_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceInstanceFactory::execGetGraphInstances)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<USubstanceGraphInstance*>*)Z_Param__Result=P_THIS->GetGraphInstances();
	P_NATIVE_END;
}
// End Class USubstanceInstanceFactory Function GetGraphInstances

// Begin Class USubstanceInstanceFactory
void USubstanceInstanceFactory::StaticRegisterNativesUSubstanceInstanceFactory()
{
	UClass* Class = USubstanceInstanceFactory::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateGraphInstance", &USubstanceInstanceFactory::execCreateGraphInstance },
		{ "GetGraphDescs", &USubstanceInstanceFactory::execGetGraphDescs },
		{ "GetGraphInstances", &USubstanceInstanceFactory::execGetGraphInstances },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubstanceInstanceFactory);
UClass* Z_Construct_UClass_USubstanceInstanceFactory_NoRegister()
{
	return USubstanceInstanceFactory::StaticClass();
}
struct Z_Construct_UClass_USubstanceInstanceFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SubstanceInstanceFactory.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SubstanceInstanceFactory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mGraphInstances_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceInstanceFactory" },
		{ "ModuleRelativePath", "Public/SubstanceInstanceFactory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeSourceFilePath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceInstanceFactory" },
		{ "ModuleRelativePath", "Public/SubstanceInstanceFactory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbsoluteSourceFilePath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceInstanceFactory" },
		{ "ModuleRelativePath", "Public/SubstanceInstanceFactory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceFileTimestamp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceInstanceFactory" },
		{ "ModuleRelativePath", "Public/SubstanceInstanceFactory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerationMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceInstanceFactory" },
		{ "ModuleRelativePath", "Public/SubstanceInstanceFactory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mGraphInstances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_mGraphInstances;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RelativeSourceFilePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AbsoluteSourceFilePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceFileTimestamp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GenerationMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USubstanceInstanceFactory_CreateGraphInstance, "CreateGraphInstance" }, // 619293330
		{ &Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphDescs, "GetGraphDescs" }, // 3077813446
		{ &Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphInstances, "GetGraphInstances" }, // 842445105
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubstanceInstanceFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_mGraphInstances_Inner = { "mGraphInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_mGraphInstances = { "mGraphInstances", nullptr, (EPropertyFlags)0x0040000000200005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubstanceInstanceFactory, mGraphInstances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mGraphInstances_MetaData), NewProp_mGraphInstances_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_RelativeSourceFilePath = { "RelativeSourceFilePath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubstanceInstanceFactory, RelativeSourceFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeSourceFilePath_MetaData), NewProp_RelativeSourceFilePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_AbsoluteSourceFilePath = { "AbsoluteSourceFilePath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubstanceInstanceFactory, AbsoluteSourceFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbsoluteSourceFilePath_MetaData), NewProp_AbsoluteSourceFilePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_SourceFileTimestamp = { "SourceFileTimestamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubstanceInstanceFactory, SourceFileTimestamp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceFileTimestamp_MetaData), NewProp_SourceFileTimestamp_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_GenerationMode = { "GenerationMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubstanceInstanceFactory, GenerationMode), Z_Construct_UEnum_SubstanceCore_ESubstanceGenerationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerationMode_MetaData), NewProp_GenerationMode_MetaData) }; // 1400103919
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubstanceInstanceFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_mGraphInstances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_mGraphInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_RelativeSourceFilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_AbsoluteSourceFilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_SourceFileTimestamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_GenerationMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceInstanceFactory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USubstanceInstanceFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceInstanceFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USubstanceInstanceFactory_Statics::ClassParams = {
	&USubstanceInstanceFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USubstanceInstanceFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceInstanceFactory_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceInstanceFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_USubstanceInstanceFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USubstanceInstanceFactory()
{
	if (!Z_Registration_Info_UClass_USubstanceInstanceFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubstanceInstanceFactory.OuterSingleton, Z_Construct_UClass_USubstanceInstanceFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USubstanceInstanceFactory.OuterSingleton;
}
template<> SUBSTANCECORE_API UClass* StaticClass<USubstanceInstanceFactory>()
{
	return USubstanceInstanceFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USubstanceInstanceFactory);
USubstanceInstanceFactory::~USubstanceInstanceFactory() {}
// End Class USubstanceInstanceFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceInstanceFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USubstanceInstanceFactory, USubstanceInstanceFactory::StaticClass, TEXT("USubstanceInstanceFactory"), &Z_Registration_Info_UClass_USubstanceInstanceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubstanceInstanceFactory), 3359571499U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceInstanceFactory_h_1439292288(TEXT("/Script/SubstanceCore"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceInstanceFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceInstanceFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
