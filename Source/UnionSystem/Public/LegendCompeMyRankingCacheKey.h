#pragma once
#include "CoreMinimal.h"
#include "RankingGetMyRankingLegendCompeRequest.h"
#include "LegendCompeMyRankingCacheKey.generated.h"

USTRUCT(BlueprintType)
struct FLegendCompeMyRankingCacheKey : public FRankingGetMyRankingLegendCompeRequest {
    GENERATED_BODY()
public:
    UNIONSYSTEM_API FLegendCompeMyRankingCacheKey();
};

