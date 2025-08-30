// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniParameterChoice.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniParameterChoice() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameter();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterChoice();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterChoice_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UHoudiniParameterChoice
void UHoudiniParameterChoice::StaticRegisterNativesUHoudiniParameterChoice()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniParameterChoice);
UClass* Z_Construct_UClass_UHoudiniParameterChoice_NoRegister()
{
	return UHoudiniParameterChoice::StaticClass();
}
struct Z_Construct_UClass_UHoudiniParameterChoice_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HoudiniParameterChoice.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HoudiniParameterChoice.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniParameterChoice" },
		{ "ModuleRelativePath", "Public/HoudiniParameterChoice.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultIntValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniParameterChoice" },
		{ "ModuleRelativePath", "Public/HoudiniParameterChoice.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniParameterChoice" },
		{ "ModuleRelativePath", "Public/HoudiniParameterChoice.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultStringValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniParameterChoice" },
		{ "ModuleRelativePath", "Public/HoudiniParameterChoice.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringChoiceValues_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniParameterChoice" },
		{ "ModuleRelativePath", "Public/HoudiniParameterChoice.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringChoiceLabels_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniParameterChoice" },
		{ "ModuleRelativePath", "Public/HoudiniParameterChoice.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsChildOfRamp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniParameterChoice" },
		{ "ModuleRelativePath", "Public/HoudiniParameterChoice.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntValuesArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniParameterChoice" },
		{ "ModuleRelativePath", "Public/HoudiniParameterChoice.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultIntValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultStringValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringChoiceValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StringChoiceValues;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringChoiceLabels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StringChoiceLabels;
	static void NewProp_bIsChildOfRamp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsChildOfRamp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntValuesArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IntValuesArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniParameterChoice>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_IntValue = { "IntValue", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterChoice, IntValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntValue_MetaData), NewProp_IntValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_DefaultIntValue = { "DefaultIntValue", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterChoice, DefaultIntValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultIntValue_MetaData), NewProp_DefaultIntValue_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterChoice, StringValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringValue_MetaData), NewProp_StringValue_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_DefaultStringValue = { "DefaultStringValue", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterChoice, DefaultStringValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultStringValue_MetaData), NewProp_DefaultStringValue_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_StringChoiceValues_Inner = { "StringChoiceValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_StringChoiceValues = { "StringChoiceValues", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterChoice, StringChoiceValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringChoiceValues_MetaData), NewProp_StringChoiceValues_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_StringChoiceLabels_Inner = { "StringChoiceLabels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_StringChoiceLabels = { "StringChoiceLabels", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterChoice, StringChoiceLabels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringChoiceLabels_MetaData), NewProp_StringChoiceLabels_MetaData) };
void Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_bIsChildOfRamp_SetBit(void* Obj)
{
	((UHoudiniParameterChoice*)Obj)->bIsChildOfRamp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_bIsChildOfRamp = { "bIsChildOfRamp", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniParameterChoice), &Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_bIsChildOfRamp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsChildOfRamp_MetaData), NewProp_bIsChildOfRamp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_IntValuesArray_Inner = { "IntValuesArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_IntValuesArray = { "IntValuesArray", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterChoice, IntValuesArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntValuesArray_MetaData), NewProp_IntValuesArray_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniParameterChoice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_IntValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_DefaultIntValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_StringValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_DefaultStringValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_StringChoiceValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_StringChoiceValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_StringChoiceLabels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_StringChoiceLabels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_bIsChildOfRamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_IntValuesArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_IntValuesArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterChoice_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniParameterChoice_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniParameter,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterChoice_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniParameterChoice_Statics::ClassParams = {
	&UHoudiniParameterChoice::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniParameterChoice_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterChoice_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterChoice_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniParameterChoice_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniParameterChoice()
{
	if (!Z_Registration_Info_UClass_UHoudiniParameterChoice.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniParameterChoice.OuterSingleton, Z_Construct_UClass_UHoudiniParameterChoice_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniParameterChoice.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniParameterChoice>()
{
	return UHoudiniParameterChoice::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniParameterChoice);
UHoudiniParameterChoice::~UHoudiniParameterChoice() {}
// End Class UHoudiniParameterChoice

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniParameterChoice_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniParameterChoice, UHoudiniParameterChoice::StaticClass, TEXT("UHoudiniParameterChoice"), &Z_Registration_Info_UClass_UHoudiniParameterChoice, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniParameterChoice), 757360658U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniParameterChoice_h_2613885011(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniParameterChoice_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniParameterChoice_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
