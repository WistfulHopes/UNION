#pragma once
#include "CoreMinimal.h"
#include "MatchmakingDescribeResponse_RankMatchRate.generated.h"

USTRUCT(BlueprintType)
struct FMatchmakingDescribeResponse_RankMatchRate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rate;
    
    UNIONSYSTEM_API FMatchmakingDescribeResponse_RankMatchRate();
};

