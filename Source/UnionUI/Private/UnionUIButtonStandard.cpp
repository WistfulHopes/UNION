#include "UnionUIButtonStandard.h"

UUnionUIButtonStandard::UUnionUIButtonStandard() {
    this->_Selectable = true;
    this->_ToggleEnabled = false;
    this->_DecidedKeep = true;
    this->Btn_NonActive_Loop = NULL;
    this->Btn_Active_Loop = NULL;
    this->Btn_Select_Loop = NULL;
    this->Btn_Decide_Loop = NULL;
    this->Btn_NonActive_to_Active = NULL;
    this->Btn_Active_to_NonActive = NULL;
    this->Btn_Active_to_Select = NULL;
    this->Btn_Active_to_Decide = NULL;
    this->Btn_Select_to_NonActive = NULL;
    this->Btn_Select_to_Active = NULL;
    this->Btn_Select_to_Decide = NULL;
    this->Btn_Decide_to_NonActive = NULL;
    this->Btn_Decide_to_Active = NULL;
    this->Btn_Decide_to_Select = NULL;
}

void UUnionUIButtonStandard::SetToggleEnabled(bool ToggleEnabled) {
}

void UUnionUIButtonStandard::SetSelectable(bool Selectable) {
}

void UUnionUIButtonStandard::SetDecidedKeep(bool DecidedKeep) {
}

void UUnionUIButtonStandard::Select(bool bIsSoundPass) {
}

void UUnionUIButtonStandard::ReleaseDecided() {
}

void UUnionUIButtonStandard::OnUnhovered_Implementation() {
}

void UUnionUIButtonStandard::OnUnfocused_Implementation() {
}

void UUnionUIButtonStandard::OnPressed_Implementation() {
}

void UUnionUIButtonStandard::OnHovered_Implementation() {
}

void UUnionUIButtonStandard::OnFocused_Implementation() {
}

void UUnionUIButtonStandard::OnClicked_Implementation() {
}

bool UUnionUIButtonStandard::IsSelected() const {
    return false;
}

bool UUnionUIButtonStandard::IsSelectable() const {
    return false;
}

bool UUnionUIButtonStandard::IsDecided() const {
    return false;
}

void UUnionUIButtonStandard::Deselect() {
}

void UUnionUIButtonStandard::Decide() {
}

void UUnionUIButtonStandard::Deactivate() {
}

void UUnionUIButtonStandard::Activate() {
}


