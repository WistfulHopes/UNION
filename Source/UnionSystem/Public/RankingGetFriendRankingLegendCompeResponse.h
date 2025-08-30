#pragma once
#include "CoreMinimal.h"
#include "Common_RankingOrder.h"
#include "RankingGetFriendRankingLegendCompeResponse.generated.h"

USTRUCT(BlueprintType)
struct FRankingGetFriendRankingLegendCompeResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommon_RankingOrder> Ranking;
    
    UNIONSYSTEM_API FRankingGetFriendRankingLegendCompeResponse();
};

