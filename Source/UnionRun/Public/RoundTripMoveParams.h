#pragma once
#include "CoreMinimal.h"
#include "ERoundTripMoveType.h"
#include "RoundTripMoveParams.generated.h"

USTRUCT(BlueprintType)
struct FRoundTripMoveParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERoundTripMoveType moveType_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float easeCurve_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float movingSeconds_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float movingSpeed_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float endWaitSeconds_;
    
    UNIONRUN_API FRoundTripMoveParams();
};

