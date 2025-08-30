#pragma once
#include "CoreMinimal.h"
#include "ThrowingFrontParameter.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FThrowingFrontParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RacerSpeedThreshold_KPH;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpingSpeed_MPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UperJumpingSpeed_MPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GravitationalAcceleration_MPSS;
    
    FThrowingFrontParameter();
};

