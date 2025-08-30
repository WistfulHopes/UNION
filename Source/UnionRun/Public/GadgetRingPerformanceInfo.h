#pragma once
#include "CoreMinimal.h"
#include "GadgetRingPerformanceInfo.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FGadgetRingPerformanceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GetRingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpOffsetTransformed;
    
    FGadgetRingPerformanceInfo();
};

