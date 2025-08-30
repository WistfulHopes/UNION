// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniParameterRampColorPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniParameterRampColorPoint() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterChoice_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterColor_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterFloat_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterRampColorPoint();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterRampColorPoint_NoRegister();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UHoudiniParameterRampColorPoint
void UHoudiniParameterRampColorPoint::StaticRegisterNativesUHoudiniParameterRampColorPoint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniParameterRampColorPoint);
UClass* Z_Construct_UClass_UHoudiniParameterRampColorPoint_NoRegister()
{
	return UHoudiniParameterRampColorPoint::StaticClass();
}
struct Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HoudiniParameterRampColorPoint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HoudiniParameterRampColorPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniParameterRampColorPoint" },
		{ "ModuleRelativePath", "Public/HoudiniParameterRampColorPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniParameterRampColorPoint" },
		{ "ModuleRelativePath", "Public/HoudiniParameterRampColorPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interpolation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniParameterRampColorPoint" },
		{ "ModuleRelativePath", "Public/HoudiniParameterRampColorPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniParameterRampColorPoint" },
		{ "ModuleRelativePath", "Public/HoudiniParameterRampColorPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionParentParm_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniParameterRampColorPoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniParameterRampColorPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueParentParm_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniParameterRampColorPoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniParameterRampColorPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationParentParm_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniParameterRampColorPoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniParameterRampColorPoint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_Interpolation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Interpolation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PositionParentParm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ValueParentParm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InterpolationParentParm;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniParameterRampColorPoint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampColorPoint, Position), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampColorPoint, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Interpolation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Interpolation = { "Interpolation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampColorPoint, Interpolation), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interpolation_MetaData), NewProp_Interpolation_MetaData) }; // 3446783854
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampColorPoint, InstanceIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceIndex_MetaData), NewProp_InstanceIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_PositionParentParm = { "PositionParentParm", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampColorPoint, PositionParentParm), Z_Construct_UClass_UHoudiniParameterFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionParentParm_MetaData), NewProp_PositionParentParm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_ValueParentParm = { "ValueParentParm", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampColorPoint, ValueParentParm), Z_Construct_UClass_UHoudiniParameterColor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueParentParm_MetaData), NewProp_ValueParentParm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_InterpolationParentParm = { "InterpolationParentParm", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampColorPoint, InterpolationParentParm), Z_Construct_UClass_UHoudiniParameterChoice_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpolationParentParm_MetaData), NewProp_InterpolationParentParm_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Interpolation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Interpolation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_InstanceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_PositionParentParm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_ValueParentParm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_InterpolationParentParm,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::ClassParams = {
	&UHoudiniParameterRampColorPoint::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniParameterRampColorPoint()
{
	if (!Z_Registration_Info_UClass_UHoudiniParameterRampColorPoint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniParameterRampColorPoint.OuterSingleton, Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniParameterRampColorPoint.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniParameterRampColorPoint>()
{
	return UHoudiniParameterRampColorPoint::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniParameterRampColorPoint);
UHoudiniParameterRampColorPoint::~UHoudiniParameterRampColorPoint() {}
// End Class UHoudiniParameterRampColorPoint

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniParameterRampColorPoint_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniParameterRampColorPoint, UHoudiniParameterRampColorPoint::StaticClass, TEXT("UHoudiniParameterRampColorPoint"), &Z_Registration_Info_UClass_UHoudiniParameterRampColorPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniParameterRampColorPoint), 3203936921U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniParameterRampColorPoint_h_4055672819(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniParameterRampColorPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniParameterRampColorPoint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
