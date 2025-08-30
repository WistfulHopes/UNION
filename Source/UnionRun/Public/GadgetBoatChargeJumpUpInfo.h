#pragma once
#include "CoreMinimal.h"
#include "GadgetBoatChargeJumpUpInfo.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FGadgetBoatChargeJumpUpInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirTrickRateX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirTrickRateY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AirTrickLimitNum;
    
    FGadgetBoatChargeJumpUpInfo();
};

