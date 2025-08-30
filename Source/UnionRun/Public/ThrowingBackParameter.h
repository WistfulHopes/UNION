#pragma once
#include "CoreMinimal.h"
#include "ThrowingBackParameter.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FThrowingBackParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpingSpeed_MPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UperJumpingSpeed_MPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GravitationalAcceleration_MPSS;
    
    FThrowingBackParameter();
};

