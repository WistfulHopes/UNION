#pragma once
#include "CoreMinimal.h"
#include "GadgetLevelChargeInfo.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FGadgetLevelChargeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeRate;
    
    FGadgetLevelChargeInfo();
};

