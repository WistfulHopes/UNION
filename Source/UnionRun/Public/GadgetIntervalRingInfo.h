#pragma once
#include "CoreMinimal.h"
#include "GadgetIntervalRingInfo.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FGadgetIntervalRingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RingNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RingInterval;
    
    FGadgetIntervalRingInfo();
};

