// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniInputPackedLevelActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniInputPackedLevelActor() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputActor();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputBlueprint_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputPackedLevelActor();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputPackedLevelActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UHoudiniInputPackedLevelActor
void UHoudiniInputPackedLevelActor::StaticRegisterNativesUHoudiniInputPackedLevelActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniInputPackedLevelActor);
UClass* Z_Construct_UClass_UHoudiniInputPackedLevelActor_NoRegister()
{
	return UHoudiniInputPackedLevelActor::StaticClass();
}
struct Z_Construct_UClass_UHoudiniInputPackedLevelActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HoudiniInputPackedLevelActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HoudiniInputPackedLevelActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintInputObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputPackedLevelActor" },
		{ "ModuleRelativePath", "Public/HoudiniInputPackedLevelActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlueprintInputObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputPackedLevelActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInputPackedLevelActor_Statics::NewProp_BlueprintInputObject = { "BlueprintInputObject", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputPackedLevelActor, BlueprintInputObject), Z_Construct_UClass_UHoudiniInputBlueprint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintInputObject_MetaData), NewProp_BlueprintInputObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInputPackedLevelActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputPackedLevelActor_Statics::NewProp_BlueprintInputObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputPackedLevelActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniInputPackedLevelActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniInputActor,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputPackedLevelActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputPackedLevelActor_Statics::ClassParams = {
	&UHoudiniInputPackedLevelActor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniInputPackedLevelActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputPackedLevelActor_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputPackedLevelActor_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniInputPackedLevelActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniInputPackedLevelActor()
{
	if (!Z_Registration_Info_UClass_UHoudiniInputPackedLevelActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInputPackedLevelActor.OuterSingleton, Z_Construct_UClass_UHoudiniInputPackedLevelActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniInputPackedLevelActor.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputPackedLevelActor>()
{
	return UHoudiniInputPackedLevelActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputPackedLevelActor);
UHoudiniInputPackedLevelActor::~UHoudiniInputPackedLevelActor() {}
// End Class UHoudiniInputPackedLevelActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputPackedLevelActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniInputPackedLevelActor, UHoudiniInputPackedLevelActor::StaticClass, TEXT("UHoudiniInputPackedLevelActor"), &Z_Registration_Info_UClass_UHoudiniInputPackedLevelActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInputPackedLevelActor), 2442049025U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputPackedLevelActor_h_1908766103(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputPackedLevelActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputPackedLevelActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
