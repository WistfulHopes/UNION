#pragma once
#include "CoreMinimal.h"
#include "RankingGetMyRankingResponse_AllRanking.h"
#include "RankingGetMyRankingFestaPointResponse.generated.h"

USTRUCT(BlueprintType)
struct FRankingGetMyRankingFestaPointResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRankingGetMyRankingResponse_AllRanking myRanking;
    
    UNIONSYSTEM_API FRankingGetMyRankingFestaPointResponse();
};

