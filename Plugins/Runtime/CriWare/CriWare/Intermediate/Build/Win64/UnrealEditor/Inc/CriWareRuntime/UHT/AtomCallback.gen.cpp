// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomCallback.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomCallback() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomCallback();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomCallback_NoRegister();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Interface UAtomCallback
void UAtomCallback::StaticRegisterNativesUAtomCallback()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomCallback);
UClass* Z_Construct_UClass_UAtomCallback_NoRegister()
{
	return UAtomCallback::StaticClass();
}
struct Z_Construct_UClass_UAtomCallback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomCallback.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAtomCallback>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAtomCallback_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAtomCallback_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomCallback_Statics::ClassParams = {
	&UAtomCallback::StaticClass,
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
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAtomCallback_Statics::Class_MetaDataParams), Z_Construct_UClass_UAtomCallback_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAtomCallback()
{
	if (!Z_Registration_Info_UClass_UAtomCallback.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomCallback.OuterSingleton, Z_Construct_UClass_UAtomCallback_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAtomCallback.OuterSingleton;
}
template<> CRIWARERUNTIME_API UClass* StaticClass<UAtomCallback>()
{
	return UAtomCallback::StaticClass();
}
UAtomCallback::UAtomCallback(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomCallback);
UAtomCallback::~UAtomCallback() {}
// End Interface UAtomCallback

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCallback_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAtomCallback, UAtomCallback::StaticClass, TEXT("UAtomCallback"), &Z_Registration_Info_UClass_UAtomCallback, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomCallback), 1451055636U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCallback_h_333717774(TEXT("/Script/CriWareRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCallback_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCallback_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
