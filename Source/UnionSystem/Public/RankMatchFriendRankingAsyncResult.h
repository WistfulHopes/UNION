#pragma once
#include "CoreMinimal.h"
#include "RankingDataRankMatchList.h"
#include "RankMatchFriendRankingAsyncResult.generated.h"

USTRUCT(BlueprintType)
struct FRankMatchFriendRankingAsyncResult : public FRankingDataRankMatchList {
    GENERATED_BODY()
public:
    UNIONSYSTEM_API FRankMatchFriendRankingAsyncResult();
};

