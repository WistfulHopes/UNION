// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomTriggerRow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomTriggerRow() {}

// Begin Cross Module References
CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomTriggerRow();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin ScriptStruct FAtomTriggerRow
static_assert(std::is_polymorphic<FAtomTriggerRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FAtomTriggerRow cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomTriggerRow;
class UScriptStruct* FAtomTriggerRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomTriggerRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomTriggerRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomTriggerRow, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomTriggerRow"));
	}
	return Z_Registration_Info_UScriptStruct_AtomTriggerRow.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomTriggerRow>()
{
	return FAtomTriggerRow::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAtomTriggerRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomTriggerRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomTriggerRow" },
		{ "ModuleRelativePath", "Public/AtomTriggerRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomTriggerRow" },
		{ "ModuleRelativePath", "Public/AtomTriggerRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomTriggerRow" },
		{ "ModuleRelativePath", "Public/AtomTriggerRow.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FNamePropertyParams NewProp_bone;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Cue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomTriggerRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomTriggerRow, Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::NewProp_bone = { "bone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomTriggerRow, bone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bone_MetaData), NewProp_bone_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::NewProp_Cue = { "Cue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomTriggerRow, Cue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cue_MetaData), NewProp_Cue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::NewProp_bone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::NewProp_Cue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"AtomTriggerRow",
	Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::PropPointers),
	sizeof(FAtomTriggerRow),
	alignof(FAtomTriggerRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAtomTriggerRow()
{
	if (!Z_Registration_Info_UScriptStruct_AtomTriggerRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomTriggerRow.InnerSingleton, Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AtomTriggerRow.InnerSingleton;
}
// End ScriptStruct FAtomTriggerRow

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomTriggerRow_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAtomTriggerRow::StaticStruct, Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::NewStructOps, TEXT("AtomTriggerRow"), &Z_Registration_Info_UScriptStruct_AtomTriggerRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomTriggerRow), 1720239811U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomTriggerRow_h_1269363223(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomTriggerRow_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomTriggerRow_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
