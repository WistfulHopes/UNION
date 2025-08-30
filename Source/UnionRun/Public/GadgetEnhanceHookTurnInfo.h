#pragma once
#include "CoreMinimal.h"
#include "GadgetEnhanceHookTurnInfo.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FGadgetEnhanceHookTurnInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartDegreeOffset_Horizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartDegreeOffset_Vertical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AddAngularVelocity_Horizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AddAngularVelocity_Vertical;
    
    FGadgetEnhanceHookTurnInfo();
};

