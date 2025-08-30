// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/CriFsLoader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCriFsLoader() {}

// Begin Cross Module References
CRIWARERUNTIME_API UClass* Z_Construct_UClass_ACriFsLoader();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_ACriFsLoader_NoRegister();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UCriFsLoaderComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Class ACriFsLoader
void ACriFsLoader::StaticRegisterNativesACriFsLoader()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACriFsLoader);
UClass* Z_Construct_UClass_ACriFsLoader_NoRegister()
{
	return ACriFsLoader::StaticClass();
}
struct Z_Construct_UClass_ACriFsLoader_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CriFsLoader.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CriFsLoader.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoaderComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriFsLoader" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CriFsLoader.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoaderComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACriFsLoader>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACriFsLoader_Statics::NewProp_LoaderComponent = { "LoaderComponent", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACriFsLoader, LoaderComponent), Z_Construct_UClass_UCriFsLoaderComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoaderComponent_MetaData), NewProp_LoaderComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACriFsLoader_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACriFsLoader_Statics::NewProp_LoaderComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACriFsLoader_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACriFsLoader_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACriFsLoader_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACriFsLoader_Statics::ClassParams = {
	&ACriFsLoader::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACriFsLoader_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACriFsLoader_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACriFsLoader_Statics::Class_MetaDataParams), Z_Construct_UClass_ACriFsLoader_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACriFsLoader()
{
	if (!Z_Registration_Info_UClass_ACriFsLoader.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACriFsLoader.OuterSingleton, Z_Construct_UClass_ACriFsLoader_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACriFsLoader.OuterSingleton;
}
template<> CRIWARERUNTIME_API UClass* StaticClass<ACriFsLoader>()
{
	return ACriFsLoader::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACriFsLoader);
ACriFsLoader::~ACriFsLoader() {}
// End Class ACriFsLoader

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoader_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACriFsLoader, ACriFsLoader::StaticClass, TEXT("ACriFsLoader"), &Z_Registration_Info_UClass_ACriFsLoader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACriFsLoader), 726312551U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoader_h_2843658946(TEXT("/Script/CriWareRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoader_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
