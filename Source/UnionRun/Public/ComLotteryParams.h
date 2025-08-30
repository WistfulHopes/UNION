#pragma once
#include "CoreMinimal.h"
#include "ComLotteryParams.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FComLotteryParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpecialTypeSlotRank;
    
    FComLotteryParams();
};

