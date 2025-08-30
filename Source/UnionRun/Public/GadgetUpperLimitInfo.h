#pragma once
#include "CoreMinimal.h"
#include "GadgetUpperLimitInfo.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FGadgetUpperLimitInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RingNum;
    
    FGadgetUpperLimitInfo();
};

