#pragma once
#include "CoreMinimal.h"
#include "Common_RankingOrder.h"
#include "ResultSaveLegendCompeResultResponse.generated.h"

USTRUCT(BlueprintType)
struct FResultSaveLegendCompeResultResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 addRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommon_RankingOrder myRanking;
    
    UNIONSYSTEM_API FResultSaveLegendCompeResultResponse();
};

