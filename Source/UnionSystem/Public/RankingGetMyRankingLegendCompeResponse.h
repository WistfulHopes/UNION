#pragma once
#include "CoreMinimal.h"
#include "RankingGetMyRankingResponse_AllRanking.h"
#include "RankingGetMyRankingLegendCompeResponse.generated.h"

USTRUCT(BlueprintType)
struct FRankingGetMyRankingLegendCompeResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRankingGetMyRankingResponse_AllRanking myRanking;
    
    UNIONSYSTEM_API FRankingGetMyRankingLegendCompeResponse();
};

