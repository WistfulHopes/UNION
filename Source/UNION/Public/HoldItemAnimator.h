#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EHoldItemVisibility.h"
#include "HoldItemAnimator.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UHoldItemAnimator : public UInterface {
    GENERATED_BODY()
};

class IHoldItemAnimator : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Use();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetVisibility(const EHoldItemVisibility NewVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Reset();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EHoldItemVisibility GetVisibility() const;
    
};

