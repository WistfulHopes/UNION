#pragma once
#include "CoreMinimal.h"
#include "GadgetShortenDamageMotionInfo.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FGadgetShortenDamageMotionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShortenRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShortenRatioNormalDamage;
    
    FGadgetShortenDamageMotionInfo();
};

