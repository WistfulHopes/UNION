#pragma once
#include "CoreMinimal.h"
#include "GadgetEnhanceRocketPunchInfo.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FGadgetEnhanceRocketPunchInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SizeScale;
    
    FGadgetEnhanceRocketPunchInfo();
};

