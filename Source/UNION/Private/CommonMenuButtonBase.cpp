#include "CommonMenuButtonBase.h"

UCommonMenuButtonBase::UCommonMenuButtonBase() {
    this->ButtonType = ECommonMenuButtonType::None;
    this->Btn_Active_Loop = NULL;
    this->Btn_Select_Loop = NULL;
    this->Btn_Active_to_Select = NULL;
    this->Btn_Select_to_Active = NULL;
    this->Btn_Select_to_Player = NULL;
    this->Btn_Player_to_Select = NULL;
    this->Btn_Select_Out = NULL;
    this->FocusSoundCue = NULL;
}



void UCommonMenuButtonBase::SetNavigationButton_Implementation(UWidget* PrevButton, UWidget* NextButton) {
}



void UCommonMenuButtonBase::PlayAnimationSelectToPlayer_Implementation() {
}

void UCommonMenuButtonBase::PlayAnimationPlayerToSelect_Implementation() {
}

void UCommonMenuButtonBase::OnInitialize_Implementation() {
}

FEventReply UCommonMenuButtonBase::OnFocusReceivedImpl_Implementation(FGeometry MyGeometry, FFocusEvent InFocusEvent) {
    return FEventReply{};
}

void UCommonMenuButtonBase::OnFocusLostImpl_Implementation(FFocusEvent InFocusEvent) {
}

bool UCommonMenuButtonBase::IsValidDataTableRowData_Implementation(ECommonMenuButtonType InButtonType, FCommonMenuTextData& OutRowData) {
    return false;
}


