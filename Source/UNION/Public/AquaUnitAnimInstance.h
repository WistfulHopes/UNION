#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "AquaUnitAnimInstance.generated.h"

class AMachineInRaceActor;
class UUnionRacerStatusObject;

UCLASS(Blueprintable, NonTransient)
class UNION_API UAquaUnitAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunAngle;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMachineInRaceActor* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionRacerStatusObject* UnionRacerStatusObject;
    
public:
    UAquaUnitAnimInstance();

};

