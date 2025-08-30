#pragma once
#include "CoreMinimal.h"
#include "GadgetBoostRingBonusInfo.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FGadgetBoostRingBonusInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RingNumLv1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RingNumLv2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RingNumLv3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RingNumLv4;
    
    FGadgetBoostRingBonusInfo();
};

