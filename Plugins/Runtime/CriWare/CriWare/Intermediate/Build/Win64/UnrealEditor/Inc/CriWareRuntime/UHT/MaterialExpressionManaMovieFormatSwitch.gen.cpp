// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/MaterialExpressionManaMovieFormatSwitch.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionManaMovieFormatSwitch() {}

// Begin Cross Module References
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UDEPRECATED_MaterialExpressionManaMovieFormatSwitch();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UDEPRECATED_MaterialExpressionManaMovieFormatSwitch_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Class UDEPRECATED_MaterialExpressionManaMovieFormatSwitch
void UDEPRECATED_MaterialExpressionManaMovieFormatSwitch::StaticRegisterNativesUDEPRECATED_MaterialExpressionManaMovieFormatSwitch()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_MaterialExpressionManaMovieFormatSwitch);
UClass* Z_Construct_UClass_UDEPRECATED_MaterialExpressionManaMovieFormatSwitch_NoRegister()
{
	return UDEPRECATED_MaterialExpressionManaMovieFormatSwitch::StaticClass();
}
struct Z_Construct_UClass_UDEPRECATED_MaterialExpressionManaMovieFormatSwitch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "MaterialExpressionManaMovieFormatSwitch.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MaterialExpressionManaMovieFormatSwitch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MaterialExpressionManaMovieFormatSwitch" },
		{ "ModuleRelativePath", "Public/MaterialExpressionManaMovieFormatSwitch.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Inputs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_MaterialExpressionManaMovieFormatSwitch>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEPRECATED_MaterialExpressionManaMovieFormatSwitch_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(Inputs, UDEPRECATED_MaterialExpressionManaMovieFormatSwitch), STRUCT_OFFSET(UDEPRECATED_MaterialExpressionManaMovieFormatSwitch, Inputs), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inputs_MetaData), NewProp_Inputs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_MaterialExpressionManaMovieFormatSwitch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_MaterialExpressionManaMovieFormatSwitch_Statics::NewProp_Inputs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_MaterialExpressionManaMovieFormatSwitch_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDEPRECATED_MaterialExpressionManaMovieFormatSwitch_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_MaterialExpressionManaMovieFormatSwitch_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_MaterialExpressionManaMovieFormatSwitch_Statics::ClassParams = {
	&UDEPRECATED_MaterialExpressionManaMovieFormatSwitch::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDEPRECATED_MaterialExpressionManaMovieFormatSwitch_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_MaterialExpressionManaMovieFormatSwitch_Statics::PropPointers),
	0,
	0x020822B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_MaterialExpressionManaMovieFormatSwitch_Statics::Class_MetaDataParams), Z_Construct_UClass_UDEPRECATED_MaterialExpressionManaMovieFormatSwitch_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDEPRECATED_MaterialExpressionManaMovieFormatSwitch()
{
	if (!Z_Registration_Info_UClass_UDEPRECATED_MaterialExpressionManaMovieFormatSwitch.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_MaterialExpressionManaMovieFormatSwitch.OuterSingleton, Z_Construct_UClass_UDEPRECATED_MaterialExpressionManaMovieFormatSwitch_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDEPRECATED_MaterialExpressionManaMovieFormatSwitch.OuterSingleton;
}
template<> CRIWARERUNTIME_API UClass* StaticClass<UDEPRECATED_MaterialExpressionManaMovieFormatSwitch>()
{
	return UDEPRECATED_MaterialExpressionManaMovieFormatSwitch::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_MaterialExpressionManaMovieFormatSwitch);
UDEPRECATED_MaterialExpressionManaMovieFormatSwitch::~UDEPRECATED_MaterialExpressionManaMovieFormatSwitch() {}
// End Class UDEPRECATED_MaterialExpressionManaMovieFormatSwitch

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_MaterialExpressionManaMovieFormatSwitch_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_MaterialExpressionManaMovieFormatSwitch, UDEPRECATED_MaterialExpressionManaMovieFormatSwitch::StaticClass, TEXT("UDEPRECATED_MaterialExpressionManaMovieFormatSwitch"), &Z_Registration_Info_UClass_UDEPRECATED_MaterialExpressionManaMovieFormatSwitch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_MaterialExpressionManaMovieFormatSwitch), 948546944U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_MaterialExpressionManaMovieFormatSwitch_h_477655540(TEXT("/Script/CriWareRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_MaterialExpressionManaMovieFormatSwitch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_MaterialExpressionManaMovieFormatSwitch_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
