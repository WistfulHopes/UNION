#pragma once
#include "CoreMinimal.h"
#include "RankingDataLegendCompeList.h"
#include "LegendCompeWorldRankingAsyncResult.generated.h"

USTRUCT(BlueprintType)
struct FLegendCompeWorldRankingAsyncResult : public FRankingDataLegendCompeList {
    GENERATED_BODY()
public:
    UNIONSYSTEM_API FLegendCompeWorldRankingAsyncResult();
};

