#include "UnionRaceStartUI.h"

UUnionRaceStartUI::UUnionRaceStartUI() : UUserWidget(FObjectInitializer::Get()) {
    this->WBP_Race_StartDash_Sub_ArcGauge = NULL;
}

void UUnionRaceStartUI::SetStartDashSetting(const float& LV3_PIVOT, const float& LV3_RANGE, const float& LV2_PIVOT, const float& LV2_RANGE, const float& NG1_PIVOT, const float& NG1_RANGE, const float& NG2_PIVOT, const float& NG2_RANGE) {
}

void UUnionRaceStartUI::SetStartDashParamSetting(const FUnionRaceStartDashParam& InStartDashParam) {
}

void UUnionRaceStartUI::SetGaugeParcent(const float& GaugeRate) {
}


UObject* UUnionRaceStartUI::GetButtonWidget() {
    return NULL;
}


