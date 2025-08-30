#include "CharaMachineSelectsBase.h"

UCharaMachineSelectsBase::UCharaMachineSelectsBase() : UUserWidget(FObjectInitializer::Get()) {
    this->WBP_CharaSelect_Sub_Window = NULL;
    this->WBP_CMN_GadgetCount = NULL;
    this->CharaMachineUpdateDelay = 0.50f;
}

void UCharaMachineSelectsBase::UpdateDonpaTicket() {
}

void UCharaMachineSelectsBase::SkinWindow_Button_Event_UpdateNew_Impl() {
}

void UCharaMachineSelectsBase::SkinWindow_Button_Event_HoverIcon_Impl(int32 InPlayerIndex, int32 InCharaIndex) {
}

void UCharaMachineSelectsBase::SkinWindow_Button_Event_Decision_Impl(int32 InPlayerControllerIndex, int32 InCharaIndex) {
}

void UCharaMachineSelectsBase::SkinWindow_Button_Event_Cancel_Impl(int32 InPlayerIndex) {
}

void UCharaMachineSelectsBase::SetVisibleDonpaTicket(bool IsVisible) {
}

void UCharaMachineSelectsBase::SetDataSaveRequest(bool bInRequest) {
}

void UCharaMachineSelectsBase::SetCharaMachineSelectWidget(const TArray<UCharaMachineSelectBase*>& InCharaMachineSelects) {
}


void UCharaMachineSelectsBase::PlayAnimationNormal() {
}




void UCharaMachineSelectsBase::OnMachinePartsDialogResult(EDialogResult InResult) {
}


bool UCharaMachineSelectsBase::GetDataSaveRequest() const {
    return false;
}

UCharaMachineSelectBase* UCharaMachineSelectsBase::GetCharaMachineSelectWidgetByPlayerControllerIndex(int32 PlayerControllerIndex) const {
    return NULL;
}

TArray<UCharaMachineSelectBase*> UCharaMachineSelectsBase::GetCharaMachineSelectWidget() const {
    return TArray<UCharaMachineSelectBase*>();
}

UCharaMachineParamWindow* UCharaMachineSelectsBase::GetCharaMachineParamWindowByPlayerControllerIndex(int32 PlayerControllerIndex) const {
    return NULL;
}

void UCharaMachineSelectsBase::CharaSelect_Event_ChangeOptionVisible_Impl() {
}

void UCharaMachineSelectsBase::CharaSelect_Event_ChangeMode_Impl(ECharaSelectControlState InNextMode, ECharaSelectControlState InPrevMode, int32 InPlayerControllerIndex) {
}

void UCharaMachineSelectsBase::CharaSelect_Button_Event_Update_New_Impl() {
}

void UCharaMachineSelectsBase::CharaSelect_Button_Event_UnhoverIcon_Impl(int32 InPlayerIndex, int32 InCharaIndex) {
}

void UCharaMachineSelectsBase::CharaSelect_Button_Event_HoverIcon_Impl(int32 InPlayerIndex, int32 InCharaIndex) {
}

void UCharaMachineSelectsBase::CharaSelect_Button_Event_Decision_Impl(int32 InPlayerControllerIndex, int32 InCharaIndex) {
}

void UCharaMachineSelectsBase::CharaSelect_Button_Event_Cancel_Impl(int32 InPlayerControllerIndex) {
}

void UCharaMachineSelectsBase::ChangeSelectMode(EMachineSelectControlState InNewState) {
}


