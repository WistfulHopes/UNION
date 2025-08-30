#pragma once
#include "CoreMinimal.h"
#include "RankingDataTimeTrialList.h"
#include "TimeTrialWorldRankingAsyncResult.generated.h"

USTRUCT(BlueprintType)
struct FTimeTrialWorldRankingAsyncResult : public FRankingDataTimeTrialList {
    GENERATED_BODY()
public:
    UNIONSYSTEM_API FTimeTrialWorldRankingAsyncResult();
};

