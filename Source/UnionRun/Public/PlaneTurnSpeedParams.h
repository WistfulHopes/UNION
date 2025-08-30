#pragma once
#include "CoreMinimal.h"
#include "PlaneTurnSpeedParams.generated.h"

USTRUCT(BlueprintType)
struct FPlaneTurnSpeedParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngularSpeed_Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngularSpeed_Max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngularAccelSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngularSwitchAccelSec;
    
    UNIONRUN_API FPlaneTurnSpeedParams();
};

