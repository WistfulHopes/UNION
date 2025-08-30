// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomCueInfo.h"
#include "CriWareRuntime/Public/AtomAttenuationDistanceParam.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomCueInfo() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam();
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfo();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin ScriptStruct FAtomCueInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomCueInfo;
class UScriptStruct* FAtomCueInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomCueInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomCueInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomCueInfo, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomCueInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AtomCueInfo.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomCueInfo>()
{
	return FAtomCueInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAtomCueInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomCueInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfo" },
		{ "ModuleRelativePath", "Public/AtomCueInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeaderVisibility_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfo" },
		{ "ModuleRelativePath", "Public/AtomCueInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfo" },
		{ "ModuleRelativePath", "Public/AtomCueInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfo" },
		{ "ModuleRelativePath", "Public/AtomCueInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfo" },
		{ "ModuleRelativePath", "Public/AtomCueInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryNames_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfo" },
		{ "ModuleRelativePath", "Public/AtomCueInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AisacControlNames_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfo" },
		{ "ModuleRelativePath", "Public/AtomCueInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfo" },
		{ "ModuleRelativePath", "Public/AtomCueInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfo" },
		{ "ModuleRelativePath", "Public/AtomCueInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsParameterPalletAssigned_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfo" },
		{ "ModuleRelativePath", "Public/AtomCueInfo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
	static void NewProp_HeaderVisibility_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HeaderVisibility;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserData;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CategoryNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CategoryNames;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AisacControlNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AisacControlNames;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttenuationDistance;
	static void NewProp_bLooping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
	static void NewProp_bIsParameterPalletAssigned_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsParameterPalletAssigned;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomCueInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomCueInfo, ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
void Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_HeaderVisibility_SetBit(void* Obj)
{
	((FAtomCueInfo*)Obj)->HeaderVisibility = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_HeaderVisibility = { "HeaderVisibility", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAtomCueInfo), &Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_HeaderVisibility_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeaderVisibility_MetaData), NewProp_HeaderVisibility_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomCueInfo, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomCueInfo, Duration), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomCueInfo, UserData), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserData_MetaData), NewProp_UserData_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_CategoryNames_Inner = { "CategoryNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_CategoryNames = { "CategoryNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomCueInfo, CategoryNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryNames_MetaData), NewProp_CategoryNames_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_AisacControlNames_Inner = { "AisacControlNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_AisacControlNames = { "AisacControlNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomCueInfo, AisacControlNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AisacControlNames_MetaData), NewProp_AisacControlNames_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_AttenuationDistance = { "AttenuationDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomCueInfo, AttenuationDistance), Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttenuationDistance_MetaData), NewProp_AttenuationDistance_MetaData) }; // 1228509231
void Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bLooping_SetBit(void* Obj)
{
	((FAtomCueInfo*)Obj)->bLooping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAtomCueInfo), &Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLooping_MetaData), NewProp_bLooping_MetaData) };
void Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bIsParameterPalletAssigned_SetBit(void* Obj)
{
	((FAtomCueInfo*)Obj)->bIsParameterPalletAssigned = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bIsParameterPalletAssigned = { "bIsParameterPalletAssigned", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAtomCueInfo), &Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bIsParameterPalletAssigned_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsParameterPalletAssigned_MetaData), NewProp_bIsParameterPalletAssigned_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomCueInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_HeaderVisibility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_UserData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_CategoryNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_CategoryNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_AisacControlNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_AisacControlNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_AttenuationDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bLooping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bIsParameterPalletAssigned,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	nullptr,
	&NewStructOps,
	"AtomCueInfo",
	Z_Construct_UScriptStruct_FAtomCueInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::PropPointers),
	sizeof(FAtomCueInfo),
	alignof(FAtomCueInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAtomCueInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfo()
{
	if (!Z_Registration_Info_UScriptStruct_AtomCueInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomCueInfo.InnerSingleton, Z_Construct_UScriptStruct_FAtomCueInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AtomCueInfo.InnerSingleton;
}
// End ScriptStruct FAtomCueInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueInfo_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAtomCueInfo::StaticStruct, Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewStructOps, TEXT("AtomCueInfo"), &Z_Registration_Info_UScriptStruct_AtomCueInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomCueInfo), 2085705809U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueInfo_h_2236243271(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueInfo_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
