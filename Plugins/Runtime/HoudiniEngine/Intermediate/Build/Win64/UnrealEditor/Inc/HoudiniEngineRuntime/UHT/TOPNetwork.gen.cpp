// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/TOPNetwork.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTOPNetwork() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UTOPNetwork();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UTOPNetwork_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UTOPNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UTOPNetwork
void UTOPNetwork::StaticRegisterNativesUTOPNetwork()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTOPNetwork);
UClass* Z_Construct_UClass_UTOPNetwork_NoRegister()
{
	return UTOPNetwork::StaticClass();
}
struct Z_Construct_UClass_UTOPNetwork_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TOPNetwork.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TOPNetwork.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TOPNetwork" },
		{ "ModuleRelativePath", "Public/TOPNetwork.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TOPNetwork" },
		{ "ModuleRelativePath", "Public/TOPNetwork.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodePath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TOPNetwork" },
		{ "ModuleRelativePath", "Public/TOPNetwork.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllTOPNodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TOPNetwork" },
		{ "ModuleRelativePath", "Public/TOPNetwork.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedTOPIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TOPNetwork" },
		{ "ModuleRelativePath", "Public/TOPNetwork.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TOPNetwork" },
		{ "ModuleRelativePath", "Public/TOPNetwork.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowResults_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TOPNetwork" },
		{ "ModuleRelativePath", "Public/TOPNetwork.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoLoadResults_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TOPNetwork" },
		{ "ModuleRelativePath", "Public/TOPNetwork.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NodeID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodeName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodePath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllTOPNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllTOPNodes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedTOPIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParentName;
	static void NewProp_bShowResults_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowResults;
	static void NewProp_bAutoLoadResults_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoLoadResults;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTOPNetwork>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTOPNetwork_Statics::NewProp_NodeID = { "NodeID", nullptr, (EPropertyFlags)0x0010000400002005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTOPNetwork, NodeID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeID_MetaData), NewProp_NodeID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTOPNetwork_Statics::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x0010000400000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTOPNetwork, NodeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeName_MetaData), NewProp_NodeName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTOPNetwork_Statics::NewProp_NodePath = { "NodePath", nullptr, (EPropertyFlags)0x0010000400000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTOPNetwork, NodePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodePath_MetaData), NewProp_NodePath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTOPNetwork_Statics::NewProp_AllTOPNodes_Inner = { "AllTOPNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTOPNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTOPNetwork_Statics::NewProp_AllTOPNodes = { "AllTOPNodes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTOPNetwork, AllTOPNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllTOPNodes_MetaData), NewProp_AllTOPNodes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTOPNetwork_Statics::NewProp_SelectedTOPIndex = { "SelectedTOPIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTOPNetwork, SelectedTOPIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedTOPIndex_MetaData), NewProp_SelectedTOPIndex_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTOPNetwork_Statics::NewProp_ParentName = { "ParentName", nullptr, (EPropertyFlags)0x0010000400000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTOPNetwork, ParentName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentName_MetaData), NewProp_ParentName_MetaData) };
void Z_Construct_UClass_UTOPNetwork_Statics::NewProp_bShowResults_SetBit(void* Obj)
{
	((UTOPNetwork*)Obj)->bShowResults = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTOPNetwork_Statics::NewProp_bShowResults = { "bShowResults", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTOPNetwork), &Z_Construct_UClass_UTOPNetwork_Statics::NewProp_bShowResults_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowResults_MetaData), NewProp_bShowResults_MetaData) };
void Z_Construct_UClass_UTOPNetwork_Statics::NewProp_bAutoLoadResults_SetBit(void* Obj)
{
	((UTOPNetwork*)Obj)->bAutoLoadResults = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTOPNetwork_Statics::NewProp_bAutoLoadResults = { "bAutoLoadResults", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTOPNetwork), &Z_Construct_UClass_UTOPNetwork_Statics::NewProp_bAutoLoadResults_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoLoadResults_MetaData), NewProp_bAutoLoadResults_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTOPNetwork_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNetwork_Statics::NewProp_NodeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNetwork_Statics::NewProp_NodeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNetwork_Statics::NewProp_NodePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNetwork_Statics::NewProp_AllTOPNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNetwork_Statics::NewProp_AllTOPNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNetwork_Statics::NewProp_SelectedTOPIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNetwork_Statics::NewProp_ParentName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNetwork_Statics::NewProp_bShowResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNetwork_Statics::NewProp_bAutoLoadResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNetwork_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTOPNetwork_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNetwork_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTOPNetwork_Statics::ClassParams = {
	&UTOPNetwork::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTOPNetwork_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNetwork_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNetwork_Statics::Class_MetaDataParams), Z_Construct_UClass_UTOPNetwork_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTOPNetwork()
{
	if (!Z_Registration_Info_UClass_UTOPNetwork.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTOPNetwork.OuterSingleton, Z_Construct_UClass_UTOPNetwork_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTOPNetwork.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UTOPNetwork>()
{
	return UTOPNetwork::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTOPNetwork);
UTOPNetwork::~UTOPNetwork() {}
// End Class UTOPNetwork

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_TOPNetwork_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTOPNetwork, UTOPNetwork::StaticClass, TEXT("UTOPNetwork"), &Z_Registration_Info_UClass_UTOPNetwork, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTOPNetwork), 3833598126U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_TOPNetwork_h_440296200(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_TOPNetwork_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_TOPNetwork_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
