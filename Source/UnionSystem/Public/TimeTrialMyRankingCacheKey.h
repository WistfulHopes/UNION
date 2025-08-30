#pragma once
#include "CoreMinimal.h"
#include "RankingGetMyRankingTimeTrialRequest.h"
#include "TimeTrialMyRankingCacheKey.generated.h"

USTRUCT(BlueprintType)
struct FTimeTrialMyRankingCacheKey : public FRankingGetMyRankingTimeTrialRequest {
    GENERATED_BODY()
public:
    UNIONSYSTEM_API FTimeTrialMyRankingCacheKey();
};

