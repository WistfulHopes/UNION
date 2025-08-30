#pragma once
#include "CoreMinimal.h"
#include "RankingGetMyRankingResponse_AllRanking.h"
#include "RankingGetMyRankingTimeTrialResponse.generated.h"

USTRUCT(BlueprintType)
struct FRankingGetMyRankingTimeTrialResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRankingGetMyRankingResponse_AllRanking myRanking;
    
    UNIONSYSTEM_API FRankingGetMyRankingTimeTrialResponse();
};

