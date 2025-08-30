#pragma once
#include "CoreMinimal.h"
#include "RankingGetRankingLegendCompeRequest.generated.h"

USTRUCT(BlueprintType)
struct FRankingGetRankingLegendCompeRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 compeId;
    
    UNIONSYSTEM_API FRankingGetRankingLegendCompeRequest();
};

