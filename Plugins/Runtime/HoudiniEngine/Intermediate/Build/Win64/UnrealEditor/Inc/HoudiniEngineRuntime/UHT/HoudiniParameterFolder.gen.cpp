// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniParameterFolder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniParameterFolder() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameter();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterFolder();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterFolder_NoRegister();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniFolderParameterType();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UHoudiniParameterFolder
void UHoudiniParameterFolder::StaticRegisterNativesUHoudiniParameterFolder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniParameterFolder);
UClass* Z_Construct_UClass_UHoudiniParameterFolder_NoRegister()
{
	return UHoudiniParameterFolder::StaticClass();
}
struct Z_Construct_UClass_UHoudiniParameterFolder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HoudiniParameterFolder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HoudiniParameterFolder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FolderType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniParameterFolder" },
		{ "ModuleRelativePath", "Public/HoudiniParameterFolder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExpanded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniParameterFolder" },
		{ "ModuleRelativePath", "Public/HoudiniParameterFolder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bChosen_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniParameterFolder" },
		{ "ModuleRelativePath", "Public/HoudiniParameterFolder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildCounter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniParameterFolder" },
		{ "ModuleRelativePath", "Public/HoudiniParameterFolder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsContentShown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniParameterFolder" },
		{ "ModuleRelativePath", "Public/HoudiniParameterFolder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FolderType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FolderType;
	static void NewProp_bExpanded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExpanded;
	static void NewProp_bChosen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bChosen;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChildCounter;
	static void NewProp_bIsContentShown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsContentShown;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniParameterFolder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_FolderType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_FolderType = { "FolderType", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterFolder, FolderType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniFolderParameterType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FolderType_MetaData), NewProp_FolderType_MetaData) }; // 2694273428
void Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bExpanded_SetBit(void* Obj)
{
	((UHoudiniParameterFolder*)Obj)->bExpanded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bExpanded = { "bExpanded", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniParameterFolder), &Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bExpanded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExpanded_MetaData), NewProp_bExpanded_MetaData) };
void Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bChosen_SetBit(void* Obj)
{
	((UHoudiniParameterFolder*)Obj)->bChosen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bChosen = { "bChosen", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniParameterFolder), &Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bChosen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bChosen_MetaData), NewProp_bChosen_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_ChildCounter = { "ChildCounter", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterFolder, ChildCounter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildCounter_MetaData), NewProp_ChildCounter_MetaData) };
void Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bIsContentShown_SetBit(void* Obj)
{
	((UHoudiniParameterFolder*)Obj)->bIsContentShown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bIsContentShown = { "bIsContentShown", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniParameterFolder), &Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bIsContentShown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsContentShown_MetaData), NewProp_bIsContentShown_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniParameterFolder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_FolderType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_FolderType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bExpanded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bChosen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_ChildCounter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bIsContentShown,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterFolder_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniParameterFolder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniParameter,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterFolder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniParameterFolder_Statics::ClassParams = {
	&UHoudiniParameterFolder::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniParameterFolder_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterFolder_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterFolder_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniParameterFolder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniParameterFolder()
{
	if (!Z_Registration_Info_UClass_UHoudiniParameterFolder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniParameterFolder.OuterSingleton, Z_Construct_UClass_UHoudiniParameterFolder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniParameterFolder.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniParameterFolder>()
{
	return UHoudiniParameterFolder::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniParameterFolder);
UHoudiniParameterFolder::~UHoudiniParameterFolder() {}
// End Class UHoudiniParameterFolder

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniParameterFolder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniParameterFolder, UHoudiniParameterFolder::StaticClass, TEXT("UHoudiniParameterFolder"), &Z_Registration_Info_UClass_UHoudiniParameterFolder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniParameterFolder), 1624368425U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniParameterFolder_h_1503216806(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniParameterFolder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniParameterFolder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
