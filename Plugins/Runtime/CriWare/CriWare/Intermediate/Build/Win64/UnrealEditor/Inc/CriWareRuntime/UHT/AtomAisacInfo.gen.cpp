// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomAisacInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomAisacInfo() {}

// Begin Cross Module References
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAisacInfo();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin ScriptStruct FAtomAisacInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomAisacInfo;
class UScriptStruct* FAtomAisacInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomAisacInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomAisacInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomAisacInfo, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomAisacInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AtomAisacInfo.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomAisacInfo>()
{
	return FAtomAisacInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAtomAisacInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomAisacInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAisacInfo" },
		{ "ModuleRelativePath", "Public/AtomAisacInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultControlFlag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAisacInfo" },
		{ "ModuleRelativePath", "Public/AtomAisacInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultControlValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAisacInfo" },
		{ "ModuleRelativePath", "Public/AtomAisacInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAisacInfo" },
		{ "ModuleRelativePath", "Public/AtomAisacInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAisacInfo" },
		{ "ModuleRelativePath", "Public/AtomAisacInfo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_DefaultControlFlag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DefaultControlFlag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultControlValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControlId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ControlName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomAisacInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomAisacInfo, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
void Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::NewProp_DefaultControlFlag_SetBit(void* Obj)
{
	((FAtomAisacInfo*)Obj)->DefaultControlFlag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::NewProp_DefaultControlFlag = { "DefaultControlFlag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAtomAisacInfo), &Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::NewProp_DefaultControlFlag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultControlFlag_MetaData), NewProp_DefaultControlFlag_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::NewProp_DefaultControlValue = { "DefaultControlValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomAisacInfo, DefaultControlValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultControlValue_MetaData), NewProp_DefaultControlValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::NewProp_ControlId = { "ControlId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomAisacInfo, ControlId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlId_MetaData), NewProp_ControlId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomAisacInfo, ControlName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlName_MetaData), NewProp_ControlName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::NewProp_DefaultControlFlag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::NewProp_DefaultControlValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::NewProp_ControlId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::NewProp_ControlName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	nullptr,
	&NewStructOps,
	"AtomAisacInfo",
	Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::PropPointers),
	sizeof(FAtomAisacInfo),
	alignof(FAtomAisacInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAtomAisacInfo()
{
	if (!Z_Registration_Info_UScriptStruct_AtomAisacInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomAisacInfo.InnerSingleton, Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AtomAisacInfo.InnerSingleton;
}
// End ScriptStruct FAtomAisacInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAisacInfo_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAtomAisacInfo::StaticStruct, Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::NewStructOps, TEXT("AtomAisacInfo"), &Z_Registration_Info_UScriptStruct_AtomAisacInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomAisacInfo), 3270549582U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAisacInfo_h_179500107(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAisacInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAisacInfo_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
