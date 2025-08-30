#pragma once
#include "CoreMinimal.h"
#include "Common_RankingOrder.h"
#include "ResultSaveTimeTrialResultResponse_TimeTrialRankingData.generated.h"

USTRUCT(BlueprintType)
struct FResultSaveTimeTrialResultResponse_TimeTrialRankingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 courceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 speedType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommon_RankingOrder myRanking;
    
    UNIONSYSTEM_API FResultSaveTimeTrialResultResponse_TimeTrialRankingData();
};

