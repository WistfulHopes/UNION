// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomAsrRackConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomAsrRackConfig() {}

// Begin Cross Module References
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAsrRackConfig();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin ScriptStruct FAtomAsrRackConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomAsrRackConfig;
class UScriptStruct* FAtomAsrRackConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomAsrRackConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomAsrRackConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomAsrRackConfig, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomAsrRackConfig"));
	}
	return Z_Registration_Info_UScriptStruct_AtomAsrRackConfig.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomAsrRackConfig>()
{
	return FAtomAsrRackConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomAsrRackConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundRendererType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAsrRackConfig" },
		{ "ModuleRelativePath", "Public/AtomAsrRackConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElementID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAsrRackConfig" },
		{ "ModuleRelativePath", "Public/AtomAsrRackConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseOutputPort_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAsrRackConfig" },
		{ "ModuleRelativePath", "Public/AtomAsrRackConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAsrRackConfig" },
		{ "ModuleRelativePath", "Public/AtomAsrRackConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SoundRendererType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ElementID;
	static void NewProp_bUseOutputPort_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOutputPort;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomAsrRackConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_SoundRendererType = { "SoundRendererType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomAsrRackConfig, SoundRendererType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundRendererType_MetaData), NewProp_SoundRendererType_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_ElementID = { "ElementID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomAsrRackConfig, ElementID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElementID_MetaData), NewProp_ElementID_MetaData) };
void Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_bUseOutputPort_SetBit(void* Obj)
{
	((FAtomAsrRackConfig*)Obj)->bUseOutputPort = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_bUseOutputPort = { "bUseOutputPort", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAtomAsrRackConfig), &Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_bUseOutputPort_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseOutputPort_MetaData), NewProp_bUseOutputPort_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomAsrRackConfig, UserIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserIndex_MetaData), NewProp_UserIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_SoundRendererType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_ElementID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_bUseOutputPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_UserIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	nullptr,
	&NewStructOps,
	"AtomAsrRackConfig",
	Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::PropPointers),
	sizeof(FAtomAsrRackConfig),
	alignof(FAtomAsrRackConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAtomAsrRackConfig()
{
	if (!Z_Registration_Info_UScriptStruct_AtomAsrRackConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomAsrRackConfig.InnerSingleton, Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AtomAsrRackConfig.InnerSingleton;
}
// End ScriptStruct FAtomAsrRackConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRackConfig_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAtomAsrRackConfig::StaticStruct, Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewStructOps, TEXT("AtomAsrRackConfig"), &Z_Registration_Info_UScriptStruct_AtomAsrRackConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomAsrRackConfig), 509267893U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRackConfig_h_1074811244(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRackConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRackConfig_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
