#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachine.h"
#include "EDriverId.h"
#include "CharaMachineSelectSequenceDynamicDelegateDelegate.h"
#include "EMenuSequenceMainState.h"
#include "EMenuSequenceSubState.h"
#include "CharaMachineSelectSequence.generated.h"

UCLASS(Blueprintable)
class UNION_API ACharaMachineSelectSequence : public AHierarchicalStateMachine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaMachineSelectSequenceDynamicDelegate OnParentSequenceReadyDelegate;
    
    ACharaMachineSelectSequence(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateRacerTransformAll(bool bCharaSelect, bool NoLerp);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UnregisterInputReceivers();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartMoveCameraTransform(bool bCharaSelect, bool NoLerp);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupMessageBar();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetupCharaMachineSelectWindow();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSaveRequest(bool IsSave);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNextMenuSequenceSubState(EMenuSequenceSubState InState);
    
    UFUNCTION(BlueprintCallable)
    void SetNextMenuSequenceState(EMenuSequenceMainState InState);
    
    UFUNCTION(BlueprintCallable)
    void SetIsParentSequenceReady(bool Value);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetCharaMachineSelectWindow();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RegisterInputReceivers();
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayVoice(int32 InPlayerIndex, EDriverId InDriverId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFocusCharaIcon(int32 InPlayerControllerIndex, int32 InCharaIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecideCharaIcon(int32 InPlayerControllerIndex, int32 InCharaIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSaveRequest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsParentSequenceReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsLevelLoaded() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void FocusCharaIcon(int32 InPlayerControllerIndex, int32 InCharaIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinalizeMessageBar();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ExitCharaMachineSelectWindow();
    
    UFUNCTION(BlueprintCallable)
    void DeleteLocalPlayer();
    
private:
    UFUNCTION(BlueprintCallable)
    void DecideCharaIcon(int32 InPlayerControllerIndex, int32 InCharaIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CreateLocalPlayer();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateInputReceivers();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearInputReceivers();
    
};

