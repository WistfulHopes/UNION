#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "FlightUnitAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UNION_API UFlightUnitAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Yaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Pitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Brake;
    
    UFlightUnitAnimInstance();

};

