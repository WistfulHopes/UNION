// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomCueInfoCategoryParam.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomCueInfoCategoryParam() {}

// Begin Cross Module References
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoCategoryParam();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin ScriptStruct FAtomCueInfoCategoryParam
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomCueInfoCategoryParam;
class UScriptStruct* FAtomCueInfoCategoryParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomCueInfoCategoryParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomCueInfoCategoryParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomCueInfoCategoryParam, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomCueInfoCategoryParam"));
	}
	return Z_Registration_Info_UScriptStruct_AtomCueInfoCategoryParam.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomCueInfoCategoryParam>()
{
	return FAtomCueInfoCategoryParam::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAtomCueInfoCategoryParam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomCueInfoCategoryParam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoCategoryParam" },
		{ "ModuleRelativePath", "Public/AtomCueInfoCategoryParam.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomCueInfoCategoryParam>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoCategoryParam_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomCueInfoCategoryParam, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomCueInfoCategoryParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoCategoryParam_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoCategoryParam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomCueInfoCategoryParam_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	nullptr,
	&NewStructOps,
	"AtomCueInfoCategoryParam",
	Z_Construct_UScriptStruct_FAtomCueInfoCategoryParam_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoCategoryParam_Statics::PropPointers),
	sizeof(FAtomCueInfoCategoryParam),
	alignof(FAtomCueInfoCategoryParam),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoCategoryParam_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAtomCueInfoCategoryParam_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoCategoryParam()
{
	if (!Z_Registration_Info_UScriptStruct_AtomCueInfoCategoryParam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomCueInfoCategoryParam.InnerSingleton, Z_Construct_UScriptStruct_FAtomCueInfoCategoryParam_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AtomCueInfoCategoryParam.InnerSingleton;
}
// End ScriptStruct FAtomCueInfoCategoryParam

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueInfoCategoryParam_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAtomCueInfoCategoryParam::StaticStruct, Z_Construct_UScriptStruct_FAtomCueInfoCategoryParam_Statics::NewStructOps, TEXT("AtomCueInfoCategoryParam"), &Z_Registration_Info_UScriptStruct_AtomCueInfoCategoryParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomCueInfoCategoryParam), 2241682654U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueInfoCategoryParam_h_3776986357(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueInfoCategoryParam_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueInfoCategoryParam_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
