#pragma once
#include "CoreMinimal.h"
#include "EButtonFocusType.h"
#include "EUnionUIButtonAnimState.h"
#include "EUnionUIButtonEventState.h"
#include "EUnionUIButtonSoundSetting.h"
#include "OnUnionButtonDirectionEventDelegate.h"
#include "OnUnionButtonEventDelegate.h"
#include "UnionUIButtonBaseCore.h"
#include "UnionUIButtonBase.generated.h"

class UUnionUIButtonBase;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UNIONUI_API UUnionUIButtonBase : public UUnionUIButtonBaseCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EButtonFocusType ButtonFocusType;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnionButtonEvent OnFocusEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnionButtonEvent OnUnFocusEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnionButtonEvent OnDecisionEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnionButtonEvent OnDecisionDownEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnionButtonEvent OnCancelEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnionButtonEvent OnCancelDownEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnionButtonEvent OnLeftShoulderEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnionButtonEvent OnLeftShoulderDownEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnionButtonEvent OnRightShoulderEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnionButtonEvent OnRightShoulderDownEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnionButtonEvent OnFaceTopEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnionButtonEvent OnFaceTopDownEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnionButtonEvent OnSpecialEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnionButtonDirectionEvent OnDirectionEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSoundEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFocusSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUnionUIButtonSoundSetting CurrentFocusSoundSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUnionUIButtonEventState NowUIButtonState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PanelIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ButtonIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUnionUIButtonAnimState NowButtonAnimState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* LastPlayButtonAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FocusAnimRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* UnFocusAnimRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConsumePointerInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMouseUnFocus;
    
    UUnionUIButtonBase();

    UFUNCTION(BlueprintCallable)
    void SetFocusSoundEnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetButtonIndex(int32 NewButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUnFocusAnimStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUnFocusAnimFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMouseButtonUpBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMouseButtonDownBP();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFocusAnimStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFocusAnimFinished();
    
    UFUNCTION(BlueprintCallable)
    void FireUnfocusEvent();
    
    UFUNCTION(BlueprintCallable)
    void FireFocusEvent();
    
    UFUNCTION(BlueprintCallable)
    void CallOnOnCancel(UUnionUIButtonBase* InButton);
    
    UFUNCTION(BlueprintCallable)
    void CallOnDecision(UUnionUIButtonBase* InButton);
    
};

