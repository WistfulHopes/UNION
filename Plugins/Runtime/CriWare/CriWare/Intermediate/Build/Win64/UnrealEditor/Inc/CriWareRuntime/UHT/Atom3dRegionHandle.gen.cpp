// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/Atom3dRegionHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtom3dRegionHandle() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtom3dRegionHandle();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtom3dRegionHandle_NoRegister();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Class UAtom3dRegionHandle
void UAtom3dRegionHandle::StaticRegisterNativesUAtom3dRegionHandle()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtom3dRegionHandle);
UClass* Z_Construct_UClass_UAtom3dRegionHandle_NoRegister()
{
	return UAtom3dRegionHandle::StaticClass();
}
struct Z_Construct_UClass_UAtom3dRegionHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Atom3dRegionHandle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Atom3dRegionHandle.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtom3dRegionHandle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAtom3dRegionHandle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dRegionHandle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtom3dRegionHandle_Statics::ClassParams = {
	&UAtom3dRegionHandle::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dRegionHandle_Statics::Class_MetaDataParams), Z_Construct_UClass_UAtom3dRegionHandle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAtom3dRegionHandle()
{
	if (!Z_Registration_Info_UClass_UAtom3dRegionHandle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtom3dRegionHandle.OuterSingleton, Z_Construct_UClass_UAtom3dRegionHandle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAtom3dRegionHandle.OuterSingleton;
}
template<> CRIWARERUNTIME_API UClass* StaticClass<UAtom3dRegionHandle>()
{
	return UAtom3dRegionHandle::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAtom3dRegionHandle);
UAtom3dRegionHandle::~UAtom3dRegionHandle() {}
// End Class UAtom3dRegionHandle

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_Atom3dRegionHandle_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAtom3dRegionHandle, UAtom3dRegionHandle::StaticClass, TEXT("UAtom3dRegionHandle"), &Z_Registration_Info_UClass_UAtom3dRegionHandle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtom3dRegionHandle), 2695725226U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_Atom3dRegionHandle_h_22933557(TEXT("/Script/CriWareRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_Atom3dRegionHandle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_Atom3dRegionHandle_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
