#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EPerformanceObjectType.h"
#include "ItemPerformanceInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UItemPerformanceInterface : public UInterface {
    GENERATED_BODY()
};

class IItemPerformanceInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsPerformanceObjectInAlart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName GetStatusInfoID();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EPerformanceObjectType GetPerformanceObjectType();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetAttachedRacerIndex();
    
};

