#pragma once
#include "CoreMinimal.h"
#include "MyRankingData.h"
#include "MyRankingAsyncResult.generated.h"

USTRUCT(BlueprintType)
struct FMyRankingAsyncResult : public FMyRankingData {
    GENERATED_BODY()
public:
    UNIONSYSTEM_API FMyRankingAsyncResult();
};

