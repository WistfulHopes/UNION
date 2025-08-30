#pragma once
#include "CoreMinimal.h"
#include "GadgetDashUpInfo.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FGadgetDashUpInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AddSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccelMul;
    
    FGadgetDashUpInfo();
};

