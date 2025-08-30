#pragma once
#include "CoreMinimal.h"
#include "RankingGetMyRankingTimeTrialRequest.generated.h"

USTRUCT(BlueprintType)
struct FRankingGetMyRankingTimeTrialRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 courseId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 speedType;
    
    UNIONSYSTEM_API FRankingGetMyRankingTimeTrialRequest();
};

