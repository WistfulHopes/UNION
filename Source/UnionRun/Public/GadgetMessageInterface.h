#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GadgetNotifyAttackInfo.h"
#include "GadgetMessageInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UGadgetMessageInterface : public UInterface {
    GENERATED_BODY()
};

class IGadgetMessageInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GadgetNotifyMessage(const FName Message);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GadgetNotifyAttack(const FGadgetNotifyAttackInfo& Info);
    
};

