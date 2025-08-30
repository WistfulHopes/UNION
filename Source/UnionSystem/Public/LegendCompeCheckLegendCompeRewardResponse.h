#pragma once
#include "CoreMinimal.h"
#include "Common_RewardData.h"
#include "LegendCompeCheckLegendCompeRewardResponse.generated.h"

USTRUCT(BlueprintType)
struct FLegendCompeCheckLegendCompeRewardResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommon_RewardData> rewardList;
    
    UNIONSYSTEM_API FLegendCompeCheckLegendCompeRewardResponse();
};

