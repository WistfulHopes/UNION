// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/ManaTexture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManaTexture() {}

// Begin Cross Module References
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EPixelFormat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaComponent_NoRegister();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaComponentTexture_NoRegister();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaSource_NoRegister();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaTexture();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaTexture_NoRegister();
CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UManaTexture_OnTextureUpdated__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UTexture();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Delegate FOnTextureUpdated
struct Z_Construct_UDelegateFunction_UManaTexture_OnTextureUpdated__DelegateSignature_Statics
{
	struct ManaTexture_eventOnTextureUpdated_Parms
	{
		UManaTexture* ManaTexture;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaTexture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ManaTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UManaTexture_OnTextureUpdated__DelegateSignature_Statics::NewProp_ManaTexture = { "ManaTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaTexture_eventOnTextureUpdated_Parms, ManaTexture), Z_Construct_UClass_UManaTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UManaTexture_OnTextureUpdated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UManaTexture_OnTextureUpdated__DelegateSignature_Statics::NewProp_ManaTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaTexture_OnTextureUpdated__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UManaTexture_OnTextureUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaTexture, nullptr, "OnTextureUpdated__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UManaTexture_OnTextureUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaTexture_OnTextureUpdated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UManaTexture_OnTextureUpdated__DelegateSignature_Statics::ManaTexture_eventOnTextureUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaTexture_OnTextureUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UManaTexture_OnTextureUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UManaTexture_OnTextureUpdated__DelegateSignature_Statics::ManaTexture_eventOnTextureUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UManaTexture_OnTextureUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UManaTexture_OnTextureUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UManaTexture::FOnTextureUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnTextureUpdated, UManaTexture* ManaTexture)
{
	struct ManaTexture_eventOnTextureUpdated_Parms
	{
		UManaTexture* ManaTexture;
	};
	ManaTexture_eventOnTextureUpdated_Parms Parms;
	Parms.ManaTexture=ManaTexture;
	OnTextureUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnTextureUpdated

// Begin Class UManaTexture Function SetMovieSource
struct Z_Construct_UFunction_UManaTexture_SetMovieSource_Statics
{
	struct ManaTexture_eventSetMovieSource_Parms
	{
		UManaSource* InSource;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaTexture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaTexture_SetMovieSource_Statics::NewProp_InSource = { "InSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaTexture_eventSetMovieSource_Parms, InSource), Z_Construct_UClass_UManaSource_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaTexture_SetMovieSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaTexture_SetMovieSource_Statics::NewProp_InSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaTexture_SetMovieSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaTexture_SetMovieSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaTexture, nullptr, "SetMovieSource", nullptr, nullptr, Z_Construct_UFunction_UManaTexture_SetMovieSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaTexture_SetMovieSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaTexture_SetMovieSource_Statics::ManaTexture_eventSetMovieSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaTexture_SetMovieSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaTexture_SetMovieSource_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaTexture_SetMovieSource_Statics::ManaTexture_eventSetMovieSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaTexture_SetMovieSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaTexture_SetMovieSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaTexture::execSetMovieSource)
{
	P_GET_OBJECT(UManaSource,Z_Param_InSource);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMovieSource(Z_Param_InSource);
	P_NATIVE_END;
}
// End Class UManaTexture Function SetMovieSource

// Begin Class UManaTexture
void UManaTexture::StaticRegisterNativesUManaTexture()
{
	UClass* Class = UManaTexture::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetMovieSource", &UManaTexture::execSetMovieSource },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UManaTexture);
UClass* Z_Construct_UClass_UManaTexture_NoRegister()
{
	return UManaTexture::StaticClass();
}
struct Z_Construct_UClass_UManaTexture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ManaTexture.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ManaTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovieSource_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaTexture" },
		{ "ModuleRelativePath", "Public/ManaTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovieFilePath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaTexture" },
		{ "ModuleRelativePath", "Public/ManaTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRenderToTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaTexture" },
		{ "ModuleRelativePath", "Public/ManaTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetGamma_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaTexture" },
		{ "ModuleRelativePath", "Public/ManaTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHDR_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaTexture" },
		{ "ModuleRelativePath", "Public/ManaTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddressX_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaTexture" },
		{ "ModuleRelativePath", "Public/ManaTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddressY_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaTexture" },
		{ "ModuleRelativePath", "Public/ManaTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClearColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaTexture" },
		{ "ModuleRelativePath", "Public/ManaTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideDimensions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaTexture" },
		{ "ModuleRelativePath", "Public/ManaTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetDimensions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaTexture" },
		{ "ModuleRelativePath", "Public/ManaTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideFormat_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaTexture" },
		{ "ModuleRelativePath", "Public/ManaTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTextureUpdated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaTexture" },
		{ "ModuleRelativePath", "Public/ManaTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentTextures_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaTexture" },
		{ "ModuleRelativePath", "Public/ManaTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaComponentTextures_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaTexture" },
		{ "ModuleRelativePath", "Public/ManaTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaTexture" },
		{ "ModuleRelativePath", "Public/ManaTexture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovieSource;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MovieFilePath;
	static void NewProp_bRenderToTexture_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderToTexture;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetGamma;
	static void NewProp_bHDR_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHDR;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AddressX;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AddressY;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClearColor;
	static void NewProp_bOverrideDimensions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideDimensions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetDimensions;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OverrideFormat;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTextureUpdated;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComponentTextures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentTextures;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AlphaComponentTextures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AlphaComponentTextures;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ManaPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UManaTexture_OnTextureUpdated__DelegateSignature, "OnTextureUpdated__DelegateSignature" }, // 3823162582
		{ &Z_Construct_UFunction_UManaTexture_SetMovieSource, "SetMovieSource" }, // 672555392
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManaTexture>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UManaTexture_Statics::NewProp_MovieSource = { "MovieSource", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaTexture, MovieSource), Z_Construct_UClass_UManaSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovieSource_MetaData), NewProp_MovieSource_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UManaTexture_Statics::NewProp_MovieFilePath = { "MovieFilePath", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaTexture, MovieFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovieFilePath_MetaData), NewProp_MovieFilePath_MetaData) };
void Z_Construct_UClass_UManaTexture_Statics::NewProp_bRenderToTexture_SetBit(void* Obj)
{
	((UManaTexture*)Obj)->bRenderToTexture = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UManaTexture_Statics::NewProp_bRenderToTexture = { "bRenderToTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UManaTexture), &Z_Construct_UClass_UManaTexture_Statics::NewProp_bRenderToTexture_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRenderToTexture_MetaData), NewProp_bRenderToTexture_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManaTexture_Statics::NewProp_TargetGamma = { "TargetGamma", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaTexture, TargetGamma), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetGamma_MetaData), NewProp_TargetGamma_MetaData) };
void Z_Construct_UClass_UManaTexture_Statics::NewProp_bHDR_SetBit(void* Obj)
{
	((UManaTexture*)Obj)->bHDR = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UManaTexture_Statics::NewProp_bHDR = { "bHDR", nullptr, (EPropertyFlags)0x0010010000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UManaTexture), &Z_Construct_UClass_UManaTexture_Statics::NewProp_bHDR_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHDR_MetaData), NewProp_bHDR_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UManaTexture_Statics::NewProp_AddressX = { "AddressX", nullptr, (EPropertyFlags)0x0010050000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaTexture, AddressX), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddressX_MetaData), NewProp_AddressX_MetaData) }; // 2220430387
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UManaTexture_Statics::NewProp_AddressY = { "AddressY", nullptr, (EPropertyFlags)0x0010050000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaTexture, AddressY), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddressY_MetaData), NewProp_AddressY_MetaData) }; // 2220430387
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManaTexture_Statics::NewProp_ClearColor = { "ClearColor", nullptr, (EPropertyFlags)0x0010050000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaTexture, ClearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClearColor_MetaData), NewProp_ClearColor_MetaData) };
void Z_Construct_UClass_UManaTexture_Statics::NewProp_bOverrideDimensions_SetBit(void* Obj)
{
	((UManaTexture*)Obj)->bOverrideDimensions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UManaTexture_Statics::NewProp_bOverrideDimensions = { "bOverrideDimensions", nullptr, (EPropertyFlags)0x0010050000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UManaTexture), &Z_Construct_UClass_UManaTexture_Statics::NewProp_bOverrideDimensions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideDimensions_MetaData), NewProp_bOverrideDimensions_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManaTexture_Statics::NewProp_TargetDimensions = { "TargetDimensions", nullptr, (EPropertyFlags)0x0010050000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaTexture, TargetDimensions), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetDimensions_MetaData), NewProp_TargetDimensions_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UManaTexture_Statics::NewProp_OverrideFormat = { "OverrideFormat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaTexture, OverrideFormat), Z_Construct_UEnum_CoreUObject_EPixelFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideFormat_MetaData), NewProp_OverrideFormat_MetaData) }; // 2609309733
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UManaTexture_Statics::NewProp_OnTextureUpdated = { "OnTextureUpdated", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaTexture, OnTextureUpdated), Z_Construct_UDelegateFunction_UManaTexture_OnTextureUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTextureUpdated_MetaData), NewProp_OnTextureUpdated_MetaData) }; // 3823162582
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UManaTexture_Statics::NewProp_ComponentTextures_Inner = { "ComponentTextures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UManaComponentTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UManaTexture_Statics::NewProp_ComponentTextures = { "ComponentTextures", nullptr, (EPropertyFlags)0x00200c0000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaTexture, ComponentTextures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentTextures_MetaData), NewProp_ComponentTextures_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UManaTexture_Statics::NewProp_AlphaComponentTextures_Inner = { "AlphaComponentTextures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UManaComponentTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UManaTexture_Statics::NewProp_AlphaComponentTextures = { "AlphaComponentTextures", nullptr, (EPropertyFlags)0x00200c0000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaTexture, AlphaComponentTextures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaComponentTextures_MetaData), NewProp_AlphaComponentTextures_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UManaTexture_Statics::NewProp_ManaPlayer = { "ManaPlayer", nullptr, (EPropertyFlags)0x002408000008200d, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaTexture, ManaPlayer), Z_Construct_UClass_UManaComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaPlayer_MetaData), NewProp_ManaPlayer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UManaTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaTexture_Statics::NewProp_MovieSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaTexture_Statics::NewProp_MovieFilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaTexture_Statics::NewProp_bRenderToTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaTexture_Statics::NewProp_TargetGamma,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaTexture_Statics::NewProp_bHDR,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaTexture_Statics::NewProp_AddressX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaTexture_Statics::NewProp_AddressY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaTexture_Statics::NewProp_ClearColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaTexture_Statics::NewProp_bOverrideDimensions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaTexture_Statics::NewProp_TargetDimensions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaTexture_Statics::NewProp_OverrideFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaTexture_Statics::NewProp_OnTextureUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaTexture_Statics::NewProp_ComponentTextures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaTexture_Statics::NewProp_ComponentTextures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaTexture_Statics::NewProp_AlphaComponentTextures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaTexture_Statics::NewProp_AlphaComponentTextures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaTexture_Statics::NewProp_ManaPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManaTexture_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UManaTexture_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTexture,
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManaTexture_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UManaTexture_Statics::ClassParams = {
	&UManaTexture::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UManaTexture_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UManaTexture_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManaTexture_Statics::Class_MetaDataParams), Z_Construct_UClass_UManaTexture_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UManaTexture()
{
	if (!Z_Registration_Info_UClass_UManaTexture.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UManaTexture.OuterSingleton, Z_Construct_UClass_UManaTexture_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UManaTexture.OuterSingleton;
}
template<> CRIWARERUNTIME_API UClass* StaticClass<UManaTexture>()
{
	return UManaTexture::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UManaTexture);
UManaTexture::~UManaTexture() {}
// End Class UManaTexture

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UManaTexture, UManaTexture::StaticClass, TEXT("UManaTexture"), &Z_Registration_Info_UClass_UManaTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManaTexture), 3285364905U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_4260215864(TEXT("/Script/CriWareRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
