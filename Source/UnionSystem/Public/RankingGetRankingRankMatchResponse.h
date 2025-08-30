#pragma once
#include "CoreMinimal.h"
#include "RankingGetRankingRankMatchResponse.generated.h"

USTRUCT(BlueprintType)
struct FRankingGetRankingRankMatchResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString signedUrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString updatedAt;
    
    UNIONSYSTEM_API FRankingGetRankingRankMatchResponse();
};

