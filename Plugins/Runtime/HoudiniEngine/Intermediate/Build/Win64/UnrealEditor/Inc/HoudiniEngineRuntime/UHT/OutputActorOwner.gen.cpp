// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/OutputActorOwner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOutputActorOwner() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FOutputActorOwner();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin ScriptStruct FOutputActorOwner
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OutputActorOwner;
class UScriptStruct* FOutputActorOwner::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OutputActorOwner.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OutputActorOwner.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOutputActorOwner, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("OutputActorOwner"));
	}
	return Z_Registration_Info_UScriptStruct_OutputActorOwner.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FOutputActorOwner>()
{
	return FOutputActorOwner::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOutputActorOwner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OutputActorOwner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OutputActorOwner" },
		{ "ModuleRelativePath", "Public/OutputActorOwner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutputActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOutputActorOwner>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOutputActorOwner_Statics::NewProp_OutputActor = { "OutputActor", nullptr, (EPropertyFlags)0x0040000400000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOutputActorOwner, OutputActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputActor_MetaData), NewProp_OutputActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOutputActorOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutputActorOwner_Statics::NewProp_OutputActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutputActorOwner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOutputActorOwner_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"OutputActorOwner",
	Z_Construct_UScriptStruct_FOutputActorOwner_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutputActorOwner_Statics::PropPointers),
	sizeof(FOutputActorOwner),
	alignof(FOutputActorOwner),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutputActorOwner_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOutputActorOwner_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOutputActorOwner()
{
	if (!Z_Registration_Info_UScriptStruct_OutputActorOwner.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OutputActorOwner.InnerSingleton, Z_Construct_UScriptStruct_FOutputActorOwner_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OutputActorOwner.InnerSingleton;
}
// End ScriptStruct FOutputActorOwner

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_OutputActorOwner_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOutputActorOwner::StaticStruct, Z_Construct_UScriptStruct_FOutputActorOwner_Statics::NewStructOps, TEXT("OutputActorOwner"), &Z_Registration_Info_UScriptStruct_OutputActorOwner, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOutputActorOwner), 990939271U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_OutputActorOwner_h_668155419(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_OutputActorOwner_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_OutputActorOwner_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
