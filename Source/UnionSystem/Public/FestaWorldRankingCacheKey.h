#pragma once
#include "CoreMinimal.h"
#include "RankingGetRankingFestaPointRequest.h"
#include "FestaWorldRankingCacheKey.generated.h"

USTRUCT(BlueprintType)
struct FFestaWorldRankingCacheKey : public FRankingGetRankingFestaPointRequest {
    GENERATED_BODY()
public:
    UNIONSYSTEM_API FFestaWorldRankingCacheKey();
};

