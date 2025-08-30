// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/CriFsBinderComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCriFsBinderComponent() {}

// Begin Cross Module References
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UCriFsBinderComponent();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UCriFsBinderComponent_NoRegister();
CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_ECriFsBinderStatus();
CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindCompleted__DelegateSignature();
CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindError__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Delegate FOnBindError
struct Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindError__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CriFsBinderComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindError__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriFsBinderComponent, nullptr, "OnBindError__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindError__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindError__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindError__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindError__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UCriFsBinderComponent::FOnBindError_DelegateWrapper(const FMulticastScriptDelegate& OnBindError)
{
	OnBindError.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnBindError

// Begin Delegate FOnBindCompleted
struct Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindCompleted__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CriFsBinderComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriFsBinderComponent, nullptr, "OnBindCompleted__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindCompleted__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UCriFsBinderComponent::FOnBindCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnBindCompleted)
{
	OnBindCompleted.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnBindCompleted

// Begin Class UCriFsBinderComponent Function Bind
struct Z_Construct_UFunction_UCriFsBinderComponent_Bind_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CriFsBinderComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCriFsBinderComponent_Bind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriFsBinderComponent, nullptr, "Bind", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCriFsBinderComponent_Bind_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCriFsBinderComponent_Bind_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCriFsBinderComponent_Bind()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCriFsBinderComponent_Bind_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCriFsBinderComponent::execBind)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Bind();
	P_NATIVE_END;
}
// End Class UCriFsBinderComponent Function Bind

// Begin Class UCriFsBinderComponent Function GetStatus
struct Z_Construct_UFunction_UCriFsBinderComponent_GetStatus_Statics
{
	struct CriFsBinderComponent_eventGetStatus_Parms
	{
		ECriFsBinderStatus ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CriFsBinderComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCriFsBinderComponent_GetStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCriFsBinderComponent_GetStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CriFsBinderComponent_eventGetStatus_Parms, ReturnValue), Z_Construct_UEnum_CriWareRuntime_ECriFsBinderStatus, METADATA_PARAMS(0, nullptr) }; // 1116239411
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCriFsBinderComponent_GetStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCriFsBinderComponent_GetStatus_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCriFsBinderComponent_GetStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCriFsBinderComponent_GetStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCriFsBinderComponent_GetStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriFsBinderComponent, nullptr, "GetStatus", nullptr, nullptr, Z_Construct_UFunction_UCriFsBinderComponent_GetStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriFsBinderComponent_GetStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCriFsBinderComponent_GetStatus_Statics::CriFsBinderComponent_eventGetStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCriFsBinderComponent_GetStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCriFsBinderComponent_GetStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCriFsBinderComponent_GetStatus_Statics::CriFsBinderComponent_eventGetStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCriFsBinderComponent_GetStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCriFsBinderComponent_GetStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCriFsBinderComponent::execGetStatus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ECriFsBinderStatus*)Z_Param__Result=P_THIS->GetStatus();
	P_NATIVE_END;
}
// End Class UCriFsBinderComponent Function GetStatus

// Begin Class UCriFsBinderComponent Function Stop
struct Z_Construct_UFunction_UCriFsBinderComponent_Stop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CriFsBinderComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCriFsBinderComponent_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriFsBinderComponent, nullptr, "Stop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCriFsBinderComponent_Stop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCriFsBinderComponent_Stop_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCriFsBinderComponent_Stop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCriFsBinderComponent_Stop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCriFsBinderComponent::execStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Stop();
	P_NATIVE_END;
}
// End Class UCriFsBinderComponent Function Stop

// Begin Class UCriFsBinderComponent
void UCriFsBinderComponent::StaticRegisterNativesUCriFsBinderComponent()
{
	UClass* Class = UCriFsBinderComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Bind", &UCriFsBinderComponent::execBind },
		{ "GetStatus", &UCriFsBinderComponent::execGetStatus },
		{ "Stop", &UCriFsBinderComponent::execStop },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCriFsBinderComponent);
UClass* Z_Construct_UClass_UCriFsBinderComponent_NoRegister()
{
	return UCriFsBinderComponent::StaticClass();
}
struct Z_Construct_UClass_UCriFsBinderComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "CriFsBinderComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CriFsBinderComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriFsBinderComponent" },
		{ "ModuleRelativePath", "Public/CriFsBinderComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBindCompleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriFsBinderComponent" },
		{ "ModuleRelativePath", "Public/CriFsBinderComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBindError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriFsBinderComponent" },
		{ "ModuleRelativePath", "Public/CriFsBinderComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBindCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBindError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCriFsBinderComponent_Bind, "Bind" }, // 522967217
		{ &Z_Construct_UFunction_UCriFsBinderComponent_GetStatus, "GetStatus" }, // 3992694655
		{ &Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindCompleted__DelegateSignature, "OnBindCompleted__DelegateSignature" }, // 3791172631
		{ &Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindError__DelegateSignature, "OnBindError__DelegateSignature" }, // 2475555745
		{ &Z_Construct_UFunction_UCriFsBinderComponent_Stop, "Stop" }, // 1859255524
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCriFsBinderComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCriFsBinderComponent_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriFsBinderComponent, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCriFsBinderComponent_Statics::NewProp_OnBindCompleted = { "OnBindCompleted", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriFsBinderComponent, OnBindCompleted), Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBindCompleted_MetaData), NewProp_OnBindCompleted_MetaData) }; // 3791172631
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCriFsBinderComponent_Statics::NewProp_OnBindError = { "OnBindError", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriFsBinderComponent, OnBindError), Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindError__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBindError_MetaData), NewProp_OnBindError_MetaData) }; // 2475555745
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCriFsBinderComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriFsBinderComponent_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriFsBinderComponent_Statics::NewProp_OnBindCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriFsBinderComponent_Statics::NewProp_OnBindError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCriFsBinderComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCriFsBinderComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCriFsBinderComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCriFsBinderComponent_Statics::ClassParams = {
	&UCriFsBinderComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCriFsBinderComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCriFsBinderComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCriFsBinderComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCriFsBinderComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCriFsBinderComponent()
{
	if (!Z_Registration_Info_UClass_UCriFsBinderComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCriFsBinderComponent.OuterSingleton, Z_Construct_UClass_UCriFsBinderComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCriFsBinderComponent.OuterSingleton;
}
template<> CRIWARERUNTIME_API UClass* StaticClass<UCriFsBinderComponent>()
{
	return UCriFsBinderComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCriFsBinderComponent);
UCriFsBinderComponent::~UCriFsBinderComponent() {}
// End Class UCriFsBinderComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsBinderComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCriFsBinderComponent, UCriFsBinderComponent::StaticClass, TEXT("UCriFsBinderComponent"), &Z_Registration_Info_UClass_UCriFsBinderComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCriFsBinderComponent), 3930356018U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsBinderComponent_h_195746880(TEXT("/Script/CriWareRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsBinderComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsBinderComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
