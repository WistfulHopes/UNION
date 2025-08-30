#pragma once
#include "CoreMinimal.h"
#include "RankingDataLegendCompeList.h"
#include "LegendCompeFriendRankingAsyncResult.generated.h"

USTRUCT(BlueprintType)
struct FLegendCompeFriendRankingAsyncResult : public FRankingDataLegendCompeList {
    GENERATED_BODY()
public:
    UNIONSYSTEM_API FLegendCompeFriendRankingAsyncResult();
};

