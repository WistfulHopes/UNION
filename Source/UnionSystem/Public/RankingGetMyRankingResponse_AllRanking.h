#pragma once
#include "CoreMinimal.h"
#include "Common_RankingOrder.h"
#include "RankingGetMyRankingResponse_AllRanking.generated.h"

USTRUCT(BlueprintType)
struct FRankingGetMyRankingResponse_AllRanking {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommon_RankingOrder All;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommon_RankingOrder Nintendo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommon_RankingOrder psn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommon_RankingOrder xbl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommon_RankingOrder PC;
    
    UNIONSYSTEM_API FRankingGetMyRankingResponse_AllRanking();
};

