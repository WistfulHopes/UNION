#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EUnionUIControlDir.h"
#include "OnUIButtonsPanelDirectionEventDelegate.h"
#include "OnUIButtonsPanelEventDelegate.h"
#include "UnionUIButtonsPanel.generated.h"

class APlayerController;
class UUnionUIButtonBase;
class UUserWidget;

UCLASS(Blueprintable)
class UNIONUI_API UUnionUIButtonsPanel : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUIButtonsPanelEvent OnUIButtonsPanelDecisionEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUIButtonsPanelEvent OnUIButtonsPanelDecisionDownEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUIButtonsPanelEvent OnUIButtonsPanelCancelEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUIButtonsPanelEvent OnUIButtonsPanelCancelDownEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUIButtonsPanelEvent OnUIButtonsPanelFocusEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUIButtonsPanelEvent OnUIButtonsPanelUnFocusEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUIButtonsPanelEvent OnUIButtonsPanelLeftShoulderEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUIButtonsPanelEvent OnUIButtonsPanelRightShoulderEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUIButtonsPanelEvent OnUIButtonsPanelFaceTopEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUIButtonsPanelDirectionEvent OnUIButtonsPanelDirectionEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* ButtonsPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUnionUIButtonBase*> Buttons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastFocusedButtonIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> LastFocusedPlayerControllerIndex_ButtonsPanelIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PanelIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExclusiveFocus;
    
    UUnionUIButtonsPanel();

    UFUNCTION(BlueprintCallable)
    void SetUnFocusState();
    
    UFUNCTION(BlueprintCallable)
    void SetOwnerPlayerController(APlayerController* InPlayerController);
    
    UFUNCTION(BlueprintCallable)
    void SetLastFocusedButtonIndexByPlayerIndex(int32 PlayerControllerIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetLastFocusedButtonIndex(int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetInitialFocus();
    
    UFUNCTION(BlueprintCallable)
    void SetFocusSoundEnableAll(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetFocusSilent(int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnUIButtonsPanelUnFocusEvent_Impl(UUnionUIButtonBase* UnionButton);
    
    UFUNCTION(BlueprintCallable)
    void OnUIButtonsPanelRightShoulderEvent_Impl(UUnionUIButtonBase* UnionButton);
    
    UFUNCTION(BlueprintCallable)
    void OnUIButtonsPanelLeftShoulderEvent_Impl(UUnionUIButtonBase* UnionButton);
    
    UFUNCTION(BlueprintCallable)
    void OnUIButtonsPanelFocusEvent_Impl(UUnionUIButtonBase* UnionButton);
    
    UFUNCTION(BlueprintCallable)
    void OnUIButtonsPanelFaceTopEvent_Impl(UUnionUIButtonBase* UnionButton);
    
    UFUNCTION(BlueprintCallable)
    void OnUIButtonsPanelDirectionEvent_Impl(UUnionUIButtonBase* UnionButton, EUnionUIControlDir Dir);
    
    UFUNCTION(BlueprintCallable)
    void OnUIButtonsPanelDecisionEvent_Impl(UUnionUIButtonBase* UnionButton);
    
    UFUNCTION(BlueprintCallable)
    void OnUIButtonsPanelDecisionDownEvent_Impl(UUnionUIButtonBase* UnionButton);
    
    UFUNCTION(BlueprintCallable)
    void OnUIButtonsPanelCancelEvent_Impl(UUnionUIButtonBase* UnionButton);
    
    UFUNCTION(BlueprintCallable)
    void OnUIButtonsPanelCancelDownEvent_Impl(UUnionUIButtonBase* UnionButton);
    
    UFUNCTION(BlueprintCallable)
    void InitParam(const int32& InPanelIndex, const bool& InExclusiveFocus);
    
    UFUNCTION(BlueprintCallable)
    UUnionUIButtonBase* GetLastFocusedButtonByPlayerIndex(int32 PlayerControllerIndex, int32& OutLastFocusedButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    UUnionUIButtonBase* GetLastFocusedButton(int32& OutLastFocusedButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void ClearButton();
    
    UFUNCTION(BlueprintCallable)
    void AddFocusButton(UUnionUIButtonBase* UnionButton);
    
};

