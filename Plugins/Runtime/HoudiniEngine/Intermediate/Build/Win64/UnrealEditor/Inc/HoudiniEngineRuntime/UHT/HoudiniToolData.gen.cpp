// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniToolData.h"
#include "HoudiniEngineRuntime/Public/HImageData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniToolData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniToolData();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniToolData_NoRegister();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolSelectionType();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolType();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHImageData();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UHoudiniToolData Function ConvertToJSONData
struct Z_Construct_UFunction_UHoudiniToolData_ConvertToJSONData_Statics
{
	struct HoudiniToolData_eventConvertToJSONData_Parms
	{
		FString JSONData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniToolData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_JSONData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniToolData_ConvertToJSONData_Statics::NewProp_JSONData = { "JSONData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniToolData_eventConvertToJSONData_Parms, JSONData), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHoudiniToolData_ConvertToJSONData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HoudiniToolData_eventConvertToJSONData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniToolData_ConvertToJSONData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniToolData_eventConvertToJSONData_Parms), &Z_Construct_UFunction_UHoudiniToolData_ConvertToJSONData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniToolData_ConvertToJSONData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniToolData_ConvertToJSONData_Statics::NewProp_JSONData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniToolData_ConvertToJSONData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniToolData_ConvertToJSONData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniToolData_ConvertToJSONData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniToolData, nullptr, "ConvertToJSONData", nullptr, nullptr, Z_Construct_UFunction_UHoudiniToolData_ConvertToJSONData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniToolData_ConvertToJSONData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniToolData_ConvertToJSONData_Statics::HoudiniToolData_eventConvertToJSONData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniToolData_ConvertToJSONData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniToolData_ConvertToJSONData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHoudiniToolData_ConvertToJSONData_Statics::HoudiniToolData_eventConvertToJSONData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHoudiniToolData_ConvertToJSONData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniToolData_ConvertToJSONData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoudiniToolData::execConvertToJSONData)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_JSONData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConvertToJSONData(Z_Param_Out_JSONData);
	P_NATIVE_END;
}
// End Class UHoudiniToolData Function ConvertToJSONData

// Begin Class UHoudiniToolData Function PopulateFromJSONData
struct Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONData_Statics
{
	struct HoudiniToolData_eventPopulateFromJSONData_Parms
	{
		FString JSONData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniToolData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JSONData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_JSONData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONData_Statics::NewProp_JSONData = { "JSONData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniToolData_eventPopulateFromJSONData_Parms, JSONData), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JSONData_MetaData), NewProp_JSONData_MetaData) };
void Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HoudiniToolData_eventPopulateFromJSONData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniToolData_eventPopulateFromJSONData_Parms), &Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONData_Statics::NewProp_JSONData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniToolData, nullptr, "PopulateFromJSONData", nullptr, nullptr, Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONData_Statics::HoudiniToolData_eventPopulateFromJSONData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONData_Statics::HoudiniToolData_eventPopulateFromJSONData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoudiniToolData::execPopulateFromJSONData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_JSONData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PopulateFromJSONData(Z_Param_JSONData);
	P_NATIVE_END;
}
// End Class UHoudiniToolData Function PopulateFromJSONData

// Begin Class UHoudiniToolData Function PopulateFromJSONFile
struct Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONFile_Statics
{
	struct HoudiniToolData_eventPopulateFromJSONFile_Parms
	{
		FString JsonFilePath;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniToolData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonFilePath;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONFile_Statics::NewProp_JsonFilePath = { "JsonFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniToolData_eventPopulateFromJSONFile_Parms, JsonFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonFilePath_MetaData), NewProp_JsonFilePath_MetaData) };
void Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HoudiniToolData_eventPopulateFromJSONFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniToolData_eventPopulateFromJSONFile_Parms), &Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONFile_Statics::NewProp_JsonFilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniToolData, nullptr, "PopulateFromJSONFile", nullptr, nullptr, Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONFile_Statics::HoudiniToolData_eventPopulateFromJSONFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONFile_Statics::HoudiniToolData_eventPopulateFromJSONFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoudiniToolData::execPopulateFromJSONFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_JsonFilePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PopulateFromJSONFile(Z_Param_JsonFilePath);
	P_NATIVE_END;
}
// End Class UHoudiniToolData Function PopulateFromJSONFile

// Begin Class UHoudiniToolData Function SaveToJSONFile
struct Z_Construct_UFunction_UHoudiniToolData_SaveToJSONFile_Statics
{
	struct HoudiniToolData_eventSaveToJSONFile_Parms
	{
		FString JsonFilePath;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniToolData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonFilePath;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniToolData_SaveToJSONFile_Statics::NewProp_JsonFilePath = { "JsonFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniToolData_eventSaveToJSONFile_Parms, JsonFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonFilePath_MetaData), NewProp_JsonFilePath_MetaData) };
void Z_Construct_UFunction_UHoudiniToolData_SaveToJSONFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HoudiniToolData_eventSaveToJSONFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniToolData_SaveToJSONFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniToolData_eventSaveToJSONFile_Parms), &Z_Construct_UFunction_UHoudiniToolData_SaveToJSONFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniToolData_SaveToJSONFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniToolData_SaveToJSONFile_Statics::NewProp_JsonFilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniToolData_SaveToJSONFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniToolData_SaveToJSONFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniToolData_SaveToJSONFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniToolData, nullptr, "SaveToJSONFile", nullptr, nullptr, Z_Construct_UFunction_UHoudiniToolData_SaveToJSONFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniToolData_SaveToJSONFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniToolData_SaveToJSONFile_Statics::HoudiniToolData_eventSaveToJSONFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniToolData_SaveToJSONFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniToolData_SaveToJSONFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHoudiniToolData_SaveToJSONFile_Statics::HoudiniToolData_eventSaveToJSONFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHoudiniToolData_SaveToJSONFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniToolData_SaveToJSONFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoudiniToolData::execSaveToJSONFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_JsonFilePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SaveToJSONFile(Z_Param_JsonFilePath);
	P_NATIVE_END;
}
// End Class UHoudiniToolData Function SaveToJSONFile

// Begin Class UHoudiniToolData
void UHoudiniToolData::StaticRegisterNativesUHoudiniToolData()
{
	UClass* Class = UHoudiniToolData::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConvertToJSONData", &UHoudiniToolData::execConvertToJSONData },
		{ "PopulateFromJSONData", &UHoudiniToolData::execPopulateFromJSONData },
		{ "PopulateFromJSONFile", &UHoudiniToolData::execPopulateFromJSONFile },
		{ "SaveToJSONFile", &UHoudiniToolData::execSaveToJSONFile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniToolData);
UClass* Z_Construct_UClass_UHoudiniToolData_NoRegister()
{
	return UHoudiniToolData::StaticClass();
}
struct Z_Construct_UClass_UHoudiniToolData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HoudiniToolData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HoudiniToolData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniToolData" },
		{ "ModuleRelativePath", "Public/HoudiniToolData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolTip_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniToolData" },
		{ "ModuleRelativePath", "Public/HoudiniToolData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconImageData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniToolData" },
		{ "ModuleRelativePath", "Public/HoudiniToolData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconSourcePath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniToolData" },
		{ "ModuleRelativePath", "Public/HoudiniToolData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HelpURL_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniToolData" },
		{ "ModuleRelativePath", "Public/HoudiniToolData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniToolData" },
		{ "ModuleRelativePath", "Public/HoudiniToolData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniToolData" },
		{ "ModuleRelativePath", "Public/HoudiniToolData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniToolData" },
		{ "ModuleRelativePath", "Public/HoudiniToolData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceAssetPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniToolData" },
		{ "ModuleRelativePath", "Public/HoudiniToolData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ToolTip;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IconImageData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IconSourcePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HelpURL;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static void NewProp_DefaultTool_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DefaultTool;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectionType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceAssetPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHoudiniToolData_ConvertToJSONData, "ConvertToJSONData" }, // 74241075
		{ &Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONData, "PopulateFromJSONData" }, // 4048876933
		{ &Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONFile, "PopulateFromJSONFile" }, // 1255866221
		{ &Z_Construct_UFunction_UHoudiniToolData_SaveToJSONFile, "SaveToJSONFile" }, // 2773559642
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniToolData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniToolData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_ToolTip = { "ToolTip", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniToolData, ToolTip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolTip_MetaData), NewProp_ToolTip_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_IconImageData = { "IconImageData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniToolData, IconImageData), Z_Construct_UScriptStruct_FHImageData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconImageData_MetaData), NewProp_IconImageData_MetaData) }; // 2969160138
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_IconSourcePath = { "IconSourcePath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniToolData, IconSourcePath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconSourcePath_MetaData), NewProp_IconSourcePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_HelpURL = { "HelpURL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniToolData, HelpURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HelpURL_MetaData), NewProp_HelpURL_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniToolData, Type), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 536491565
void Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_DefaultTool_SetBit(void* Obj)
{
	((UHoudiniToolData*)Obj)->DefaultTool = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_DefaultTool = { "DefaultTool", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniToolData), &Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_DefaultTool_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultTool_MetaData), NewProp_DefaultTool_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_SelectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniToolData, SelectionType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolSelectionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionType_MetaData), NewProp_SelectionType_MetaData) }; // 1679578419
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_SourceAssetPath = { "SourceAssetPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniToolData, SourceAssetPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceAssetPath_MetaData), NewProp_SourceAssetPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniToolData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_ToolTip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_IconImageData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_IconSourcePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_HelpURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_DefaultTool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_SelectionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_SelectionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_SourceAssetPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniToolData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniToolData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniToolData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniToolData_Statics::ClassParams = {
	&UHoudiniToolData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHoudiniToolData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniToolData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniToolData_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniToolData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniToolData()
{
	if (!Z_Registration_Info_UClass_UHoudiniToolData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniToolData.OuterSingleton, Z_Construct_UClass_UHoudiniToolData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniToolData.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniToolData>()
{
	return UHoudiniToolData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniToolData);
UHoudiniToolData::~UHoudiniToolData() {}
// End Class UHoudiniToolData

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniToolData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniToolData, UHoudiniToolData::StaticClass, TEXT("UHoudiniToolData"), &Z_Registration_Info_UClass_UHoudiniToolData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniToolData), 4290014185U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniToolData_h_789823102(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniToolData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniToolData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
