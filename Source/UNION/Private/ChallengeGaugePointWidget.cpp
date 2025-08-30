#include "ChallengeGaugePointWidget.h"

UChallengeGaugePointWidget::UChallengeGaugePointWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->_DefaultStyle = EChallengeGuagePointStyle::Normal;
    this->Gauge_Point_In = NULL;
    this->Gauge_Point_Loop = NULL;
    this->Gauge_Point_Out = NULL;
    this->Gauge_Point_Get = NULL;
}


