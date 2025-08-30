#pragma once
#include "CoreMinimal.h"
#include "GadgetExpandGetRingRangeInfo.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FGadgetExpandGetRingRangeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollisionRadiusMag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollisionHeightMag;
    
    FGadgetExpandGetRingRangeInfo();
};

