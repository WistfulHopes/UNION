#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Common_UserSearchData.h"
#include "LobbyId.h"
#include "UnionUISceneBase.h"
#include "EFriendListCategory.h"
#include "EFriendListCommandType.h"
#include "EFriendListType.h"
#include "ELobbyType.h"
#include "FriendListContentsWidgetData.h"
#include "FriendListOnlineSettingData.h"
#include "FriendListPlayerInfo.h"
#include "FriendListContentsWidget.generated.h"

class APlayerController;
class UCommonLineMessageWidget;
class UCommonMenuFooterMenu;
class UFriendListConfirmAnimationWidget;
class UFriendListConfirmWidget;
class UFriendListMainWidget;
class UFriendListNumberInputWidget;
class UFriendListSubMenuWidget;
class UScrollBox;
class UUnionUIButtonBase;
class UUserWidget;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UFriendListContentsWidget : public UUnionUISceneBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ListItemWidgetPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OnlineSettingListItemWidgetPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PfPlayerInfoCurrentPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PfPlayerInfoMaxPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> ListTitleWidgetArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> EmptyItemWidgetArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFriendListSubMenuWidget* SubMenuWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFriendListConfirmWidget* ConfirmWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFriendListConfirmAnimationWidget* ConfirmAnimationWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLineMessageWidget* ResultWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFriendListPlayerInfo> ListPlayerInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFriendListOnlineSettingData> ListOnlineSettingInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommon_UserSearchData> SearchPlayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLobbyId> SearchLobbyIdData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFriendListCommandType> SubMenuCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFriendListCommandType ConfirmWidgetCommandType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConfirmWidgetCancelButtonIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConfirmWidgetPfProfileButtonIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFriendListType> ListTypeArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectListIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectSubMenuIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RequestTargetProductUserId;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFriendListMainWidget* MainWidget;
    
public:
    UFriendListContentsWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateOnlineSettingItemDisplay(int32 ItemIndex, bool bInSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateButtonSelectable();
    
    UFUNCTION(BlueprintCallable)
    void StartPlayerIconListSelect();
    
    UFUNCTION(BlueprintCallable)
    void StartFairPlayPointDisplay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWidgetFocus(APlayerController* PlayerController, bool bInPlayFocusSound);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupListItemWidgetPFPlayerInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupListItemWidget();
    
    UFUNCTION(BlueprintCallable)
    void Setup(UFriendListMainWidget* InMainWidget, EFriendListCategory InListCategory);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectListIndex(int32 InButtonIndex, bool InReset);
    
    UFUNCTION(BlueprintCallable)
    void SetPFFriendListContentsWidgetTitle(const FText InText);
    
    UFUNCTION(BlueprintCallable)
    void SetMainWidgetInputEnableRequest(bool bInEnable);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetMainWidgetInputEnable(bool bInEnable);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetListPlayerInfo(const TArray<FFriendListPlayerInfo>& InListPlayerInfo, bool bInDataError);
    
    UFUNCTION(BlueprintCallable)
    void SetListOnlineSettingInfo(const TArray<FFriendListOnlineSettingData>& InListOnlineSettingInfo, bool bInDataError);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetListItemWidgetInteractableState(bool bInEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetListItemWidgetButtonChangeableState(int32 InListItemIndex, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetListEmptyItemWidgetTitleText(int32 InListIndex, bool bInError);
    
    UFUNCTION(BlueprintCallable)
    void SetListDisplay();
    
    UFUNCTION(BlueprintCallable)
    void SetListControlEnable(bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabalePfListUpdate(bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetConfirmWidgetAllButtonFocusable(bool bInEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetButtonControlEnable(bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    void ReturnPrevSelect(UWidget* InFocusWidget);
    
    UFUNCTION(BlueprintCallable)
    void ReturnListSelect(UWidget* InFocusWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetContentsWidgetFocus();
    
    UFUNCTION(BlueprintCallable)
    void ResetContentsFocus();
    
    UFUNCTION(BlueprintCallable)
    void ReflectOnlineSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUserSearchSuccess(const TArray<FCommon_UserSearchData>& InUserSearchData);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSubMenuWidgetDecision(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnSubMenuWidgetCancel(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnShowInvitationWarningWindow();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnResultWidgetDisplayEnd();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLobbyIdSearchSuccess(const TArray<FCommon_UserSearchData>& InUserSearchData, const TArray<FLobbyId>& InLobbyIdData, ELobbyType InLobbyType);
    
    UFUNCTION(BlueprintCallable)
    void OnFriendListCommandSuccess(EFriendListCommandType InCommandType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnConfirmWidgetDecision(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnConfirmWidgetButtonDecision(int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnConfirmAnimationWidgetAnimationOutFinished();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetZOrder();
    
    UFUNCTION(BlueprintCallable)
    void GetSubMenuWidgetTranslation(const UUserWidget* InSelectButtonWidget, FVector2D& OutTranslation);
    
protected:
    UFUNCTION(BlueprintCallable)
    void GetSearchPlayerInfo(FFriendListPlayerInfo& OutSearchPlayerInfo);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UScrollBox* GetScrollBoxWidget();
    
    UFUNCTION(BlueprintCallable)
    void GetPFPlayerInfoList(const TArray<FFriendListPlayerInfo>& InListPlayerInfo, TArray<FFriendListPlayerInfo>& OutListPlayerInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UFriendListNumberInputWidget* GetNumberInputWidget();
    
    UFUNCTION(BlueprintCallable)
    int32 GetMaxShowPfPlayerInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFriendListMainWidget* GetMainWidget();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool GetListIndexByRequestProductUserId(int32& OutListIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFriendListCategory GetListCategory();
    
    UFUNCTION(BlueprintCallable)
    UCommonMenuFooterMenu* GetFooterMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnabalePfListUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FocusListItemWidget(bool bInPlayFocusSound);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteFriendListCommand(EFriendListCommandType InCommandType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecuteAfterConfirmWidget(EFriendListCommandType CommandType, int32 InButtonIndex, bool bInCanceled);
    
    UFUNCTION(BlueprintCallable)
    void EndSubWidgetDisplay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool EnableShowInvitationWarningWindowFromInvitationSend();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool EnableShowInvitationWarningWindowFromInvitationAccept();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool EnableShowInvitationWarningWindow();
    
    UFUNCTION(BlueprintCallable)
    void DestroySubMenuWidget();
    
    UFUNCTION(BlueprintCallable)
    void DestroyResultWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyNumberInputWidget();
    
    UFUNCTION(BlueprintCallable)
    void DestroyConfirmWidget();
    
    UFUNCTION(BlueprintCallable)
    void DestroyConfirmAnimationWidget();
    
    UFUNCTION(BlueprintCallable)
    void CreateSubMenuWidget(EFriendListType InListType, const FVector2D& InTranslation);
    
    UFUNCTION(BlueprintCallable)
    void CreateResultWidget(EFriendListCommandType InCommandType, const FFriendListPlayerInfo& InListPlayerInfo);
    
    UFUNCTION(BlueprintCallable)
    void CreateListTitleWidget(const FFriendListContentsWidgetData& InContentsWidgetData);
    
    UFUNCTION(BlueprintCallable)
    void CreateListEmptyItemWidget(const FFriendListContentsWidgetData& InContentsWidgetData);
    
    UFUNCTION(BlueprintCallable)
    void CreateConfirmWidget(EFriendListCommandType InCommandType, const FFriendListPlayerInfo& InListPlayerInfo);
    
    UFUNCTION(BlueprintCallable)
    void CreateConfirmAnimationWidget(EFriendListCommandType InCommandType);
    
    UFUNCTION(BlueprintCallable)
    void ClearListPlayerInfo();
    
    UFUNCTION(BlueprintCallable)
    bool CheckSubMenuWidgetDisplay(int32 InListIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckShowPfProfile(int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckLobbyInvitationReject(int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CheckButtonWidgetExist() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangePfListPage();
    
    UFUNCTION(BlueprintCallable)
    void ChangeFooterVisibility(bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    void AddListPlayerInfo(const TArray<FFriendListPlayerInfo>& InListPlayerInfo, EFriendListType InListType, bool bInDataError);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddListItemWidgetByListItemIndex(int32 InListItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void AddListItemWidgetByListIndex(int32 InListIndex, bool bInDataError);
    
    UFUNCTION(BlueprintCallable)
    void AddListItemWidget(const TArray<UUserWidget*>& InWidgetArray, int32 InWidgetIndex);
    
};

