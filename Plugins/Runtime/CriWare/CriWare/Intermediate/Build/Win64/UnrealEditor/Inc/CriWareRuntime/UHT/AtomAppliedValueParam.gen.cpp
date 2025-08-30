// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomAppliedValueParam.h"
#include "CriWareRuntime/Public/AtomSelectorParam.h"
#include "CriWareRuntime/Public/BusSendLevelByNameParam.h"
#include "CriWareRuntime/Public/BusSendLevelOffsetByNameParam.h"
#include "CriWareRuntime/Public/BusSendLevelOffsetParam.h"
#include "CriWareRuntime/Public/BusSendLevelParam.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomAppliedValueParam() {}

// Begin Cross Module References
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAppliedValueParam();
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSelectorParam();
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBusSendLevelByNameParam();
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBusSendLevelOffsetByNameParam();
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBusSendLevelOffsetParam();
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBusSendLevelParam();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin ScriptStruct FAtomAppliedValueParam
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomAppliedValueParam;
class UScriptStruct* FAtomAppliedValueParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomAppliedValueParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomAppliedValueParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomAppliedValueParam, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomAppliedValueParam"));
	}
	return Z_Registration_Info_UScriptStruct_AtomAppliedValueParam.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomAppliedValueParam>()
{
	return FAtomAppliedValueParam::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomAppliedValueParam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAppliedValueParam" },
		{ "ModuleRelativePath", "Public/AtomAppliedValueParam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BusSendLevelParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAppliedValueParam" },
		{ "ModuleRelativePath", "Public/AtomAppliedValueParam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BusSendLevelByNameParams_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAppliedValueParam" },
		{ "ModuleRelativePath", "Public/AtomAppliedValueParam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BusSendLevelOffsetParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAppliedValueParam" },
		{ "ModuleRelativePath", "Public/AtomAppliedValueParam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BusSendLevelOffsetByNameParams_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAppliedValueParam" },
		{ "ModuleRelativePath", "Public/AtomAppliedValueParam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAppliedValueParam" },
		{ "ModuleRelativePath", "Public/AtomAppliedValueParam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AtomSelectorParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAppliedValueParam" },
		{ "ModuleRelativePath", "Public/AtomAppliedValueParam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AsrRackIDs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAppliedValueParam" },
		{ "ModuleRelativePath", "Public/AtomAppliedValueParam.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BusSendLevelParam;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BusSendLevelByNameParams_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BusSendLevelByNameParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BusSendLevelOffsetParam;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BusSendLevelOffsetByNameParams_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BusSendLevelOffsetByNameParams;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BlockIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AtomSelectorParam;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AsrRackIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AsrRackIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomAppliedValueParam>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_PitchValue = { "PitchValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomAppliedValueParam, PitchValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchValue_MetaData), NewProp_PitchValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_BusSendLevelParam = { "BusSendLevelParam", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomAppliedValueParam, BusSendLevelParam), Z_Construct_UScriptStruct_FBusSendLevelParam, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BusSendLevelParam_MetaData), NewProp_BusSendLevelParam_MetaData) }; // 2890445511
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_BusSendLevelByNameParams_Inner = { "BusSendLevelByNameParams", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBusSendLevelByNameParam, METADATA_PARAMS(0, nullptr) }; // 3937922822
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_BusSendLevelByNameParams = { "BusSendLevelByNameParams", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomAppliedValueParam, BusSendLevelByNameParams), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BusSendLevelByNameParams_MetaData), NewProp_BusSendLevelByNameParams_MetaData) }; // 3937922822
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_BusSendLevelOffsetParam = { "BusSendLevelOffsetParam", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomAppliedValueParam, BusSendLevelOffsetParam), Z_Construct_UScriptStruct_FBusSendLevelOffsetParam, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BusSendLevelOffsetParam_MetaData), NewProp_BusSendLevelOffsetParam_MetaData) }; // 3856380155
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_BusSendLevelOffsetByNameParams_Inner = { "BusSendLevelOffsetByNameParams", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBusSendLevelOffsetByNameParam, METADATA_PARAMS(0, nullptr) }; // 1967897368
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_BusSendLevelOffsetByNameParams = { "BusSendLevelOffsetByNameParams", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomAppliedValueParam, BusSendLevelOffsetByNameParams), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BusSendLevelOffsetByNameParams_MetaData), NewProp_BusSendLevelOffsetByNameParams_MetaData) }; // 1967897368
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_BlockIndex = { "BlockIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomAppliedValueParam, BlockIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockIndex_MetaData), NewProp_BlockIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_AtomSelectorParam = { "AtomSelectorParam", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomAppliedValueParam, AtomSelectorParam), Z_Construct_UScriptStruct_FAtomSelectorParam, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AtomSelectorParam_MetaData), NewProp_AtomSelectorParam_MetaData) }; // 171946896
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_AsrRackIDs_Inner = { "AsrRackIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_AsrRackIDs = { "AsrRackIDs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomAppliedValueParam, AsrRackIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AsrRackIDs_MetaData), NewProp_AsrRackIDs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_PitchValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_BusSendLevelParam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_BusSendLevelByNameParams_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_BusSendLevelByNameParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_BusSendLevelOffsetParam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_BusSendLevelOffsetByNameParams_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_BusSendLevelOffsetByNameParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_BlockIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_AtomSelectorParam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_AsrRackIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_AsrRackIDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	nullptr,
	&NewStructOps,
	"AtomAppliedValueParam",
	Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::PropPointers),
	sizeof(FAtomAppliedValueParam),
	alignof(FAtomAppliedValueParam),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAtomAppliedValueParam()
{
	if (!Z_Registration_Info_UScriptStruct_AtomAppliedValueParam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomAppliedValueParam.InnerSingleton, Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AtomAppliedValueParam.InnerSingleton;
}
// End ScriptStruct FAtomAppliedValueParam

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAppliedValueParam_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAtomAppliedValueParam::StaticStruct, Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewStructOps, TEXT("AtomAppliedValueParam"), &Z_Registration_Info_UScriptStruct_AtomAppliedValueParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomAppliedValueParam), 2958385128U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAppliedValueParam_h_531996732(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAppliedValueParam_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAppliedValueParam_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
