#pragma once
#include "CoreMinimal.h"
#include "GadgetGuardInfo.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FGadgetGuardInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReduceDamageRatio;
    
    FGadgetGuardInfo();
};

