#pragma once
#include "CoreMinimal.h"
#include "GadgetTradeStockInfo.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FGadgetTradeStockInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoolDownTime;
    
    FGadgetTradeStockInfo();
};

