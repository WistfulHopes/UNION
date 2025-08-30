// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/CriWareInitializer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCriWareInitializer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UCriWareInitializer();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UCriWareInitializer_NoRegister();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Class UCriWareInitializer
void UCriWareInitializer::StaticRegisterNativesUCriWareInitializer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCriWareInitializer);
UClass* Z_Construct_UClass_UCriWareInitializer_NoRegister()
{
	return UCriWareInitializer::StaticClass();
}
struct Z_Construct_UClass_UCriWareInitializer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CriWareInitializer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CriWareInitializer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCriWareInitializer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCriWareInitializer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareInitializer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCriWareInitializer_Statics::ClassParams = {
	&UCriWareInitializer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareInitializer_Statics::Class_MetaDataParams), Z_Construct_UClass_UCriWareInitializer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCriWareInitializer()
{
	if (!Z_Registration_Info_UClass_UCriWareInitializer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCriWareInitializer.OuterSingleton, Z_Construct_UClass_UCriWareInitializer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCriWareInitializer.OuterSingleton;
}
template<> CRIWARERUNTIME_API UClass* StaticClass<UCriWareInitializer>()
{
	return UCriWareInitializer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCriWareInitializer);
UCriWareInitializer::~UCriWareInitializer() {}
// End Class UCriWareInitializer

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareInitializer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCriWareInitializer, UCriWareInitializer::StaticClass, TEXT("UCriWareInitializer"), &Z_Registration_Info_UClass_UCriWareInitializer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCriWareInitializer), 3055695464U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareInitializer_h_3397194077(TEXT("/Script/CriWareRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareInitializer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareInitializer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
