#pragma once
#include "CoreMinimal.h"
#include "RankingGetMyRankingResponse_AllRanking.h"
#include "RankingGetMyRankingRankMatchResponse.generated.h"

USTRUCT(BlueprintType)
struct FRankingGetMyRankingRankMatchResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRankingGetMyRankingResponse_AllRanking myRanking;
    
    UNIONSYSTEM_API FRankingGetMyRankingRankMatchResponse();
};

