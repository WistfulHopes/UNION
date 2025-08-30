#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "BreakObjectAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UNIONRUN_API UBreakObjectAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitSpeed;
    
public:
    UBreakObjectAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetHit(float Speed);
    
};

