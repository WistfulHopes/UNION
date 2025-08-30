#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EDriverId.h"
#include "CharaMachineSelectSettingUtility.generated.h"

class UObject;

UCLASS(Abstract, Blueprintable)
class UNION_API UCharaMachineSelectSettingUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCharaMachineSelectSettingUtility();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsCharaEnabled(const UObject* WorldContextObject, EDriverId DriverId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetHoverboardZLocationAdjust(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CanSelectChara(const UObject* WorldContextObject, EDriverId DriverId);
    
};

