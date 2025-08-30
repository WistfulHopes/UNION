#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EGadgetId.h"
#include "GadgetLottery.generated.h"

UCLASS(Blueprintable)
class UGadgetLottery : public UObject {
    GENERATED_BODY()
public:
    UGadgetLottery();

    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    EGadgetId Lot(EGadgetId InCurrentGadgetId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSeed() const;
    
};

