#pragma once
#include "CoreMinimal.h"
#include "DashChargeParams.generated.h"

USTRUCT(BlueprintType)
struct FDashChargeParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeSeconds[4];
    
    UNIONRUN_API FDashChargeParams();
};

