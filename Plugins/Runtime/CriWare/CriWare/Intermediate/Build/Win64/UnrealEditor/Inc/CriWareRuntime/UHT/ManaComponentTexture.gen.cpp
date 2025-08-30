// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/ManaComponentTexture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManaComponentTexture() {}

// Begin Cross Module References
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EPixelFormat();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaComponentTexture();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaComponentTexture_NoRegister();
CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaComponentTextureType();
ENGINE_API UClass* Z_Construct_UClass_UTexture();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Class UManaComponentTexture
void UManaComponentTexture::StaticRegisterNativesUManaComponentTexture()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UManaComponentTexture);
UClass* Z_Construct_UClass_UManaComponentTexture_NoRegister()
{
	return UManaComponentTexture::StaticClass();
}
struct Z_Construct_UClass_UManaComponentTexture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ManaComponentTexture.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ManaComponentTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponentTexture" },
		{ "ModuleRelativePath", "Public/ManaComponentTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponentTexture" },
		{ "ModuleRelativePath", "Public/ManaComponentTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponentTexture" },
		{ "ModuleRelativePath", "Public/ManaComponentTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponentTexture" },
		{ "ModuleRelativePath", "Public/ManaComponentTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddressX_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponentTexture" },
		{ "ModuleRelativePath", "Public/ManaComponentTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddressY_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponentTexture" },
		{ "ModuleRelativePath", "Public/ManaComponentTexture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeY;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Format;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ComponentType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ComponentType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AddressX;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AddressY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManaComponentTexture>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UManaComponentTexture_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaComponentTexture, SizeX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeX_MetaData), NewProp_SizeX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UManaComponentTexture_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaComponentTexture, SizeY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeY_MetaData), NewProp_SizeY_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UManaComponentTexture_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaComponentTexture, Format), Z_Construct_UEnum_CoreUObject_EPixelFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Format_MetaData), NewProp_Format_MetaData) }; // 2609309733
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UManaComponentTexture_Statics::NewProp_ComponentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UManaComponentTexture_Statics::NewProp_ComponentType = { "ComponentType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaComponentTexture, ComponentType), Z_Construct_UEnum_CriWareRuntime_EManaComponentTextureType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentType_MetaData), NewProp_ComponentType_MetaData) }; // 2524103528
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UManaComponentTexture_Statics::NewProp_AddressX = { "AddressX", nullptr, (EPropertyFlags)0x0010050000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaComponentTexture, AddressX), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddressX_MetaData), NewProp_AddressX_MetaData) }; // 2220430387
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UManaComponentTexture_Statics::NewProp_AddressY = { "AddressY", nullptr, (EPropertyFlags)0x0010050000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaComponentTexture, AddressY), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddressY_MetaData), NewProp_AddressY_MetaData) }; // 2220430387
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UManaComponentTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponentTexture_Statics::NewProp_SizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponentTexture_Statics::NewProp_SizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponentTexture_Statics::NewProp_Format,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponentTexture_Statics::NewProp_ComponentType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponentTexture_Statics::NewProp_ComponentType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponentTexture_Statics::NewProp_AddressX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponentTexture_Statics::NewProp_AddressY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponentTexture_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UManaComponentTexture_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTexture,
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponentTexture_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UManaComponentTexture_Statics::ClassParams = {
	&UManaComponentTexture::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UManaComponentTexture_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponentTexture_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponentTexture_Statics::Class_MetaDataParams), Z_Construct_UClass_UManaComponentTexture_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UManaComponentTexture()
{
	if (!Z_Registration_Info_UClass_UManaComponentTexture.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UManaComponentTexture.OuterSingleton, Z_Construct_UClass_UManaComponentTexture_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UManaComponentTexture.OuterSingleton;
}
template<> CRIWARERUNTIME_API UClass* StaticClass<UManaComponentTexture>()
{
	return UManaComponentTexture::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UManaComponentTexture);
UManaComponentTexture::~UManaComponentTexture() {}
// End Class UManaComponentTexture

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponentTexture_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UManaComponentTexture, UManaComponentTexture::StaticClass, TEXT("UManaComponentTexture"), &Z_Registration_Info_UClass_UManaComponentTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManaComponentTexture), 725199825U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponentTexture_h_2103115317(TEXT("/Script/CriWareRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponentTexture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponentTexture_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
