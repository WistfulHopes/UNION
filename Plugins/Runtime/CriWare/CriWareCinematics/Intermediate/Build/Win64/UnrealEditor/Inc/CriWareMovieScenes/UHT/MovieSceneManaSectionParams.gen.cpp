// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareMovieScenes/Public/MovieSceneManaSectionParams.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneManaSectionParams() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
CRIWAREMOVIESCENES_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneManaSectionParams();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomComponent_NoRegister();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaPlayer_NoRegister();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaSource_NoRegister();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaTexture_NoRegister();
UPackage* Z_Construct_UPackage__Script_CriWareMovieScenes();
// End Cross Module References

// Begin ScriptStruct FMovieSceneManaSectionParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneManaSectionParams;
class UScriptStruct* FMovieSceneManaSectionParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneManaSectionParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneManaSectionParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneManaSectionParams, (UObject*)Z_Construct_UPackage__Script_CriWareMovieScenes(), TEXT("MovieSceneManaSectionParams"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneManaSectionParams.OuterSingleton;
}
template<> CRIWAREMOVIESCENES_API UScriptStruct* StaticStruct<FMovieSceneManaSectionParams>()
{
	return FMovieSceneManaSectionParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneManaSectionParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AtomComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneManaSectionParams" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneManaSectionParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaSource_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneManaSectionParams" },
		{ "ModuleRelativePath", "Public/MovieSceneManaSectionParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneManaSectionParams" },
		{ "ModuleRelativePath", "Public/MovieSceneManaSectionParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneManaSectionParams" },
		{ "ModuleRelativePath", "Public/MovieSceneManaSectionParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionStartFrame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneManaSectionParams" },
		{ "ModuleRelativePath", "Public/MovieSceneManaSectionParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionEndFrame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneManaSectionParams" },
		{ "ModuleRelativePath", "Public/MovieSceneManaSectionParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneManaSectionParams" },
		{ "ModuleRelativePath", "Public/MovieSceneManaSectionParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartFrameOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneManaSectionParams" },
		{ "ModuleRelativePath", "Public/MovieSceneManaSectionParams.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AtomComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ManaSource;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ManaTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ManaPlayer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SectionStartFrame;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SectionEndFrame;
	static void NewProp_bLooping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartFrameOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneManaSectionParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_AtomComponent = { "AtomComponent", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneManaSectionParams, AtomComponent), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AtomComponent_MetaData), NewProp_AtomComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_ManaSource = { "ManaSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneManaSectionParams, ManaSource), Z_Construct_UClass_UManaSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaSource_MetaData), NewProp_ManaSource_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_ManaTexture = { "ManaTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneManaSectionParams, ManaTexture), Z_Construct_UClass_UManaTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaTexture_MetaData), NewProp_ManaTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_ManaPlayer = { "ManaPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneManaSectionParams, ManaPlayer), Z_Construct_UClass_UManaPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaPlayer_MetaData), NewProp_ManaPlayer_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_SectionStartFrame = { "SectionStartFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneManaSectionParams, SectionStartFrame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionStartFrame_MetaData), NewProp_SectionStartFrame_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_SectionEndFrame = { "SectionEndFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneManaSectionParams, SectionEndFrame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionEndFrame_MetaData), NewProp_SectionEndFrame_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_bLooping_SetBit(void* Obj)
{
	((FMovieSceneManaSectionParams*)Obj)->bLooping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieSceneManaSectionParams), &Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLooping_MetaData), NewProp_bLooping_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_StartFrameOffset = { "StartFrameOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneManaSectionParams, StartFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartFrameOffset_MetaData), NewProp_StartFrameOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_AtomComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_ManaSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_ManaTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_ManaPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_SectionStartFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_SectionEndFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_bLooping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_StartFrameOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareMovieScenes,
	nullptr,
	&NewStructOps,
	"MovieSceneManaSectionParams",
	Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::PropPointers),
	sizeof(FMovieSceneManaSectionParams),
	alignof(FMovieSceneManaSectionParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneManaSectionParams()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneManaSectionParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneManaSectionParams.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneManaSectionParams.InnerSingleton;
}
// End ScriptStruct FMovieSceneManaSectionParams

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneManaSectionParams_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneManaSectionParams::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewStructOps, TEXT("MovieSceneManaSectionParams"), &Z_Registration_Info_UScriptStruct_MovieSceneManaSectionParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneManaSectionParams), 2119901214U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneManaSectionParams_h_3299218076(TEXT("/Script/CriWareMovieScenes"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneManaSectionParams_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneManaSectionParams_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
