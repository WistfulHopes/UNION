#include "FriendListContentsWidget.h"

UFriendListContentsWidget::UFriendListContentsWidget() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->ListItemWidgetPadding = 20.00f;
    this->OnlineSettingListItemWidgetPadding = 6.00f;
    this->PfPlayerInfoCurrentPage = 0;
    this->PfPlayerInfoMaxPage = 0;
    this->SubMenuWidget = NULL;
    this->ConfirmWidget = NULL;
    this->ConfirmAnimationWidget = NULL;
    this->ResultWidget = NULL;
    this->ConfirmWidgetCommandType = EFriendListCommandType::None;
    this->ConfirmWidgetCancelButtonIndex = 0;
    this->ConfirmWidgetPfProfileButtonIndex = -1;
    this->SelectListIndex = 0;
    this->SelectSubMenuIndex = 0;
    this->MainWidget = NULL;
}



void UFriendListContentsWidget::StartPlayerIconListSelect() {
}

void UFriendListContentsWidget::StartFairPlayPointDisplay() {
}




void UFriendListContentsWidget::Setup(UFriendListMainWidget* InMainWidget, EFriendListCategory InListCategory) {
}

void UFriendListContentsWidget::SetSelectListIndex(int32 InButtonIndex, bool InReset) {
}

void UFriendListContentsWidget::SetPFFriendListContentsWidgetTitle(const FText InText) {
}

void UFriendListContentsWidget::SetMainWidgetInputEnableRequest(bool bInEnable) {
}

void UFriendListContentsWidget::SetMainWidgetInputEnable(bool bInEnable) {
}

void UFriendListContentsWidget::SetListPlayerInfo(const TArray<FFriendListPlayerInfo>& InListPlayerInfo, bool bInDataError) {
}

void UFriendListContentsWidget::SetListOnlineSettingInfo(const TArray<FFriendListOnlineSettingData>& InListOnlineSettingInfo, bool bInDataError) {
}



void UFriendListContentsWidget::SetListEmptyItemWidgetTitleText(int32 InListIndex, bool bInError) {
}

void UFriendListContentsWidget::SetListDisplay() {
}

void UFriendListContentsWidget::SetListControlEnable(bool bInEnable) {
}

void UFriendListContentsWidget::SetEnabalePfListUpdate(bool InEnable) {
}

void UFriendListContentsWidget::SetConfirmWidgetAllButtonFocusable(bool bInEnable) {
}


void UFriendListContentsWidget::ReturnPrevSelect(UWidget* InFocusWidget) {
}

void UFriendListContentsWidget::ReturnListSelect(UWidget* InFocusWidget) {
}


void UFriendListContentsWidget::ResetContentsFocus() {
}

void UFriendListContentsWidget::ReflectOnlineSetting() {
}


void UFriendListContentsWidget::OnSubMenuWidgetDecision(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void UFriendListContentsWidget::OnSubMenuWidgetCancel(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void UFriendListContentsWidget::OnShowInvitationWarningWindow() {
}

void UFriendListContentsWidget::OnResultWidgetDisplayEnd() {
}


void UFriendListContentsWidget::OnFriendListCommandSuccess(EFriendListCommandType InCommandType) {
}

void UFriendListContentsWidget::OnConfirmWidgetDecision(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void UFriendListContentsWidget::OnConfirmWidgetButtonDecision(int32 InButtonIndex) {
}

void UFriendListContentsWidget::OnConfirmAnimationWidgetAnimationOutFinished() {
}

int32 UFriendListContentsWidget::GetZOrder() {
    return 0;
}

void UFriendListContentsWidget::GetSubMenuWidgetTranslation(const UUserWidget* InSelectButtonWidget, FVector2D& OutTranslation) {
}

void UFriendListContentsWidget::GetSearchPlayerInfo(FFriendListPlayerInfo& OutSearchPlayerInfo) {
}


void UFriendListContentsWidget::GetPFPlayerInfoList(const TArray<FFriendListPlayerInfo>& InListPlayerInfo, TArray<FFriendListPlayerInfo>& OutListPlayerInfo) {
}

UFriendListNumberInputWidget* UFriendListContentsWidget::GetNumberInputWidget_Implementation() {
    return NULL;
}

int32 UFriendListContentsWidget::GetMaxShowPfPlayerInfo() {
    return 0;
}

UFriendListMainWidget* UFriendListContentsWidget::GetMainWidget() {
    return NULL;
}

bool UFriendListContentsWidget::GetListIndexByRequestProductUserId(int32& OutListIndex) {
    return false;
}

EFriendListCategory UFriendListContentsWidget::GetListCategory() {
    return EFriendListCategory::PFFriendList;
}

UCommonMenuFooterMenu* UFriendListContentsWidget::GetFooterMenu() {
    return NULL;
}

bool UFriendListContentsWidget::GetEnabalePfListUpdate() {
    return false;
}


void UFriendListContentsWidget::ExecuteFriendListCommand(EFriendListCommandType InCommandType) {
}


void UFriendListContentsWidget::EndSubWidgetDisplay() {
}

bool UFriendListContentsWidget::EnableShowInvitationWarningWindowFromInvitationSend() {
    return false;
}

bool UFriendListContentsWidget::EnableShowInvitationWarningWindowFromInvitationAccept() {
    return false;
}

bool UFriendListContentsWidget::EnableShowInvitationWarningWindow() {
    return false;
}

void UFriendListContentsWidget::DestroySubMenuWidget() {
}

void UFriendListContentsWidget::DestroyResultWidget() {
}


void UFriendListContentsWidget::DestroyConfirmWidget() {
}

void UFriendListContentsWidget::DestroyConfirmAnimationWidget() {
}

void UFriendListContentsWidget::CreateSubMenuWidget(EFriendListType InListType, const FVector2D& InTranslation) {
}

void UFriendListContentsWidget::CreateResultWidget(EFriendListCommandType InCommandType, const FFriendListPlayerInfo& InListPlayerInfo) {
}

void UFriendListContentsWidget::CreateListTitleWidget(const FFriendListContentsWidgetData& InContentsWidgetData) {
}

void UFriendListContentsWidget::CreateListEmptyItemWidget(const FFriendListContentsWidgetData& InContentsWidgetData) {
}

void UFriendListContentsWidget::CreateConfirmWidget(EFriendListCommandType InCommandType, const FFriendListPlayerInfo& InListPlayerInfo) {
}

void UFriendListContentsWidget::CreateConfirmAnimationWidget(EFriendListCommandType InCommandType) {
}

void UFriendListContentsWidget::ClearListPlayerInfo() {
}

bool UFriendListContentsWidget::CheckSubMenuWidgetDisplay(int32 InListIndex) {
    return false;
}

bool UFriendListContentsWidget::CheckShowPfProfile(int32 InButtonIndex) {
    return false;
}

bool UFriendListContentsWidget::CheckLobbyInvitationReject(int32 InButtonIndex) {
    return false;
}

bool UFriendListContentsWidget::CheckButtonWidgetExist_Implementation() const {
    return false;
}

void UFriendListContentsWidget::ChangePfListPage() {
}

void UFriendListContentsWidget::ChangeFooterVisibility(bool InEnable) {
}

void UFriendListContentsWidget::AddListPlayerInfo(const TArray<FFriendListPlayerInfo>& InListPlayerInfo, EFriendListType InListType, bool bInDataError) {
}


void UFriendListContentsWidget::AddListItemWidgetByListIndex(int32 InListIndex, bool bInDataError) {
}

void UFriendListContentsWidget::AddListItemWidget(const TArray<UUserWidget*>& InWidgetArray, int32 InWidgetIndex) {
}


