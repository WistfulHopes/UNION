// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniHandleParameter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniHandleParameter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniHandleParameter();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniHandleParameter_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameter_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UHoudiniHandleParameter
void UHoudiniHandleParameter::StaticRegisterNativesUHoudiniHandleParameter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniHandleParameter);
UClass* Z_Construct_UClass_UHoudiniHandleParameter_NoRegister()
{
	return UHoudiniHandleParameter::StaticClass();
}
struct Z_Construct_UClass_UHoudiniHandleParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HoudiniHandleParameter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HoudiniHandleParameter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetParameter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniHandleParameter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniHandleParameter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TupleIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniHandleParameter" },
		{ "ModuleRelativePath", "Public/HoudiniHandleParameter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetParameter;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TupleIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniHandleParameter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniHandleParameter_Statics::NewProp_AssetParameter = { "AssetParameter", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniHandleParameter, AssetParameter), Z_Construct_UClass_UHoudiniParameter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetParameter_MetaData), NewProp_AssetParameter_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniHandleParameter_Statics::NewProp_TupleIndex = { "TupleIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniHandleParameter, TupleIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TupleIndex_MetaData), NewProp_TupleIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniHandleParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniHandleParameter_Statics::NewProp_AssetParameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniHandleParameter_Statics::NewProp_TupleIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleParameter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniHandleParameter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleParameter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniHandleParameter_Statics::ClassParams = {
	&UHoudiniHandleParameter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniHandleParameter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleParameter_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleParameter_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniHandleParameter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniHandleParameter()
{
	if (!Z_Registration_Info_UClass_UHoudiniHandleParameter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniHandleParameter.OuterSingleton, Z_Construct_UClass_UHoudiniHandleParameter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniHandleParameter.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniHandleParameter>()
{
	return UHoudiniHandleParameter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniHandleParameter);
UHoudiniHandleParameter::~UHoudiniHandleParameter() {}
// End Class UHoudiniHandleParameter

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniHandleParameter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniHandleParameter, UHoudiniHandleParameter::StaticClass, TEXT("UHoudiniHandleParameter"), &Z_Registration_Info_UClass_UHoudiniHandleParameter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniHandleParameter), 844809679U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniHandleParameter_h_3175858422(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniHandleParameter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniHandleParameter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
