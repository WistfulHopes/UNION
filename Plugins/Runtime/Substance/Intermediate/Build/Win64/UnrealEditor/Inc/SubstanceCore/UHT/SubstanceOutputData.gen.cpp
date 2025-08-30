// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubstanceCore/Public/SubstanceOutputData.h"
#include "Runtime/Engine/Public/MaterialTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubstanceOutputData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialParameterInfo();
SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceGraphInstance_NoRegister();
SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceOutputData();
SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceOutputData_NoRegister();
UPackage* Z_Construct_UPackage__Script_SubstanceCore();
// End Cross Module References

// Begin Class USubstanceOutputData
void USubstanceOutputData::StaticRegisterNativesUSubstanceOutputData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubstanceOutputData);
UClass* Z_Construct_UClass_USubstanceOutputData_NoRegister()
{
	return USubstanceOutputData::StaticClass();
}
struct Z_Construct_UClass_USubstanceOutputData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SubstanceOutputData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SubstanceOutputData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectedObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceOutputData" },
		{ "ModuleRelativePath", "Public/SubstanceOutputData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParamInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceOutputData" },
		{ "ModuleRelativePath", "Public/SubstanceOutputData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentInstance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceOutputData" },
		{ "ModuleRelativePath", "Public/SubstanceOutputData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CacheGuid_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceOutputData" },
		{ "ModuleRelativePath", "Public/SubstanceOutputData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConnectedObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParamInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentInstance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CacheGuid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubstanceOutputData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_ConnectedObject = { "ConnectedObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubstanceOutputData, ConnectedObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectedObject_MetaData), NewProp_ConnectedObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_ParamInfo = { "ParamInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubstanceOutputData, ParamInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParamInfo_MetaData), NewProp_ParamInfo_MetaData) }; // 682741679
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_ParentInstance = { "ParentInstance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubstanceOutputData, ParentInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentInstance_MetaData), NewProp_ParentInstance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_CacheGuid = { "CacheGuid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubstanceOutputData, CacheGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CacheGuid_MetaData), NewProp_CacheGuid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubstanceOutputData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_ConnectedObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_ParamInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_ParentInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_CacheGuid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceOutputData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USubstanceOutputData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceOutputData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USubstanceOutputData_Statics::ClassParams = {
	&USubstanceOutputData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USubstanceOutputData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceOutputData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceOutputData_Statics::Class_MetaDataParams), Z_Construct_UClass_USubstanceOutputData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USubstanceOutputData()
{
	if (!Z_Registration_Info_UClass_USubstanceOutputData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubstanceOutputData.OuterSingleton, Z_Construct_UClass_USubstanceOutputData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USubstanceOutputData.OuterSingleton;
}
template<> SUBSTANCECORE_API UClass* StaticClass<USubstanceOutputData>()
{
	return USubstanceOutputData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USubstanceOutputData);
USubstanceOutputData::~USubstanceOutputData() {}
// End Class USubstanceOutputData

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceOutputData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USubstanceOutputData, USubstanceOutputData::StaticClass, TEXT("USubstanceOutputData"), &Z_Registration_Info_UClass_USubstanceOutputData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubstanceOutputData), 1277045273U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceOutputData_h_2551282879(TEXT("/Script/SubstanceCore"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceOutputData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceOutputData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
