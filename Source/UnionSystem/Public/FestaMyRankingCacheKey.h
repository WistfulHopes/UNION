#pragma once
#include "CoreMinimal.h"
#include "RankingGetMyRankingFestaPointRequest.h"
#include "FestaMyRankingCacheKey.generated.h"

USTRUCT(BlueprintType)
struct FFestaMyRankingCacheKey : public FRankingGetMyRankingFestaPointRequest {
    GENERATED_BODY()
public:
    UNIONSYSTEM_API FFestaMyRankingCacheKey();
};

