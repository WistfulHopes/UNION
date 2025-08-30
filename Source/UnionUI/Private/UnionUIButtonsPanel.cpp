#include "UnionUIButtonsPanel.h"

UUnionUIButtonsPanel::UUnionUIButtonsPanel() {
    this->ButtonsPanel = NULL;
    this->LastFocusedButtonIndex = -1;
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->PanelIndex = 0;
    this->bExclusiveFocus = true;
}

void UUnionUIButtonsPanel::SetUnFocusState() {
}

void UUnionUIButtonsPanel::SetOwnerPlayerController(APlayerController* InPlayerController) {
}

void UUnionUIButtonsPanel::SetLastFocusedButtonIndexByPlayerIndex(int32 PlayerControllerIndex, int32 InButtonIndex) {
}

void UUnionUIButtonsPanel::SetLastFocusedButtonIndex(int32 InButtonIndex) {
}

void UUnionUIButtonsPanel::SetInitialFocus() {
}

void UUnionUIButtonsPanel::SetFocusSoundEnableAll(bool bEnable) {
}

void UUnionUIButtonsPanel::SetFocusSilent(int32 InButtonIndex) {
}

void UUnionUIButtonsPanel::OnUIButtonsPanelUnFocusEvent_Impl(UUnionUIButtonBase* UnionButton) {
}

void UUnionUIButtonsPanel::OnUIButtonsPanelRightShoulderEvent_Impl(UUnionUIButtonBase* UnionButton) {
}

void UUnionUIButtonsPanel::OnUIButtonsPanelLeftShoulderEvent_Impl(UUnionUIButtonBase* UnionButton) {
}

void UUnionUIButtonsPanel::OnUIButtonsPanelFocusEvent_Impl(UUnionUIButtonBase* UnionButton) {
}

void UUnionUIButtonsPanel::OnUIButtonsPanelFaceTopEvent_Impl(UUnionUIButtonBase* UnionButton) {
}

void UUnionUIButtonsPanel::OnUIButtonsPanelDirectionEvent_Impl(UUnionUIButtonBase* UnionButton, EUnionUIControlDir Dir) {
}

void UUnionUIButtonsPanel::OnUIButtonsPanelDecisionEvent_Impl(UUnionUIButtonBase* UnionButton) {
}

void UUnionUIButtonsPanel::OnUIButtonsPanelDecisionDownEvent_Impl(UUnionUIButtonBase* UnionButton) {
}

void UUnionUIButtonsPanel::OnUIButtonsPanelCancelEvent_Impl(UUnionUIButtonBase* UnionButton) {
}

void UUnionUIButtonsPanel::OnUIButtonsPanelCancelDownEvent_Impl(UUnionUIButtonBase* UnionButton) {
}

void UUnionUIButtonsPanel::InitParam(const int32& InPanelIndex, const bool& InExclusiveFocus) {
}

UUnionUIButtonBase* UUnionUIButtonsPanel::GetLastFocusedButtonByPlayerIndex(int32 PlayerControllerIndex, int32& OutLastFocusedButtonIndex) {
    return NULL;
}

UUnionUIButtonBase* UUnionUIButtonsPanel::GetLastFocusedButton(int32& OutLastFocusedButtonIndex) {
    return NULL;
}

void UUnionUIButtonsPanel::ClearButton() {
}

void UUnionUIButtonsPanel::AddFocusButton(UUnionUIButtonBase* UnionButton) {
}


