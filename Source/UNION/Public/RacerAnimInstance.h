#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ECarStatusType.h"
#include "ERacerDriftState.h"
#include "EVehicleDisplayMode.h"
#include "EVehicleType.h"
#include "EBoneScaleFaceType.h"
#include "EDriverAnimationFlag.h"
#include "EDriverAnimationParam.h"
#include "ERacerAnimationFlag.h"
#include "ERacerAnimationParam.h"
#include "RacerAnimInstance.generated.h"

class IDriverAnimator;
class UDriverAnimator;

UCLASS(Blueprintable, NonTransient)
class UNION_API URacerAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IDriverAnimator> DriverAnimator;
    
    URacerAnimInstance();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBoneScaleFaceType GetStateMachineScaleFace() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVehicleType GetRideableType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECarStatusType GetRideableStatusType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVehicleDisplayMode GetRideableDisplayMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERacerDriftState GetRacerStateDrift() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetParam(const ERacerAnimationParam ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBoneScaleFaceType GetMontagePlayingScaleFace() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFlag(const ERacerAnimationFlag flag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAnimationParam(const EDriverAnimationParam ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAnimationFlag(const EDriverAnimationFlag flag) const;
    
};

