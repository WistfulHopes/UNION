#pragma once
#include "CoreMinimal.h"
#include "RankingGetRankingRankMatchRequest.h"
#include "RankMatchWorldRankingCacheKey.generated.h"

USTRUCT(BlueprintType)
struct FRankMatchWorldRankingCacheKey : public FRankingGetRankingRankMatchRequest {
    GENERATED_BODY()
public:
    UNIONSYSTEM_API FRankMatchWorldRankingCacheKey();
};

