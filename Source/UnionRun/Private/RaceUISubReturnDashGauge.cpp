#include "RaceUISubReturnDashGauge.h"

URaceUISubReturnDashGauge::URaceUISubReturnDashGauge() : UUserWidget(FObjectInitializer::Get()) {
    this->Overlay_Arrow_MovePoint = NULL;
    this->MainGaugeMat = NULL;
    this->AngleParamName = TEXT("Rotation");
    this->PlayerGaugeJustAngle = 270.00f;
    this->JudgeAreaJustAngle = 315.00f;
}



void URaceUISubReturnDashGauge::SetGaugeParcent(float GaugeRate) {
}




