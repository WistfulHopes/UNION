#include "CharaMachineParamWindowBar.h"

UCharaMachineParamWindowBar::UCharaMachineParamWindowBar() : UUserWidget(FObjectInitializer::Get()) {
    this->ParamTypeIcon = NULL;
    this->BarDefault = NULL;
    this->BarUp = NULL;
    this->BarDown = NULL;
    this->BarBlink = NULL;
    this->Arrow = NULL;
    this->BarSwitcher = NULL;
    this->BarMaterialDefault = NULL;
    this->BarMaterialUp = NULL;
    this->BarMaterialDown = NULL;
    this->BarMaterialBlink = NULL;
    this->ArrowMaterial = NULL;
    this->ParamValueText = NULL;
    this->bVisibleUI = true;
    this->GadgetParamSideIcon = NULL;
    this->GadgetParamValueText = NULL;
}

void UCharaMachineParamWindowBar::Update(bool bInIsDiffVisible, ECharaMachineParamWindowBlinkMode InBlinkMode, float InMinParam, float InMaxParam, float InCurrentDriverParam, float InCurrentMachineParam, float InCurrentGadgetParam, float InCurrentTotalParam, float InCandDriverParam, float InCandMachineParam, float InCandGadgetParam, float InCandTotalParam, float InCorrectionVal) {
}

void UCharaMachineParamWindowBar::SetParamType(const float InParamType) {
}




