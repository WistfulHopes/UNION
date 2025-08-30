#pragma once
#include "CoreMinimal.h"
#include "GadgetEnhanceThornBallInfo.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FGadgetEnhanceThornBallInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SizeScale;
    
    FGadgetEnhanceThornBallInfo();
};

