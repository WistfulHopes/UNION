#pragma once
#include "CoreMinimal.h"
#include "DebugChangeRankMatchRateRequest.generated.h"

USTRUCT(BlueprintType)
struct FDebugChangeRankMatchRateRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rate;
    
    UNIONSYSTEM_API FDebugChangeRankMatchRateRequest();
};

