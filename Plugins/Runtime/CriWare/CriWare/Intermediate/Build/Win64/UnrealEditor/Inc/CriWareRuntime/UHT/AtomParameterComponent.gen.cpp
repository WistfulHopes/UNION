// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomParameterComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomParameterComponent() {}

// Begin Cross Module References
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtom3dRegion_NoRegister();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomParameterComponent();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomParameterComponent_NoRegister();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomSoundObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Class UAtomParameterComponent
void UAtomParameterComponent::StaticRegisterNativesUAtomParameterComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomParameterComponent);
UClass* Z_Construct_UClass_UAtomParameterComponent_NoRegister()
{
	return UAtomParameterComponent::StaticClass();
}
struct Z_Construct_UClass_UAtomParameterComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AtomParameterComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AtomParameterComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomParameterComponent" },
		{ "ModuleRelativePath", "Public/AtomParameterComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Region_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomParameterComponent" },
		{ "ModuleRelativePath", "Public/AtomParameterComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Region;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomParameterComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtomParameterComponent_Statics::NewProp_SoundObject = { "SoundObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAtomParameterComponent, SoundObject), Z_Construct_UClass_UAtomSoundObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundObject_MetaData), NewProp_SoundObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtomParameterComponent_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAtomParameterComponent, Region), Z_Construct_UClass_UAtom3dRegion_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Region_MetaData), NewProp_Region_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomParameterComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomParameterComponent_Statics::NewProp_SoundObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomParameterComponent_Statics::NewProp_Region,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAtomParameterComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAtomParameterComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAtomParameterComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomParameterComponent_Statics::ClassParams = {
	&UAtomParameterComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAtomParameterComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAtomParameterComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAtomParameterComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAtomParameterComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAtomParameterComponent()
{
	if (!Z_Registration_Info_UClass_UAtomParameterComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomParameterComponent.OuterSingleton, Z_Construct_UClass_UAtomParameterComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAtomParameterComponent.OuterSingleton;
}
template<> CRIWARERUNTIME_API UClass* StaticClass<UAtomParameterComponent>()
{
	return UAtomParameterComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomParameterComponent);
UAtomParameterComponent::~UAtomParameterComponent() {}
// End Class UAtomParameterComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomParameterComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAtomParameterComponent, UAtomParameterComponent::StaticClass, TEXT("UAtomParameterComponent"), &Z_Registration_Info_UClass_UAtomParameterComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomParameterComponent), 3397387955U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomParameterComponent_h_638540791(TEXT("/Script/CriWareRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomParameterComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomParameterComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
