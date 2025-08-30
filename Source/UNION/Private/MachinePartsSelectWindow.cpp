#include "MachinePartsSelectWindow.h"

UMachinePartsSelectWindow::UMachinePartsSelectWindow() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->TXT_TypeName = NULL;
    this->VBScrollBox = NULL;
    this->WidgetSwitcher_Balloon = NULL;
    this->WBP_MachineSelect_Sub_PartsScrollBox_TextBalloon = NULL;
    this->WBP_MachineSelect_Sub_ReleaseDate_TextBalloon = NULL;
    this->WBP_MachineSelect_Sub_Btn_OK = NULL;
    this->WBP_MachineSelect_Sub_Ready = NULL;
    this->Mode = EMachinePartsSelectWindowMode::Garage;
    this->bIsAutoFocusEnabled = false;
    this->bShouldPlayShoulderSound = true;
    this->Dialog = NULL;
    this->DLCDialog = NULL;
}

void UMachinePartsSelectWindow::TireScrollBox_OnItemSelected() {
}

void UMachinePartsSelectWindow::TireScrollBox_OnItemFocused(UUnionUIButtonBase* InButton) {
}

void UMachinePartsSelectWindow::SetupInternal() {
}

void UMachinePartsSelectWindow::SetFocusToFirstSelectedItem() {
}

void UMachinePartsSelectWindow::SetFocusByPartsTypeAndId(EMachinePartsType InPartsType, EMachineId InPartsId) {
}

void UMachinePartsSelectWindow::ScrollImmediately() {
}

void UMachinePartsSelectWindow::ScrollBox_OnEscape(UMachinePartsScrollBox* InSender, EUnionUIControlDir InDirection) {
}

void UMachinePartsSelectWindow::ScrollBox_OnCancel() {
}

void UMachinePartsSelectWindow::RearScrollBox_OnItemSelected() {
}

void UMachinePartsSelectWindow::RearScrollBox_OnItemFocused(UUnionUIButtonBase* InButton) {
}

void UMachinePartsSelectWindow::OnDialogEventResult(EDialogResult InResult) {
}

void UMachinePartsSelectWindow::OnDialogEventDelete() {
}

void UMachinePartsSelectWindow::OnDialogEventCreateUnlock(const FMachinePartsUIData& InPartsData, ERewardType rewardType) {
}

void UMachinePartsSelectWindow::OnDialogEventCreatePrice(const FMachinePartsUIData& InPartsData, ERewardType rewardType) {
}

void UMachinePartsSelectWindow::OnDialogEventCreateDLC() {
}


void UMachinePartsSelectWindow::GetUnready() {
}

void UMachinePartsSelectWindow::GetSelectedPartsIds(EMachineId& OutFrontPartsId, EMachineId& OutRearPartsId, EMachineId& OutTirePartsId) const {
}

UReadyWidget* UMachinePartsSelectWindow::GetReadyWidget() const {
    return NULL;
}

void UMachinePartsSelectWindow::GetReady() {
}

APlayerController* UMachinePartsSelectWindow::GetPlayerController() const {
    return NULL;
}

void UMachinePartsSelectWindow::GetFocusedPartsIdAndType(EMachineId& OutMachineId, EMachinePartsType& OutMachinePartsType) {
}

void UMachinePartsSelectWindow::GetCurrentPartsIds(EMachineId& OutFrontPartsId, EMachineId& OutRearPartsId, EMachineId& OutTirePartsId) const {
}

void UMachinePartsSelectWindow::FrontScrollBox_OnItemSelected() {
}

void UMachinePartsSelectWindow::FrontScrollBox_OnItemFocused(UUnionUIButtonBase* InButton) {
}

void UMachinePartsSelectWindow::DeleteDialogDLC(bool IsAccept) {
}

void UMachinePartsSelectWindow::DecisionButton_OnFocus(UUnionUIButtonBase* Button) {
}

void UMachinePartsSelectWindow::DecisionButton_OnDirection(UUnionUIButtonBase* Button, EUnionUIControlDir Dir) {
}

void UMachinePartsSelectWindow::DecisionButton_OnDecision(UUnionUIButtonBase* Button) {
}

void UMachinePartsSelectWindow::DecisionButton_OnCancel(UUnionUIButtonBase* Button) {
}


