#pragma once
#include "CoreMinimal.h"
#include "PlaneChargeTurnSpeedParams.h"
#include "PlaneChargeTurnSpeedHandleParams.generated.h"

USTRUCT(BlueprintType)
struct FPlaneChargeTurnSpeedHandleParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlaneChargeTurnSpeedParams HandleMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlaneChargeTurnSpeedParams HandleMax;
    
    UNIONRUN_API FPlaneChargeTurnSpeedHandleParams();
};

