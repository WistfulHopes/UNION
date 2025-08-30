#pragma once
#include "CoreMinimal.h"
#include "GadgetTouchDashInfo.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FGadgetTouchDashInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BoostLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoostSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoostMul;
    
    FGadgetTouchDashInfo();
};

