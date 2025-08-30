// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubstanceCore/Public/SubstanceConnection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubstanceConnection() {}

// Begin Cross Module References
SUBSTANCECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSubstanceConnection();
UPackage* Z_Construct_UPackage__Script_SubstanceCore();
// End Cross Module References

// Begin ScriptStruct FSubstanceConnection
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubstanceConnection;
class UScriptStruct* FSubstanceConnection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubstanceConnection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubstanceConnection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubstanceConnection, (UObject*)Z_Construct_UPackage__Script_SubstanceCore(), TEXT("SubstanceConnection"));
	}
	return Z_Registration_Info_UScriptStruct_SubstanceConnection.OuterSingleton;
}
template<> SUBSTANCECORE_API UScriptStruct* StaticStruct<FSubstanceConnection>()
{
	return FSubstanceConnection::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSubstanceConnection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SubstanceConnection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputIdentifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceConnection" },
		{ "ModuleRelativePath", "Public/SubstanceConnection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputImageIdentifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceConnection" },
		{ "ModuleRelativePath", "Public/SubstanceConnection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputIdentifier;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InputImageIdentifier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubstanceConnection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubstanceConnection_Statics::NewProp_OutputIdentifier = { "OutputIdentifier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubstanceConnection, OutputIdentifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputIdentifier_MetaData), NewProp_OutputIdentifier_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubstanceConnection_Statics::NewProp_InputImageIdentifier = { "InputImageIdentifier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubstanceConnection, InputImageIdentifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputImageIdentifier_MetaData), NewProp_InputImageIdentifier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubstanceConnection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceConnection_Statics::NewProp_OutputIdentifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceConnection_Statics::NewProp_InputImageIdentifier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceConnection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubstanceConnection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
	nullptr,
	&NewStructOps,
	"SubstanceConnection",
	Z_Construct_UScriptStruct_FSubstanceConnection_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceConnection_Statics::PropPointers),
	sizeof(FSubstanceConnection),
	alignof(FSubstanceConnection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceConnection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSubstanceConnection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSubstanceConnection()
{
	if (!Z_Registration_Info_UScriptStruct_SubstanceConnection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubstanceConnection.InnerSingleton, Z_Construct_UScriptStruct_FSubstanceConnection_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SubstanceConnection.InnerSingleton;
}
// End ScriptStruct FSubstanceConnection

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceConnection_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSubstanceConnection::StaticStruct, Z_Construct_UScriptStruct_FSubstanceConnection_Statics::NewStructOps, TEXT("SubstanceConnection"), &Z_Registration_Info_UScriptStruct_SubstanceConnection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubstanceConnection), 569223495U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceConnection_h_4165198066(TEXT("/Script/SubstanceCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceConnection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceConnection_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
