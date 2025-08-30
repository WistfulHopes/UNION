#pragma once
#include "CoreMinimal.h"
#include "RankingGetRankingTimeTrialResponse_HistogramData.generated.h"

USTRUCT(BlueprintType)
struct FRankingGetRankingTimeTrialResponse_HistogramData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 binNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 lowerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 upperTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 userNum;
    
    UNIONSYSTEM_API FRankingGetRankingTimeTrialResponse_HistogramData();
};

