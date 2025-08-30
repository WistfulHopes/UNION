// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniParameterRampFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniParameterRampFloat() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterMultiParm();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterRampFloat();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterRampFloat_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterRampFloatPoint_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterRampModificationEvent_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UHoudiniParameterRampFloat
void UHoudiniParameterRampFloat::StaticRegisterNativesUHoudiniParameterRampFloat()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniParameterRampFloat);
UClass* Z_Construct_UClass_UHoudiniParameterRampFloat_NoRegister()
{
	return UHoudiniParameterRampFloat::StaticClass();
}
struct Z_Construct_UClass_UHoudiniParameterRampFloat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HoudiniParameterRampFloat.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HoudiniParameterRampFloat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniParameterRampFloat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniParameterRampFloat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniParameterRampFloat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniParameterRampFloat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedPoints_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniParameterRampFloat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniParameterRampFloat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedPoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniParameterRampFloat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniParameterRampFloat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPositions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniParameterRampFloat" },
		{ "ModuleRelativePath", "Public/HoudiniParameterRampFloat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValues_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniParameterRampFloat" },
		{ "ModuleRelativePath", "Public/HoudiniParameterRampFloat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultChoices_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniParameterRampFloat" },
		{ "ModuleRelativePath", "Public/HoudiniParameterRampFloat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumDefaultPoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniParameterRampFloat" },
		{ "ModuleRelativePath", "Public/HoudiniParameterRampFloat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCaching_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniParameterRampFloat" },
		{ "ModuleRelativePath", "Public/HoudiniParameterRampFloat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModificationEvents_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniParameterRampFloat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniParameterRampFloat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModificationEvents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniParameterRampFloat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniParameterRampFloat.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedPoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultPositions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultPositions;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultValues;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultChoices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultChoices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumDefaultPoints;
	static void NewProp_bCaching_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaching;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ModificationEvents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ModificationEvents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniParameterRampFloat>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniParameterRampFloatPoint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_Inner_MetaData), NewProp_Points_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampFloat, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_CachedPoints_Inner = { "CachedPoints", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniParameterRampFloatPoint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedPoints_Inner_MetaData), NewProp_CachedPoints_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_CachedPoints = { "CachedPoints", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampFloat, CachedPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedPoints_MetaData), NewProp_CachedPoints_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultPositions_Inner = { "DefaultPositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultPositions = { "DefaultPositions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampFloat, DefaultPositions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPositions_MetaData), NewProp_DefaultPositions_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultValues_Inner = { "DefaultValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultValues = { "DefaultValues", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampFloat, DefaultValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValues_MetaData), NewProp_DefaultValues_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultChoices_Inner = { "DefaultChoices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultChoices = { "DefaultChoices", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampFloat, DefaultChoices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultChoices_MetaData), NewProp_DefaultChoices_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_NumDefaultPoints = { "NumDefaultPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampFloat, NumDefaultPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumDefaultPoints_MetaData), NewProp_NumDefaultPoints_MetaData) };
void Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_bCaching_SetBit(void* Obj)
{
	((UHoudiniParameterRampFloat*)Obj)->bCaching = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_bCaching = { "bCaching", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniParameterRampFloat), &Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_bCaching_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCaching_MetaData), NewProp_bCaching_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_ModificationEvents_Inner = { "ModificationEvents", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniParameterRampModificationEvent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModificationEvents_Inner_MetaData), NewProp_ModificationEvents_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_ModificationEvents = { "ModificationEvents", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampFloat, ModificationEvents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModificationEvents_MetaData), NewProp_ModificationEvents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_CachedPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_CachedPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultPositions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultPositions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultChoices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultChoices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_NumDefaultPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_bCaching,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_ModificationEvents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_ModificationEvents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniParameterMultiParm,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::ClassParams = {
	&UHoudiniParameterRampFloat::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniParameterRampFloat()
{
	if (!Z_Registration_Info_UClass_UHoudiniParameterRampFloat.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniParameterRampFloat.OuterSingleton, Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniParameterRampFloat.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniParameterRampFloat>()
{
	return UHoudiniParameterRampFloat::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniParameterRampFloat);
UHoudiniParameterRampFloat::~UHoudiniParameterRampFloat() {}
// End Class UHoudiniParameterRampFloat

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniParameterRampFloat_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniParameterRampFloat, UHoudiniParameterRampFloat::StaticClass, TEXT("UHoudiniParameterRampFloat"), &Z_Registration_Info_UClass_UHoudiniParameterRampFloat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniParameterRampFloat), 78008196U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniParameterRampFloat_h_1013356002(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniParameterRampFloat_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniParameterRampFloat_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
