#pragma once
#include "CoreMinimal.h"
#include "RankingDataFestaPointList.h"
#include "FestaWorldRankingAsyncResult.generated.h"

USTRUCT(BlueprintType)
struct FFestaWorldRankingAsyncResult : public FRankingDataFestaPointList {
    GENERATED_BODY()
public:
    UNIONSYSTEM_API FFestaWorldRankingAsyncResult();
};

