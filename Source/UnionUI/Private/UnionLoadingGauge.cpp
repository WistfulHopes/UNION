#include "UnionLoadingGauge.h"

UUnionLoadingGauge::UUnionLoadingGauge() : UUserWidget(FObjectInitializer::Get()) {
    this->LoadingGaugeNowState = EUnionLoadingGaugeState::None;
    this->LoadingGaugeTargetState = EUnionLoadingGaugeState::None;
    this->GaugeAnimationRate = 0.01f;
}



void UUnionLoadingGauge::ProceedTargetState() {
}

bool UUnionLoadingGauge::IsTargetStateBigger() {
    return false;
}

bool UUnionLoadingGauge::IsSkipLoadingGaugeState() {
    return false;
}

bool UUnionLoadingGauge::IsEqLoadingGaugeState() {
    return false;
}


