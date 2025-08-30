// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomAsrRackConfigUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomAsrRackConfigUI() {}

// Begin Cross Module References
CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomSoundRendererType();
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAsrRackConfigUI();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin ScriptStruct FAtomAsrRackConfigUI
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomAsrRackConfigUI;
class UScriptStruct* FAtomAsrRackConfigUI::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomAsrRackConfigUI.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomAsrRackConfigUI.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomAsrRackConfigUI, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomAsrRackConfigUI"));
	}
	return Z_Registration_Info_UScriptStruct_AtomAsrRackConfigUI.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomAsrRackConfigUI>()
{
	return FAtomAsrRackConfigUI::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomAsrRackConfigUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundRendererTypeUI_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAsrRackConfigUI" },
		{ "ModuleRelativePath", "Public/AtomAsrRackConfigUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElementID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAsrRackConfigUI" },
		{ "ModuleRelativePath", "Public/AtomAsrRackConfigUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseOutputPort_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAsrRackConfigUI" },
		{ "ModuleRelativePath", "Public/AtomAsrRackConfigUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAsrRackConfigUI" },
		{ "ModuleRelativePath", "Public/AtomAsrRackConfigUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SoundRendererTypeUI_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SoundRendererTypeUI;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ElementID;
	static void NewProp_bUseOutputPort_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOutputPort;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomAsrRackConfigUI>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_SoundRendererTypeUI_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_SoundRendererTypeUI = { "SoundRendererTypeUI", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomAsrRackConfigUI, SoundRendererTypeUI), Z_Construct_UEnum_CriWareRuntime_EAtomSoundRendererType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundRendererTypeUI_MetaData), NewProp_SoundRendererTypeUI_MetaData) }; // 3809552003
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_ElementID = { "ElementID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomAsrRackConfigUI, ElementID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElementID_MetaData), NewProp_ElementID_MetaData) };
void Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_bUseOutputPort_SetBit(void* Obj)
{
	((FAtomAsrRackConfigUI*)Obj)->bUseOutputPort = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_bUseOutputPort = { "bUseOutputPort", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAtomAsrRackConfigUI), &Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_bUseOutputPort_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseOutputPort_MetaData), NewProp_bUseOutputPort_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomAsrRackConfigUI, UserIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserIndex_MetaData), NewProp_UserIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_SoundRendererTypeUI_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_SoundRendererTypeUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_ElementID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_bUseOutputPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_UserIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	nullptr,
	&NewStructOps,
	"AtomAsrRackConfigUI",
	Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::PropPointers),
	sizeof(FAtomAsrRackConfigUI),
	alignof(FAtomAsrRackConfigUI),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAtomAsrRackConfigUI()
{
	if (!Z_Registration_Info_UScriptStruct_AtomAsrRackConfigUI.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomAsrRackConfigUI.InnerSingleton, Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AtomAsrRackConfigUI.InnerSingleton;
}
// End ScriptStruct FAtomAsrRackConfigUI

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRackConfigUI_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAtomAsrRackConfigUI::StaticStruct, Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewStructOps, TEXT("AtomAsrRackConfigUI"), &Z_Registration_Info_UScriptStruct_AtomAsrRackConfigUI, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomAsrRackConfigUI), 1111570832U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRackConfigUI_h_1107451091(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRackConfigUI_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRackConfigUI_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
