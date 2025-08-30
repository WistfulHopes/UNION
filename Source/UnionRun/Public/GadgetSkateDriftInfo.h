#pragma once
#include "CoreMinimal.h"
#include "GadgetSkateDriftInfo.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FGadgetSkateDriftInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeTimeRatio;
    
    FGadgetSkateDriftInfo();
};

