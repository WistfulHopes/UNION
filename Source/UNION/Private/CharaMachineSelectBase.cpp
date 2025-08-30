#include "CharaMachineSelectBase.h"

UCharaMachineSelectBase::UCharaMachineSelectBase() : UUserWidget(FObjectInitializer::Get()) {
    this->WidgetSwitcherMachine = NULL;
    this->WBP_MachineSelect_Sub_CharaParameter = NULL;
    this->WBP_MachineSelect_Sub_TypeWindow = NULL;
    this->WBP_MachineSelect_Sub_PartsWindow = NULL;
    this->WBP_MachineSelect_Sub_ColorWindow = NULL;
    this->WBP_Window_MachineParameter = NULL;
    this->WBP_Window_MachineOption = NULL;
    this->MenuInputReceiveObject = NULL;
    this->PlayerIndex = 0;
    this->FirstFocusDelayTime = 0.25f;
}

void UCharaMachineSelectBase::SwitchMachineSelectMode(EMachineSelectMode InMode) {
}


void UCharaMachineSelectBase::SetCurrentMachineSelectControlState(EMachineSelectControlState InState) {
}






void UCharaMachineSelectBase::PartsWindowDialogShow() {
}

void UCharaMachineSelectBase::PartsWindowDialogHide(EDialogResult InResult) {
}

void UCharaMachineSelectBase::OnParamWindowFinishedAnimCallback(bool IsIn) {
}

void UCharaMachineSelectBase::OnParamWindowCallback(UObject* InObject) {
}

void UCharaMachineSelectBase::OnOptionWindowFinishedAnimCallback(bool IsIn) {
}

void UCharaMachineSelectBase::OnOptionWindowCancelCallback(UUnionUIButtonBase* Button, int32 PanelIndex, int32 ButtonIndex) {
}

void UCharaMachineSelectBase::OnOptionWindowCallback(UObject* InObject) {
}

void UCharaMachineSelectBase::MachinePartsSelectWindow_OnItemSelected(EMachinePartsType InPartsType, EMachineId InPartsId) {
}

void UCharaMachineSelectBase::MachinePartsSelectWindow_OnItemFocused(EMachinePartsType InPartsType, EMachineId InPartsId) {
}

void UCharaMachineSelectBase::MachinePartsSelectWindow_OnDecisionButtonFocused() {
}

void UCharaMachineSelectBase::MachinePartsSelectWindow_OnDecision() {
}

void UCharaMachineSelectBase::MachinePartsSelectWindow_OnCancel() {
}

void UCharaMachineSelectBase::MachineColorSelectWindow_OnItemSelected() {
}

void UCharaMachineSelectBase::MachineColorSelectWindow_OnItemFocused() {
}

void UCharaMachineSelectBase::MachineColorSelectWindow_OnDecision() {
}

void UCharaMachineSelectBase::MachineColorSelectWindow_OnCancel() {
}

UMachineTypeScrollControl* UCharaMachineSelectBase::GetTypeWindow() const {
    return NULL;
}

int32 UCharaMachineSelectBase::GetPlayerIndex() const {
    return 0;
}

UMachinePartsSelectWindow* UCharaMachineSelectBase::GetPartsWindow() const {
    return NULL;
}

EMachineSelectControlState UCharaMachineSelectBase::GetCurrentMachineSelectControlState() const {
    return EMachineSelectControlState::CharacterSelect;
}

ECharaSelectControlState UCharaMachineSelectBase::GetCurrentCharaSelectControlState() const {
    return ECharaSelectControlState::CharacterSelect;
}

UMachineColorSelectWindow* UCharaMachineSelectBase::GetColorWindow() const {
    return NULL;
}

UMachinePartsCharaParameter* UCharaMachineSelectBase::GetCharaParamWindow() const {
    return NULL;
}


UCharaSelectWindow* UCharaMachineSelectBase::GetCharacterSelectWindow() const {
    return NULL;
}


void UCharaMachineSelectBase::ChangeCharaSelectMode(ECharaSelectControlState InNewState) {
}


