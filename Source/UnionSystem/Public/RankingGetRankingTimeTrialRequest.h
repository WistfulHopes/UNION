#pragma once
#include "CoreMinimal.h"
#include "RankingGetRankingTimeTrialRequest.generated.h"

USTRUCT(BlueprintType)
struct FRankingGetRankingTimeTrialRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 courseId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 speedType;
    
    UNIONSYSTEM_API FRankingGetRankingTimeTrialRequest();
};

