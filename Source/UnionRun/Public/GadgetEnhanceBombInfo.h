#pragma once
#include "CoreMinimal.h"
#include "GadgetEnhanceBombInfo.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FGadgetEnhanceBombInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShortenRatio;
    
    FGadgetEnhanceBombInfo();
};

