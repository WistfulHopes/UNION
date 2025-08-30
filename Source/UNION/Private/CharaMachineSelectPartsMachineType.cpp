#include "CharaMachineSelectPartsMachineType.h"

UCharaMachineSelectPartsMachineType::UCharaMachineSelectPartsMachineType() : UUserWidget(FObjectInitializer::Get()) {
    this->PAT_Icon_Type = NULL;
    this->TXT_Type_Name = NULL;
    this->WBP_FooterShortCut = NULL;
    this->ButtonIndex = 3;
    this->ButtonIconType = EUIButtonIconType::EIT_BTN_CONT_CROSS;
}


