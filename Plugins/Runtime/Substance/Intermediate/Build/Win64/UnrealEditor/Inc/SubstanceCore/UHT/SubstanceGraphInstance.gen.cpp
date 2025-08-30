// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubstanceCore/Public/SubstanceGraphInstance.h"
#include "SubstanceCore/Public/SubstanceFloatInputDesc.h"
#include "SubstanceCore/Public/SubstanceInstanceDesc.h"
#include "SubstanceCore/Public/SubstanceIntInputDesc.h"
#include "SubstanceCore/Public/SubstancePreset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubstanceGraphInstance() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceGraphInstance();
SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceGraphInstance_NoRegister();
SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceInstanceFactory_NoRegister();
SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceOutputData_NoRegister();
SUBSTANCECORE_API UEnum* Z_Construct_UEnum_SubstanceCore_ESubstanceInputType();
SUBSTANCECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSubstanceFloatInputDesc();
SUBSTANCECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSubstanceInstanceDesc();
SUBSTANCECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSubstanceIntInputDesc();
SUBSTANCECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSubstancePreset();
UPackage* Z_Construct_UPackage__Script_SubstanceCore();
// End Cross Module References

// Begin Class USubstanceGraphInstance Function CreateMaterial
struct Z_Construct_UFunction_USubstanceGraphInstance_CreateMaterial_Statics
{
	struct SubstanceGraphInstance_eventCreateMaterial_Parms
	{
		FString PackageName;
		UMaterial* ParentMaterial;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubstanceGraphInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PackageName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_CreateMaterial_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventCreateMaterial_Parms, PackageName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackageName_MetaData), NewProp_PackageName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_CreateMaterial_Statics::NewProp_ParentMaterial = { "ParentMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventCreateMaterial_Parms, ParentMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_CreateMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_CreateMaterial_Statics::NewProp_PackageName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_CreateMaterial_Statics::NewProp_ParentMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_CreateMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_CreateMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "CreateMaterial", nullptr, nullptr, Z_Construct_UFunction_USubstanceGraphInstance_CreateMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_CreateMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceGraphInstance_CreateMaterial_Statics::SubstanceGraphInstance_eventCreateMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_CreateMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceGraphInstance_CreateMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubstanceGraphInstance_CreateMaterial_Statics::SubstanceGraphInstance_eventCreateMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceGraphInstance_CreateMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_CreateMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceGraphInstance::execCreateMaterial)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PackageName);
	P_GET_OBJECT(UMaterial,Z_Param_ParentMaterial);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateMaterial(Z_Param_PackageName,Z_Param_ParentMaterial);
	P_NATIVE_END;
}
// End Class USubstanceGraphInstance Function CreateMaterial

// Begin Class USubstanceGraphInstance Function CreateOutputs
struct Z_Construct_UFunction_USubstanceGraphInstance_CreateOutputs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubstanceGraphInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_CreateOutputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "CreateOutputs", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_CreateOutputs_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceGraphInstance_CreateOutputs_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USubstanceGraphInstance_CreateOutputs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_CreateOutputs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceGraphInstance::execCreateOutputs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateOutputs();
	P_NATIVE_END;
}
// End Class USubstanceGraphInstance Function CreateOutputs

// Begin Class USubstanceGraphInstance Function Duplicate
struct Z_Construct_UFunction_USubstanceGraphInstance_Duplicate_Statics
{
	struct SubstanceGraphInstance_eventDuplicate_Parms
	{
		USubstanceGraphInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubstanceGraphInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_Duplicate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventDuplicate_Parms, ReturnValue), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_Duplicate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_Duplicate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_Duplicate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_Duplicate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "Duplicate", nullptr, nullptr, Z_Construct_UFunction_USubstanceGraphInstance_Duplicate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_Duplicate_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceGraphInstance_Duplicate_Statics::SubstanceGraphInstance_eventDuplicate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_Duplicate_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceGraphInstance_Duplicate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubstanceGraphInstance_Duplicate_Statics::SubstanceGraphInstance_eventDuplicate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceGraphInstance_Duplicate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_Duplicate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceGraphInstance::execDuplicate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USubstanceGraphInstance**)Z_Param__Result=P_THIS->Duplicate();
	P_NATIVE_END;
}
// End Class USubstanceGraphInstance Function Duplicate

// Begin Class USubstanceGraphInstance Function EnableOutput
struct Z_Construct_UFunction_USubstanceGraphInstance_EnableOutput_Statics
{
	struct SubstanceGraphInstance_eventEnableOutput_Parms
	{
		FString Identifier;
		bool Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubstanceGraphInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_EnableOutput_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventEnableOutput_Parms, Identifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Identifier_MetaData), NewProp_Identifier_MetaData) };
void Z_Construct_UFunction_USubstanceGraphInstance_EnableOutput_Statics::NewProp_Value_SetBit(void* Obj)
{
	((SubstanceGraphInstance_eventEnableOutput_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_EnableOutput_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SubstanceGraphInstance_eventEnableOutput_Parms), &Z_Construct_UFunction_USubstanceGraphInstance_EnableOutput_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_EnableOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_EnableOutput_Statics::NewProp_Identifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_EnableOutput_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_EnableOutput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_EnableOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "EnableOutput", nullptr, nullptr, Z_Construct_UFunction_USubstanceGraphInstance_EnableOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_EnableOutput_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceGraphInstance_EnableOutput_Statics::SubstanceGraphInstance_eventEnableOutput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_EnableOutput_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceGraphInstance_EnableOutput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubstanceGraphInstance_EnableOutput_Statics::SubstanceGraphInstance_eventEnableOutput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceGraphInstance_EnableOutput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_EnableOutput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceGraphInstance::execEnableOutput)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
	P_GET_UBOOL(Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableOutput(Z_Param_Identifier,Z_Param_Value);
	P_NATIVE_END;
}
// End Class USubstanceGraphInstance Function EnableOutput

// Begin Class USubstanceGraphInstance Function GetConstantMaterial
struct Z_Construct_UFunction_USubstanceGraphInstance_GetConstantMaterial_Statics
{
	struct SubstanceGraphInstance_eventGetConstantMaterial_Parms
	{
		UMaterialInstanceConstant* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubstanceGraphInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetConstantMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventGetConstantMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_GetConstantMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetConstantMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetConstantMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_GetConstantMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "GetConstantMaterial", nullptr, nullptr, Z_Construct_UFunction_USubstanceGraphInstance_GetConstantMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetConstantMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceGraphInstance_GetConstantMaterial_Statics::SubstanceGraphInstance_eventGetConstantMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetConstantMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceGraphInstance_GetConstantMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubstanceGraphInstance_GetConstantMaterial_Statics::SubstanceGraphInstance_eventGetConstantMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetConstantMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_GetConstantMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceGraphInstance::execGetConstantMaterial)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInstanceConstant**)Z_Param__Result=P_THIS->GetConstantMaterial();
	P_NATIVE_END;
}
// End Class USubstanceGraphInstance Function GetConstantMaterial

// Begin Class USubstanceGraphInstance Function GetDynamicMaterialInstance
struct Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance_Statics
{
	struct SubstanceGraphInstance_eventGetDynamicMaterialInstance_Parms
	{
		FName Name;
		UMaterial* InParentMaterial;
		UMaterialInstanceDynamic* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubstanceGraphInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InParentMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventGetDynamicMaterialInstance_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance_Statics::NewProp_InParentMaterial = { "InParentMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventGetDynamicMaterialInstance_Parms, InParentMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventGetDynamicMaterialInstance_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance_Statics::NewProp_InParentMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "GetDynamicMaterialInstance", nullptr, nullptr, Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance_Statics::SubstanceGraphInstance_eventGetDynamicMaterialInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance_Statics::SubstanceGraphInstance_eventGetDynamicMaterialInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceGraphInstance::execGetDynamicMaterialInstance)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_OBJECT(UMaterial,Z_Param_InParentMaterial);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetDynamicMaterialInstance(Z_Param_Name,Z_Param_InParentMaterial);
	P_NATIVE_END;
}
// End Class USubstanceGraphInstance Function GetDynamicMaterialInstance

// Begin Class USubstanceGraphInstance Function GetFloatInputDesc
struct Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc_Statics
{
	struct SubstanceGraphInstance_eventGetFloatInputDesc_Parms
	{
		FString Identifier;
		FSubstanceFloatInputDesc ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubstanceGraphInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventGetFloatInputDesc_Parms, Identifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Identifier_MetaData), NewProp_Identifier_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventGetFloatInputDesc_Parms, ReturnValue), Z_Construct_UScriptStruct_FSubstanceFloatInputDesc, METADATA_PARAMS(0, nullptr) }; // 1100972151
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc_Statics::NewProp_Identifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "GetFloatInputDesc", nullptr, nullptr, Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc_Statics::SubstanceGraphInstance_eventGetFloatInputDesc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc_Statics::SubstanceGraphInstance_eventGetFloatInputDesc_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceGraphInstance::execGetFloatInputDesc)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSubstanceFloatInputDesc*)Z_Param__Result=P_THIS->GetFloatInputDesc(Z_Param_Identifier);
	P_NATIVE_END;
}
// End Class USubstanceGraphInstance Function GetFloatInputDesc

// Begin Class USubstanceGraphInstance Function GetInputBool
struct Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool_Statics
{
	struct SubstanceGraphInstance_eventGetInputBool_Parms
	{
		FString Identifier;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubstanceGraphInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInputBool_Parms, Identifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Identifier_MetaData), NewProp_Identifier_MetaData) };
void Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SubstanceGraphInstance_eventGetInputBool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SubstanceGraphInstance_eventGetInputBool_Parms), &Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool_Statics::NewProp_Identifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "GetInputBool", nullptr, nullptr, Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool_Statics::SubstanceGraphInstance_eventGetInputBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool_Statics::SubstanceGraphInstance_eventGetInputBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceGraphInstance::execGetInputBool)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetInputBool(Z_Param_Identifier);
	P_NATIVE_END;
}
// End Class USubstanceGraphInstance Function GetInputBool

// Begin Class USubstanceGraphInstance Function GetInputColor
struct Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor_Statics
{
	struct SubstanceGraphInstance_eventGetInputColor_Parms
	{
		FString Identifier;
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubstanceGraphInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInputColor_Parms, Identifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Identifier_MetaData), NewProp_Identifier_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInputColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor_Statics::NewProp_Identifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "GetInputColor", nullptr, nullptr, Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor_Statics::SubstanceGraphInstance_eventGetInputColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor_Statics::SubstanceGraphInstance_eventGetInputColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceGraphInstance::execGetInputColor)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=P_THIS->GetInputColor(Z_Param_Identifier);
	P_NATIVE_END;
}
// End Class USubstanceGraphInstance Function GetInputColor

// Begin Class USubstanceGraphInstance Function GetInputFloat
struct Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat_Statics
{
	struct SubstanceGraphInstance_eventGetInputFloat_Parms
	{
		FString Identifier;
		TArray<float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubstanceGraphInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInputFloat_Parms, Identifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Identifier_MetaData), NewProp_Identifier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInputFloat_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat_Statics::NewProp_Identifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "GetInputFloat", nullptr, nullptr, Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat_Statics::SubstanceGraphInstance_eventGetInputFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat_Statics::SubstanceGraphInstance_eventGetInputFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceGraphInstance::execGetInputFloat)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<float>*)Z_Param__Result=P_THIS->GetInputFloat(Z_Param_Identifier);
	P_NATIVE_END;
}
// End Class USubstanceGraphInstance Function GetInputFloat

// Begin Class USubstanceGraphInstance Function GetInputInt
struct Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt_Statics
{
	struct SubstanceGraphInstance_eventGetInputInt_Parms
	{
		FString Identifier;
		TArray<int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubstanceGraphInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInputInt_Parms, Identifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Identifier_MetaData), NewProp_Identifier_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInputInt_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt_Statics::NewProp_Identifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "GetInputInt", nullptr, nullptr, Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt_Statics::SubstanceGraphInstance_eventGetInputInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt_Statics::SubstanceGraphInstance_eventGetInputInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceGraphInstance::execGetInputInt)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<int32>*)Z_Param__Result=P_THIS->GetInputInt(Z_Param_Identifier);
	P_NATIVE_END;
}
// End Class USubstanceGraphInstance Function GetInputInt

// Begin Class USubstanceGraphInstance Function GetInputNames
struct Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames_Statics
{
	struct SubstanceGraphInstance_eventGetInputNames_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubstanceGraphInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInputNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "GetInputNames", nullptr, nullptr, Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames_Statics::SubstanceGraphInstance_eventGetInputNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames_Statics::SubstanceGraphInstance_eventGetInputNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceGraphInstance::execGetInputNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetInputNames();
	P_NATIVE_END;
}
// End Class USubstanceGraphInstance Function GetInputNames

// Begin Class USubstanceGraphInstance Function GetInputString
struct Z_Construct_UFunction_USubstanceGraphInstance_GetInputString_Statics
{
	struct SubstanceGraphInstance_eventGetInputString_Parms
	{
		FString Identifier;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubstanceGraphInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputString_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInputString_Parms, Identifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Identifier_MetaData), NewProp_Identifier_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInputString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_GetInputString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInputString_Statics::NewProp_Identifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInputString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "GetInputString", nullptr, nullptr, Z_Construct_UFunction_USubstanceGraphInstance_GetInputString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputString_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceGraphInstance_GetInputString_Statics::SubstanceGraphInstance_eventGetInputString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputString_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceGraphInstance_GetInputString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubstanceGraphInstance_GetInputString_Statics::SubstanceGraphInstance_eventGetInputString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetInputString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_GetInputString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceGraphInstance::execGetInputString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetInputString(Z_Param_Identifier);
	P_NATIVE_END;
}
// End Class USubstanceGraphInstance Function GetInputString

// Begin Class USubstanceGraphInstance Function GetInputType
struct Z_Construct_UFunction_USubstanceGraphInstance_GetInputType_Statics
{
	struct SubstanceGraphInstance_eventGetInputType_Parms
	{
		FString InputName;
		TEnumAsByte<ESubstanceInputType> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubstanceGraphInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InputName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputType_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInputType_Parms, InputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputName_MetaData), NewProp_InputName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInputType_Parms, ReturnValue), Z_Construct_UEnum_SubstanceCore_ESubstanceInputType, METADATA_PARAMS(0, nullptr) }; // 1603683655
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_GetInputType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInputType_Statics::NewProp_InputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInputType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "GetInputType", nullptr, nullptr, Z_Construct_UFunction_USubstanceGraphInstance_GetInputType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputType_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceGraphInstance_GetInputType_Statics::SubstanceGraphInstance_eventGetInputType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputType_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceGraphInstance_GetInputType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubstanceGraphInstance_GetInputType_Statics::SubstanceGraphInstance_eventGetInputType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetInputType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_GetInputType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceGraphInstance::execGetInputType)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InputName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ESubstanceInputType>*)Z_Param__Result=P_THIS->GetInputType(Z_Param_InputName);
	P_NATIVE_END;
}
// End Class USubstanceGraphInstance Function GetInputType

// Begin Class USubstanceGraphInstance Function GetInstanceDesc
struct Z_Construct_UFunction_USubstanceGraphInstance_GetInstanceDesc_Statics
{
	struct SubstanceGraphInstance_eventGetInstanceDesc_Parms
	{
		FSubstanceInstanceDesc ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubstanceGraphInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInstanceDesc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInstanceDesc_Parms, ReturnValue), Z_Construct_UScriptStruct_FSubstanceInstanceDesc, METADATA_PARAMS(0, nullptr) }; // 1005840743
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_GetInstanceDesc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInstanceDesc_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInstanceDesc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_GetInstanceDesc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "GetInstanceDesc", nullptr, nullptr, Z_Construct_UFunction_USubstanceGraphInstance_GetInstanceDesc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInstanceDesc_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceGraphInstance_GetInstanceDesc_Statics::SubstanceGraphInstance_eventGetInstanceDesc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInstanceDesc_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceGraphInstance_GetInstanceDesc_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubstanceGraphInstance_GetInstanceDesc_Statics::SubstanceGraphInstance_eventGetInstanceDesc_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetInstanceDesc()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_GetInstanceDesc_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceGraphInstance::execGetInstanceDesc)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSubstanceInstanceDesc*)Z_Param__Result=P_THIS->GetInstanceDesc();
	P_NATIVE_END;
}
// End Class USubstanceGraphInstance Function GetInstanceDesc

// Begin Class USubstanceGraphInstance Function GetIntInputDesc
struct Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc_Statics
{
	struct SubstanceGraphInstance_eventGetIntInputDesc_Parms
	{
		FString Identifier;
		FSubstanceIntInputDesc ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubstanceGraphInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventGetIntInputDesc_Parms, Identifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Identifier_MetaData), NewProp_Identifier_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventGetIntInputDesc_Parms, ReturnValue), Z_Construct_UScriptStruct_FSubstanceIntInputDesc, METADATA_PARAMS(0, nullptr) }; // 3232608461
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc_Statics::NewProp_Identifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "GetIntInputDesc", nullptr, nullptr, Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc_Statics::SubstanceGraphInstance_eventGetIntInputDesc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc_Statics::SubstanceGraphInstance_eventGetIntInputDesc_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceGraphInstance::execGetIntInputDesc)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSubstanceIntInputDesc*)Z_Param__Result=P_THIS->GetIntInputDesc(Z_Param_Identifier);
	P_NATIVE_END;
}
// End Class USubstanceGraphInstance Function GetIntInputDesc

// Begin Class USubstanceGraphInstance Function GetOutputNames
struct Z_Construct_UFunction_USubstanceGraphInstance_GetOutputNames_Statics
{
	struct SubstanceGraphInstance_eventGetOutputNames_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubstanceGraphInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetOutputNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetOutputNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventGetOutputNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_GetOutputNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetOutputNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetOutputNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetOutputNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_GetOutputNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "GetOutputNames", nullptr, nullptr, Z_Construct_UFunction_USubstanceGraphInstance_GetOutputNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetOutputNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceGraphInstance_GetOutputNames_Statics::SubstanceGraphInstance_eventGetOutputNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetOutputNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceGraphInstance_GetOutputNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubstanceGraphInstance_GetOutputNames_Statics::SubstanceGraphInstance_eventGetOutputNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetOutputNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_GetOutputNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceGraphInstance::execGetOutputNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetOutputNames();
	P_NATIVE_END;
}
// End Class USubstanceGraphInstance Function GetOutputNames

// Begin Class USubstanceGraphInstance Function RenderSync
struct Z_Construct_UFunction_USubstanceGraphInstance_RenderSync_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubstanceGraphInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_RenderSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "RenderSync", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_RenderSync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceGraphInstance_RenderSync_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USubstanceGraphInstance_RenderSync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_RenderSync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceGraphInstance::execRenderSync)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RenderSync();
	P_NATIVE_END;
}
// End Class USubstanceGraphInstance Function RenderSync

// Begin Class USubstanceGraphInstance Function SetInputBool
struct Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool_Statics
{
	struct SubstanceGraphInstance_eventSetInputBool_Parms
	{
		FString Identifier;
		bool Bool;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubstanceGraphInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
	static void NewProp_Bool_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Bool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventSetInputBool_Parms, Identifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Identifier_MetaData), NewProp_Identifier_MetaData) };
void Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool_Statics::NewProp_Bool_SetBit(void* Obj)
{
	((SubstanceGraphInstance_eventSetInputBool_Parms*)Obj)->Bool = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool_Statics::NewProp_Bool = { "Bool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SubstanceGraphInstance_eventSetInputBool_Parms), &Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool_Statics::NewProp_Bool_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool_Statics::NewProp_Identifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool_Statics::NewProp_Bool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "SetInputBool", nullptr, nullptr, Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool_Statics::SubstanceGraphInstance_eventSetInputBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool_Statics::SubstanceGraphInstance_eventSetInputBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceGraphInstance::execSetInputBool)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
	P_GET_UBOOL(Z_Param_Bool);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInputBool(Z_Param_Identifier,Z_Param_Bool);
	P_NATIVE_END;
}
// End Class USubstanceGraphInstance Function SetInputBool

// Begin Class USubstanceGraphInstance Function SetInputColor
struct Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor_Statics
{
	struct SubstanceGraphInstance_eventSetInputColor_Parms
	{
		FString Identifier;
		FLinearColor Color;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubstanceGraphInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventSetInputColor_Parms, Identifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Identifier_MetaData), NewProp_Identifier_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventSetInputColor_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor_Statics::NewProp_Identifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "SetInputColor", nullptr, nullptr, Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor_Statics::SubstanceGraphInstance_eventSetInputColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor_Statics::SubstanceGraphInstance_eventSetInputColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceGraphInstance::execSetInputColor)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
	P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Color);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInputColor(Z_Param_Identifier,Z_Param_Out_Color);
	P_NATIVE_END;
}
// End Class USubstanceGraphInstance Function SetInputColor

// Begin Class USubstanceGraphInstance Function SetInputFloat
struct Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics
{
	struct SubstanceGraphInstance_eventSetInputFloat_Parms
	{
		FString Identifier;
		TArray<float> InputValues;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubstanceGraphInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputValues_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InputValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputValues;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventSetInputFloat_Parms, Identifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Identifier_MetaData), NewProp_Identifier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::NewProp_InputValues_Inner = { "InputValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::NewProp_InputValues = { "InputValues", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventSetInputFloat_Parms, InputValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputValues_MetaData), NewProp_InputValues_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::NewProp_Identifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::NewProp_InputValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::NewProp_InputValues,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "SetInputFloat", nullptr, nullptr, Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::SubstanceGraphInstance_eventSetInputFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::SubstanceGraphInstance_eventSetInputFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceGraphInstance::execSetInputFloat)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
	P_GET_TARRAY_REF(float,Z_Param_Out_InputValues);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInputFloat(Z_Param_Identifier,Z_Param_Out_InputValues);
	P_NATIVE_END;
}
// End Class USubstanceGraphInstance Function SetInputFloat

// Begin Class USubstanceGraphInstance Function SetInputImg
struct Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics
{
	struct SubstanceGraphInstance_eventSetInputImg_Parms
	{
		FString InputName;
		UObject* Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubstanceGraphInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InputName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventSetInputImg_Parms, InputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputName_MetaData), NewProp_InputName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventSetInputImg_Parms, Value), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SubstanceGraphInstance_eventSetInputImg_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SubstanceGraphInstance_eventSetInputImg_Parms), &Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::NewProp_InputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "SetInputImg", nullptr, nullptr, Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::SubstanceGraphInstance_eventSetInputImg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::SubstanceGraphInstance_eventSetInputImg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceGraphInstance::execSetInputImg)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InputName);
	P_GET_OBJECT(UObject,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetInputImg(Z_Param_InputName,Z_Param_Value);
	P_NATIVE_END;
}
// End Class USubstanceGraphInstance Function SetInputImg

// Begin Class USubstanceGraphInstance Function SetInputInt
struct Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics
{
	struct SubstanceGraphInstance_eventSetInputInt_Parms
	{
		FString Identifier;
		TArray<int32> InputValues;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubstanceGraphInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputValues_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InputValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputValues;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventSetInputInt_Parms, Identifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Identifier_MetaData), NewProp_Identifier_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::NewProp_InputValues_Inner = { "InputValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::NewProp_InputValues = { "InputValues", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventSetInputInt_Parms, InputValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputValues_MetaData), NewProp_InputValues_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::NewProp_Identifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::NewProp_InputValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::NewProp_InputValues,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "SetInputInt", nullptr, nullptr, Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::SubstanceGraphInstance_eventSetInputInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::SubstanceGraphInstance_eventSetInputInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceGraphInstance::execSetInputInt)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
	P_GET_TARRAY_REF(int32,Z_Param_Out_InputValues);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInputInt(Z_Param_Identifier,Z_Param_Out_InputValues);
	P_NATIVE_END;
}
// End Class USubstanceGraphInstance Function SetInputInt

// Begin Class USubstanceGraphInstance Function SetInputString
struct Z_Construct_UFunction_USubstanceGraphInstance_SetInputString_Statics
{
	struct SubstanceGraphInstance_eventSetInputString_Parms
	{
		FString Identifier;
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubstanceGraphInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputString_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventSetInputString_Parms, Identifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Identifier_MetaData), NewProp_Identifier_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventSetInputString_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_SetInputString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_SetInputString_Statics::NewProp_Identifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_SetInputString_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "SetInputString", nullptr, nullptr, Z_Construct_UFunction_USubstanceGraphInstance_SetInputString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputString_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceGraphInstance_SetInputString_Statics::SubstanceGraphInstance_eventSetInputString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputString_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceGraphInstance_SetInputString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubstanceGraphInstance_SetInputString_Statics::SubstanceGraphInstance_eventSetInputString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceGraphInstance_SetInputString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_SetInputString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceGraphInstance::execSetInputString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInputString(Z_Param_Identifier,Z_Param_Value);
	P_NATIVE_END;
}
// End Class USubstanceGraphInstance Function SetInputString

// Begin Class USubstanceGraphInstance
void USubstanceGraphInstance::StaticRegisterNativesUSubstanceGraphInstance()
{
	UClass* Class = USubstanceGraphInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateMaterial", &USubstanceGraphInstance::execCreateMaterial },
		{ "CreateOutputs", &USubstanceGraphInstance::execCreateOutputs },
		{ "Duplicate", &USubstanceGraphInstance::execDuplicate },
		{ "EnableOutput", &USubstanceGraphInstance::execEnableOutput },
		{ "GetConstantMaterial", &USubstanceGraphInstance::execGetConstantMaterial },
		{ "GetDynamicMaterialInstance", &USubstanceGraphInstance::execGetDynamicMaterialInstance },
		{ "GetFloatInputDesc", &USubstanceGraphInstance::execGetFloatInputDesc },
		{ "GetInputBool", &USubstanceGraphInstance::execGetInputBool },
		{ "GetInputColor", &USubstanceGraphInstance::execGetInputColor },
		{ "GetInputFloat", &USubstanceGraphInstance::execGetInputFloat },
		{ "GetInputInt", &USubstanceGraphInstance::execGetInputInt },
		{ "GetInputNames", &USubstanceGraphInstance::execGetInputNames },
		{ "GetInputString", &USubstanceGraphInstance::execGetInputString },
		{ "GetInputType", &USubstanceGraphInstance::execGetInputType },
		{ "GetInstanceDesc", &USubstanceGraphInstance::execGetInstanceDesc },
		{ "GetIntInputDesc", &USubstanceGraphInstance::execGetIntInputDesc },
		{ "GetOutputNames", &USubstanceGraphInstance::execGetOutputNames },
		{ "RenderSync", &USubstanceGraphInstance::execRenderSync },
		{ "SetInputBool", &USubstanceGraphInstance::execSetInputBool },
		{ "SetInputColor", &USubstanceGraphInstance::execSetInputColor },
		{ "SetInputFloat", &USubstanceGraphInstance::execSetInputFloat },
		{ "SetInputImg", &USubstanceGraphInstance::execSetInputImg },
		{ "SetInputInt", &USubstanceGraphInstance::execSetInputInt },
		{ "SetInputString", &USubstanceGraphInstance::execSetInputString },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubstanceGraphInstance);
UClass* Z_Construct_UClass_USubstanceGraphInstance_NoRegister()
{
	return USubstanceGraphInstance::StaticClass();
}
struct Z_Construct_UClass_USubstanceGraphInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SubstanceGraphInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SubstanceGraphInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackageURL_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceGraphInstance" },
		{ "ModuleRelativePath", "Public/SubstanceGraphInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentFactory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceGraphInstance" },
		{ "ModuleRelativePath", "Public/SubstanceGraphInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageSources_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceGraphInstance" },
		{ "ModuleRelativePath", "Public/SubstanceGraphInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreatedMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceGraphInstance" },
		{ "ModuleRelativePath", "Public/SubstanceGraphInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Presets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceGraphInstance" },
		{ "ModuleRelativePath", "Public/SubstanceGraphInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstantCreatedMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceGraphInstance" },
		{ "ModuleRelativePath", "Public/SubstanceGraphInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicCreatedMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceGraphInstance" },
		{ "ModuleRelativePath", "Public/SubstanceGraphInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputTextureLinkData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceGraphInstance" },
		{ "ModuleRelativePath", "Public/SubstanceGraphInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputInstances_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceGraphInstance" },
		{ "ModuleRelativePath", "Public/SubstanceGraphInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFrozen_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceGraphInstance" },
		{ "ModuleRelativePath", "Public/SubstanceGraphInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PackageURL;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentFactory;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImageSources_ValueProp;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ImageSources_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ImageSources;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatedMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Presets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Presets;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConstantCreatedMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicCreatedMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputTextureLinkData_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutputTextureLinkData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_OutputTextureLinkData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutputInstances_ValueProp;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_OutputInstances_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_OutputInstances;
	static void NewProp_bIsFrozen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFrozen;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USubstanceGraphInstance_CreateMaterial, "CreateMaterial" }, // 3171144601
		{ &Z_Construct_UFunction_USubstanceGraphInstance_CreateOutputs, "CreateOutputs" }, // 777498709
		{ &Z_Construct_UFunction_USubstanceGraphInstance_Duplicate, "Duplicate" }, // 1149949609
		{ &Z_Construct_UFunction_USubstanceGraphInstance_EnableOutput, "EnableOutput" }, // 2704498544
		{ &Z_Construct_UFunction_USubstanceGraphInstance_GetConstantMaterial, "GetConstantMaterial" }, // 2557206288
		{ &Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance, "GetDynamicMaterialInstance" }, // 681086267
		{ &Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc, "GetFloatInputDesc" }, // 3765599284
		{ &Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool, "GetInputBool" }, // 1438836650
		{ &Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor, "GetInputColor" }, // 2648497717
		{ &Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat, "GetInputFloat" }, // 2343810759
		{ &Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt, "GetInputInt" }, // 908387240
		{ &Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames, "GetInputNames" }, // 2904111086
		{ &Z_Construct_UFunction_USubstanceGraphInstance_GetInputString, "GetInputString" }, // 2330297076
		{ &Z_Construct_UFunction_USubstanceGraphInstance_GetInputType, "GetInputType" }, // 2361680474
		{ &Z_Construct_UFunction_USubstanceGraphInstance_GetInstanceDesc, "GetInstanceDesc" }, // 1438908921
		{ &Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc, "GetIntInputDesc" }, // 3411741496
		{ &Z_Construct_UFunction_USubstanceGraphInstance_GetOutputNames, "GetOutputNames" }, // 3332605108
		{ &Z_Construct_UFunction_USubstanceGraphInstance_RenderSync, "RenderSync" }, // 249023446
		{ &Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool, "SetInputBool" }, // 2698816541
		{ &Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor, "SetInputColor" }, // 1924730396
		{ &Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat, "SetInputFloat" }, // 1720058361
		{ &Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg, "SetInputImg" }, // 563175602
		{ &Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt, "SetInputInt" }, // 2707917289
		{ &Z_Construct_UFunction_USubstanceGraphInstance_SetInputString, "SetInputString" }, // 755733747
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubstanceGraphInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_PackageURL = { "PackageURL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubstanceGraphInstance, PackageURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackageURL_MetaData), NewProp_PackageURL_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_ParentFactory = { "ParentFactory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubstanceGraphInstance, ParentFactory), Z_Construct_UClass_USubstanceInstanceFactory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentFactory_MetaData), NewProp_ParentFactory_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_ImageSources_ValueProp = { "ImageSources", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_ImageSources_Key_KeyProp = { "ImageSources_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_ImageSources = { "ImageSources", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubstanceGraphInstance, ImageSources), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageSources_MetaData), NewProp_ImageSources_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_CreatedMaterial = { "CreatedMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubstanceGraphInstance, CreatedMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreatedMaterial_MetaData), NewProp_CreatedMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_Presets_Inner = { "Presets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSubstancePreset, METADATA_PARAMS(0, nullptr) }; // 1711863112
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_Presets = { "Presets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubstanceGraphInstance, Presets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Presets_MetaData), NewProp_Presets_MetaData) }; // 1711863112
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_ConstantCreatedMaterial = { "ConstantCreatedMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubstanceGraphInstance, ConstantCreatedMaterial), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstantCreatedMaterial_MetaData), NewProp_ConstantCreatedMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_DynamicCreatedMaterial = { "DynamicCreatedMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubstanceGraphInstance, DynamicCreatedMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicCreatedMaterial_MetaData), NewProp_DynamicCreatedMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_OutputTextureLinkData_ValueProp = { "OutputTextureLinkData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_OutputTextureLinkData_Key_KeyProp = { "OutputTextureLinkData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_OutputTextureLinkData = { "OutputTextureLinkData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubstanceGraphInstance, OutputTextureLinkData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputTextureLinkData_MetaData), NewProp_OutputTextureLinkData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_OutputInstances_ValueProp = { "OutputInstances", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USubstanceOutputData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_OutputInstances_Key_KeyProp = { "OutputInstances_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_OutputInstances = { "OutputInstances", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubstanceGraphInstance, OutputInstances), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputInstances_MetaData), NewProp_OutputInstances_MetaData) };
void Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_bIsFrozen_SetBit(void* Obj)
{
	((USubstanceGraphInstance*)Obj)->bIsFrozen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_bIsFrozen = { "bIsFrozen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USubstanceGraphInstance), &Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_bIsFrozen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFrozen_MetaData), NewProp_bIsFrozen_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubstanceGraphInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_PackageURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_ParentFactory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_ImageSources_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_ImageSources_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_ImageSources,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_CreatedMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_Presets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_Presets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_ConstantCreatedMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_DynamicCreatedMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_OutputTextureLinkData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_OutputTextureLinkData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_OutputTextureLinkData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_OutputInstances_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_OutputInstances_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_OutputInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_bIsFrozen,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceGraphInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USubstanceGraphInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceGraphInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USubstanceGraphInstance_Statics::ClassParams = {
	&USubstanceGraphInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USubstanceGraphInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceGraphInstance_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceGraphInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_USubstanceGraphInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USubstanceGraphInstance()
{
	if (!Z_Registration_Info_UClass_USubstanceGraphInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubstanceGraphInstance.OuterSingleton, Z_Construct_UClass_USubstanceGraphInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USubstanceGraphInstance.OuterSingleton;
}
template<> SUBSTANCECORE_API UClass* StaticClass<USubstanceGraphInstance>()
{
	return USubstanceGraphInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USubstanceGraphInstance);
USubstanceGraphInstance::~USubstanceGraphInstance() {}
// End Class USubstanceGraphInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceGraphInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USubstanceGraphInstance, USubstanceGraphInstance::StaticClass, TEXT("USubstanceGraphInstance"), &Z_Registration_Info_UClass_USubstanceGraphInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubstanceGraphInstance), 1516386518U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceGraphInstance_h_3401921228(TEXT("/Script/SubstanceCore"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceGraphInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceGraphInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
