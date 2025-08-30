#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UnionUIInputWidget.h"
#include "ELobbyInvitationNoticeAttentionType.h"
#include "ELobbyInvitationSequenceType.h"
#include "LobbyInvitationNoticeInfo.h"
#include "LobbyInvitationNoticeWidget.generated.h"

class UDataTable;
class UFriendListConfirmAnimationWidget;
class UFriendListConfirmWidget;
class UObject;
class UTexture2D;
class UUnionUIButtonBase;
class UUnionUIPopupWindowBase;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API ULobbyInvitationNoticeWidget : public UUnionUIInputWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbyInvitaionDecideDelegate, bool, bAccept);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGamerCardErrorDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDisplayEndDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnConfirmStartDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnConfirmEndDelegate, bool, bResultYes);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAttentionDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDisplayEndDelegate DisplayEndDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDisplayEndDelegate DisplayFinishDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyInvitaionDecideDelegate LobbyInvitaionDecideDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnConfirmStartDelegate ConfirmStartDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnConfirmEndDelegate ConfirmEndDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGamerCardErrorDelegate OnGamerCardErrorCreatedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGamerCardErrorDelegate OnGamerCardErrorDestroyedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttentionDelegate OnAttentionCreatedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttentionDelegate OnAttentionCreateFinishDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> PlayerIconDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> PlayerIconBgColorDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELobbyInvitationSequenceType CurrentInvitationSequenceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldInputTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultPlayerIconBgColorId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ConfirmMessageText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> ConfirmButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> AttentionMessageText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> AttentionDecideButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText AttentionCancelButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsHiding;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFriendListConfirmWidget* ConfirmWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFriendListConfirmAnimationWidget* ConfirmAnimationWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* PrevRegisteredMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* CachePrevRegisteredMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LoadPlayerIconDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LoadPlayerIconBgColorDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUIPopupWindowBase* PopupWindow;
    
public:
    ULobbyInvitationNoticeWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateLobbyInfoDisplay(const FLobbyInvitationNoticeInfo& InLobbyInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateHoldInputCountDisplay(float CountValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UnregisterMenuInputReceiveObject();
    
    UFUNCTION(BlueprintCallable)
    void UnbindAllDelegate();
    
    UFUNCTION(BlueprintCallable)
    void StartDisplay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupNoticeSequenceType(ELobbyInvitationSequenceType SequenceType);
    
    UFUNCTION(BlueprintCallable)
    void SetLobbyInfo(const FLobbyInvitationNoticeInfo& InLobbyInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetInputEnable(bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetHoldInputCountState(bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayCountState(bool bInEnable, bool bInResetCount);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayCountDisable(bool bInDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetConfirmWidgetAllButtonFocusable(bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetAttentionType(ELobbyInvitationNoticeAttentionType InAttentionType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RegisterMenuInputReceiveObject();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationIn();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRequestPFrofileEvent(const FString& PlatformUserId);
    
    UFUNCTION(BlueprintCallable)
    void OnErrorPFProfileEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnConfirmWidgetDecision(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnConfirmWidgetButtonDecision(int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnConfirmAnimationWidgetAnimationOutFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnAttentionPopupWindowClose(UUnionUIButtonBase* Button, int32 PanelIndex, int32 ButtonIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    UObject* GetPrevRegisteredMenu();
    
    UFUNCTION(BlueprintCallable)
    bool GetPlayerIconTexture(int32 InIconId, TSoftObjectPtr<UTexture2D>& OutIconTexture);
    
    UFUNCTION(BlueprintCallable)
    bool GetPlayerIconBgColor(const FString& InBgColor, FLinearColor& OutColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInputEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHoldInputCountState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDisplayCountDisable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELobbyInvitationSequenceType GetCurrentInvitationSequenceType() const;
    
    UFUNCTION(BlueprintCallable)
    void EndDisplay();
    
    UFUNCTION(BlueprintCallable)
    void DestroyConfirmWidget();
    
    UFUNCTION(BlueprintCallable)
    void DestroyConfirmAnimationWidget();
    
    UFUNCTION(BlueprintCallable)
    void CreateConfirmWidget();
    
};

