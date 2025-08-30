// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomStringWithComment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomStringWithComment() {}

// Begin Cross Module References
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomStringWithComment();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin ScriptStruct FAtomStringWithComment
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomStringWithComment;
class UScriptStruct* FAtomStringWithComment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomStringWithComment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomStringWithComment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomStringWithComment, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomStringWithComment"));
	}
	return Z_Registration_Info_UScriptStruct_AtomStringWithComment.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomStringWithComment>()
{
	return FAtomStringWithComment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAtomStringWithComment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomStringWithComment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomStringWithComment" },
		{ "ModuleRelativePath", "Public/AtomStringWithComment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomStringWithComment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomStringWithComment_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomStringWithComment, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomStringWithComment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomStringWithComment_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomStringWithComment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomStringWithComment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	nullptr,
	&NewStructOps,
	"AtomStringWithComment",
	Z_Construct_UScriptStruct_FAtomStringWithComment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomStringWithComment_Statics::PropPointers),
	sizeof(FAtomStringWithComment),
	alignof(FAtomStringWithComment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomStringWithComment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAtomStringWithComment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAtomStringWithComment()
{
	if (!Z_Registration_Info_UScriptStruct_AtomStringWithComment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomStringWithComment.InnerSingleton, Z_Construct_UScriptStruct_FAtomStringWithComment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AtomStringWithComment.InnerSingleton;
}
// End ScriptStruct FAtomStringWithComment

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomStringWithComment_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAtomStringWithComment::StaticStruct, Z_Construct_UScriptStruct_FAtomStringWithComment_Statics::NewStructOps, TEXT("AtomStringWithComment"), &Z_Registration_Info_UScriptStruct_AtomStringWithComment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomStringWithComment), 3288936258U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomStringWithComment_h_1303069211(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomStringWithComment_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomStringWithComment_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
