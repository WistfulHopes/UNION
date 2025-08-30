#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EGadgetId.h"
#include "CheatGadget.generated.h"

UCLASS(Blueprintable)
class UCheatGadget : public UObject {
    GENERATED_BODY()
public:
    UCheatGadget();

    UFUNCTION(BlueprintCallable, Exec)
    void UnlockGadgetAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockGadget(EGadgetId InGadgetId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void LockGadgetAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LockGadget(EGadgetId InGadgetId);
    
};

