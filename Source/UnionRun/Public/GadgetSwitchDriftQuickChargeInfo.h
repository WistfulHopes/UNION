#pragma once
#include "CoreMinimal.h"
#include "GadgetSwitchDriftQuickChargeInfo.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FGadgetSwitchDriftQuickChargeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoolDownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeUpSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeMul;
    
    FGadgetSwitchDriftQuickChargeInfo();
};

