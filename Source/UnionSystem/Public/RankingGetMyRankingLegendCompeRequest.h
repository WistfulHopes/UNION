#pragma once
#include "CoreMinimal.h"
#include "RankingGetMyRankingLegendCompeRequest.generated.h"

USTRUCT(BlueprintType)
struct FRankingGetMyRankingLegendCompeRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 compeId;
    
    UNIONSYSTEM_API FRankingGetMyRankingLegendCompeRequest();
};

