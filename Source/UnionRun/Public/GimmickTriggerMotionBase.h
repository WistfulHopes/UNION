#pragma once
#include "CoreMinimal.h"
#include "ETriggerMotionState.h"
#include "ETriggerMotionType.h"
#include "GimmickMessageInterface.h"
#include "UnionGimmickObjectBase.h"
#include "GimmickTriggerMotionBase.generated.h"

UCLASS(Blueprintable)
class UNIONRUN_API AGimmickTriggerMotionBase : public AUnionGimmickObjectBase, public IGimmickMessageInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _IntervalSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETriggerMotionType _TriggerMotionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<ETriggerMotionState, float> _PlayRateMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _bIsTriggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _bIsPlayIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _bIsPlayOneShot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _TimeAfterTriggerSec;
    
public:
    AGimmickTriggerMotionBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool IsTriggered() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayOneShot() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayIdle() const;
    
    UFUNCTION(BlueprintCallable)
    ETriggerMotionType GetTriggerMotionType() const;
    
    UFUNCTION(BlueprintCallable)
    float GetPlayRate(ETriggerMotionState State) const;
    

    // Fix for true pure virtual functions not being implemented
};

