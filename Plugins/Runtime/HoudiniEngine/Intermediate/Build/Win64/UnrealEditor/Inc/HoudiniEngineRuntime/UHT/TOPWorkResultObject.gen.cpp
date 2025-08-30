// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/TOPWorkResultObject.h"
#include "HoudiniEngineRuntime/Public/OutputActorOwner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTOPWorkResultObject() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniOutput_NoRegister();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGWorkResultState();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FOutputActorOwner();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTOPWorkResultObject();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin ScriptStruct FTOPWorkResultObject
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TOPWorkResultObject;
class UScriptStruct* FTOPWorkResultObject::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TOPWorkResultObject.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TOPWorkResultObject.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTOPWorkResultObject, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("TOPWorkResultObject"));
	}
	return Z_Registration_Info_UScriptStruct_TOPWorkResultObject.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FTOPWorkResultObject>()
{
	return FTOPWorkResultObject::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TOPWorkResultObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TOPWorkResultObject" },
		{ "ModuleRelativePath", "Public/TOPWorkResultObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TOPWorkResultObject" },
		{ "ModuleRelativePath", "Public/TOPWorkResultObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TOPWorkResultObject" },
		{ "ModuleRelativePath", "Public/TOPWorkResultObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkItemResultInfoIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TOPWorkResultObject" },
		{ "ModuleRelativePath", "Public/TOPWorkResultObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultOutputs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TOPWorkResultObject" },
		{ "ModuleRelativePath", "Public/TOPWorkResultObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoBakedSinceLastLoad_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TOPWorkResultObject" },
		{ "ModuleRelativePath", "Public/TOPWorkResultObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputActorOwner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TOPWorkResultObject" },
		{ "ModuleRelativePath", "Public/TOPWorkResultObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WorkItemResultInfoIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResultOutputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ResultOutputs;
	static void NewProp_bAutoBakedSinceLastLoad_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoBakedSinceLastLoad;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputActorOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTOPWorkResultObject>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000400000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTOPWorkResultObject, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000400000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTOPWorkResultObject, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000400000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTOPWorkResultObject, State), Z_Construct_UEnum_HoudiniEngineRuntime_EPDGWorkResultState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) }; // 1659953235
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_WorkItemResultInfoIndex = { "WorkItemResultInfoIndex", nullptr, (EPropertyFlags)0x0010000400000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTOPWorkResultObject, WorkItemResultInfoIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkItemResultInfoIndex_MetaData), NewProp_WorkItemResultInfoIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_ResultOutputs_Inner = { "ResultOutputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniOutput_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_ResultOutputs = { "ResultOutputs", nullptr, (EPropertyFlags)0x0020080400000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTOPWorkResultObject, ResultOutputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultOutputs_MetaData), NewProp_ResultOutputs_MetaData) };
void Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_bAutoBakedSinceLastLoad_SetBit(void* Obj)
{
	((FTOPWorkResultObject*)Obj)->bAutoBakedSinceLastLoad = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_bAutoBakedSinceLastLoad = { "bAutoBakedSinceLastLoad", nullptr, (EPropertyFlags)0x0020080400000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTOPWorkResultObject), &Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_bAutoBakedSinceLastLoad_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoBakedSinceLastLoad_MetaData), NewProp_bAutoBakedSinceLastLoad_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_OutputActorOwner = { "OutputActorOwner", nullptr, (EPropertyFlags)0x0040000400000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTOPWorkResultObject, OutputActorOwner), Z_Construct_UScriptStruct_FOutputActorOwner, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputActorOwner_MetaData), NewProp_OutputActorOwner_MetaData) }; // 990939271
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_State_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_WorkItemResultInfoIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_ResultOutputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_ResultOutputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_bAutoBakedSinceLastLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_OutputActorOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"TOPWorkResultObject",
	Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::PropPointers),
	sizeof(FTOPWorkResultObject),
	alignof(FTOPWorkResultObject),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTOPWorkResultObject()
{
	if (!Z_Registration_Info_UScriptStruct_TOPWorkResultObject.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TOPWorkResultObject.InnerSingleton, Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TOPWorkResultObject.InnerSingleton;
}
// End ScriptStruct FTOPWorkResultObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_TOPWorkResultObject_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTOPWorkResultObject::StaticStruct, Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewStructOps, TEXT("TOPWorkResultObject"), &Z_Registration_Info_UScriptStruct_TOPWorkResultObject, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTOPWorkResultObject), 2408953892U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_TOPWorkResultObject_h_3258763233(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_TOPWorkResultObject_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_TOPWorkResultObject_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
