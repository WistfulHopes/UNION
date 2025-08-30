#pragma once
#include "CoreMinimal.h"
#include "Common_RankingOrder.h"
#include "RankingGetFriendRankingFestaPointResponse.generated.h"

USTRUCT(BlueprintType)
struct FRankingGetFriendRankingFestaPointResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommon_RankingOrder> Ranking;
    
    UNIONSYSTEM_API FRankingGetFriendRankingFestaPointResponse();
};

