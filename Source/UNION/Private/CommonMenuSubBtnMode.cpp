#include "CommonMenuSubBtnMode.h"

UCommonMenuSubBtnMode::UCommonMenuSubBtnMode() {
    this->BeltButtonType = ECommonMenuButtonType::None;
    this->Btn_Active_Loop = NULL;
    this->Btn_Select_Loop = NULL;
    this->Btn_Active_to_Select = NULL;
    this->Btn_Select_to_Active = NULL;
    this->Btn_Select_to_Player = NULL;
    this->Btn_Player_to_Select = NULL;
    this->Btn_Select_Out = NULL;
}


void UCommonMenuSubBtnMode::SetNavigationButton_Implementation(UWidget* PrevButton, UWidget* NextButton) {
}



void UCommonMenuSubBtnMode::InitializeSubBtnMode_Implementation() {
}


