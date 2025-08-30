// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomListenerFocusPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomListenerFocusPoint() {}

// Begin Cross Module References
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomListenerFocusPoint();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomListenerFocusPoint_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Class UAtomListenerFocusPoint
void UAtomListenerFocusPoint::StaticRegisterNativesUAtomListenerFocusPoint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomListenerFocusPoint);
UClass* Z_Construct_UClass_UAtomListenerFocusPoint_NoRegister()
{
	return UAtomListenerFocusPoint::StaticClass();
}
struct Z_Construct_UClass_UAtomListenerFocusPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "AtomListenerFocusPoint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AtomListenerFocusPoint.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFocusLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomListenerFocusPoint" },
		{ "ModuleRelativePath", "Public/AtomListenerFocusPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionFocusLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomListenerFocusPoint" },
		{ "ModuleRelativePath", "Public/AtomListenerFocusPoint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceFocusLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DirectionFocusLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomListenerFocusPoint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtomListenerFocusPoint_Statics::NewProp_DistanceFocusLevel = { "DistanceFocusLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAtomListenerFocusPoint, DistanceFocusLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceFocusLevel_MetaData), NewProp_DistanceFocusLevel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtomListenerFocusPoint_Statics::NewProp_DirectionFocusLevel = { "DirectionFocusLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAtomListenerFocusPoint, DirectionFocusLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionFocusLevel_MetaData), NewProp_DirectionFocusLevel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomListenerFocusPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomListenerFocusPoint_Statics::NewProp_DistanceFocusLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomListenerFocusPoint_Statics::NewProp_DirectionFocusLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAtomListenerFocusPoint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAtomListenerFocusPoint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAtomListenerFocusPoint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomListenerFocusPoint_Statics::ClassParams = {
	&UAtomListenerFocusPoint::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAtomListenerFocusPoint_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAtomListenerFocusPoint_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAtomListenerFocusPoint_Statics::Class_MetaDataParams), Z_Construct_UClass_UAtomListenerFocusPoint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAtomListenerFocusPoint()
{
	if (!Z_Registration_Info_UClass_UAtomListenerFocusPoint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomListenerFocusPoint.OuterSingleton, Z_Construct_UClass_UAtomListenerFocusPoint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAtomListenerFocusPoint.OuterSingleton;
}
template<> CRIWARERUNTIME_API UClass* StaticClass<UAtomListenerFocusPoint>()
{
	return UAtomListenerFocusPoint::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomListenerFocusPoint);
UAtomListenerFocusPoint::~UAtomListenerFocusPoint() {}
// End Class UAtomListenerFocusPoint

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomListenerFocusPoint_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAtomListenerFocusPoint, UAtomListenerFocusPoint::StaticClass, TEXT("UAtomListenerFocusPoint"), &Z_Registration_Info_UClass_UAtomListenerFocusPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomListenerFocusPoint), 802563936U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomListenerFocusPoint_h_413810150(TEXT("/Script/CriWareRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomListenerFocusPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomListenerFocusPoint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
