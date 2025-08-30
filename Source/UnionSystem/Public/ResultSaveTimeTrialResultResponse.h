#pragma once
#include "CoreMinimal.h"
#include "Common_RankingOrder.h"
#include "ResultSaveTimeTrialResultResponse_TimeTrialRankingData.h"
#include "ResultSaveTimeTrialResultResponse.generated.h"

USTRUCT(BlueprintType)
struct FResultSaveTimeTrialResultResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommon_RankingOrder myCourseRanking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FResultSaveTimeTrialResultResponse_TimeTrialRankingData> myRankingList;
    
    UNIONSYSTEM_API FResultSaveTimeTrialResultResponse();
};

