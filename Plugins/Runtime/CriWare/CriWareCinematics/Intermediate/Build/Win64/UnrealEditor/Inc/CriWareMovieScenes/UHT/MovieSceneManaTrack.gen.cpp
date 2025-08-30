// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareMovieScenes/Public/MovieSceneManaTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneManaTrack() {}

// Begin Cross Module References
CRIWAREMOVIESCENES_API UClass* Z_Construct_UClass_UMovieSceneAtomTrack_NoRegister();
CRIWAREMOVIESCENES_API UClass* Z_Construct_UClass_UMovieSceneManaTrack();
CRIWAREMOVIESCENES_API UClass* Z_Construct_UClass_UMovieSceneManaTrack_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
UPackage* Z_Construct_UPackage__Script_CriWareMovieScenes();
// End Cross Module References

// Begin Class UMovieSceneManaTrack
void UMovieSceneManaTrack::StaticRegisterNativesUMovieSceneManaTrack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneManaTrack);
UClass* Z_Construct_UClass_UMovieSceneManaTrack_NoRegister()
{
	return UMovieSceneManaTrack::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneManaTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MovieSceneManaTrack.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneManaTrack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaSections_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneManaTrack" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneManaTrack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaSections_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneManaTrack" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneManaTrack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SyncedAtomTrack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneManaTrack" },
		{ "ModuleRelativePath", "Public/MovieSceneManaTrack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ManaSections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ManaSections;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SyncedAtomTrack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneManaTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneManaTrack_Statics::NewProp_ManaSections_Inner = { "ManaSections", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaSections_Inner_MetaData), NewProp_ManaSections_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneManaTrack_Statics::NewProp_ManaSections = { "ManaSections", nullptr, (EPropertyFlags)0x004000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneManaTrack, ManaSections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaSections_MetaData), NewProp_ManaSections_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMovieSceneManaTrack_Statics::NewProp_SyncedAtomTrack = { "SyncedAtomTrack", nullptr, (EPropertyFlags)0x004400000008000d, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneManaTrack, SyncedAtomTrack), Z_Construct_UClass_UMovieSceneAtomTrack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SyncedAtomTrack_MetaData), NewProp_SyncedAtomTrack_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneManaTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneManaTrack_Statics::NewProp_ManaSections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneManaTrack_Statics::NewProp_ManaSections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneManaTrack_Statics::NewProp_SyncedAtomTrack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneManaTrack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneManaTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareMovieScenes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneManaTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneManaTrack_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneManaTrack, IMovieSceneTrackTemplateProducer), false },  // 2607263461
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneManaTrack_Statics::ClassParams = {
	&UMovieSceneManaTrack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneManaTrack_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneManaTrack_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneManaTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneManaTrack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneManaTrack()
{
	if (!Z_Registration_Info_UClass_UMovieSceneManaTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneManaTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneManaTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneManaTrack.OuterSingleton;
}
template<> CRIWAREMOVIESCENES_API UClass* StaticClass<UMovieSceneManaTrack>()
{
	return UMovieSceneManaTrack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneManaTrack);
UMovieSceneManaTrack::~UMovieSceneManaTrack() {}
// End Class UMovieSceneManaTrack

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneManaTrack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneManaTrack, UMovieSceneManaTrack::StaticClass, TEXT("UMovieSceneManaTrack"), &Z_Registration_Info_UClass_UMovieSceneManaTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneManaTrack), 3490979808U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneManaTrack_h_3799623955(TEXT("/Script/CriWareMovieScenes"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneManaTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneManaTrack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
