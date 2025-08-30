#pragma once
#include "CoreMinimal.h"
#include "GadgetLowRankRingBonusInfo.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FGadgetLowRankRingBonusInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<int32> GetRingNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<float> GetRingInterval;
    
    FGadgetLowRankRingBonusInfo();
};

