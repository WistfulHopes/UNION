// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomSound.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomSound() {}

// Begin Cross Module References
CRIWARERUNTIME_API UClass* Z_Construct_UClass_AAtomSound();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_AAtomSound_NoRegister();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Class AAtomSound
void AAtomSound::StaticRegisterNativesAAtomSound()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAtomSound);
UClass* Z_Construct_UClass_AAtomSound_NoRegister()
{
	return AAtomSound::StaticClass();
}
struct Z_Construct_UClass_AAtomSound_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AtomSound.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AtomSound.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AtomComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomSound" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AtomSound.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AtomComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAtomSound>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAtomSound_Statics::NewProp_AtomComponent = { "AtomComponent", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAtomSound, AtomComponent), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AtomComponent_MetaData), NewProp_AtomComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAtomSound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomSound_Statics::NewProp_AtomComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAtomSound_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAtomSound_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAtomSound_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAtomSound_Statics::ClassParams = {
	&AAtomSound::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAtomSound_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAtomSound_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAtomSound_Statics::Class_MetaDataParams), Z_Construct_UClass_AAtomSound_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAtomSound()
{
	if (!Z_Registration_Info_UClass_AAtomSound.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAtomSound.OuterSingleton, Z_Construct_UClass_AAtomSound_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAtomSound.OuterSingleton;
}
template<> CRIWARERUNTIME_API UClass* StaticClass<AAtomSound>()
{
	return AAtomSound::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAtomSound);
AAtomSound::~AAtomSound() {}
// End Class AAtomSound

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSound_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAtomSound, AAtomSound::StaticClass, TEXT("AAtomSound"), &Z_Registration_Info_UClass_AAtomSound, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAtomSound), 2285818573U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSound_h_241610770(TEXT("/Script/CriWareRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSound_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSound_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
