// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniAssetBlueprintComponent.h"
#include "HoudiniEngineRuntime/Public/HoudiniOutputObjectIdentifier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniAssetBlueprintComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetBlueprintComponent();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetBlueprintComponent_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetComponent();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UHoudiniAssetBlueprintComponent Function HasParameter
struct Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics
{
	struct HoudiniAssetBlueprintComponent_eventHasParameter_Parms
	{
		FString Name;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniAssetBlueprintComponent_eventHasParameter_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
void Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HoudiniAssetBlueprintComponent_eventHasParameter_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniAssetBlueprintComponent_eventHasParameter_Parms), &Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniAssetBlueprintComponent, nullptr, "HasParameter", nullptr, nullptr, Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics::HoudiniAssetBlueprintComponent_eventHasParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics::HoudiniAssetBlueprintComponent_eventHasParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoudiniAssetBlueprintComponent::execHasParameter)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasParameter(Z_Param_Name);
	P_NATIVE_END;
}
// End Class UHoudiniAssetBlueprintComponent Function HasParameter

// Begin Class UHoudiniAssetBlueprintComponent Function SetFloatParameter
struct Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics
{
	struct HoudiniAssetBlueprintComponent_eventSetFloatParameter_Parms
	{
		FString Name;
		float Value;
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniAssetBlueprintComponent_eventSetFloatParameter_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniAssetBlueprintComponent_eventSetFloatParameter_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniAssetBlueprintComponent_eventSetFloatParameter_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniAssetBlueprintComponent, nullptr, "SetFloatParameter", nullptr, nullptr, Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics::HoudiniAssetBlueprintComponent_eventSetFloatParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics::HoudiniAssetBlueprintComponent_eventSetFloatParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoudiniAssetBlueprintComponent::execSetFloatParameter)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFloatParameter(Z_Param_Name,Z_Param_Value,Z_Param_Index);
	P_NATIVE_END;
}
// End Class UHoudiniAssetBlueprintComponent Function SetFloatParameter

// Begin Class UHoudiniAssetBlueprintComponent Function SetToggleValueAt
struct Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics
{
	struct HoudiniAssetBlueprintComponent_eventSetToggleValueAt_Parms
	{
		FString Name;
		bool Value;
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniAssetBlueprintComponent_eventSetToggleValueAt_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
void Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::NewProp_Value_SetBit(void* Obj)
{
	((HoudiniAssetBlueprintComponent_eventSetToggleValueAt_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniAssetBlueprintComponent_eventSetToggleValueAt_Parms), &Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniAssetBlueprintComponent_eventSetToggleValueAt_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniAssetBlueprintComponent, nullptr, "SetToggleValueAt", nullptr, nullptr, Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::HoudiniAssetBlueprintComponent_eventSetToggleValueAt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::HoudiniAssetBlueprintComponent_eventSetToggleValueAt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoudiniAssetBlueprintComponent::execSetToggleValueAt)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_UBOOL(Z_Param_Value);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetToggleValueAt(Z_Param_Name,Z_Param_Value,Z_Param_Index);
	P_NATIVE_END;
}
// End Class UHoudiniAssetBlueprintComponent Function SetToggleValueAt

// Begin Class UHoudiniAssetBlueprintComponent
void UHoudiniAssetBlueprintComponent::StaticRegisterNativesUHoudiniAssetBlueprintComponent()
{
	UClass* Class = UHoudiniAssetBlueprintComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HasParameter", &UHoudiniAssetBlueprintComponent::execHasParameter },
		{ "SetFloatParameter", &UHoudiniAssetBlueprintComponent::execSetFloatParameter },
		{ "SetToggleValueAt", &UHoudiniAssetBlueprintComponent::execSetToggleValueAt },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniAssetBlueprintComponent);
UClass* Z_Construct_UClass_UHoudiniAssetBlueprintComponent_NoRegister()
{
	return UHoudiniAssetBlueprintComponent::StaticClass();
}
struct Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "HoudiniAssetBlueprintComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FauxBPProperty_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetBlueprintComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHoudiniAssetChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetBlueprintComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdatedFromTemplate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetBlueprintComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInBlueprintEditor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetBlueprintComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanDeleteHoudiniNodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetBlueprintComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasRegisteredComponentTemplate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetBlueprintComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedOutputNodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetBlueprintComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedInputNodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetBlueprintComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_FauxBPProperty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FauxBPProperty;
	static void NewProp_bHoudiniAssetChanged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHoudiniAssetChanged;
	static void NewProp_bUpdatedFromTemplate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdatedFromTemplate;
	static void NewProp_bIsInBlueprintEditor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInBlueprintEditor;
	static void NewProp_bCanDeleteHoudiniNodes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanDeleteHoudiniNodes;
	static void NewProp_bHasRegisteredComponentTemplate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasRegisteredComponentTemplate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedOutputNodes_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedOutputNodes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CachedOutputNodes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedInputNodes_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedInputNodes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CachedInputNodes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter, "HasParameter" }, // 2042329742
		{ &Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter, "SetFloatParameter" }, // 3860589942
		{ &Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt, "SetToggleValueAt" }, // 1346988003
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniAssetBlueprintComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_FauxBPProperty_SetBit(void* Obj)
{
	((UHoudiniAssetBlueprintComponent*)Obj)->FauxBPProperty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_FauxBPProperty = { "FauxBPProperty", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetBlueprintComponent), &Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_FauxBPProperty_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FauxBPProperty_MetaData), NewProp_FauxBPProperty_MetaData) };
void Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bHoudiniAssetChanged_SetBit(void* Obj)
{
	((UHoudiniAssetBlueprintComponent*)Obj)->bHoudiniAssetChanged = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bHoudiniAssetChanged = { "bHoudiniAssetChanged", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetBlueprintComponent), &Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bHoudiniAssetChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHoudiniAssetChanged_MetaData), NewProp_bHoudiniAssetChanged_MetaData) };
void Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bUpdatedFromTemplate_SetBit(void* Obj)
{
	((UHoudiniAssetBlueprintComponent*)Obj)->bUpdatedFromTemplate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bUpdatedFromTemplate = { "bUpdatedFromTemplate", nullptr, (EPropertyFlags)0x0020080000202005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetBlueprintComponent), &Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bUpdatedFromTemplate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdatedFromTemplate_MetaData), NewProp_bUpdatedFromTemplate_MetaData) };
void Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bIsInBlueprintEditor_SetBit(void* Obj)
{
	((UHoudiniAssetBlueprintComponent*)Obj)->bIsInBlueprintEditor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bIsInBlueprintEditor = { "bIsInBlueprintEditor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetBlueprintComponent), &Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bIsInBlueprintEditor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInBlueprintEditor_MetaData), NewProp_bIsInBlueprintEditor_MetaData) };
void Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bCanDeleteHoudiniNodes_SetBit(void* Obj)
{
	((UHoudiniAssetBlueprintComponent*)Obj)->bCanDeleteHoudiniNodes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bCanDeleteHoudiniNodes = { "bCanDeleteHoudiniNodes", nullptr, (EPropertyFlags)0x0020080000202005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetBlueprintComponent), &Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bCanDeleteHoudiniNodes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanDeleteHoudiniNodes_MetaData), NewProp_bCanDeleteHoudiniNodes_MetaData) };
void Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bHasRegisteredComponentTemplate_SetBit(void* Obj)
{
	((UHoudiniAssetBlueprintComponent*)Obj)->bHasRegisteredComponentTemplate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bHasRegisteredComponentTemplate = { "bHasRegisteredComponentTemplate", nullptr, (EPropertyFlags)0x0020080000202005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetBlueprintComponent), &Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bHasRegisteredComponentTemplate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasRegisteredComponentTemplate_MetaData), NewProp_bHasRegisteredComponentTemplate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_CachedOutputNodes_ValueProp = { "CachedOutputNodes", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_CachedOutputNodes_Key_KeyProp = { "CachedOutputNodes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier, METADATA_PARAMS(0, nullptr) }; // 337656452
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_CachedOutputNodes = { "CachedOutputNodes", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetBlueprintComponent, CachedOutputNodes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedOutputNodes_MetaData), NewProp_CachedOutputNodes_MetaData) }; // 337656452
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_CachedInputNodes_ValueProp = { "CachedInputNodes", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_CachedInputNodes_Key_KeyProp = { "CachedInputNodes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_CachedInputNodes = { "CachedInputNodes", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetBlueprintComponent, CachedInputNodes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedInputNodes_MetaData), NewProp_CachedInputNodes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_FauxBPProperty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bHoudiniAssetChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bUpdatedFromTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bIsInBlueprintEditor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bCanDeleteHoudiniNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bHasRegisteredComponentTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_CachedOutputNodes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_CachedOutputNodes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_CachedOutputNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_CachedInputNodes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_CachedInputNodes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_CachedInputNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniAssetComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::ClassParams = {
	&UHoudiniAssetBlueprintComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniAssetBlueprintComponent()
{
	if (!Z_Registration_Info_UClass_UHoudiniAssetBlueprintComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniAssetBlueprintComponent.OuterSingleton, Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniAssetBlueprintComponent.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniAssetBlueprintComponent>()
{
	return UHoudiniAssetBlueprintComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniAssetBlueprintComponent);
UHoudiniAssetBlueprintComponent::~UHoudiniAssetBlueprintComponent() {}
// End Class UHoudiniAssetBlueprintComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniAssetBlueprintComponent, UHoudiniAssetBlueprintComponent::StaticClass, TEXT("UHoudiniAssetBlueprintComponent"), &Z_Registration_Info_UClass_UHoudiniAssetBlueprintComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniAssetBlueprintComponent), 4217834138U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintComponent_h_1963012585(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
