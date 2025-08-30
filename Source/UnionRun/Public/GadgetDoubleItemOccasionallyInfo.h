#pragma once
#include "CoreMinimal.h"
#include "GadgetDoubleItemOccasionallyInfo.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FGadgetDoubleItemOccasionallyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DoubleRatio;
    
    FGadgetDoubleItemOccasionallyInfo();
};

