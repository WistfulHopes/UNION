#pragma once
#include "CoreMinimal.h"
#include "GadgetUltimateDriftInfo.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FGadgetUltimateDriftInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableInvincible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InvincibleTime;
    
    FGadgetUltimateDriftInfo();
};

