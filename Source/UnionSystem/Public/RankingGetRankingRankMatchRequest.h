#pragma once
#include "CoreMinimal.h"
#include "RankingGetRankingRankMatchRequest.generated.h"

USTRUCT(BlueprintType)
struct FRankingGetRankingRankMatchRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Platform;
    
    UNIONSYSTEM_API FRankingGetRankingRankMatchRequest();
};

