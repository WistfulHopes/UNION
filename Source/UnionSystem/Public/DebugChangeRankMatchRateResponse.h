#pragma once
#include "CoreMinimal.h"
#include "DebugChangeRankMatchRateResponse.generated.h"

USTRUCT(BlueprintType)
struct FDebugChangeRankMatchRateResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rate;
    
    UNIONSYSTEM_API FDebugChangeRankMatchRateResponse();
};

