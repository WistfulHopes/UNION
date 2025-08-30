// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomDisposer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomDisposer() {}

// Begin Cross Module References
CRIWARERUNTIME_API UClass* Z_Construct_UClass_AAtomDisposer();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_AAtomDisposer_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Class AAtomDisposer
void AAtomDisposer::StaticRegisterNativesAAtomDisposer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAtomDisposer);
UClass* Z_Construct_UClass_AAtomDisposer_NoRegister()
{
	return AAtomDisposer::StaticClass();
}
struct Z_Construct_UClass_AAtomDisposer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AtomDisposer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AtomDisposer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAtomDisposer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAtomDisposer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAtomDisposer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAtomDisposer_Statics::ClassParams = {
	&AAtomDisposer::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAtomDisposer_Statics::Class_MetaDataParams), Z_Construct_UClass_AAtomDisposer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAtomDisposer()
{
	if (!Z_Registration_Info_UClass_AAtomDisposer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAtomDisposer.OuterSingleton, Z_Construct_UClass_AAtomDisposer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAtomDisposer.OuterSingleton;
}
template<> CRIWARERUNTIME_API UClass* StaticClass<AAtomDisposer>()
{
	return AAtomDisposer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAtomDisposer);
AAtomDisposer::~AAtomDisposer() {}
// End Class AAtomDisposer

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomDisposer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAtomDisposer, AAtomDisposer::StaticClass, TEXT("AAtomDisposer"), &Z_Registration_Info_UClass_AAtomDisposer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAtomDisposer), 1383295104U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomDisposer_h_145846780(TEXT("/Script/CriWareRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomDisposer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomDisposer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
