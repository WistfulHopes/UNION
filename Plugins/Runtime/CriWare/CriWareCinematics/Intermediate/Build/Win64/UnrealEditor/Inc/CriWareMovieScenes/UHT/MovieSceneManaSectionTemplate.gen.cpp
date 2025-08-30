// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareMovieScenes/Public/MovieSceneManaSectionTemplate.h"
#include "CriWareMovieScenes/Public/MovieSceneManaSectionParams.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneManaSectionTemplate() {}

// Begin Cross Module References
CRIWAREMOVIESCENES_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneManaSectionParams();
CRIWAREMOVIESCENES_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneManaSectionTemplate();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
UPackage* Z_Construct_UPackage__Script_CriWareMovieScenes();
// End Cross Module References

// Begin ScriptStruct FMovieSceneManaSectionTemplate
static_assert(std::is_polymorphic<FMovieSceneManaSectionTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FMovieSceneManaSectionTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneManaSectionTemplate;
class UScriptStruct* FMovieSceneManaSectionTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneManaSectionTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneManaSectionTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneManaSectionTemplate, (UObject*)Z_Construct_UPackage__Script_CriWareMovieScenes(), TEXT("MovieSceneManaSectionTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneManaSectionTemplate.OuterSingleton;
}
template<> CRIWAREMOVIESCENES_API UScriptStruct* StaticStruct<FMovieSceneManaSectionTemplate>()
{
	return FMovieSceneManaSectionTemplate::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneManaSectionTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneManaSectionTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneManaSectionTemplate" },
		{ "ModuleRelativePath", "Public/MovieSceneManaSectionTemplate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneManaSectionTemplate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneManaSectionTemplate_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0040008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneManaSectionTemplate, Params), Z_Construct_UScriptStruct_FMovieSceneManaSectionParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Params_MetaData), NewProp_Params_MetaData) }; // 2119901214
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneManaSectionTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneManaSectionTemplate_Statics::NewProp_Params,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneManaSectionTemplate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneManaSectionTemplate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareMovieScenes,
	Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
	&NewStructOps,
	"MovieSceneManaSectionTemplate",
	Z_Construct_UScriptStruct_FMovieSceneManaSectionTemplate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneManaSectionTemplate_Statics::PropPointers),
	sizeof(FMovieSceneManaSectionTemplate),
	alignof(FMovieSceneManaSectionTemplate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneManaSectionTemplate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneManaSectionTemplate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneManaSectionTemplate()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneManaSectionTemplate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneManaSectionTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneManaSectionTemplate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneManaSectionTemplate.InnerSingleton;
}
// End ScriptStruct FMovieSceneManaSectionTemplate

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneManaSectionTemplate_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneManaSectionTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneManaSectionTemplate_Statics::NewStructOps, TEXT("MovieSceneManaSectionTemplate"), &Z_Registration_Info_UScriptStruct_MovieSceneManaSectionTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneManaSectionTemplate), 639273819U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneManaSectionTemplate_h_988809472(TEXT("/Script/CriWareMovieScenes"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneManaSectionTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneManaSectionTemplate_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
