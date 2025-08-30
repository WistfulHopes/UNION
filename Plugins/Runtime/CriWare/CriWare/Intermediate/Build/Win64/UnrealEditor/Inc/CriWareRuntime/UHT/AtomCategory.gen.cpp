// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomCategory.h"
#include "CriWareRuntime/Public/AtomAisacInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomCategory() {}

// Begin Cross Module References
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomCategory();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomCategory_NoRegister();
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAisacInfo();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Class UAtomCategory Function GetAttachedAisacInfoById
struct Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics
{
	struct AtomCategory_eventGetAttachedAisacInfoById_Parms
	{
		int32 CategoryId;
		int32 AisacAttachedIndex;
		bool IsSuccess;
		FAtomAisacInfo AisacInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomCategory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CategoryId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AisacAttachedIndex;
	static void NewProp_IsSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSuccess;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AisacInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::NewProp_CategoryId = { "CategoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomCategory_eventGetAttachedAisacInfoById_Parms, CategoryId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::NewProp_AisacAttachedIndex = { "AisacAttachedIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomCategory_eventGetAttachedAisacInfoById_Parms, AisacAttachedIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::NewProp_IsSuccess_SetBit(void* Obj)
{
	((AtomCategory_eventGetAttachedAisacInfoById_Parms*)Obj)->IsSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::NewProp_IsSuccess = { "IsSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AtomCategory_eventGetAttachedAisacInfoById_Parms), &Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::NewProp_IsSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::NewProp_AisacInfo = { "AisacInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomCategory_eventGetAttachedAisacInfoById_Parms, AisacInfo), Z_Construct_UScriptStruct_FAtomAisacInfo, METADATA_PARAMS(0, nullptr) }; // 3270549582
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::NewProp_CategoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::NewProp_AisacAttachedIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::NewProp_IsSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::NewProp_AisacInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, nullptr, "GetAttachedAisacInfoById", nullptr, nullptr, Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::AtomCategory_eventGetAttachedAisacInfoById_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::AtomCategory_eventGetAttachedAisacInfoById_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomCategory::execGetAttachedAisacInfoById)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_CategoryId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AisacAttachedIndex);
	P_GET_UBOOL_REF(Z_Param_Out_IsSuccess);
	P_GET_STRUCT_REF(FAtomAisacInfo,Z_Param_Out_AisacInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAtomCategory::GetAttachedAisacInfoById(Z_Param_CategoryId,Z_Param_AisacAttachedIndex,Z_Param_Out_IsSuccess,Z_Param_Out_AisacInfo);
	P_NATIVE_END;
}
// End Class UAtomCategory Function GetAttachedAisacInfoById

// Begin Class UAtomCategory Function GetAttachedAisacInfoByName
struct Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics
{
	struct AtomCategory_eventGetAttachedAisacInfoByName_Parms
	{
		FString CategoryName;
		int32 AisacAttachedIndex;
		bool IsSuccess;
		FAtomAisacInfo AisacInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomCategory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CategoryName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AisacAttachedIndex;
	static void NewProp_IsSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSuccess;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AisacInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomCategory_eventGetAttachedAisacInfoByName_Parms, CategoryName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryName_MetaData), NewProp_CategoryName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::NewProp_AisacAttachedIndex = { "AisacAttachedIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomCategory_eventGetAttachedAisacInfoByName_Parms, AisacAttachedIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::NewProp_IsSuccess_SetBit(void* Obj)
{
	((AtomCategory_eventGetAttachedAisacInfoByName_Parms*)Obj)->IsSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::NewProp_IsSuccess = { "IsSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AtomCategory_eventGetAttachedAisacInfoByName_Parms), &Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::NewProp_IsSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::NewProp_AisacInfo = { "AisacInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomCategory_eventGetAttachedAisacInfoByName_Parms, AisacInfo), Z_Construct_UScriptStruct_FAtomAisacInfo, METADATA_PARAMS(0, nullptr) }; // 3270549582
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::NewProp_CategoryName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::NewProp_AisacAttachedIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::NewProp_IsSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::NewProp_AisacInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, nullptr, "GetAttachedAisacInfoByName", nullptr, nullptr, Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::AtomCategory_eventGetAttachedAisacInfoByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::AtomCategory_eventGetAttachedAisacInfoByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomCategory::execGetAttachedAisacInfoByName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CategoryName);
	P_GET_PROPERTY(FIntProperty,Z_Param_AisacAttachedIndex);
	P_GET_UBOOL_REF(Z_Param_Out_IsSuccess);
	P_GET_STRUCT_REF(FAtomAisacInfo,Z_Param_Out_AisacInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAtomCategory::GetAttachedAisacInfoByName(Z_Param_CategoryName,Z_Param_AisacAttachedIndex,Z_Param_Out_IsSuccess,Z_Param_Out_AisacInfo);
	P_NATIVE_END;
}
// End Class UAtomCategory Function GetAttachedAisacInfoByName

// Begin Class UAtomCategory Function GetCurrentAisacControlValueById
struct Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById_Statics
{
	struct AtomCategory_eventGetCurrentAisacControlValueById_Parms
	{
		int32 CategoryId;
		int32 AisacControlID;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomCategory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CategoryId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AisacControlID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById_Statics::NewProp_CategoryId = { "CategoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomCategory_eventGetCurrentAisacControlValueById_Parms, CategoryId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById_Statics::NewProp_AisacControlID = { "AisacControlID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomCategory_eventGetCurrentAisacControlValueById_Parms, AisacControlID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomCategory_eventGetCurrentAisacControlValueById_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById_Statics::NewProp_CategoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById_Statics::NewProp_AisacControlID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, nullptr, "GetCurrentAisacControlValueById", nullptr, nullptr, Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById_Statics::AtomCategory_eventGetCurrentAisacControlValueById_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById_Statics::AtomCategory_eventGetCurrentAisacControlValueById_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomCategory::execGetCurrentAisacControlValueById)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_CategoryId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AisacControlID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UAtomCategory::GetCurrentAisacControlValueById(Z_Param_CategoryId,Z_Param_AisacControlID);
	P_NATIVE_END;
}
// End Class UAtomCategory Function GetCurrentAisacControlValueById

// Begin Class UAtomCategory Function GetCurrentAisacControlValueByName
struct Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics
{
	struct AtomCategory_eventGetCurrentAisacControlValueByName_Parms
	{
		FString CategoryName;
		FString AisacControlName;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomCategory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AisacControlName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CategoryName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AisacControlName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomCategory_eventGetCurrentAisacControlValueByName_Parms, CategoryName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryName_MetaData), NewProp_CategoryName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::NewProp_AisacControlName = { "AisacControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomCategory_eventGetCurrentAisacControlValueByName_Parms, AisacControlName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AisacControlName_MetaData), NewProp_AisacControlName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomCategory_eventGetCurrentAisacControlValueByName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::NewProp_CategoryName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::NewProp_AisacControlName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, nullptr, "GetCurrentAisacControlValueByName", nullptr, nullptr, Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::AtomCategory_eventGetCurrentAisacControlValueByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::AtomCategory_eventGetCurrentAisacControlValueByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomCategory::execGetCurrentAisacControlValueByName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CategoryName);
	P_GET_PROPERTY(FStrProperty,Z_Param_AisacControlName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UAtomCategory::GetCurrentAisacControlValueByName(Z_Param_CategoryName,Z_Param_AisacControlName);
	P_NATIVE_END;
}
// End Class UAtomCategory Function GetCurrentAisacControlValueByName

// Begin Class UAtomCategory Function GetNumAttachedAisacsById
struct Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsById_Statics
{
	struct AtomCategory_eventGetNumAttachedAisacsById_Parms
	{
		int32 CategoryId;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomCategory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CategoryId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsById_Statics::NewProp_CategoryId = { "CategoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomCategory_eventGetNumAttachedAisacsById_Parms, CategoryId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomCategory_eventGetNumAttachedAisacsById_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsById_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsById_Statics::NewProp_CategoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsById_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsById_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, nullptr, "GetNumAttachedAisacsById", nullptr, nullptr, Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsById_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsById_Statics::AtomCategory_eventGetNumAttachedAisacsById_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsById_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsById_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsById_Statics::AtomCategory_eventGetNumAttachedAisacsById_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsById()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsById_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomCategory::execGetNumAttachedAisacsById)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_CategoryId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UAtomCategory::GetNumAttachedAisacsById(Z_Param_CategoryId);
	P_NATIVE_END;
}
// End Class UAtomCategory Function GetNumAttachedAisacsById

// Begin Class UAtomCategory Function GetNumAttachedAisacsByName
struct Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName_Statics
{
	struct AtomCategory_eventGetNumAttachedAisacsByName_Parms
	{
		FString CategoryName;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomCategory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CategoryName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomCategory_eventGetNumAttachedAisacsByName_Parms, CategoryName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryName_MetaData), NewProp_CategoryName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomCategory_eventGetNumAttachedAisacsByName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName_Statics::NewProp_CategoryName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, nullptr, "GetNumAttachedAisacsByName", nullptr, nullptr, Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName_Statics::AtomCategory_eventGetNumAttachedAisacsByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName_Statics::AtomCategory_eventGetNumAttachedAisacsByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomCategory::execGetNumAttachedAisacsByName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CategoryName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UAtomCategory::GetNumAttachedAisacsByName(Z_Param_CategoryName);
	P_NATIVE_END;
}
// End Class UAtomCategory Function GetNumAttachedAisacsByName

// Begin Class UAtomCategory Function GetVolumeByName
struct Z_Construct_UFunction_UAtomCategory_GetVolumeByName_Statics
{
	struct AtomCategory_eventGetVolumeByName_Parms
	{
		FString CategoryName;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomCategory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CategoryName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomCategory_GetVolumeByName_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomCategory_eventGetVolumeByName_Parms, CategoryName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryName_MetaData), NewProp_CategoryName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomCategory_GetVolumeByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomCategory_eventGetVolumeByName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCategory_GetVolumeByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetVolumeByName_Statics::NewProp_CategoryName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetVolumeByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetVolumeByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCategory_GetVolumeByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, nullptr, "GetVolumeByName", nullptr, nullptr, Z_Construct_UFunction_UAtomCategory_GetVolumeByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetVolumeByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomCategory_GetVolumeByName_Statics::AtomCategory_eventGetVolumeByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetVolumeByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomCategory_GetVolumeByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomCategory_GetVolumeByName_Statics::AtomCategory_eventGetVolumeByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomCategory_GetVolumeByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomCategory_GetVolumeByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomCategory::execGetVolumeByName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CategoryName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UAtomCategory::GetVolumeByName(Z_Param_CategoryName);
	P_NATIVE_END;
}
// End Class UAtomCategory Function GetVolumeByName

// Begin Class UAtomCategory Function IsPausedByName
struct Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics
{
	struct AtomCategory_eventIsPausedByName_Parms
	{
		FString CategoryName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomCategory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CategoryName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomCategory_eventIsPausedByName_Parms, CategoryName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryName_MetaData), NewProp_CategoryName_MetaData) };
void Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AtomCategory_eventIsPausedByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AtomCategory_eventIsPausedByName_Parms), &Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics::NewProp_CategoryName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, nullptr, "IsPausedByName", nullptr, nullptr, Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics::AtomCategory_eventIsPausedByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics::AtomCategory_eventIsPausedByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomCategory_IsPausedByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomCategory::execIsPausedByName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CategoryName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAtomCategory::IsPausedByName(Z_Param_CategoryName);
	P_NATIVE_END;
}
// End Class UAtomCategory Function IsPausedByName

// Begin Class UAtomCategory Function PauseByName
struct Z_Construct_UFunction_UAtomCategory_PauseByName_Statics
{
	struct AtomCategory_eventPauseByName_Parms
	{
		FString CategoryName;
		bool bPause;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomCategory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CategoryName;
	static void NewProp_bPause_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPause;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomCategory_PauseByName_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomCategory_eventPauseByName_Parms, CategoryName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryName_MetaData), NewProp_CategoryName_MetaData) };
void Z_Construct_UFunction_UAtomCategory_PauseByName_Statics::NewProp_bPause_SetBit(void* Obj)
{
	((AtomCategory_eventPauseByName_Parms*)Obj)->bPause = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomCategory_PauseByName_Statics::NewProp_bPause = { "bPause", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AtomCategory_eventPauseByName_Parms), &Z_Construct_UFunction_UAtomCategory_PauseByName_Statics::NewProp_bPause_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCategory_PauseByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_PauseByName_Statics::NewProp_CategoryName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_PauseByName_Statics::NewProp_bPause,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_PauseByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCategory_PauseByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, nullptr, "PauseByName", nullptr, nullptr, Z_Construct_UFunction_UAtomCategory_PauseByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_PauseByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomCategory_PauseByName_Statics::AtomCategory_eventPauseByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_PauseByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomCategory_PauseByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomCategory_PauseByName_Statics::AtomCategory_eventPauseByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomCategory_PauseByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomCategory_PauseByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomCategory::execPauseByName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CategoryName);
	P_GET_UBOOL(Z_Param_bPause);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAtomCategory::PauseByName(Z_Param_CategoryName,Z_Param_bPause);
	P_NATIVE_END;
}
// End Class UAtomCategory Function PauseByName

// Begin Class UAtomCategory Function ResetAllAisacControlById
struct Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById_Statics
{
	struct AtomCategory_eventResetAllAisacControlById_Parms
	{
		int32 CategoryId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomCategory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CategoryId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById_Statics::NewProp_CategoryId = { "CategoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomCategory_eventResetAllAisacControlById_Parms, CategoryId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AtomCategory_eventResetAllAisacControlById_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AtomCategory_eventResetAllAisacControlById_Parms), &Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById_Statics::NewProp_CategoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, nullptr, "ResetAllAisacControlById", nullptr, nullptr, Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById_Statics::AtomCategory_eventResetAllAisacControlById_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById_Statics::AtomCategory_eventResetAllAisacControlById_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomCategory::execResetAllAisacControlById)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_CategoryId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAtomCategory::ResetAllAisacControlById(Z_Param_CategoryId);
	P_NATIVE_END;
}
// End Class UAtomCategory Function ResetAllAisacControlById

// Begin Class UAtomCategory Function ResetAllAisacControlByName
struct Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics
{
	struct AtomCategory_eventResetAllAisacControlByName_Parms
	{
		FString CategoryName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomCategory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CategoryName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomCategory_eventResetAllAisacControlByName_Parms, CategoryName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryName_MetaData), NewProp_CategoryName_MetaData) };
void Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AtomCategory_eventResetAllAisacControlByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AtomCategory_eventResetAllAisacControlByName_Parms), &Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics::NewProp_CategoryName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, nullptr, "ResetAllAisacControlByName", nullptr, nullptr, Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics::AtomCategory_eventResetAllAisacControlByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics::AtomCategory_eventResetAllAisacControlByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomCategory::execResetAllAisacControlByName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CategoryName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAtomCategory::ResetAllAisacControlByName(Z_Param_CategoryName);
	P_NATIVE_END;
}
// End Class UAtomCategory Function ResetAllAisacControlByName

// Begin Class UAtomCategory Function SetAisacControlByName
struct Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics
{
	struct AtomCategory_eventSetAisacControlByName_Parms
	{
		FString CategoryName;
		FString AisacName;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomCategory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AisacName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CategoryName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AisacName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomCategory_eventSetAisacControlByName_Parms, CategoryName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryName_MetaData), NewProp_CategoryName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::NewProp_AisacName = { "AisacName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomCategory_eventSetAisacControlByName_Parms, AisacName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AisacName_MetaData), NewProp_AisacName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomCategory_eventSetAisacControlByName_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::NewProp_CategoryName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::NewProp_AisacName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, nullptr, "SetAisacControlByName", nullptr, nullptr, Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::AtomCategory_eventSetAisacControlByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::AtomCategory_eventSetAisacControlByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomCategory_SetAisacControlByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomCategory::execSetAisacControlByName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CategoryName);
	P_GET_PROPERTY(FStrProperty,Z_Param_AisacName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAtomCategory::SetAisacControlByName(Z_Param_CategoryName,Z_Param_AisacName,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UAtomCategory Function SetAisacControlByName

// Begin Class UAtomCategory Function SetMute
struct Z_Construct_UFunction_UAtomCategory_SetMute_Statics
{
	struct AtomCategory_eventSetMute_Parms
	{
		FString CategoryName;
		bool IsMute;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomCategory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CategoryName;
	static void NewProp_IsMute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsMute;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomCategory_SetMute_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomCategory_eventSetMute_Parms, CategoryName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryName_MetaData), NewProp_CategoryName_MetaData) };
void Z_Construct_UFunction_UAtomCategory_SetMute_Statics::NewProp_IsMute_SetBit(void* Obj)
{
	((AtomCategory_eventSetMute_Parms*)Obj)->IsMute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomCategory_SetMute_Statics::NewProp_IsMute = { "IsMute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AtomCategory_eventSetMute_Parms), &Z_Construct_UFunction_UAtomCategory_SetMute_Statics::NewProp_IsMute_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCategory_SetMute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_SetMute_Statics::NewProp_CategoryName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_SetMute_Statics::NewProp_IsMute,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_SetMute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCategory_SetMute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, nullptr, "SetMute", nullptr, nullptr, Z_Construct_UFunction_UAtomCategory_SetMute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_SetMute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomCategory_SetMute_Statics::AtomCategory_eventSetMute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_SetMute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomCategory_SetMute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomCategory_SetMute_Statics::AtomCategory_eventSetMute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomCategory_SetMute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomCategory_SetMute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomCategory::execSetMute)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CategoryName);
	P_GET_UBOOL(Z_Param_IsMute);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAtomCategory::SetMute(Z_Param_CategoryName,Z_Param_IsMute);
	P_NATIVE_END;
}
// End Class UAtomCategory Function SetMute

// Begin Class UAtomCategory Function SetVolumeByName
struct Z_Construct_UFunction_UAtomCategory_SetVolumeByName_Statics
{
	struct AtomCategory_eventSetVolumeByName_Parms
	{
		FString CategoryName;
		float Volume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomCategory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CategoryName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomCategory_SetVolumeByName_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomCategory_eventSetVolumeByName_Parms, CategoryName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryName_MetaData), NewProp_CategoryName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomCategory_SetVolumeByName_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomCategory_eventSetVolumeByName_Parms, Volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCategory_SetVolumeByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_SetVolumeByName_Statics::NewProp_CategoryName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_SetVolumeByName_Statics::NewProp_Volume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_SetVolumeByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCategory_SetVolumeByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, nullptr, "SetVolumeByName", nullptr, nullptr, Z_Construct_UFunction_UAtomCategory_SetVolumeByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_SetVolumeByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomCategory_SetVolumeByName_Statics::AtomCategory_eventSetVolumeByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_SetVolumeByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomCategory_SetVolumeByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomCategory_SetVolumeByName_Statics::AtomCategory_eventSetVolumeByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomCategory_SetVolumeByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomCategory_SetVolumeByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomCategory::execSetVolumeByName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CategoryName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAtomCategory::SetVolumeByName(Z_Param_CategoryName,Z_Param_Volume);
	P_NATIVE_END;
}
// End Class UAtomCategory Function SetVolumeByName

// Begin Class UAtomCategory Function StopByName
struct Z_Construct_UFunction_UAtomCategory_StopByName_Statics
{
	struct AtomCategory_eventStopByName_Parms
	{
		FString CategoryName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomCategory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CategoryName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomCategory_StopByName_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomCategory_eventStopByName_Parms, CategoryName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryName_MetaData), NewProp_CategoryName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCategory_StopByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_StopByName_Statics::NewProp_CategoryName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_StopByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCategory_StopByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, nullptr, "StopByName", nullptr, nullptr, Z_Construct_UFunction_UAtomCategory_StopByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_StopByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomCategory_StopByName_Statics::AtomCategory_eventStopByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_StopByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomCategory_StopByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomCategory_StopByName_Statics::AtomCategory_eventStopByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomCategory_StopByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomCategory_StopByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomCategory::execStopByName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CategoryName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAtomCategory::StopByName(Z_Param_CategoryName);
	P_NATIVE_END;
}
// End Class UAtomCategory Function StopByName

// Begin Class UAtomCategory
void UAtomCategory::StaticRegisterNativesUAtomCategory()
{
	UClass* Class = UAtomCategory::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAttachedAisacInfoById", &UAtomCategory::execGetAttachedAisacInfoById },
		{ "GetAttachedAisacInfoByName", &UAtomCategory::execGetAttachedAisacInfoByName },
		{ "GetCurrentAisacControlValueById", &UAtomCategory::execGetCurrentAisacControlValueById },
		{ "GetCurrentAisacControlValueByName", &UAtomCategory::execGetCurrentAisacControlValueByName },
		{ "GetNumAttachedAisacsById", &UAtomCategory::execGetNumAttachedAisacsById },
		{ "GetNumAttachedAisacsByName", &UAtomCategory::execGetNumAttachedAisacsByName },
		{ "GetVolumeByName", &UAtomCategory::execGetVolumeByName },
		{ "IsPausedByName", &UAtomCategory::execIsPausedByName },
		{ "PauseByName", &UAtomCategory::execPauseByName },
		{ "ResetAllAisacControlById", &UAtomCategory::execResetAllAisacControlById },
		{ "ResetAllAisacControlByName", &UAtomCategory::execResetAllAisacControlByName },
		{ "SetAisacControlByName", &UAtomCategory::execSetAisacControlByName },
		{ "SetMute", &UAtomCategory::execSetMute },
		{ "SetVolumeByName", &UAtomCategory::execSetVolumeByName },
		{ "StopByName", &UAtomCategory::execStopByName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomCategory);
UClass* Z_Construct_UClass_UAtomCategory_NoRegister()
{
	return UAtomCategory::StaticClass();
}
struct Z_Construct_UClass_UAtomCategory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AtomCategory.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AtomCategory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById, "GetAttachedAisacInfoById" }, // 513495346
		{ &Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName, "GetAttachedAisacInfoByName" }, // 2091007219
		{ &Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById, "GetCurrentAisacControlValueById" }, // 3678316320
		{ &Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName, "GetCurrentAisacControlValueByName" }, // 2053721435
		{ &Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsById, "GetNumAttachedAisacsById" }, // 2750243868
		{ &Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName, "GetNumAttachedAisacsByName" }, // 363494560
		{ &Z_Construct_UFunction_UAtomCategory_GetVolumeByName, "GetVolumeByName" }, // 4248110160
		{ &Z_Construct_UFunction_UAtomCategory_IsPausedByName, "IsPausedByName" }, // 1542111018
		{ &Z_Construct_UFunction_UAtomCategory_PauseByName, "PauseByName" }, // 4016787490
		{ &Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById, "ResetAllAisacControlById" }, // 1562433392
		{ &Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName, "ResetAllAisacControlByName" }, // 3919250723
		{ &Z_Construct_UFunction_UAtomCategory_SetAisacControlByName, "SetAisacControlByName" }, // 3064522252
		{ &Z_Construct_UFunction_UAtomCategory_SetMute, "SetMute" }, // 377410488
		{ &Z_Construct_UFunction_UAtomCategory_SetVolumeByName, "SetVolumeByName" }, // 2879110296
		{ &Z_Construct_UFunction_UAtomCategory_StopByName, "StopByName" }, // 2560013694
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomCategory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAtomCategory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAtomCategory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomCategory_Statics::ClassParams = {
	&UAtomCategory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAtomCategory_Statics::Class_MetaDataParams), Z_Construct_UClass_UAtomCategory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAtomCategory()
{
	if (!Z_Registration_Info_UClass_UAtomCategory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomCategory.OuterSingleton, Z_Construct_UClass_UAtomCategory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAtomCategory.OuterSingleton;
}
template<> CRIWARERUNTIME_API UClass* StaticClass<UAtomCategory>()
{
	return UAtomCategory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomCategory);
UAtomCategory::~UAtomCategory() {}
// End Class UAtomCategory

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAtomCategory, UAtomCategory::StaticClass, TEXT("UAtomCategory"), &Z_Registration_Info_UClass_UAtomCategory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomCategory), 920983671U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_310680467(TEXT("/Script/CriWareRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
