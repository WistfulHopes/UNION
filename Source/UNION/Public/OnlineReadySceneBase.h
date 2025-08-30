#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "LobbySceneBase.h"
#include "OnDecidedReadyEventDelegate.h"
#include "OnlineReadySceneBase.generated.h"

class UCommonMenuSubMenu;
class UOverlay;
class USoundAtomCue;
class UUnionRichTextBlock;
class UUnionUIButtonStandard;
class UUserWidget;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UOnlineReadySceneBase : public ULobbySceneBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDecidedReadyEvent OnDecideReadyEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonMenuSubMenu* SubMenu;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* BaseOverLay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Arrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUIButtonStandard* ReadyButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* ReadyMainTextWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* ReadySubTextWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* ReadySubIconWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* ReadySubInfoReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* ReadyMainText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MatchingReadyText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText GotoMatchingLobbyText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* ReadyUIBaseSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* FixQue;
    
public:
    UOnlineReadySceneBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SwitchReadyButtonInteractable(bool bInteractable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartSearch();
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleSubButtons(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleSearching(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleReadyTexts(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleReadys(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupGameMode();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetUpDecideReady(bool bIsAloneLobby);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectReadyButton(bool bIsSelect);
    
    UFUNCTION(BlueprintCallable)
    void SetMainText(FText InMainText);
    
    UFUNCTION(BlueprintCallable)
    void SetGotoMatchingLobby();
    
    UFUNCTION(BlueprintCallable)
    void ReadyCancel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayLoopReadyDecideAnim(bool bIsDecide);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayInReadyAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayDecideAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeGameMode(const bool FocusMainButton, bool InitSubMenu);
    
    UFUNCTION(BlueprintCallable)
    void ChangeStateWaitingOtherPlayer();
    
    UFUNCTION(BlueprintCallable)
    void ChangeStateReady();
    
};

