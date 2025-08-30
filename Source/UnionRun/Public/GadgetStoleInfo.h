#pragma once
#include "CoreMinimal.h"
#include "GadgetStoleInfo.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FGadgetStoleInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RingNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoolDownTime;
    
    FGadgetStoleInfo();
};

