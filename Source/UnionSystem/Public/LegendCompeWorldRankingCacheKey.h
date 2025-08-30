#pragma once
#include "CoreMinimal.h"
#include "RankingGetRankingLegendCompeRequest.h"
#include "LegendCompeWorldRankingCacheKey.generated.h"

USTRUCT(BlueprintType)
struct FLegendCompeWorldRankingCacheKey : public FRankingGetRankingLegendCompeRequest {
    GENERATED_BODY()
public:
    UNIONSYSTEM_API FLegendCompeWorldRankingCacheKey();
};

