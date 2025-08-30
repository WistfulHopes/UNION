#pragma once
#include "CoreMinimal.h"
#include "RankingGetRankingLegendCompeResponse.generated.h"

USTRUCT(BlueprintType)
struct FRankingGetRankingLegendCompeResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString signedUrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString updatedAt;
    
    UNIONSYSTEM_API FRankingGetRankingLegendCompeResponse();
};

