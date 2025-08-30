#pragma once
#include "CoreMinimal.h"
#include "ESpeedClassId.h"
#include "EStageId.h"
#include "EMenuSequenceSubState.h"
#include "MenuSequenceSubStateBase.h"
#include "TimeTrialGhostConfirmationState.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UTimeTrialGhostConfirmationState : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageId m_SelectedStageId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpeedClassId m_SelectedSpeedClassId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsStartConfimationState;
    
public:
    UTimeTrialGhostConfirmationState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetBackMenuState(const EMenuSequenceSubState InState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RequestStartCheckGhostHash(EStageId SelectedStageId, ESpeedClassId SpeedClassId);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestPFProfileDisplay(const FString& InPlatformUserId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnShowPfProfileErrorWindowEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpenError();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGhostHashCheckCompleted(bool bIsGhostHashOK);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMenuSequenceSubState GetBackMenuState() const;
    
};

