// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniInputBrush.h"
#include "HoudiniEngineRuntime/Public/HoudiniBrushInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniInputBrush() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UModel();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBrushType();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputActor();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputBrush();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputBrush_NoRegister();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniBrushInfo();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UHoudiniInputBrush
void UHoudiniInputBrush::StaticRegisterNativesUHoudiniInputBrush()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniInputBrush);
UClass* Z_Construct_UClass_UHoudiniInputBrush_NoRegister()
{
	return UHoudiniInputBrush::StaticClass();
}
struct Z_Construct_UClass_UHoudiniInputBrush_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HoudiniInputBrush.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HoudiniInputBrush.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushesInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputBrush" },
		{ "ModuleRelativePath", "Public/HoudiniInputBrush.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombinedModel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputBrush" },
		{ "ModuleRelativePath", "Public/HoudiniInputBrush.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreInputObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputBrush" },
		{ "ModuleRelativePath", "Public/HoudiniInputBrush.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedInputBrushType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniInputBrush" },
		{ "ModuleRelativePath", "Public/HoudiniInputBrush.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BrushesInfo_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BrushesInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombinedModel;
	static void NewProp_bIgnoreInputObject_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreInputObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CachedInputBrushType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputBrush>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_BrushesInfo_Inner = { "BrushesInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniBrushInfo, METADATA_PARAMS(0, nullptr) }; // 657337919
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_BrushesInfo = { "BrushesInfo", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputBrush, BrushesInfo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushesInfo_MetaData), NewProp_BrushesInfo_MetaData) }; // 657337919
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_CombinedModel = { "CombinedModel", nullptr, (EPropertyFlags)0x0020080000202005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputBrush, CombinedModel), Z_Construct_UClass_UModel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombinedModel_MetaData), NewProp_CombinedModel_MetaData) };
void Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_bIgnoreInputObject_SetBit(void* Obj)
{
	((UHoudiniInputBrush*)Obj)->bIgnoreInputObject = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_bIgnoreInputObject = { "bIgnoreInputObject", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInputBrush), &Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_bIgnoreInputObject_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreInputObject_MetaData), NewProp_bIgnoreInputObject_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_CachedInputBrushType = { "CachedInputBrushType", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputBrush, CachedInputBrushType), Z_Construct_UEnum_Engine_EBrushType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedInputBrushType_MetaData), NewProp_CachedInputBrushType_MetaData) }; // 1124994631
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInputBrush_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_BrushesInfo_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_BrushesInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_CombinedModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_bIgnoreInputObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_CachedInputBrushType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputBrush_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniInputBrush_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniInputActor,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputBrush_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputBrush_Statics::ClassParams = {
	&UHoudiniInputBrush::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniInputBrush_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputBrush_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputBrush_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniInputBrush_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniInputBrush()
{
	if (!Z_Registration_Info_UClass_UHoudiniInputBrush.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInputBrush.OuterSingleton, Z_Construct_UClass_UHoudiniInputBrush_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniInputBrush.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputBrush>()
{
	return UHoudiniInputBrush::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputBrush);
UHoudiniInputBrush::~UHoudiniInputBrush() {}
// End Class UHoudiniInputBrush

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputBrush_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniInputBrush, UHoudiniInputBrush::StaticClass, TEXT("UHoudiniInputBrush"), &Z_Registration_Info_UClass_UHoudiniInputBrush, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInputBrush), 1086136677U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputBrush_h_2838696677(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputBrush_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputBrush_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
