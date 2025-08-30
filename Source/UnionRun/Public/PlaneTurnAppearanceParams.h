#pragma once
#include "CoreMinimal.h"
#include "PlaneTurnAppearanceParams.generated.h"

USTRUCT(BlueprintType)
struct FPlaneTurnAppearanceParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngularSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwitchAngularSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngularAccelSec;
    
    UNIONRUN_API FPlaneTurnAppearanceParams();
};

