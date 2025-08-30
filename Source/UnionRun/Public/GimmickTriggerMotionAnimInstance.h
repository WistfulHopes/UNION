#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ETriggerMotionState.h"
#include "GimmickTriggerMotionAnimInstance.generated.h"

class AGimmickTriggerMotionBase;

UCLASS(Blueprintable, NonTransient)
class UNIONRUN_API UGimmickTriggerMotionAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _bIsPlayOneShot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _bIsPlayIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETriggerMotionState, float> _PlayRateMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGimmickTriggerMotionBase* _OwningGimmickActor;
    
public:
    UGimmickTriggerMotionAnimInstance();

    UFUNCTION(BlueprintCallable)
    void NativeUpdateAnimation(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void NativeBeginPlay();
    
};

