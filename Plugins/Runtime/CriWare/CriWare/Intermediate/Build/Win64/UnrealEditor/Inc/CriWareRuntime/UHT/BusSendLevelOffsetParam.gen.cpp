// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/BusSendLevelOffsetParam.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBusSendLevelOffsetParam() {}

// Begin Cross Module References
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBusSendLevelOffsetParam();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin ScriptStruct FBusSendLevelOffsetParam
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BusSendLevelOffsetParam;
class UScriptStruct* FBusSendLevelOffsetParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BusSendLevelOffsetParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BusSendLevelOffsetParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBusSendLevelOffsetParam, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("BusSendLevelOffsetParam"));
	}
	return Z_Registration_Info_UScriptStruct_BusSendLevelOffsetParam.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FBusSendLevelOffsetParam>()
{
	return FBusSendLevelOffsetParam::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBusSendLevelOffsetParam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BusSendLevelOffsetParam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BusId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BusSendLevelOffsetParam" },
		{ "ModuleRelativePath", "Public/BusSendLevelOffsetParam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BusSendLevelOffsetParam" },
		{ "ModuleRelativePath", "Public/BusSendLevelOffsetParam.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_BusId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LevelOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBusSendLevelOffsetParam>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBusSendLevelOffsetParam_Statics::NewProp_BusId = { "BusId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBusSendLevelOffsetParam, BusId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BusId_MetaData), NewProp_BusId_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBusSendLevelOffsetParam_Statics::NewProp_LevelOffset = { "LevelOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBusSendLevelOffsetParam, LevelOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelOffset_MetaData), NewProp_LevelOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBusSendLevelOffsetParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBusSendLevelOffsetParam_Statics::NewProp_BusId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBusSendLevelOffsetParam_Statics::NewProp_LevelOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBusSendLevelOffsetParam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBusSendLevelOffsetParam_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	nullptr,
	&NewStructOps,
	"BusSendLevelOffsetParam",
	Z_Construct_UScriptStruct_FBusSendLevelOffsetParam_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBusSendLevelOffsetParam_Statics::PropPointers),
	sizeof(FBusSendLevelOffsetParam),
	alignof(FBusSendLevelOffsetParam),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBusSendLevelOffsetParam_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBusSendLevelOffsetParam_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBusSendLevelOffsetParam()
{
	if (!Z_Registration_Info_UScriptStruct_BusSendLevelOffsetParam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BusSendLevelOffsetParam.InnerSingleton, Z_Construct_UScriptStruct_FBusSendLevelOffsetParam_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BusSendLevelOffsetParam.InnerSingleton;
}
// End ScriptStruct FBusSendLevelOffsetParam

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_BusSendLevelOffsetParam_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBusSendLevelOffsetParam::StaticStruct, Z_Construct_UScriptStruct_FBusSendLevelOffsetParam_Statics::NewStructOps, TEXT("BusSendLevelOffsetParam"), &Z_Registration_Info_UScriptStruct_BusSendLevelOffsetParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBusSendLevelOffsetParam), 3856380155U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_BusSendLevelOffsetParam_h_3005683356(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_BusSendLevelOffsetParam_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_BusSendLevelOffsetParam_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
