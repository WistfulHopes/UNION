// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareMovieScenes/Public/MovieSceneAtomSectionTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAtomSectionTemplate() {}

// Begin Cross Module References
CRIWAREMOVIESCENES_API UClass* Z_Construct_UClass_UMovieSceneAtomSection_NoRegister();
CRIWAREMOVIESCENES_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
UPackage* Z_Construct_UPackage__Script_CriWareMovieScenes();
// End Cross Module References

// Begin ScriptStruct FMovieSceneAtomSectionTemplate
static_assert(std::is_polymorphic<FMovieSceneAtomSectionTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FMovieSceneAtomSectionTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneAtomSectionTemplate;
class UScriptStruct* FMovieSceneAtomSectionTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneAtomSectionTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneAtomSectionTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate, (UObject*)Z_Construct_UPackage__Script_CriWareMovieScenes(), TEXT("MovieSceneAtomSectionTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneAtomSectionTemplate.OuterSingleton;
}
template<> CRIWAREMOVIESCENES_API UScriptStruct* StaticStruct<FMovieSceneAtomSectionTemplate>()
{
	return FMovieSceneAtomSectionTemplate::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSectionTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AtomSection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneAtomSectionTemplate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSectionTemplate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AtomSection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneAtomSectionTemplate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_Statics::NewProp_AtomSection = { "AtomSection", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneAtomSectionTemplate, AtomSection), Z_Construct_UClass_UMovieSceneAtomSection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AtomSection_MetaData), NewProp_AtomSection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_Statics::NewProp_AtomSection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareMovieScenes,
	Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
	&NewStructOps,
	"MovieSceneAtomSectionTemplate",
	Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_Statics::PropPointers),
	sizeof(FMovieSceneAtomSectionTemplate),
	alignof(FMovieSceneAtomSectionTemplate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneAtomSectionTemplate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneAtomSectionTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneAtomSectionTemplate.InnerSingleton;
}
// End ScriptStruct FMovieSceneAtomSectionTemplate

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSectionTemplate_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneAtomSectionTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_Statics::NewStructOps, TEXT("MovieSceneAtomSectionTemplate"), &Z_Registration_Info_UScriptStruct_MovieSceneAtomSectionTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneAtomSectionTemplate), 378467035U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSectionTemplate_h_3797443143(TEXT("/Script/CriWareMovieScenes"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSectionTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSectionTemplate_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
