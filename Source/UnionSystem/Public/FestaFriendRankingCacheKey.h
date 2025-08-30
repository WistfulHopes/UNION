#pragma once
#include "CoreMinimal.h"
#include "RankingGetFriendRankingFestaPointRequest.h"
#include "FestaFriendRankingCacheKey.generated.h"

USTRUCT(BlueprintType)
struct FFestaFriendRankingCacheKey : public FRankingGetFriendRankingFestaPointRequest {
    GENERATED_BODY()
public:
    UNIONSYSTEM_API FFestaFriendRankingCacheKey();
};

