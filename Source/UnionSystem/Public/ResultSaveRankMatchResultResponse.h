#pragma once
#include "CoreMinimal.h"
#include "Common_RankingOrder.h"
#include "ResultSaveRankMatchResultResponse.generated.h"

USTRUCT(BlueprintType)
struct FResultSaveRankMatchResultResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommon_RankingOrder myRanking;
    
    UNIONSYSTEM_API FResultSaveRankMatchResultResponse();
};

