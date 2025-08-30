#pragma once
#include "CoreMinimal.h"
#include "RankingGetFriendRankingRankMatchRequest.h"
#include "RankMatchFriendRankingCacheKey.generated.h"

USTRUCT(BlueprintType)
struct FRankMatchFriendRankingCacheKey : public FRankingGetFriendRankingRankMatchRequest {
    GENERATED_BODY()
public:
    UNIONSYSTEM_API FRankMatchFriendRankingCacheKey();
};

