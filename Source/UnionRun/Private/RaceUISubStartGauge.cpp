#include "RaceUISubStartGauge.h"

URaceUISubStartGauge::URaceUISubStartGauge() : UUserWidget(FObjectInitializer::Get()) {
    this->Overlay_Arrow_MovePoint = NULL;
    this->MainGaurgeMat = NULL;
    this->AngleParamName = TEXT("Rotation");
    this->ButtonSwitcher = NULL;
    this->PlayerGaugeJustAngle = 190.00f;
    this->JudgeAreaJustAngle = 235.00f;
    this->GaugeRateMax = 1.50f;
}





void URaceUISubStartGauge::SetGaugeParcent(float GaugeRate) {
}


bool URaceUISubStartGauge::IsPlayControlKeyboard(int32 PlayerIndex) {
    return false;
}

FKey URaceUISubStartGauge::GetKeyAccel(int32 PlayerIndex) {
    return FKey{};
}



