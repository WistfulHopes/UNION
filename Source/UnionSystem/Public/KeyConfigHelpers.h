#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InputCoreTypes.h"
#include "EControllerButtonType.h"
#include "EKeyConfigDeviceType.h"
#include "EKeyConfigOperationType.h"
#include "InputConfig.h"
#include "KeyConfigHelpers.generated.h"

class UInputDataAsset;
class UKeyConfigItem;

UCLASS(Blueprintable)
class UNIONSYSTEM_API UKeyConfigHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UKeyConfigHelpers();

    UFUNCTION(BlueprintCallable)
    static void SetCustomKeyConfigs(int32 InPlayerControllerIndex, const TMap<FName, FKey>& InCustomKeyConfigs);
    
    UFUNCTION(BlueprintCallable)
    static void SetAssignedKey(int32 InPlayerControllerIndex, const FName& MappingName, const FKey& NewKey);
    
    UFUNCTION(BlueprintCallable)
    static void GetKeyConfigItems(int32 InPlayerControllerIndex, const FInputConfig& InputConfig, EKeyConfigDeviceType Type, TMap<FName, UKeyConfigItem*>& OutKeyConfigItems);
    
    UFUNCTION(BlueprintCallable)
    static FName GetInputConfigNameFromOperationType(EKeyConfigOperationType OperationType);
    
    UFUNCTION(BlueprintCallable)
    static bool GetCustomKeyConfigs(int32 InPlayerControllerIndex, TMap<FName, FKey>& OutCustomKeyConfigs);
    
    UFUNCTION(BlueprintCallable)
    static FKey GetAssignedKey(int32 InPlayerControllerIndex, const FName& MappingName);
    
    UFUNCTION(BlueprintCallable)
    static bool FindInputConfig(UInputDataAsset* InputDataAsset, EKeyConfigOperationType OperationType, FInputConfig& OutInputConfig);
    
    UFUNCTION(BlueprintCallable)
    static bool CompareCustomKeyConfigs(const TMap<FName, FKey>& CustomKeyConfigs1, const TMap<FName, FKey>& CustomKeyConfigs2);
    
    UFUNCTION(BlueprintCallable)
    static void ClearCustomKeyConfigs(int32 InPlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable)
    static void ClearAssignedKey(int32 InPlayerControllerIndex, const FName& MappingName);
    
    UFUNCTION(BlueprintCallable)
    static EControllerButtonType CalcButtonViewTypeByKey(const FKey& InKey);
    
};

