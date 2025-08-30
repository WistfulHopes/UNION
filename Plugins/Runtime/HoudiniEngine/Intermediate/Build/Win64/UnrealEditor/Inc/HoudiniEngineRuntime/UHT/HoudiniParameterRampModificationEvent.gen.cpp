// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniParameterRampModificationEvent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniParameterRampModificationEvent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterRampModificationEvent();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterRampModificationEvent_NoRegister();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UHoudiniParameterRampModificationEvent
void UHoudiniParameterRampModificationEvent::StaticRegisterNativesUHoudiniParameterRampModificationEvent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniParameterRampModificationEvent);
UClass* Z_Construct_UClass_UHoudiniParameterRampModificationEvent_NoRegister()
{
	return UHoudiniParameterRampModificationEvent::StaticClass();
}
struct Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HoudiniParameterRampModificationEvent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HoudiniParameterRampModificationEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInsertEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniParameterRampModificationEvent" },
		{ "ModuleRelativePath", "Public/HoudiniParameterRampModificationEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFloatRamp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniParameterRampModificationEvent" },
		{ "ModuleRelativePath", "Public/HoudiniParameterRampModificationEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeleteInstanceIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniParameterRampModificationEvent" },
		{ "ModuleRelativePath", "Public/HoudiniParameterRampModificationEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InsertPosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniParameterRampModificationEvent" },
		{ "ModuleRelativePath", "Public/HoudiniParameterRampModificationEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InsertFloat_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniParameterRampModificationEvent" },
		{ "ModuleRelativePath", "Public/HoudiniParameterRampModificationEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InsertColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniParameterRampModificationEvent" },
		{ "ModuleRelativePath", "Public/HoudiniParameterRampModificationEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InsertInterpolation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniParameterRampModificationEvent" },
		{ "ModuleRelativePath", "Public/HoudiniParameterRampModificationEvent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsInsertEvent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInsertEvent;
	static void NewProp_bIsFloatRamp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFloatRamp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DeleteInstanceIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InsertPosition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InsertFloat;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InsertColor;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_InsertInterpolation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InsertInterpolation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniParameterRampModificationEvent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsInsertEvent_SetBit(void* Obj)
{
	((UHoudiniParameterRampModificationEvent*)Obj)->bIsInsertEvent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsInsertEvent = { "bIsInsertEvent", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniParameterRampModificationEvent), &Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsInsertEvent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInsertEvent_MetaData), NewProp_bIsInsertEvent_MetaData) };
void Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsFloatRamp_SetBit(void* Obj)
{
	((UHoudiniParameterRampModificationEvent*)Obj)->bIsFloatRamp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsFloatRamp = { "bIsFloatRamp", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniParameterRampModificationEvent), &Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsFloatRamp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFloatRamp_MetaData), NewProp_bIsFloatRamp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_DeleteInstanceIndex = { "DeleteInstanceIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampModificationEvent, DeleteInstanceIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeleteInstanceIndex_MetaData), NewProp_DeleteInstanceIndex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertPosition = { "InsertPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampModificationEvent, InsertPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InsertPosition_MetaData), NewProp_InsertPosition_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertFloat = { "InsertFloat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampModificationEvent, InsertFloat), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InsertFloat_MetaData), NewProp_InsertFloat_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertColor = { "InsertColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampModificationEvent, InsertColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InsertColor_MetaData), NewProp_InsertColor_MetaData) };
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertInterpolation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertInterpolation = { "InsertInterpolation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampModificationEvent, InsertInterpolation), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InsertInterpolation_MetaData), NewProp_InsertInterpolation_MetaData) }; // 3446783854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsInsertEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsFloatRamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_DeleteInstanceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertFloat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertInterpolation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertInterpolation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::ClassParams = {
	&UHoudiniParameterRampModificationEvent::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniParameterRampModificationEvent()
{
	if (!Z_Registration_Info_UClass_UHoudiniParameterRampModificationEvent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniParameterRampModificationEvent.OuterSingleton, Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniParameterRampModificationEvent.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniParameterRampModificationEvent>()
{
	return UHoudiniParameterRampModificationEvent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniParameterRampModificationEvent);
UHoudiniParameterRampModificationEvent::~UHoudiniParameterRampModificationEvent() {}
// End Class UHoudiniParameterRampModificationEvent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniParameterRampModificationEvent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniParameterRampModificationEvent, UHoudiniParameterRampModificationEvent::StaticClass, TEXT("UHoudiniParameterRampModificationEvent"), &Z_Registration_Info_UClass_UHoudiniParameterRampModificationEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniParameterRampModificationEvent), 154037526U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniParameterRampModificationEvent_h_3101056126(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniParameterRampModificationEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniParameterRampModificationEvent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
