#pragma once
#include "CoreMinimal.h"
#include "GaugePointResult.generated.h"

USTRUCT(BlueprintType)
struct FGaugePointResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Now;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RemainAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HighLow;
    
    UNION_API FGaugePointResult();
};

