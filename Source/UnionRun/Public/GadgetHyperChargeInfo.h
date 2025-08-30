#pragma once
#include "CoreMinimal.h"
#include "GadgetHyperChargeInfo.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FGadgetHyperChargeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeccelSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeccelRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeRate;
    
    FGadgetHyperChargeInfo();
};

