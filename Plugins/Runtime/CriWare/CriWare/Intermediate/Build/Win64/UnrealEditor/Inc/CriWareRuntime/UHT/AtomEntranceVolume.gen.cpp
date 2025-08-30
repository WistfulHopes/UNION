// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomEntranceVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomEntranceVolume() {}

// Begin Cross Module References
CRIWARERUNTIME_API UClass* Z_Construct_UClass_AAtomAudioVolume_NoRegister();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_AAtomEntranceVolume();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_AAtomEntranceVolume_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AVolume();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Class AAtomEntranceVolume Function GetEnabled
struct Z_Construct_UFunction_AAtomEntranceVolume_GetEnabled_Statics
{
	struct AtomEntranceVolume_eventGetEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomEntranceVolume.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AAtomEntranceVolume_GetEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AtomEntranceVolume_eventGetEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAtomEntranceVolume_GetEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AtomEntranceVolume_eventGetEnabled_Parms), &Z_Construct_UFunction_AAtomEntranceVolume_GetEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtomEntranceVolume_GetEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtomEntranceVolume_GetEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomEntranceVolume_GetEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomEntranceVolume_GetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomEntranceVolume, nullptr, "GetEnabled", nullptr, nullptr, Z_Construct_UFunction_AAtomEntranceVolume_GetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomEntranceVolume_GetEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAtomEntranceVolume_GetEnabled_Statics::AtomEntranceVolume_eventGetEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomEntranceVolume_GetEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAtomEntranceVolume_GetEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAtomEntranceVolume_GetEnabled_Statics::AtomEntranceVolume_eventGetEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAtomEntranceVolume_GetEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAtomEntranceVolume_GetEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAtomEntranceVolume::execGetEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetEnabled();
	P_NATIVE_END;
}
// End Class AAtomEntranceVolume Function GetEnabled

// Begin Class AAtomEntranceVolume Function GetPriority
struct Z_Construct_UFunction_AAtomEntranceVolume_GetPriority_Statics
{
	struct AtomEntranceVolume_eventGetPriority_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomEntranceVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAtomEntranceVolume_GetPriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomEntranceVolume_eventGetPriority_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtomEntranceVolume_GetPriority_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtomEntranceVolume_GetPriority_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomEntranceVolume_GetPriority_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomEntranceVolume_GetPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomEntranceVolume, nullptr, "GetPriority", nullptr, nullptr, Z_Construct_UFunction_AAtomEntranceVolume_GetPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomEntranceVolume_GetPriority_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAtomEntranceVolume_GetPriority_Statics::AtomEntranceVolume_eventGetPriority_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomEntranceVolume_GetPriority_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAtomEntranceVolume_GetPriority_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAtomEntranceVolume_GetPriority_Statics::AtomEntranceVolume_eventGetPriority_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAtomEntranceVolume_GetPriority()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAtomEntranceVolume_GetPriority_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAtomEntranceVolume::execGetPriority)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPriority();
	P_NATIVE_END;
}
// End Class AAtomEntranceVolume Function GetPriority

// Begin Class AAtomEntranceVolume Function OnRep_bEnabled
struct Z_Construct_UFunction_AAtomEntranceVolume_OnRep_bEnabled_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomEntranceVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomEntranceVolume_OnRep_bEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomEntranceVolume, nullptr, "OnRep_bEnabled", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomEntranceVolume_OnRep_bEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAtomEntranceVolume_OnRep_bEnabled_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAtomEntranceVolume_OnRep_bEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAtomEntranceVolume_OnRep_bEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAtomEntranceVolume::execOnRep_bEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_bEnabled();
	P_NATIVE_END;
}
// End Class AAtomEntranceVolume Function OnRep_bEnabled

// Begin Class AAtomEntranceVolume Function SetEnabled
struct Z_Construct_UFunction_AAtomEntranceVolume_SetEnabled_Statics
{
	struct AtomEntranceVolume_eventSetEnabled_Parms
	{
		bool bNewEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomEntranceVolume.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AAtomEntranceVolume_SetEnabled_Statics::NewProp_bNewEnabled_SetBit(void* Obj)
{
	((AtomEntranceVolume_eventSetEnabled_Parms*)Obj)->bNewEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAtomEntranceVolume_SetEnabled_Statics::NewProp_bNewEnabled = { "bNewEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AtomEntranceVolume_eventSetEnabled_Parms), &Z_Construct_UFunction_AAtomEntranceVolume_SetEnabled_Statics::NewProp_bNewEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtomEntranceVolume_SetEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtomEntranceVolume_SetEnabled_Statics::NewProp_bNewEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomEntranceVolume_SetEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomEntranceVolume_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomEntranceVolume, nullptr, "SetEnabled", nullptr, nullptr, Z_Construct_UFunction_AAtomEntranceVolume_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomEntranceVolume_SetEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAtomEntranceVolume_SetEnabled_Statics::AtomEntranceVolume_eventSetEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomEntranceVolume_SetEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAtomEntranceVolume_SetEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAtomEntranceVolume_SetEnabled_Statics::AtomEntranceVolume_eventSetEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAtomEntranceVolume_SetEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAtomEntranceVolume_SetEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAtomEntranceVolume::execSetEnabled)
{
	P_GET_UBOOL(Z_Param_bNewEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnabled(Z_Param_bNewEnabled);
	P_NATIVE_END;
}
// End Class AAtomEntranceVolume Function SetEnabled

// Begin Class AAtomEntranceVolume Function SetPriority
struct Z_Construct_UFunction_AAtomEntranceVolume_SetPriority_Statics
{
	struct AtomEntranceVolume_eventSetPriority_Parms
	{
		float NewPriority;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomEntranceVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewPriority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAtomEntranceVolume_SetPriority_Statics::NewProp_NewPriority = { "NewPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomEntranceVolume_eventSetPriority_Parms, NewPriority), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtomEntranceVolume_SetPriority_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtomEntranceVolume_SetPriority_Statics::NewProp_NewPriority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomEntranceVolume_SetPriority_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomEntranceVolume_SetPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomEntranceVolume, nullptr, "SetPriority", nullptr, nullptr, Z_Construct_UFunction_AAtomEntranceVolume_SetPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomEntranceVolume_SetPriority_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAtomEntranceVolume_SetPriority_Statics::AtomEntranceVolume_eventSetPriority_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomEntranceVolume_SetPriority_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAtomEntranceVolume_SetPriority_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAtomEntranceVolume_SetPriority_Statics::AtomEntranceVolume_eventSetPriority_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAtomEntranceVolume_SetPriority()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAtomEntranceVolume_SetPriority_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAtomEntranceVolume::execSetPriority)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewPriority);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPriority(Z_Param_NewPriority);
	P_NATIVE_END;
}
// End Class AAtomEntranceVolume Function SetPriority

// Begin Class AAtomEntranceVolume
void AAtomEntranceVolume::StaticRegisterNativesAAtomEntranceVolume()
{
	UClass* Class = AAtomEntranceVolume::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetEnabled", &AAtomEntranceVolume::execGetEnabled },
		{ "GetPriority", &AAtomEntranceVolume::execGetPriority },
		{ "OnRep_bEnabled", &AAtomEntranceVolume::execOnRep_bEnabled },
		{ "SetEnabled", &AAtomEntranceVolume::execSetEnabled },
		{ "SetPriority", &AAtomEntranceVolume::execSetPriority },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAtomEntranceVolume);
UClass* Z_Construct_UClass_AAtomEntranceVolume_NoRegister()
{
	return AAtomEntranceVolume::StaticClass();
}
struct Z_Construct_UClass_AAtomEntranceVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "AtomEntranceVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AtomEntranceVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomEntranceVolume" },
		{ "ModuleRelativePath", "Public/AtomEntranceVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomEntranceVolume" },
		{ "ModuleRelativePath", "Public/AtomEntranceVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NeighbourhoodAudioVolumeArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomEntranceVolume" },
		{ "ModuleRelativePath", "Public/AtomEntranceVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Priority;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_NeighbourhoodAudioVolumeArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NeighbourhoodAudioVolumeArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAtomEntranceVolume_GetEnabled, "GetEnabled" }, // 1595793569
		{ &Z_Construct_UFunction_AAtomEntranceVolume_GetPriority, "GetPriority" }, // 2557755999
		{ &Z_Construct_UFunction_AAtomEntranceVolume_OnRep_bEnabled, "OnRep_bEnabled" }, // 3474976751
		{ &Z_Construct_UFunction_AAtomEntranceVolume_SetEnabled, "SetEnabled" }, // 1390846338
		{ &Z_Construct_UFunction_AAtomEntranceVolume_SetPriority, "SetPriority" }, // 3472888134
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAtomEntranceVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAtomEntranceVolume, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
void Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((AAtomEntranceVolume*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_bEnabled = { "bEnabled", "OnRep_bEnabled", (EPropertyFlags)0x0040000100000025, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AAtomEntranceVolume), &Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_NeighbourhoodAudioVolumeArray_Inner = { "NeighbourhoodAudioVolumeArray", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AAtomAudioVolume_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_NeighbourhoodAudioVolumeArray = { "NeighbourhoodAudioVolumeArray", "OnRep_bEnabled", (EPropertyFlags)0x0014000100000021, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAtomEntranceVolume, NeighbourhoodAudioVolumeArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NeighbourhoodAudioVolumeArray_MetaData), NewProp_NeighbourhoodAudioVolumeArray_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAtomEntranceVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_NeighbourhoodAudioVolumeArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_NeighbourhoodAudioVolumeArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAtomEntranceVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAtomEntranceVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AVolume,
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAtomEntranceVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAtomEntranceVolume_Statics::ClassParams = {
	&AAtomEntranceVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAtomEntranceVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAtomEntranceVolume_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAtomEntranceVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_AAtomEntranceVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAtomEntranceVolume()
{
	if (!Z_Registration_Info_UClass_AAtomEntranceVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAtomEntranceVolume.OuterSingleton, Z_Construct_UClass_AAtomEntranceVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAtomEntranceVolume.OuterSingleton;
}
template<> CRIWARERUNTIME_API UClass* StaticClass<AAtomEntranceVolume>()
{
	return AAtomEntranceVolume::StaticClass();
}
void AAtomEntranceVolume::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_bEnabled(TEXT("bEnabled"));
	static const FName Name_NeighbourhoodAudioVolumeArray(TEXT("NeighbourhoodAudioVolumeArray"));
	const bool bIsValid = true
		&& Name_bEnabled == ClassReps[(int32)ENetFields_Private::bEnabled].Property->GetFName()
		&& Name_NeighbourhoodAudioVolumeArray == ClassReps[(int32)ENetFields_Private::NeighbourhoodAudioVolumeArray].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AAtomEntranceVolume"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAtomEntranceVolume);
AAtomEntranceVolume::~AAtomEntranceVolume() {}
// End Class AAtomEntranceVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomEntranceVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAtomEntranceVolume, AAtomEntranceVolume::StaticClass, TEXT("AAtomEntranceVolume"), &Z_Registration_Info_UClass_AAtomEntranceVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAtomEntranceVolume), 2998036525U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomEntranceVolume_h_1776368734(TEXT("/Script/CriWareRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomEntranceVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomEntranceVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
