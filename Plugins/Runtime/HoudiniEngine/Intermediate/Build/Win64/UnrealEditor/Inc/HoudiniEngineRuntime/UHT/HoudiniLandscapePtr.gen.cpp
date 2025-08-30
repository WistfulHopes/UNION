// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniLandscapePtr.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniLandscapePtr() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniLandscapePtr();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniLandscapePtr_NoRegister();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType();
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeProxy_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UHoudiniLandscapePtr
void UHoudiniLandscapePtr::StaticRegisterNativesUHoudiniLandscapePtr()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniLandscapePtr);
UClass* Z_Construct_UClass_UHoudiniLandscapePtr_NoRegister()
{
	return UHoudiniLandscapePtr::StaticClass();
}
struct Z_Construct_UClass_UHoudiniLandscapePtr_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HoudiniLandscapePtr.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HoudiniLandscapePtr.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeSoftPtr_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniLandscapePtr" },
		{ "ModuleRelativePath", "Public/HoudiniLandscapePtr.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakeType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniLandscapePtr" },
		{ "ModuleRelativePath", "Public/HoudiniLandscapePtr.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditLayerName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniLandscapePtr" },
		{ "ModuleRelativePath", "Public/HoudiniLandscapePtr.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LandscapeSoftPtr;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BakeType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BakeType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EditLayerName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniLandscapePtr>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_LandscapeSoftPtr = { "LandscapeSoftPtr", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniLandscapePtr, LandscapeSoftPtr), Z_Construct_UClass_ALandscapeProxy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeSoftPtr_MetaData), NewProp_LandscapeSoftPtr_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_BakeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_BakeType = { "BakeType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniLandscapePtr, BakeType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakeType_MetaData), NewProp_BakeType_MetaData) }; // 4117445867
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_EditLayerName = { "EditLayerName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniLandscapePtr, EditLayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditLayerName_MetaData), NewProp_EditLayerName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniLandscapePtr_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_LandscapeSoftPtr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_BakeType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_BakeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_EditLayerName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapePtr_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniLandscapePtr_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapePtr_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniLandscapePtr_Statics::ClassParams = {
	&UHoudiniLandscapePtr::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniLandscapePtr_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapePtr_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapePtr_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniLandscapePtr_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniLandscapePtr()
{
	if (!Z_Registration_Info_UClass_UHoudiniLandscapePtr.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniLandscapePtr.OuterSingleton, Z_Construct_UClass_UHoudiniLandscapePtr_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniLandscapePtr.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniLandscapePtr>()
{
	return UHoudiniLandscapePtr::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniLandscapePtr);
UHoudiniLandscapePtr::~UHoudiniLandscapePtr() {}
// End Class UHoudiniLandscapePtr

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniLandscapePtr_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniLandscapePtr, UHoudiniLandscapePtr::StaticClass, TEXT("UHoudiniLandscapePtr"), &Z_Registration_Info_UClass_UHoudiniLandscapePtr, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniLandscapePtr), 95483450U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniLandscapePtr_h_683341958(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniLandscapePtr_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniLandscapePtr_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
