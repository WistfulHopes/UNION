// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubstanceCore/Public/SubstanceTexture2D.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubstanceTexture2D() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UTexture2DDynamic();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceGraphInstance_NoRegister();
SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceTexture2D();
SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceTexture2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_SubstanceCore();
// End Cross Module References

// Begin Class USubstanceTexture2D
void USubstanceTexture2D::StaticRegisterNativesUSubstanceTexture2D()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubstanceTexture2D);
UClass* Z_Construct_UClass_USubstanceTexture2D_NoRegister()
{
	return USubstanceTexture2D::StaticClass();
}
struct Z_Construct_UClass_USubstanceTexture2D_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SubstanceTexture2D.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SubstanceTexture2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentInstance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceTexture2D" },
		{ "ModuleRelativePath", "Public/SubstanceTexture2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddressX_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceTexture2D" },
		{ "ModuleRelativePath", "Public/SubstanceTexture2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddressY_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceTexture2D" },
		{ "ModuleRelativePath", "Public/SubstanceTexture2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCooked_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceTexture2D" },
		{ "ModuleRelativePath", "Public/SubstanceTexture2D.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentInstance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AddressX;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AddressY;
	static void NewProp_bCooked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCooked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubstanceTexture2D>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_ParentInstance = { "ParentInstance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubstanceTexture2D, ParentInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentInstance_MetaData), NewProp_ParentInstance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_AddressX = { "AddressX", nullptr, (EPropertyFlags)0x0010050000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubstanceTexture2D, AddressX), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddressX_MetaData), NewProp_AddressX_MetaData) }; // 2220430387
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_AddressY = { "AddressY", nullptr, (EPropertyFlags)0x0010050000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubstanceTexture2D, AddressY), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddressY_MetaData), NewProp_AddressY_MetaData) }; // 2220430387
void Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_bCooked_SetBit(void* Obj)
{
	((USubstanceTexture2D*)Obj)->bCooked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_bCooked = { "bCooked", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USubstanceTexture2D), &Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_bCooked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCooked_MetaData), NewProp_bCooked_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubstanceTexture2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_ParentInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_AddressX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_AddressY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_bCooked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceTexture2D_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USubstanceTexture2D_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTexture2DDynamic,
	(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceTexture2D_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USubstanceTexture2D_Statics::ClassParams = {
	&USubstanceTexture2D::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USubstanceTexture2D_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceTexture2D_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceTexture2D_Statics::Class_MetaDataParams), Z_Construct_UClass_USubstanceTexture2D_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USubstanceTexture2D()
{
	if (!Z_Registration_Info_UClass_USubstanceTexture2D.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubstanceTexture2D.OuterSingleton, Z_Construct_UClass_USubstanceTexture2D_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USubstanceTexture2D.OuterSingleton;
}
template<> SUBSTANCECORE_API UClass* StaticClass<USubstanceTexture2D>()
{
	return USubstanceTexture2D::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USubstanceTexture2D);
USubstanceTexture2D::~USubstanceTexture2D() {}
// End Class USubstanceTexture2D

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceTexture2D_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USubstanceTexture2D, USubstanceTexture2D::StaticClass, TEXT("USubstanceTexture2D"), &Z_Registration_Info_UClass_USubstanceTexture2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubstanceTexture2D), 982772315U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceTexture2D_h_2497546286(TEXT("/Script/SubstanceCore"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceTexture2D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceTexture2D_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
