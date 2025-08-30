// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniGenericAttributeChangedProperty.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniGenericAttributeChangedProperty() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin ScriptStruct FHoudiniGenericAttributeChangedProperty
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniGenericAttributeChangedProperty;
class UScriptStruct* FHoudiniGenericAttributeChangedProperty::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniGenericAttributeChangedProperty.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniGenericAttributeChangedProperty.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniGenericAttributeChangedProperty"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniGenericAttributeChangedProperty.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniGenericAttributeChangedProperty>()
{
	return FHoudiniGenericAttributeChangedProperty::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HoudiniGenericAttributeChangedProperty.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniGenericAttributeChangedProperty" },
		{ "ModuleRelativePath", "Public/HoudiniGenericAttributeChangedProperty.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniGenericAttributeChangedProperty>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGenericAttributeChangedProperty, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Object_MetaData), NewProp_Object_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::NewProp_Object,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniGenericAttributeChangedProperty",
	Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::PropPointers),
	sizeof(FHoudiniGenericAttributeChangedProperty),
	alignof(FHoudiniGenericAttributeChangedProperty),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniGenericAttributeChangedProperty.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniGenericAttributeChangedProperty.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniGenericAttributeChangedProperty.InnerSingleton;
}
// End ScriptStruct FHoudiniGenericAttributeChangedProperty

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniGenericAttributeChangedProperty_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHoudiniGenericAttributeChangedProperty::StaticStruct, Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::NewStructOps, TEXT("HoudiniGenericAttributeChangedProperty"), &Z_Registration_Info_UScriptStruct_HoudiniGenericAttributeChangedProperty, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniGenericAttributeChangedProperty), 2855316235U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniGenericAttributeChangedProperty_h_612621867(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniGenericAttributeChangedProperty_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniGenericAttributeChangedProperty_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
