// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomBeatSyncInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomBeatSyncInfo() {}

// Begin Cross Module References
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomBeatSyncInfo();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin ScriptStruct FAtomBeatSyncInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomBeatSyncInfo;
class UScriptStruct* FAtomBeatSyncInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomBeatSyncInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomBeatSyncInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomBeatSyncInfo, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomBeatSyncInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AtomBeatSyncInfo.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomBeatSyncInfo>()
{
	return FAtomBeatSyncInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomBeatSyncInfo.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomBeatSyncInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	nullptr,
	&NewStructOps,
	"AtomBeatSyncInfo",
	nullptr,
	0,
	sizeof(FAtomBeatSyncInfo),
	alignof(FAtomBeatSyncInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAtomBeatSyncInfo()
{
	if (!Z_Registration_Info_UScriptStruct_AtomBeatSyncInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomBeatSyncInfo.InnerSingleton, Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AtomBeatSyncInfo.InnerSingleton;
}
// End ScriptStruct FAtomBeatSyncInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomBeatSyncInfo_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAtomBeatSyncInfo::StaticStruct, Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::NewStructOps, TEXT("AtomBeatSyncInfo"), &Z_Registration_Info_UScriptStruct_AtomBeatSyncInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomBeatSyncInfo), 3349102567U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomBeatSyncInfo_h_4255230854(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomBeatSyncInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomBeatSyncInfo_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
