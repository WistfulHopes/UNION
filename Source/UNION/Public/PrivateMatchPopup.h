#pragma once
#include "CoreMinimal.h"
#include "UnionUISceneBase.h"
#include "PrivateMatchPopupAnimEventDelegate.h"
#include "PrivateMatchPopupButtonEventDelegate.h"
#include "PrivateMatchPopupEventDelegate.h"
#include "PrivateMatchPopup.generated.h"

class UUnionUIButtonBase;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UPrivateMatchPopup : public UUnionUISceneBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrivateMatchPopupEvent OnCompletedAnimationFinishEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrivateMatchPopupButtonEvent OnDecisionAnimationFinishEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrivateMatchPopupButtonEvent OnCancelAnimationFinishEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrivateMatchPopupAnimEvent OnOutAnimationFinishEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DecideButtonIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DecideButtonsPanelIndex;
    
public:
    UPrivateMatchPopup();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UnbindButtonsPanelEvents();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SwitchPopupInfo(int32 SwitcherIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupWaitingWindow(bool bJoin);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupCompletedWindow(bool bJoin);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Setup(int32 SwitcherIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SettingGrayOutButton(int32 SwitcherIndex, int32 ButtonIndex);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayPopupOutAnim(bool bGetOutAnimCallback);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayPopupInfoAnim(bool bInAnim);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayPopupInAnim();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayPopupAnim(bool bInAnim, bool bGetOutAnimCallback);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UUnionUIButtonBase* GetButton(int32 SwitcherIndex, int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UUnionUIButtonBase* GetActiveWidgetButton(int32 ButtonIndex);
    
};

