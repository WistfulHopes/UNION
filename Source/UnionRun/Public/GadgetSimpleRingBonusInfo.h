#pragma once
#include "CoreMinimal.h"
#include "GadgetSimpleRingBonusInfo.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FGadgetSimpleRingBonusInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RingNum;
    
    FGadgetSimpleRingBonusInfo();
};

