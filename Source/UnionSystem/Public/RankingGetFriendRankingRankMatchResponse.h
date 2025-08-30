#pragma once
#include "CoreMinimal.h"
#include "Common_RankingOrder.h"
#include "RankingGetFriendRankingRankMatchResponse.generated.h"

USTRUCT(BlueprintType)
struct FRankingGetFriendRankingRankMatchResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommon_RankingOrder> Ranking;
    
    UNIONSYSTEM_API FRankingGetFriendRankingRankMatchResponse();
};

