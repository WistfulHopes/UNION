#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ECarStatusType.h"
#include "ERacerDriftState.h"
#include "EVehicleDisplayMode.h"
#include "EVehicleType.h"
#include "EDriverAnimMontageId.h"
#include "EDriverAnimationGroup.h"
#include "EDriverDirection.h"
#include "EDriverOneshotAnimationId.h"
#include "EJumpActionId.h"
#include "DriverAnimator.generated.h"

class UAnimSequence;

UINTERFACE(Blueprintable, MinimalAPI)
class UDriverAnimator : public UInterface {
    GENERATED_BODY()
};

class IDriverAnimator : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool UseItemWithoutAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool UseItemInDirection(const EDriverDirection Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool UseItem();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateSquashedData(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopSquashed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopAnimationGroup(const EDriverAnimationGroup Group);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopAnimationAll();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopAnimation(const EDriverAnimMontageId ID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SpinOneshot(const EDriverDirection Direction, float SpinTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SpinEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Spin(const EDriverDirection Direction, bool IsSpin);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Shunt(const FVector& Direction, const float Power);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWheelspinFlag(bool Wheelspin);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTurnSteeringRatio(float Ratio);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSpeedRate(float Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSpeedKPH(float InKPH);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetRideableType(EVehicleType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetRideableStatusType(ECarStatusType StatusType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetRideableParams(EVehicleType Type, ECarStatusType StatusType, EVehicleDisplayMode Mode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetRideableDisplayMode(EVehicleDisplayMode Mode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetRacerDriftState(const ERacerDriftState DriftState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetLookBackward(bool Look);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetItemHold(const EDriverDirection Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetIsDrift(bool IsDrift);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAnimClass(const UClass* NewClass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAnimationPlayRate(float Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAdditionSteeringRatio(float Ratio, float AdditionRatio);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAccelerationRatio(float Ratio);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlaySquashed(float Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayOneshotAnimation(const EDriverOneshotAnimationId ID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayAnimation(const EDriverAnimMontageId ID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Jump(const EJumpActionId ActionId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSquashed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitSquashedData(UAnimSequence* AnimSequence);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetSquashedTransform();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearItem();
    
};

