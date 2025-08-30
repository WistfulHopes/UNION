#include "CharaMachineParamWindow.h"

UCharaMachineParamWindow::UCharaMachineParamWindow() : UUserWidget(FObjectInitializer::Get()) {
    this->WBP_Window_Sub_Parameter_TopSpeed = NULL;
    this->WBP_Window_Sub_Parameter_Accel = NULL;
    this->WBP_Window_Sub_Parameter_Dash_BOOST = NULL;
    this->WBP_Window_Sub_Parameter_Handling = NULL;
    this->WBP_Window_Sub_Parameter_Power = NULL;
    this->DefaultMinParam = 0.00f;
    this->DefaultMaxParam = 100.00f;
}

void UCharaMachineParamWindow::Update() {
}

void UCharaMachineParamWindow::SwitchPlayAnim() {
}

void UCharaMachineParamWindow::SetParamRange(float InMinParam, float InMaxParam) {
}

void UCharaMachineParamWindow::SetGadgetVisible(bool bInVisible) {
}

void UCharaMachineParamWindow::SetGadgetIds(const TArray<EGadgetId>& InGadgetIds) {
}

void UCharaMachineParamWindow::SetDiffVisible(bool bInVisible) {
}

void UCharaMachineParamWindow::SetCurrentParamData(const FRacerParamData& InCurrentParamData) {
}

void UCharaMachineParamWindow::SetCorrectionVal(float InCorrectionVal) {
}

void UCharaMachineParamWindow::SetCandParamData(const FRacerParamData& InCandParamData) {
}

void UCharaMachineParamWindow::SetBlinkMode(ECharaMachineParamWindowBlinkMode InBlinkMode) {
}

void UCharaMachineParamWindow::PlayAnimLoop() {
}

bool UCharaMachineParamWindow::PlayAnim(bool IsInAnim) {
    return false;
}





TArray<EGadgetId> UCharaMachineParamWindow::GetGadgetIds() const {
    return TArray<EGadgetId>();
}

void UCharaMachineParamWindow::FinishedAnim() {
}


