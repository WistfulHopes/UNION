// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/FileManaMovie.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileManaMovie() {}

// Begin Cross Module References
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UFileManaMovie();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UFileManaMovie_NoRegister();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaMovie();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Class UFileManaMovie Function SetFilePath
struct Z_Construct_UFunction_UFileManaMovie_SetFilePath_Statics
{
	struct FileManaMovie_eventSetFilePath_Parms
	{
		FString Path;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FileManaMovie.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileManaMovie_SetFilePath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileManaMovie_eventSetFilePath_Parms, Path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileManaMovie_SetFilePath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManaMovie_SetFilePath_Statics::NewProp_Path,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManaMovie_SetFilePath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileManaMovie_SetFilePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileManaMovie, nullptr, "SetFilePath", nullptr, nullptr, Z_Construct_UFunction_UFileManaMovie_SetFilePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManaMovie_SetFilePath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileManaMovie_SetFilePath_Statics::FileManaMovie_eventSetFilePath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManaMovie_SetFilePath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileManaMovie_SetFilePath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileManaMovie_SetFilePath_Statics::FileManaMovie_eventSetFilePath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileManaMovie_SetFilePath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileManaMovie_SetFilePath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileManaMovie::execSetFilePath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Path);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFilePath(Z_Param_Path);
	P_NATIVE_END;
}
// End Class UFileManaMovie Function SetFilePath

// Begin Class UFileManaMovie
void UFileManaMovie::StaticRegisterNativesUFileManaMovie()
{
	UClass* Class = UFileManaMovie::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetFilePath", &UFileManaMovie::execSetFilePath },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFileManaMovie);
UClass* Z_Construct_UClass_UFileManaMovie_NoRegister()
{
	return UFileManaMovie::StaticClass();
}
struct Z_Construct_UClass_UFileManaMovie_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FileManaMovie.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FileManaMovie.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPrecacheFile_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FileManaMovie" },
		{ "ModuleRelativePath", "Public/FileManaMovie.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FileManaMovie" },
		{ "ModuleRelativePath", "Public/FileManaMovie.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bPrecacheFile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrecacheFile;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFileManaMovie_SetFilePath, "SetFilePath" }, // 2089551244
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFileManaMovie>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UFileManaMovie_Statics::NewProp_bPrecacheFile_SetBit(void* Obj)
{
	((UFileManaMovie*)Obj)->bPrecacheFile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFileManaMovie_Statics::NewProp_bPrecacheFile = { "bPrecacheFile", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFileManaMovie), &Z_Construct_UClass_UFileManaMovie_Statics::NewProp_bPrecacheFile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPrecacheFile_MetaData), NewProp_bPrecacheFile_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFileManaMovie_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0020090000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFileManaMovie, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFileManaMovie_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFileManaMovie_Statics::NewProp_bPrecacheFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFileManaMovie_Statics::NewProp_FilePath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFileManaMovie_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFileManaMovie_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UManaMovie,
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFileManaMovie_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFileManaMovie_Statics::ClassParams = {
	&UFileManaMovie::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFileManaMovie_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFileManaMovie_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFileManaMovie_Statics::Class_MetaDataParams), Z_Construct_UClass_UFileManaMovie_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFileManaMovie()
{
	if (!Z_Registration_Info_UClass_UFileManaMovie.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFileManaMovie.OuterSingleton, Z_Construct_UClass_UFileManaMovie_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFileManaMovie.OuterSingleton;
}
template<> CRIWARERUNTIME_API UClass* StaticClass<UFileManaMovie>()
{
	return UFileManaMovie::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFileManaMovie);
UFileManaMovie::~UFileManaMovie() {}
// End Class UFileManaMovie

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_FileManaMovie_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFileManaMovie, UFileManaMovie::StaticClass, TEXT("UFileManaMovie"), &Z_Registration_Info_UClass_UFileManaMovie, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFileManaMovie), 1785995019U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_FileManaMovie_h_3336661330(TEXT("/Script/CriWareRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_FileManaMovie_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_FileManaMovie_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
