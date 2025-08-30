#pragma once
#include "CoreMinimal.h"
#include "LegendCompeCheckLegendCompeRewardRequest.generated.h"

USTRUCT(BlueprintType)
struct FLegendCompeCheckLegendCompeRewardRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 compeId;
    
    UNIONSYSTEM_API FLegendCompeCheckLegendCompeRewardRequest();
};

