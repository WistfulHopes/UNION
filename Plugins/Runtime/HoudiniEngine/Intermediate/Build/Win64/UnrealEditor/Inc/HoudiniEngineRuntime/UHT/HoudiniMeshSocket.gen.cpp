// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniMeshSocket.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniMeshSocket() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniMeshSocket();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin ScriptStruct FHoudiniMeshSocket
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniMeshSocket;
class UScriptStruct* FHoudiniMeshSocket::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniMeshSocket.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniMeshSocket.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniMeshSocket, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniMeshSocket"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniMeshSocket.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniMeshSocket>()
{
	return FHoudiniMeshSocket::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniMeshSocket_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HoudiniMeshSocket.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniMeshSocket>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniMeshSocket_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniMeshSocket",
	nullptr,
	0,
	sizeof(FHoudiniMeshSocket),
	alignof(FHoudiniMeshSocket),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniMeshSocket_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniMeshSocket_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniMeshSocket()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniMeshSocket.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniMeshSocket.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniMeshSocket_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniMeshSocket.InnerSingleton;
}
// End ScriptStruct FHoudiniMeshSocket

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniMeshSocket_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHoudiniMeshSocket::StaticStruct, Z_Construct_UScriptStruct_FHoudiniMeshSocket_Statics::NewStructOps, TEXT("HoudiniMeshSocket"), &Z_Registration_Info_UScriptStruct_HoudiniMeshSocket, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniMeshSocket), 4209259389U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniMeshSocket_h_1652608454(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniMeshSocket_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniMeshSocket_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
