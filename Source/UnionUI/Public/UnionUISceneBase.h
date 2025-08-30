#pragma once
#include "CoreMinimal.h"
#include "EUnionUIControlDir.h"
#include "OnUISceneDirectionEventDelegate.h"
#include "OnUISceneEventDelegate.h"
#include "UnionUIWidgetBase.h"
#include "UnionUISceneBase.generated.h"

class APlayerController;
class UUnionUIButtonBase;
class UUnionUIButtonsPanel;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class UNIONUI_API UUnionUISceneBase : public UUnionUIWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUISceneEvent OnUISceneDecisionEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUISceneEvent OnUISceneDecisionDownEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUISceneEvent OnUISceneCancelEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUISceneEvent OnUISceneCancelDownEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUISceneEvent OnUISceneFocusEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUISceneEvent OnUISceneUnFocusEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUISceneEvent OnUISceneLeftShoulderEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUISceneEvent OnUISceneRightShoulderEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUISceneEvent OnUISceneFaceTopEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUISceneDirectionEvent OnUISceneDirectionEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UUnionUIButtonsPanel*> ButtonsPanels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastFocusedButtonsPanelIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> LastFocusedPlayerControllerIndex_ButtonsPanelIndex;
    
    UUnionUISceneBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UnbindAllEvent();
    
    UFUNCTION(BlueprintCallable)
    UUnionUIButtonsPanel* SetupButtonsPanel(TArray<UUnionUIButtonBase*> Buttons, const int32& InPanelIndex, const bool& InExclusiveFocus);
    
    UFUNCTION(BlueprintCallable)
    void SetUnFocusState(int32 InPanelIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetOwnerPlayerController(int32 InPanelIndex, APlayerController* InPlayerController);
    
    UFUNCTION(BlueprintCallable)
    void SetFocusSoundEnableAll(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void OnUISceneUnFocusEvent_Impl(UUnionUIButtonBase* UnionButton, int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnUISceneRightShoulderEvent_Impl(UUnionUIButtonBase* UnionButton, int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnUISceneLeftShoulderEvent_Impl(UUnionUIButtonBase* UnionButton, int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnUISceneFocusEvent_Impl(UUnionUIButtonBase* UnionButton, int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnUISceneFaceTopEvent_Impl(UUnionUIButtonBase* UnionButton, int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnUISceneDirectionEvent_Impl(UUnionUIButtonBase* UnionButton, int32 ButtonIndex, EUnionUIControlDir Dir);
    
    UFUNCTION(BlueprintCallable)
    void OnUISceneDecisionEvent_Impl(UUnionUIButtonBase* UnionButton, int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnUISceneDecisionDownEvent_Impl(UUnionUIButtonBase* UnionButton, int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnUISceneCancelEvent_Impl(UUnionUIButtonBase* UnionButton, int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnUISceneCancelDownEvent_Impl(UUnionUIButtonBase* UnionButton, int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    UUnionUIButtonsPanel* GetLastFocusedButtonsPanelByPlayerIndex(int32 PlayerControllerIndex, int32& OutLastFocusedButtonsPanelIndex);
    
    UFUNCTION(BlueprintCallable)
    UUnionUIButtonsPanel* GetLastFocusedButtonsPanel(int32& OutLastFocusedButtonsPanelIndex);
    
    UFUNCTION(BlueprintCallable)
    UUserWidget* GetLastFocusedButtonByPlayerIndex(int32 PlayerControllerIndex, int32& OutLastFocusedButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    UUserWidget* GetLastFocusedButton(int32& OutLastFocusedButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    UUnionUIButtonsPanel* CreateButtonsPanel();
    
    UFUNCTION(BlueprintCallable)
    void AddButtonsPanel(UUnionUIButtonsPanel* InAddButtonsPanel);
    
};

