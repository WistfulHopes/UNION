#include "UnionUISceneBase.h"

UUnionUISceneBase::UUnionUISceneBase() {
    this->LastFocusedButtonsPanelIndex = -1;
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
}

void UUnionUISceneBase::UnbindAllEvent_Implementation() {
}

UUnionUIButtonsPanel* UUnionUISceneBase::SetupButtonsPanel(TArray<UUnionUIButtonBase*> Buttons, const int32& InPanelIndex, const bool& InExclusiveFocus) {
    return NULL;
}

void UUnionUISceneBase::SetUnFocusState(int32 InPanelIndex) {
}

void UUnionUISceneBase::SetOwnerPlayerController(int32 InPanelIndex, APlayerController* InPlayerController) {
}

void UUnionUISceneBase::SetFocusSoundEnableAll(bool bEnable) {
}

void UUnionUISceneBase::OnUISceneUnFocusEvent_Impl(UUnionUIButtonBase* UnionButton, int32 ButtonIndex) {
}

void UUnionUISceneBase::OnUISceneRightShoulderEvent_Impl(UUnionUIButtonBase* UnionButton, int32 ButtonIndex) {
}

void UUnionUISceneBase::OnUISceneLeftShoulderEvent_Impl(UUnionUIButtonBase* UnionButton, int32 ButtonIndex) {
}

void UUnionUISceneBase::OnUISceneFocusEvent_Impl(UUnionUIButtonBase* UnionButton, int32 ButtonIndex) {
}

void UUnionUISceneBase::OnUISceneFaceTopEvent_Impl(UUnionUIButtonBase* UnionButton, int32 ButtonIndex) {
}

void UUnionUISceneBase::OnUISceneDirectionEvent_Impl(UUnionUIButtonBase* UnionButton, int32 ButtonIndex, EUnionUIControlDir Dir) {
}

void UUnionUISceneBase::OnUISceneDecisionEvent_Impl(UUnionUIButtonBase* UnionButton, int32 ButtonIndex) {
}

void UUnionUISceneBase::OnUISceneDecisionDownEvent_Impl(UUnionUIButtonBase* UnionButton, int32 ButtonIndex) {
}

void UUnionUISceneBase::OnUISceneCancelEvent_Impl(UUnionUIButtonBase* UnionButton, int32 ButtonIndex) {
}

void UUnionUISceneBase::OnUISceneCancelDownEvent_Impl(UUnionUIButtonBase* UnionButton, int32 ButtonIndex) {
}

UUnionUIButtonsPanel* UUnionUISceneBase::GetLastFocusedButtonsPanelByPlayerIndex(int32 PlayerControllerIndex, int32& OutLastFocusedButtonsPanelIndex) {
    return NULL;
}

UUnionUIButtonsPanel* UUnionUISceneBase::GetLastFocusedButtonsPanel(int32& OutLastFocusedButtonsPanelIndex) {
    return NULL;
}

UUserWidget* UUnionUISceneBase::GetLastFocusedButtonByPlayerIndex(int32 PlayerControllerIndex, int32& OutLastFocusedButtonIndex) {
    return NULL;
}

UUserWidget* UUnionUISceneBase::GetLastFocusedButton(int32& OutLastFocusedButtonIndex) {
    return NULL;
}

UUnionUIButtonsPanel* UUnionUISceneBase::CreateButtonsPanel() {
    return NULL;
}

void UUnionUISceneBase::AddButtonsPanel(UUnionUIButtonsPanel* InAddButtonsPanel) {
}


