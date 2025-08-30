#pragma once
#include "CoreMinimal.h"
#include "RankingDataFestaPointList.h"
#include "FestaFriendRankingAsyncResult.generated.h"

USTRUCT(BlueprintType)
struct FFestaFriendRankingAsyncResult : public FRankingDataFestaPointList {
    GENERATED_BODY()
public:
    UNIONSYSTEM_API FFestaFriendRankingAsyncResult();
};

