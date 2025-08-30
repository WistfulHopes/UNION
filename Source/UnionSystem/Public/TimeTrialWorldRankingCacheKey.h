#pragma once
#include "CoreMinimal.h"
#include "RankingGetRankingTimeTrialRequest.h"
#include "TimeTrialWorldRankingCacheKey.generated.h"

USTRUCT(BlueprintType)
struct FTimeTrialWorldRankingCacheKey : public FRankingGetRankingTimeTrialRequest {
    GENERATED_BODY()
public:
    UNIONSYSTEM_API FTimeTrialWorldRankingCacheKey();
};

