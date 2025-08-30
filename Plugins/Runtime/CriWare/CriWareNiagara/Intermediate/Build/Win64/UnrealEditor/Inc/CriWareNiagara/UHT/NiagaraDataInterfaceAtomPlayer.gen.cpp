// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareNiagara/Public/NiagaraDataInterfaceAtomPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceAtomPlayer() {}

// Begin Cross Module References
CRIWARENIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer();
CRIWARENIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_NoRegister();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundConcurrency_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
UPackage* Z_Construct_UPackage__Script_CriWareNiagara();
// End Cross Module References

// Begin Class UNiagaraDataInterfaceAtomPlayer
void UNiagaraDataInterfaceAtomPlayer::StaticRegisterNativesUNiagaraDataInterfaceAtomPlayer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceAtomPlayer);
UClass* Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_NoRegister()
{
	return UNiagaraDataInterfaceAtomPlayer::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "NiagaraDataInterfaceAtomPlayer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceAtomPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundToPlay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NiagaraDataInterfaceAtomPlayer" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceAtomPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attenuation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NiagaraDataInterfaceAtomPlayer" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceAtomPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Concurrency_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NiagaraDataInterfaceAtomPlayer" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceAtomPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterNames_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NiagaraDataInterfaceAtomPlayer" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceAtomPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLimitPlaysPerTick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NiagaraDataInterfaceAtomPlayer" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceAtomPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlaysPerTick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NiagaraDataInterfaceAtomPlayer" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceAtomPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStopWhenComponentIsDestroyed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NiagaraDataInterfaceAtomPlayer" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceAtomPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowLoopingOneShotSounds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NiagaraDataInterfaceAtomPlayer" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceAtomPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundToPlay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Attenuation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Concurrency;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParameterNames;
	static void NewProp_bLimitPlaysPerTick_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitPlaysPerTick;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlaysPerTick;
	static void NewProp_bStopWhenComponentIsDestroyed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenComponentIsDestroyed;
	static void NewProp_bAllowLoopingOneShotSounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowLoopingOneShotSounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceAtomPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_SoundToPlay = { "SoundToPlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceAtomPlayer, SoundToPlay), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundToPlay_MetaData), NewProp_SoundToPlay_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_Attenuation = { "Attenuation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceAtomPlayer, Attenuation), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attenuation_MetaData), NewProp_Attenuation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_Concurrency = { "Concurrency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceAtomPlayer, Concurrency), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Concurrency_MetaData), NewProp_Concurrency_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_ParameterNames_Inner = { "ParameterNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_ParameterNames = { "ParameterNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceAtomPlayer, ParameterNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterNames_MetaData), NewProp_ParameterNames_MetaData) };
void Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_bLimitPlaysPerTick_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceAtomPlayer*)Obj)->bLimitPlaysPerTick = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_bLimitPlaysPerTick = { "bLimitPlaysPerTick", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceAtomPlayer), &Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_bLimitPlaysPerTick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLimitPlaysPerTick_MetaData), NewProp_bLimitPlaysPerTick_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_MaxPlaysPerTick = { "MaxPlaysPerTick", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceAtomPlayer, MaxPlaysPerTick), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPlaysPerTick_MetaData), NewProp_MaxPlaysPerTick_MetaData) };
void Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_bStopWhenComponentIsDestroyed_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceAtomPlayer*)Obj)->bStopWhenComponentIsDestroyed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_bStopWhenComponentIsDestroyed = { "bStopWhenComponentIsDestroyed", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceAtomPlayer), &Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_bStopWhenComponentIsDestroyed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStopWhenComponentIsDestroyed_MetaData), NewProp_bStopWhenComponentIsDestroyed_MetaData) };
void Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_bAllowLoopingOneShotSounds_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceAtomPlayer*)Obj)->bAllowLoopingOneShotSounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_bAllowLoopingOneShotSounds = { "bAllowLoopingOneShotSounds", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceAtomPlayer), &Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_bAllowLoopingOneShotSounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowLoopingOneShotSounds_MetaData), NewProp_bAllowLoopingOneShotSounds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_SoundToPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_Attenuation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_Concurrency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_ParameterNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_ParameterNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_bLimitPlaysPerTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_MaxPlaysPerTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_bStopWhenComponentIsDestroyed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_bAllowLoopingOneShotSounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareNiagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::ClassParams = {
	&UNiagaraDataInterfaceAtomPlayer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceAtomPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceAtomPlayer.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceAtomPlayer.OuterSingleton;
}
template<> CRIWARENIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceAtomPlayer>()
{
	return UNiagaraDataInterfaceAtomPlayer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceAtomPlayer);
UNiagaraDataInterfaceAtomPlayer::~UNiagaraDataInterfaceAtomPlayer() {}
// End Class UNiagaraDataInterfaceAtomPlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWareNiagara_Source_CriWareNiagara_Public_NiagaraDataInterfaceAtomPlayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer, UNiagaraDataInterfaceAtomPlayer::StaticClass, TEXT("UNiagaraDataInterfaceAtomPlayer"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceAtomPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceAtomPlayer), 1943369061U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWareNiagara_Source_CriWareNiagara_Public_NiagaraDataInterfaceAtomPlayer_h_2627694532(TEXT("/Script/CriWareNiagara"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWareNiagara_Source_CriWareNiagara_Public_NiagaraDataInterfaceAtomPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWareNiagara_Source_CriWareNiagara_Public_NiagaraDataInterfaceAtomPlayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
