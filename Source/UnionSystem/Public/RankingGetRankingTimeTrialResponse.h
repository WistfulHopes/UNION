#pragma once
#include "CoreMinimal.h"
#include "RankingGetRankingTimeTrialResponse_HistogramData.h"
#include "RankingGetRankingTimeTrialResponse.generated.h"

USTRUCT(BlueprintType)
struct FRankingGetRankingTimeTrialResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString signedUrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString updatedAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRankingGetRankingTimeTrialResponse_HistogramData> histogram;
    
    UNIONSYSTEM_API FRankingGetRankingTimeTrialResponse();
};

