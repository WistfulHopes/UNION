#pragma once
#include "CoreMinimal.h"
#include "RankingDataRankMatchList.h"
#include "RankMatchWorldRankingAsyncResult.generated.h"

USTRUCT(BlueprintType)
struct FRankMatchWorldRankingAsyncResult : public FRankingDataRankMatchList {
    GENERATED_BODY()
public:
    UNIONSYSTEM_API FRankMatchWorldRankingAsyncResult();
};

