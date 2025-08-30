#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MenuLightingLevelInterface.generated.h"

UINTERFACE(Blueprintable)
class UMenuLightingLevelInterface : public UInterface {
    GENERATED_BODY()
};

class IMenuLightingLevelInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPostProcessEnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetLightingEnable(bool bEnable);
    
};

