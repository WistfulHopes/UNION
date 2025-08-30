// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniHandleComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniHandleComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniHandleComponent();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniHandleComponent_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniHandleParameter_NoRegister();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UHoudiniHandleComponent
void UHoudiniHandleComponent::StaticRegisterNativesUHoudiniHandleComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniHandleComponent);
UClass* Z_Construct_UClass_UHoudiniHandleComponent_NoRegister()
{
	return UHoudiniHandleComponent::StaticClass();
}
struct Z_Construct_UClass_UHoudiniHandleComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "HoudiniHandleComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HoudiniHandleComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XformParms_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniHandleComponent" },
		{ "ModuleRelativePath", "Public/HoudiniHandleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RSTParm_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniHandleComponent" },
		{ "ModuleRelativePath", "Public/HoudiniHandleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotOrderParm_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniHandleComponent" },
		{ "ModuleRelativePath", "Public/HoudiniHandleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandleType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniHandleComponent" },
		{ "ModuleRelativePath", "Public/HoudiniHandleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandleName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniHandleComponent" },
		{ "ModuleRelativePath", "Public/HoudiniHandleComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_XformParms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_XformParms;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RSTParm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RotOrderParm;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HandleType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HandleType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HandleName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniHandleComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_XformParms_Inner = { "XformParms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniHandleParameter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_XformParms = { "XformParms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniHandleComponent, XformParms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XformParms_MetaData), NewProp_XformParms_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_RSTParm = { "RSTParm", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniHandleComponent, RSTParm), Z_Construct_UClass_UHoudiniHandleParameter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RSTParm_MetaData), NewProp_RSTParm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_RotOrderParm = { "RotOrderParm", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniHandleComponent, RotOrderParm), Z_Construct_UClass_UHoudiniHandleParameter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotOrderParm_MetaData), NewProp_RotOrderParm_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_HandleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_HandleType = { "HandleType", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniHandleComponent, HandleType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandleType_MetaData), NewProp_HandleType_MetaData) }; // 4207808938
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_HandleName = { "HandleName", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniHandleComponent, HandleName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandleName_MetaData), NewProp_HandleName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniHandleComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_XformParms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_XformParms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_RSTParm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_RotOrderParm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_HandleType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_HandleType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_HandleName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniHandleComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniHandleComponent_Statics::ClassParams = {
	&UHoudiniHandleComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniHandleComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleComponent_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniHandleComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniHandleComponent()
{
	if (!Z_Registration_Info_UClass_UHoudiniHandleComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniHandleComponent.OuterSingleton, Z_Construct_UClass_UHoudiniHandleComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniHandleComponent.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniHandleComponent>()
{
	return UHoudiniHandleComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniHandleComponent);
UHoudiniHandleComponent::~UHoudiniHandleComponent() {}
// End Class UHoudiniHandleComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniHandleComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniHandleComponent, UHoudiniHandleComponent::StaticClass, TEXT("UHoudiniHandleComponent"), &Z_Registration_Info_UClass_UHoudiniHandleComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniHandleComponent), 2180870507U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniHandleComponent_h_2066114887(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniHandleComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniHandleComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
