#pragma once
#include "CoreMinimal.h"
#include "PlaneBounceSpeedParams.generated.h"

USTRUCT(BlueprintType)
struct FPlaneBounceSpeedParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Deccel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeccelSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BodyDirectionBlendRate;
    
    UNIONRUN_API FPlaneBounceSpeedParams();
};

