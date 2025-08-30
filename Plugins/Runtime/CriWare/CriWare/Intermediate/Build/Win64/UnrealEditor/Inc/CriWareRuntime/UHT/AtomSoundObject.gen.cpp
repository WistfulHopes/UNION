// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomSoundObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomSoundObject() {}

// Begin Cross Module References
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomSoundObject();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomSoundObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Class UAtomSoundObject
void UAtomSoundObject::StaticRegisterNativesUAtomSoundObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomSoundObject);
UClass* Z_Construct_UClass_UAtomSoundObject_NoRegister()
{
	return UAtomSoundObject::StaticClass();
}
struct Z_Construct_UClass_UAtomSoundObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AtomSoundObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AtomSoundObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableVoiceLimitScope_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomSoundObject" },
		{ "ModuleRelativePath", "Public/AtomSoundObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableCategoryCueLimitScope_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomSoundObject" },
		{ "ModuleRelativePath", "Public/AtomSoundObject.h" },
	};
#endif // WITH_METADATA
	static void NewProp_EnableVoiceLimitScope_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableVoiceLimitScope;
	static void NewProp_EnableCategoryCueLimitScope_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableCategoryCueLimitScope;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomSoundObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UAtomSoundObject_Statics::NewProp_EnableVoiceLimitScope_SetBit(void* Obj)
{
	((UAtomSoundObject*)Obj)->EnableVoiceLimitScope = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomSoundObject_Statics::NewProp_EnableVoiceLimitScope = { "EnableVoiceLimitScope", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAtomSoundObject), &Z_Construct_UClass_UAtomSoundObject_Statics::NewProp_EnableVoiceLimitScope_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableVoiceLimitScope_MetaData), NewProp_EnableVoiceLimitScope_MetaData) };
void Z_Construct_UClass_UAtomSoundObject_Statics::NewProp_EnableCategoryCueLimitScope_SetBit(void* Obj)
{
	((UAtomSoundObject*)Obj)->EnableCategoryCueLimitScope = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomSoundObject_Statics::NewProp_EnableCategoryCueLimitScope = { "EnableCategoryCueLimitScope", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAtomSoundObject), &Z_Construct_UClass_UAtomSoundObject_Statics::NewProp_EnableCategoryCueLimitScope_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableCategoryCueLimitScope_MetaData), NewProp_EnableCategoryCueLimitScope_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomSoundObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundObject_Statics::NewProp_EnableVoiceLimitScope,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundObject_Statics::NewProp_EnableCategoryCueLimitScope,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAtomSoundObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomSoundObject_Statics::ClassParams = {
	&UAtomSoundObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAtomSoundObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundObject_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UAtomSoundObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAtomSoundObject()
{
	if (!Z_Registration_Info_UClass_UAtomSoundObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomSoundObject.OuterSingleton, Z_Construct_UClass_UAtomSoundObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAtomSoundObject.OuterSingleton;
}
template<> CRIWARERUNTIME_API UClass* StaticClass<UAtomSoundObject>()
{
	return UAtomSoundObject::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomSoundObject);
UAtomSoundObject::~UAtomSoundObject() {}
// End Class UAtomSoundObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSoundObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAtomSoundObject, UAtomSoundObject::StaticClass, TEXT("UAtomSoundObject"), &Z_Registration_Info_UClass_UAtomSoundObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomSoundObject), 4285683834U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSoundObject_h_2894567854(TEXT("/Script/CriWareRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSoundObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSoundObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
