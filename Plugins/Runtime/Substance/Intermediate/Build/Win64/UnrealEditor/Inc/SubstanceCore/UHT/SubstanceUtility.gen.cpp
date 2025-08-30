// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubstanceCore/Public/SubstanceUtility.h"
#include "SubstanceCore/Public/SubstanceConnection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubstanceUtility() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceGraphInstance_NoRegister();
SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceInstanceFactory_NoRegister();
SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceUtility();
SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceUtility_NoRegister();
SUBSTANCECORE_API UEnum* Z_Construct_UEnum_SubstanceCore_ESubstanceTextureSize();
SUBSTANCECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSubstanceConnection();
UPackage* Z_Construct_UPackage__Script_SubstanceCore();
// End Cross Module References

// Begin Class USubstanceUtility Function AsyncRendering
struct Z_Construct_UFunction_USubstanceUtility_AsyncRendering_Statics
{
	struct SubstanceUtility_eventAsyncRendering_Parms
	{
		USubstanceGraphInstance* InstancesToRender;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubstanceUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstancesToRender;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_AsyncRendering_Statics::NewProp_InstancesToRender = { "InstancesToRender", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventAsyncRendering_Parms, InstancesToRender), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_AsyncRendering_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_AsyncRendering_Statics::NewProp_InstancesToRender,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_AsyncRendering_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_AsyncRendering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "AsyncRendering", nullptr, nullptr, Z_Construct_UFunction_USubstanceUtility_AsyncRendering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_AsyncRendering_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceUtility_AsyncRendering_Statics::SubstanceUtility_eventAsyncRendering_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_AsyncRendering_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceUtility_AsyncRendering_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubstanceUtility_AsyncRendering_Statics::SubstanceUtility_eventAsyncRendering_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceUtility_AsyncRendering()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceUtility_AsyncRendering_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceUtility::execAsyncRendering)
{
	P_GET_OBJECT(USubstanceGraphInstance,Z_Param_InstancesToRender);
	P_FINISH;
	P_NATIVE_BEGIN;
	USubstanceUtility::AsyncRendering(Z_Param_InstancesToRender);
	P_NATIVE_END;
}
// End Class USubstanceUtility Function AsyncRendering

// Begin Class USubstanceUtility Function ClearCache
struct Z_Construct_UFunction_USubstanceUtility_ClearCache_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubstanceUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_ClearCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "ClearCache", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_ClearCache_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceUtility_ClearCache_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USubstanceUtility_ClearCache()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceUtility_ClearCache_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceUtility::execClearCache)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	USubstanceUtility::ClearCache();
	P_NATIVE_END;
}
// End Class USubstanceUtility Function ClearCache

// Begin Class USubstanceUtility Function CopyInputParameters
struct Z_Construct_UFunction_USubstanceUtility_CopyInputParameters_Statics
{
	struct SubstanceUtility_eventCopyInputParameters_Parms
	{
		USubstanceGraphInstance* SourceGraphInstance;
		USubstanceGraphInstance* DestGraphInstance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubstanceUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceGraphInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestGraphInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_CopyInputParameters_Statics::NewProp_SourceGraphInstance = { "SourceGraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventCopyInputParameters_Parms, SourceGraphInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_CopyInputParameters_Statics::NewProp_DestGraphInstance = { "DestGraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventCopyInputParameters_Parms, DestGraphInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_CopyInputParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_CopyInputParameters_Statics::NewProp_SourceGraphInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_CopyInputParameters_Statics::NewProp_DestGraphInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_CopyInputParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_CopyInputParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "CopyInputParameters", nullptr, nullptr, Z_Construct_UFunction_USubstanceUtility_CopyInputParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_CopyInputParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceUtility_CopyInputParameters_Statics::SubstanceUtility_eventCopyInputParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_CopyInputParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceUtility_CopyInputParameters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubstanceUtility_CopyInputParameters_Statics::SubstanceUtility_eventCopyInputParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceUtility_CopyInputParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceUtility_CopyInputParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceUtility::execCopyInputParameters)
{
	P_GET_OBJECT(USubstanceGraphInstance,Z_Param_SourceGraphInstance);
	P_GET_OBJECT(USubstanceGraphInstance,Z_Param_DestGraphInstance);
	P_FINISH;
	P_NATIVE_BEGIN;
	USubstanceUtility::CopyInputParameters(Z_Param_SourceGraphInstance,Z_Param_DestGraphInstance);
	P_NATIVE_END;
}
// End Class USubstanceUtility Function CopyInputParameters

// Begin Class USubstanceUtility Function CreateAggregateSubstanceFactory
struct Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics
{
	struct SubstanceUtility_eventCreateAggregateSubstanceFactory_Parms
	{
		USubstanceInstanceFactory* OutputFactory;
		int32 OutputFactoryGraphIndex;
		USubstanceInstanceFactory* InputFactory;
		int32 InputFactoryGraphIndex;
		TArray<FSubstanceConnection> Connections;
		USubstanceInstanceFactory* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubstanceUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Connections_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutputFactory;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutputFactoryGraphIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputFactory;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InputFactoryGraphIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Connections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Connections;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::NewProp_OutputFactory = { "OutputFactory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventCreateAggregateSubstanceFactory_Parms, OutputFactory), Z_Construct_UClass_USubstanceInstanceFactory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::NewProp_OutputFactoryGraphIndex = { "OutputFactoryGraphIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventCreateAggregateSubstanceFactory_Parms, OutputFactoryGraphIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::NewProp_InputFactory = { "InputFactory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventCreateAggregateSubstanceFactory_Parms, InputFactory), Z_Construct_UClass_USubstanceInstanceFactory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::NewProp_InputFactoryGraphIndex = { "InputFactoryGraphIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventCreateAggregateSubstanceFactory_Parms, InputFactoryGraphIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::NewProp_Connections_Inner = { "Connections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSubstanceConnection, METADATA_PARAMS(0, nullptr) }; // 569223495
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::NewProp_Connections = { "Connections", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventCreateAggregateSubstanceFactory_Parms, Connections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Connections_MetaData), NewProp_Connections_MetaData) }; // 569223495
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventCreateAggregateSubstanceFactory_Parms, ReturnValue), Z_Construct_UClass_USubstanceInstanceFactory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::NewProp_OutputFactory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::NewProp_OutputFactoryGraphIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::NewProp_InputFactory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::NewProp_InputFactoryGraphIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::NewProp_Connections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::NewProp_Connections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "CreateAggregateSubstanceFactory", nullptr, nullptr, Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::SubstanceUtility_eventCreateAggregateSubstanceFactory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::SubstanceUtility_eventCreateAggregateSubstanceFactory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceUtility::execCreateAggregateSubstanceFactory)
{
	P_GET_OBJECT(USubstanceInstanceFactory,Z_Param_OutputFactory);
	P_GET_PROPERTY(FIntProperty,Z_Param_OutputFactoryGraphIndex);
	P_GET_OBJECT(USubstanceInstanceFactory,Z_Param_InputFactory);
	P_GET_PROPERTY(FIntProperty,Z_Param_InputFactoryGraphIndex);
	P_GET_TARRAY_REF(FSubstanceConnection,Z_Param_Out_Connections);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USubstanceInstanceFactory**)Z_Param__Result=USubstanceUtility::CreateAggregateSubstanceFactory(Z_Param_OutputFactory,Z_Param_OutputFactoryGraphIndex,Z_Param_InputFactory,Z_Param_InputFactoryGraphIndex,Z_Param_Out_Connections);
	P_NATIVE_END;
}
// End Class USubstanceUtility Function CreateAggregateSubstanceFactory

// Begin Class USubstanceUtility Function CreateGraphInstance
struct Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics
{
	struct SubstanceUtility_eventCreateGraphInstance_Parms
	{
		UObject* WorldContextObject;
		USubstanceInstanceFactory* Factory;
		int32 GraphDescIndex;
		UMaterial* ParentMaterial;
		FString InstanceName;
		USubstanceGraphInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubstanceUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Factory;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GraphDescIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentMaterial;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InstanceName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventCreateGraphInstance_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::NewProp_Factory = { "Factory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventCreateGraphInstance_Parms, Factory), Z_Construct_UClass_USubstanceInstanceFactory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::NewProp_GraphDescIndex = { "GraphDescIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventCreateGraphInstance_Parms, GraphDescIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::NewProp_ParentMaterial = { "ParentMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventCreateGraphInstance_Parms, ParentMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::NewProp_InstanceName = { "InstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventCreateGraphInstance_Parms, InstanceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceName_MetaData), NewProp_InstanceName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventCreateGraphInstance_Parms, ReturnValue), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::NewProp_Factory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::NewProp_GraphDescIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::NewProp_ParentMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::NewProp_InstanceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "CreateGraphInstance", nullptr, nullptr, Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::SubstanceUtility_eventCreateGraphInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::SubstanceUtility_eventCreateGraphInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceUtility::execCreateGraphInstance)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(USubstanceInstanceFactory,Z_Param_Factory);
	P_GET_PROPERTY(FIntProperty,Z_Param_GraphDescIndex);
	P_GET_OBJECT(UMaterial,Z_Param_ParentMaterial);
	P_GET_PROPERTY(FStrProperty,Z_Param_InstanceName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USubstanceGraphInstance**)Z_Param__Result=USubstanceUtility::CreateGraphInstance(Z_Param_WorldContextObject,Z_Param_Factory,Z_Param_GraphDescIndex,Z_Param_ParentMaterial,Z_Param_InstanceName);
	P_NATIVE_END;
}
// End Class USubstanceUtility Function CreateGraphInstance

// Begin Class USubstanceUtility Function DisableInstanceOutputs
struct Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics
{
	struct SubstanceUtility_eventDisableInstanceOutputs_Parms
	{
		UObject* WorldContextObject;
		USubstanceGraphInstance* GraphInstance;
		TArray<int32> OutputIndices;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubstanceUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutputIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputIndices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventDisableInstanceOutputs_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventDisableInstanceOutputs_Parms, GraphInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::NewProp_OutputIndices_Inner = { "OutputIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::NewProp_OutputIndices = { "OutputIndices", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventDisableInstanceOutputs_Parms, OutputIndices), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::NewProp_GraphInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::NewProp_OutputIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::NewProp_OutputIndices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "DisableInstanceOutputs", nullptr, nullptr, Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::SubstanceUtility_eventDisableInstanceOutputs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::SubstanceUtility_eventDisableInstanceOutputs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceUtility::execDisableInstanceOutputs)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(USubstanceGraphInstance,Z_Param_GraphInstance);
	P_GET_TARRAY(int32,Z_Param_OutputIndices);
	P_FINISH;
	P_NATIVE_BEGIN;
	USubstanceUtility::DisableInstanceOutputs(Z_Param_WorldContextObject,Z_Param_GraphInstance,Z_Param_OutputIndices);
	P_NATIVE_END;
}
// End Class USubstanceUtility Function DisableInstanceOutputs

// Begin Class USubstanceUtility Function DuplicateGraphInstance
struct Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics
{
	struct SubstanceUtility_eventDuplicateGraphInstance_Parms
	{
		UObject* WorldContextObject;
		USubstanceGraphInstance* GraphInstance;
		USubstanceGraphInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubstanceUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventDuplicateGraphInstance_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventDuplicateGraphInstance_Parms, GraphInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventDuplicateGraphInstance_Parms, ReturnValue), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics::NewProp_GraphInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "DuplicateGraphInstance", nullptr, nullptr, Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics::SubstanceUtility_eventDuplicateGraphInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics::SubstanceUtility_eventDuplicateGraphInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceUtility::execDuplicateGraphInstance)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(USubstanceGraphInstance,Z_Param_GraphInstance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USubstanceGraphInstance**)Z_Param__Result=USubstanceUtility::DuplicateGraphInstance(Z_Param_WorldContextObject,Z_Param_GraphInstance);
	P_NATIVE_END;
}
// End Class USubstanceUtility Function DuplicateGraphInstance

// Begin Class USubstanceUtility Function EnableInstanceOutputs
struct Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics
{
	struct SubstanceUtility_eventEnableInstanceOutputs_Parms
	{
		UObject* WorldContextObject;
		USubstanceGraphInstance* GraphInstance;
		TArray<int32> OutputIndices;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubstanceUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutputIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputIndices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventEnableInstanceOutputs_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventEnableInstanceOutputs_Parms, GraphInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::NewProp_OutputIndices_Inner = { "OutputIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::NewProp_OutputIndices = { "OutputIndices", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventEnableInstanceOutputs_Parms, OutputIndices), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::NewProp_GraphInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::NewProp_OutputIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::NewProp_OutputIndices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "EnableInstanceOutputs", nullptr, nullptr, Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::SubstanceUtility_eventEnableInstanceOutputs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::SubstanceUtility_eventEnableInstanceOutputs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceUtility::execEnableInstanceOutputs)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(USubstanceGraphInstance,Z_Param_GraphInstance);
	P_GET_TARRAY(int32,Z_Param_OutputIndices);
	P_FINISH;
	P_NATIVE_BEGIN;
	USubstanceUtility::EnableInstanceOutputs(Z_Param_WorldContextObject,Z_Param_GraphInstance,Z_Param_OutputIndices);
	P_NATIVE_END;
}
// End Class USubstanceUtility Function EnableInstanceOutputs

// Begin Class USubstanceUtility Function GetFactoryName
struct Z_Construct_UFunction_USubstanceUtility_GetFactoryName_Statics
{
	struct SubstanceUtility_eventGetFactoryName_Parms
	{
		USubstanceGraphInstance* GraphInstance;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubstanceUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_GetFactoryName_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventGetFactoryName_Parms, GraphInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceUtility_GetFactoryName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventGetFactoryName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_GetFactoryName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_GetFactoryName_Statics::NewProp_GraphInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_GetFactoryName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_GetFactoryName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_GetFactoryName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "GetFactoryName", nullptr, nullptr, Z_Construct_UFunction_USubstanceUtility_GetFactoryName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_GetFactoryName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceUtility_GetFactoryName_Statics::SubstanceUtility_eventGetFactoryName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_GetFactoryName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceUtility_GetFactoryName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubstanceUtility_GetFactoryName_Statics::SubstanceUtility_eventGetFactoryName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceUtility_GetFactoryName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceUtility_GetFactoryName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceUtility::execGetFactoryName)
{
	P_GET_OBJECT(USubstanceGraphInstance,Z_Param_GraphInstance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USubstanceUtility::GetFactoryName(Z_Param_GraphInstance);
	P_NATIVE_END;
}
// End Class USubstanceUtility Function GetFactoryName

// Begin Class USubstanceUtility Function GetGraphName
struct Z_Construct_UFunction_USubstanceUtility_GetGraphName_Statics
{
	struct SubstanceUtility_eventGetGraphName_Parms
	{
		USubstanceGraphInstance* GraphInstance;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubstanceUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_GetGraphName_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventGetGraphName_Parms, GraphInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceUtility_GetGraphName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventGetGraphName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_GetGraphName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_GetGraphName_Statics::NewProp_GraphInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_GetGraphName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_GetGraphName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_GetGraphName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "GetGraphName", nullptr, nullptr, Z_Construct_UFunction_USubstanceUtility_GetGraphName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_GetGraphName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceUtility_GetGraphName_Statics::SubstanceUtility_eventGetGraphName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_GetGraphName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceUtility_GetGraphName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubstanceUtility_GetGraphName_Statics::SubstanceUtility_eventGetGraphName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceUtility_GetGraphName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceUtility_GetGraphName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceUtility::execGetGraphName)
{
	P_GET_OBJECT(USubstanceGraphInstance,Z_Param_GraphInstance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USubstanceUtility::GetGraphName(Z_Param_GraphInstance);
	P_NATIVE_END;
}
// End Class USubstanceUtility Function GetGraphName

// Begin Class USubstanceUtility Function GetSubstanceIncludedMaterials
struct Z_Construct_UFunction_USubstanceUtility_GetSubstanceIncludedMaterials_Statics
{
	struct SubstanceUtility_eventGetSubstanceIncludedMaterials_Parms
	{
		TArray<UMaterial*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubstanceUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_GetSubstanceIncludedMaterials_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubstanceUtility_GetSubstanceIncludedMaterials_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventGetSubstanceIncludedMaterials_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_GetSubstanceIncludedMaterials_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_GetSubstanceIncludedMaterials_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_GetSubstanceIncludedMaterials_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_GetSubstanceIncludedMaterials_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_GetSubstanceIncludedMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "GetSubstanceIncludedMaterials", nullptr, nullptr, Z_Construct_UFunction_USubstanceUtility_GetSubstanceIncludedMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_GetSubstanceIncludedMaterials_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceUtility_GetSubstanceIncludedMaterials_Statics::SubstanceUtility_eventGetSubstanceIncludedMaterials_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_GetSubstanceIncludedMaterials_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceUtility_GetSubstanceIncludedMaterials_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubstanceUtility_GetSubstanceIncludedMaterials_Statics::SubstanceUtility_eventGetSubstanceIncludedMaterials_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceUtility_GetSubstanceIncludedMaterials()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceUtility_GetSubstanceIncludedMaterials_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceUtility::execGetSubstanceIncludedMaterials)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UMaterial*>*)Z_Param__Result=USubstanceUtility::GetSubstanceIncludedMaterials();
	P_NATIVE_END;
}
// End Class USubstanceUtility Function GetSubstanceIncludedMaterials

// Begin Class USubstanceUtility Function GetSubstanceLoadingProgress
struct Z_Construct_UFunction_USubstanceUtility_GetSubstanceLoadingProgress_Statics
{
	struct SubstanceUtility_eventGetSubstanceLoadingProgress_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubstanceUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USubstanceUtility_GetSubstanceLoadingProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventGetSubstanceLoadingProgress_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_GetSubstanceLoadingProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_GetSubstanceLoadingProgress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_GetSubstanceLoadingProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_GetSubstanceLoadingProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "GetSubstanceLoadingProgress", nullptr, nullptr, Z_Construct_UFunction_USubstanceUtility_GetSubstanceLoadingProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_GetSubstanceLoadingProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceUtility_GetSubstanceLoadingProgress_Statics::SubstanceUtility_eventGetSubstanceLoadingProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_GetSubstanceLoadingProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceUtility_GetSubstanceLoadingProgress_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubstanceUtility_GetSubstanceLoadingProgress_Statics::SubstanceUtility_eventGetSubstanceLoadingProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceUtility_GetSubstanceLoadingProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceUtility_GetSubstanceLoadingProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceUtility::execGetSubstanceLoadingProgress)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USubstanceUtility::GetSubstanceLoadingProgress();
	P_NATIVE_END;
}
// End Class USubstanceUtility Function GetSubstanceLoadingProgress

// Begin Class USubstanceUtility Function GetSubstances
struct Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics
{
	struct SubstanceUtility_eventGetSubstances_Parms
	{
		UMaterialInterface* Material;
		TArray<USubstanceGraphInstance*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubstanceUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventGetSubstances_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventGetSubstances_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "GetSubstances", nullptr, nullptr, Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics::SubstanceUtility_eventGetSubstances_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics::SubstanceUtility_eventGetSubstances_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceUtility_GetSubstances()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceUtility::execGetSubstances)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<USubstanceGraphInstance*>*)Z_Param__Result=USubstanceUtility::GetSubstances(Z_Param_Material);
	P_NATIVE_END;
}
// End Class USubstanceUtility Function GetSubstances

// Begin Class USubstanceUtility Function GetSubstanceTextures
struct Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics
{
	struct SubstanceUtility_eventGetSubstanceTextures_Parms
	{
		USubstanceGraphInstance* GraphInstance;
		TArray<UTexture2D*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubstanceUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventGetSubstanceTextures_Parms, GraphInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventGetSubstanceTextures_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics::NewProp_GraphInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "GetSubstanceTextures", nullptr, nullptr, Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics::SubstanceUtility_eventGetSubstanceTextures_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics::SubstanceUtility_eventGetSubstanceTextures_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceUtility::execGetSubstanceTextures)
{
	P_GET_OBJECT(USubstanceGraphInstance,Z_Param_GraphInstance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UTexture2D*>*)Z_Param__Result=USubstanceUtility::GetSubstanceTextures(Z_Param_GraphInstance);
	P_NATIVE_END;
}
// End Class USubstanceUtility Function GetSubstanceTextures

// Begin Class USubstanceUtility Function ResetInputParameters
struct Z_Construct_UFunction_USubstanceUtility_ResetInputParameters_Statics
{
	struct SubstanceUtility_eventResetInputParameters_Parms
	{
		USubstanceGraphInstance* GraphInstance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubstanceUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_ResetInputParameters_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventResetInputParameters_Parms, GraphInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_ResetInputParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_ResetInputParameters_Statics::NewProp_GraphInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_ResetInputParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_ResetInputParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "ResetInputParameters", nullptr, nullptr, Z_Construct_UFunction_USubstanceUtility_ResetInputParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_ResetInputParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceUtility_ResetInputParameters_Statics::SubstanceUtility_eventResetInputParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_ResetInputParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceUtility_ResetInputParameters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubstanceUtility_ResetInputParameters_Statics::SubstanceUtility_eventResetInputParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceUtility_ResetInputParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceUtility_ResetInputParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceUtility::execResetInputParameters)
{
	P_GET_OBJECT(USubstanceGraphInstance,Z_Param_GraphInstance);
	P_FINISH;
	P_NATIVE_BEGIN;
	USubstanceUtility::ResetInputParameters(Z_Param_GraphInstance);
	P_NATIVE_END;
}
// End Class USubstanceUtility Function ResetInputParameters

// Begin Class USubstanceUtility Function SetGraphInstanceOutputSize
struct Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics
{
	struct SubstanceUtility_eventSetGraphInstanceOutputSize_Parms
	{
		USubstanceGraphInstance* GraphInstance;
		TEnumAsByte<ESubstanceTextureSize> Width;
		TEnumAsByte<ESubstanceTextureSize> Height;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubstanceUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Width;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Height;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventSetGraphInstanceOutputSize_Parms, GraphInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventSetGraphInstanceOutputSize_Parms, Width), Z_Construct_UEnum_SubstanceCore_ESubstanceTextureSize, METADATA_PARAMS(0, nullptr) }; // 862035151
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventSetGraphInstanceOutputSize_Parms, Height), Z_Construct_UEnum_SubstanceCore_ESubstanceTextureSize, METADATA_PARAMS(0, nullptr) }; // 862035151
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics::NewProp_GraphInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics::NewProp_Height,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "SetGraphInstanceOutputSize", nullptr, nullptr, Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics::SubstanceUtility_eventSetGraphInstanceOutputSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics::SubstanceUtility_eventSetGraphInstanceOutputSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceUtility::execSetGraphInstanceOutputSize)
{
	P_GET_OBJECT(USubstanceGraphInstance,Z_Param_GraphInstance);
	P_GET_PROPERTY(FByteProperty,Z_Param_Width);
	P_GET_PROPERTY(FByteProperty,Z_Param_Height);
	P_FINISH;
	P_NATIVE_BEGIN;
	USubstanceUtility::SetGraphInstanceOutputSize(Z_Param_GraphInstance,ESubstanceTextureSize(Z_Param_Width),ESubstanceTextureSize(Z_Param_Height));
	P_NATIVE_END;
}
// End Class USubstanceUtility Function SetGraphInstanceOutputSize

// Begin Class USubstanceUtility Function SetGraphInstanceOutputSizeInt
struct Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics
{
	struct SubstanceUtility_eventSetGraphInstanceOutputSizeInt_Parms
	{
		USubstanceGraphInstance* GraphInstance;
		int32 Width;
		int32 Height;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubstanceUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventSetGraphInstanceOutputSizeInt_Parms, GraphInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventSetGraphInstanceOutputSizeInt_Parms, Width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventSetGraphInstanceOutputSizeInt_Parms, Height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics::NewProp_GraphInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics::NewProp_Height,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "SetGraphInstanceOutputSizeInt", nullptr, nullptr, Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics::SubstanceUtility_eventSetGraphInstanceOutputSizeInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics::SubstanceUtility_eventSetGraphInstanceOutputSizeInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceUtility::execSetGraphInstanceOutputSizeInt)
{
	P_GET_OBJECT(USubstanceGraphInstance,Z_Param_GraphInstance);
	P_GET_PROPERTY(FIntProperty,Z_Param_Width);
	P_GET_PROPERTY(FIntProperty,Z_Param_Height);
	P_FINISH;
	P_NATIVE_BEGIN;
	USubstanceUtility::SetGraphInstanceOutputSizeInt(Z_Param_GraphInstance,Z_Param_Width,Z_Param_Height);
	P_NATIVE_END;
}
// End Class USubstanceUtility Function SetGraphInstanceOutputSizeInt

// Begin Class USubstanceUtility Function SyncRendering
struct Z_Construct_UFunction_USubstanceUtility_SyncRendering_Statics
{
	struct SubstanceUtility_eventSyncRendering_Parms
	{
		USubstanceGraphInstance* InstancesToRender;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubstanceUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstancesToRender;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_SyncRendering_Statics::NewProp_InstancesToRender = { "InstancesToRender", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventSyncRendering_Parms, InstancesToRender), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_SyncRendering_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_SyncRendering_Statics::NewProp_InstancesToRender,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_SyncRendering_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_SyncRendering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "SyncRendering", nullptr, nullptr, Z_Construct_UFunction_USubstanceUtility_SyncRendering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_SyncRendering_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceUtility_SyncRendering_Statics::SubstanceUtility_eventSyncRendering_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_SyncRendering_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceUtility_SyncRendering_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubstanceUtility_SyncRendering_Statics::SubstanceUtility_eventSyncRendering_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceUtility_SyncRendering()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceUtility_SyncRendering_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceUtility::execSyncRendering)
{
	P_GET_OBJECT(USubstanceGraphInstance,Z_Param_InstancesToRender);
	P_FINISH;
	P_NATIVE_BEGIN;
	USubstanceUtility::SyncRendering(Z_Param_InstancesToRender);
	P_NATIVE_END;
}
// End Class USubstanceUtility Function SyncRendering

// Begin Class USubstanceUtility
void USubstanceUtility::StaticRegisterNativesUSubstanceUtility()
{
	UClass* Class = USubstanceUtility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AsyncRendering", &USubstanceUtility::execAsyncRendering },
		{ "ClearCache", &USubstanceUtility::execClearCache },
		{ "CopyInputParameters", &USubstanceUtility::execCopyInputParameters },
		{ "CreateAggregateSubstanceFactory", &USubstanceUtility::execCreateAggregateSubstanceFactory },
		{ "CreateGraphInstance", &USubstanceUtility::execCreateGraphInstance },
		{ "DisableInstanceOutputs", &USubstanceUtility::execDisableInstanceOutputs },
		{ "DuplicateGraphInstance", &USubstanceUtility::execDuplicateGraphInstance },
		{ "EnableInstanceOutputs", &USubstanceUtility::execEnableInstanceOutputs },
		{ "GetFactoryName", &USubstanceUtility::execGetFactoryName },
		{ "GetGraphName", &USubstanceUtility::execGetGraphName },
		{ "GetSubstanceIncludedMaterials", &USubstanceUtility::execGetSubstanceIncludedMaterials },
		{ "GetSubstanceLoadingProgress", &USubstanceUtility::execGetSubstanceLoadingProgress },
		{ "GetSubstances", &USubstanceUtility::execGetSubstances },
		{ "GetSubstanceTextures", &USubstanceUtility::execGetSubstanceTextures },
		{ "ResetInputParameters", &USubstanceUtility::execResetInputParameters },
		{ "SetGraphInstanceOutputSize", &USubstanceUtility::execSetGraphInstanceOutputSize },
		{ "SetGraphInstanceOutputSizeInt", &USubstanceUtility::execSetGraphInstanceOutputSizeInt },
		{ "SyncRendering", &USubstanceUtility::execSyncRendering },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubstanceUtility);
UClass* Z_Construct_UClass_USubstanceUtility_NoRegister()
{
	return USubstanceUtility::StaticClass();
}
struct Z_Construct_UClass_USubstanceUtility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SubstanceUtility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SubstanceUtility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USubstanceUtility_AsyncRendering, "AsyncRendering" }, // 633962125
		{ &Z_Construct_UFunction_USubstanceUtility_ClearCache, "ClearCache" }, // 1342756495
		{ &Z_Construct_UFunction_USubstanceUtility_CopyInputParameters, "CopyInputParameters" }, // 2859586592
		{ &Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory, "CreateAggregateSubstanceFactory" }, // 869954771
		{ &Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance, "CreateGraphInstance" }, // 3929473412
		{ &Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs, "DisableInstanceOutputs" }, // 3489666211
		{ &Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance, "DuplicateGraphInstance" }, // 1572564920
		{ &Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs, "EnableInstanceOutputs" }, // 482368612
		{ &Z_Construct_UFunction_USubstanceUtility_GetFactoryName, "GetFactoryName" }, // 3528287019
		{ &Z_Construct_UFunction_USubstanceUtility_GetGraphName, "GetGraphName" }, // 1250018056
		{ &Z_Construct_UFunction_USubstanceUtility_GetSubstanceIncludedMaterials, "GetSubstanceIncludedMaterials" }, // 2162019588
		{ &Z_Construct_UFunction_USubstanceUtility_GetSubstanceLoadingProgress, "GetSubstanceLoadingProgress" }, // 3903111179
		{ &Z_Construct_UFunction_USubstanceUtility_GetSubstances, "GetSubstances" }, // 325696215
		{ &Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures, "GetSubstanceTextures" }, // 692137803
		{ &Z_Construct_UFunction_USubstanceUtility_ResetInputParameters, "ResetInputParameters" }, // 802377238
		{ &Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize, "SetGraphInstanceOutputSize" }, // 1597499375
		{ &Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt, "SetGraphInstanceOutputSizeInt" }, // 230723957
		{ &Z_Construct_UFunction_USubstanceUtility_SyncRendering, "SyncRendering" }, // 683318979
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubstanceUtility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USubstanceUtility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceUtility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USubstanceUtility_Statics::ClassParams = {
	&USubstanceUtility::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceUtility_Statics::Class_MetaDataParams), Z_Construct_UClass_USubstanceUtility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USubstanceUtility()
{
	if (!Z_Registration_Info_UClass_USubstanceUtility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubstanceUtility.OuterSingleton, Z_Construct_UClass_USubstanceUtility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USubstanceUtility.OuterSingleton;
}
template<> SUBSTANCECORE_API UClass* StaticClass<USubstanceUtility>()
{
	return USubstanceUtility::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USubstanceUtility);
USubstanceUtility::~USubstanceUtility() {}
// End Class USubstanceUtility

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceUtility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USubstanceUtility, USubstanceUtility::StaticClass, TEXT("USubstanceUtility"), &Z_Registration_Info_UClass_USubstanceUtility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubstanceUtility), 1754941866U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceUtility_h_2469523361(TEXT("/Script/SubstanceCore"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceUtility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceUtility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
