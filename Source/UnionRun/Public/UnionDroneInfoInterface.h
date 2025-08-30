#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CallDroneInfo.h"
#include "UnionDroneInfoInterface.generated.h"

UINTERFACE(Blueprintable)
class UNIONRUN_API UUnionDroneInfoInterface : public UInterface {
    GENERATED_BODY()
};

class UNIONRUN_API IUnionDroneInfoInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyDroneVisibilityEvent(bool Visibility);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyCallDroneEvent(const FCallDroneInfo& Info);
    
};

