#include "OptionWidget.h"

UOptionWidget::UOptionWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->DSP_WBP_CMN_PlayerNumber = NULL;
    this->PAT_Option_Icon = NULL;
    this->TXT_Option_Title = NULL;
    this->WBP_Option_Tab = NULL;
    this->WidgetSwitcher_Info = NULL;
    this->WBP_Option_Sub_List = NULL;
    this->WBP_Option_Sub_Explan = NULL;
    this->WBP_Option_Sub_Brightness = NULL;
    this->WBP_Option_Sub_KeyConfig = NULL;
    this->Option_In = NULL;
    this->Option_Loop = NULL;
    this->Option_Out = NULL;
    this->InputRecieve = NULL;
}

void UOptionWidget::OnTabRight(UObject* obj) {
}

void UOptionWidget::OnTabLeft(UObject* obj) {
}

void UOptionWidget::OnRevertDefault(UObject* obj) {
}

void UOptionWidget::OnCloseWidget() {
}

void UOptionWidget::OnChangeHoverCell(const FText Text) {
}


