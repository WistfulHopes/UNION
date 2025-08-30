#include "LobbyInvitationNoticeWidget.h"

ULobbyInvitationNoticeWidget::ULobbyInvitationNoticeWidget() {
    this->CurrentInvitationSequenceType = ELobbyInvitationSequenceType::Normal;
    this->DisplayTime = 10.00f;
    this->HoldInputTime = 2.00f;
    this->DefaultPlayerIconBgColorId = 0;
    this->IsHiding = true;
    this->ConfirmWidget = NULL;
    this->ConfirmAnimationWidget = NULL;
    this->PrevRegisteredMenu = NULL;
    this->CachePrevRegisteredMenu = NULL;
    this->LoadPlayerIconDataTable = NULL;
    this->LoadPlayerIconBgColorDataTable = NULL;
    this->PopupWindow = NULL;
}




void ULobbyInvitationNoticeWidget::UnbindAllDelegate() {
}

void ULobbyInvitationNoticeWidget::StartDisplay() {
}


void ULobbyInvitationNoticeWidget::SetLobbyInfo(const FLobbyInvitationNoticeInfo& InLobbyInfo) {
}

void ULobbyInvitationNoticeWidget::SetInputEnable(bool bInEnable) {
}

void ULobbyInvitationNoticeWidget::SetHoldInputCountState(bool bInEnable) {
}

void ULobbyInvitationNoticeWidget::SetDisplayCountState(bool bInEnable, bool bInResetCount) {
}

void ULobbyInvitationNoticeWidget::SetDisplayCountDisable(bool bInDisable) {
}

void ULobbyInvitationNoticeWidget::SetConfirmWidgetAllButtonFocusable(bool bInEnable) {
}

void ULobbyInvitationNoticeWidget::SetAttentionType(ELobbyInvitationNoticeAttentionType InAttentionType) {
}




void ULobbyInvitationNoticeWidget::OnRequestPFrofileEvent(const FString& PlatformUserId) {
}

void ULobbyInvitationNoticeWidget::OnErrorPFProfileEvent() {
}

void ULobbyInvitationNoticeWidget::OnConfirmWidgetDecision(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void ULobbyInvitationNoticeWidget::OnConfirmWidgetButtonDecision(int32 InButtonIndex) {
}

void ULobbyInvitationNoticeWidget::OnConfirmAnimationWidgetAnimationOutFinished() {
}

void ULobbyInvitationNoticeWidget::OnAttentionPopupWindowClose(UUnionUIButtonBase* Button, int32 PanelIndex, int32 ButtonIndex) {
}

UObject* ULobbyInvitationNoticeWidget::GetPrevRegisteredMenu() {
    return NULL;
}

bool ULobbyInvitationNoticeWidget::GetPlayerIconTexture(int32 InIconId, TSoftObjectPtr<UTexture2D>& OutIconTexture) {
    return false;
}

bool ULobbyInvitationNoticeWidget::GetPlayerIconBgColor(const FString& InBgColor, FLinearColor& OutColor) {
    return false;
}

bool ULobbyInvitationNoticeWidget::GetInputEnable() {
    return false;
}

bool ULobbyInvitationNoticeWidget::GetHoldInputCountState() {
    return false;
}

bool ULobbyInvitationNoticeWidget::GetDisplayCountDisable() {
    return false;
}

ELobbyInvitationSequenceType ULobbyInvitationNoticeWidget::GetCurrentInvitationSequenceType() const {
    return ELobbyInvitationSequenceType::Normal;
}

void ULobbyInvitationNoticeWidget::EndDisplay() {
}

void ULobbyInvitationNoticeWidget::DestroyConfirmWidget() {
}

void ULobbyInvitationNoticeWidget::DestroyConfirmAnimationWidget() {
}

void ULobbyInvitationNoticeWidget::CreateConfirmWidget() {
}


