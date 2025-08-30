// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniInputDataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniInputDataTable() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputDataTable();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputDataTable_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputObject();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UHoudiniInputDataTable
void UHoudiniInputDataTable::StaticRegisterNativesUHoudiniInputDataTable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniInputDataTable);
UClass* Z_Construct_UClass_UHoudiniInputDataTable_NoRegister()
{
	return UHoudiniInputDataTable::StaticClass();
}
struct Z_Construct_UClass_UHoudiniInputDataTable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HoudiniInputDataTable.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HoudiniInputDataTable.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputDataTable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHoudiniInputDataTable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniInputObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputDataTable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputDataTable_Statics::ClassParams = {
	&UHoudiniInputDataTable::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputDataTable_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniInputDataTable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniInputDataTable()
{
	if (!Z_Registration_Info_UClass_UHoudiniInputDataTable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInputDataTable.OuterSingleton, Z_Construct_UClass_UHoudiniInputDataTable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniInputDataTable.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputDataTable>()
{
	return UHoudiniInputDataTable::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputDataTable);
UHoudiniInputDataTable::~UHoudiniInputDataTable() {}
// End Class UHoudiniInputDataTable

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputDataTable_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniInputDataTable, UHoudiniInputDataTable::StaticClass, TEXT("UHoudiniInputDataTable"), &Z_Registration_Info_UClass_UHoudiniInputDataTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInputDataTable), 3500660992U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputDataTable_h_1889083047(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputDataTable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputDataTable_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
