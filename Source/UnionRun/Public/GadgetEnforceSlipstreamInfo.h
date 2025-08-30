#pragma once
#include "CoreMinimal.h"
#include "GadgetEnforceSlipstreamInfo.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FGadgetEnforceSlipstreamInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckSphereUP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FrameUP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AfterGlowUP;
    
    FGadgetEnforceSlipstreamInfo();
};

