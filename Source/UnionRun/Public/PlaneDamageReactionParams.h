#pragma once
#include "CoreMinimal.h"
#include "ItemSpeedParam.h"
#include "PlaneDamageReactionParams.generated.h"

USTRUCT(BlueprintType)
struct FPlaneDamageReactionParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemSpeedParam ClassSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntervalSeconds;
    
    UNIONRUN_API FPlaneDamageReactionParams();
};

