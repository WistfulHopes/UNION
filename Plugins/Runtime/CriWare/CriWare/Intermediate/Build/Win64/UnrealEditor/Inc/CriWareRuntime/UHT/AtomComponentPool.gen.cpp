// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomComponentPool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomComponentPool() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomComponent_NoRegister();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomComponentPool();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomComponentPool_NoRegister();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Class UAtomComponentPool
void UAtomComponentPool::StaticRegisterNativesUAtomComponentPool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomComponentPool);
UClass* Z_Construct_UClass_UAtomComponentPool_NoRegister()
{
	return UAtomComponentPool::StaticClass();
}
struct Z_Construct_UClass_UAtomComponentPool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AtomComponentPool.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AtomComponentPool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pool_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponentPool" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AtomComponentPool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponentPool" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AtomComponentPool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pool_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Pool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomComponentPool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtomComponentPool_Statics::NewProp_Pool_Inner = { "Pool", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pool_Inner_MetaData), NewProp_Pool_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtomComponentPool_Statics::NewProp_Pool = { "Pool", nullptr, (EPropertyFlags)0x004000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAtomComponentPool, Pool), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pool_MetaData), NewProp_Pool_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomComponentPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponentPool_Statics::NewProp_Pool_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponentPool_Statics::NewProp_Pool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponentPool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAtomComponentPool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponentPool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomComponentPool_Statics::ClassParams = {
	&UAtomComponentPool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAtomComponentPool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponentPool_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponentPool_Statics::Class_MetaDataParams), Z_Construct_UClass_UAtomComponentPool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAtomComponentPool()
{
	if (!Z_Registration_Info_UClass_UAtomComponentPool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomComponentPool.OuterSingleton, Z_Construct_UClass_UAtomComponentPool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAtomComponentPool.OuterSingleton;
}
template<> CRIWARERUNTIME_API UClass* StaticClass<UAtomComponentPool>()
{
	return UAtomComponentPool::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomComponentPool);
UAtomComponentPool::~UAtomComponentPool() {}
// End Class UAtomComponentPool

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponentPool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAtomComponentPool, UAtomComponentPool::StaticClass, TEXT("UAtomComponentPool"), &Z_Registration_Info_UClass_UAtomComponentPool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomComponentPool), 992392698U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponentPool_h_1055353910(TEXT("/Script/CriWareRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponentPool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponentPool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
