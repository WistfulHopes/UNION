// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomSoundManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomSoundManager() {}

// Begin Cross Module References
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSoundManager();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin ScriptStruct FAtomSoundManager
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomSoundManager;
class UScriptStruct* FAtomSoundManager::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomSoundManager.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomSoundManager.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomSoundManager, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomSoundManager"));
	}
	return Z_Registration_Info_UScriptStruct_AtomSoundManager.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomSoundManager>()
{
	return FAtomSoundManager::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAtomSoundManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomSoundManager.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomSoundManager>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomSoundManager_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	nullptr,
	&NewStructOps,
	"AtomSoundManager",
	nullptr,
	0,
	sizeof(FAtomSoundManager),
	alignof(FAtomSoundManager),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundManager_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAtomSoundManager_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAtomSoundManager()
{
	if (!Z_Registration_Info_UScriptStruct_AtomSoundManager.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomSoundManager.InnerSingleton, Z_Construct_UScriptStruct_FAtomSoundManager_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AtomSoundManager.InnerSingleton;
}
// End ScriptStruct FAtomSoundManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSoundManager_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAtomSoundManager::StaticStruct, Z_Construct_UScriptStruct_FAtomSoundManager_Statics::NewStructOps, TEXT("AtomSoundManager"), &Z_Registration_Info_UScriptStruct_AtomSoundManager, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomSoundManager), 2087074355U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSoundManager_h_1157975615(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSoundManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSoundManager_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
