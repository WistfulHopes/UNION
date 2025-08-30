#include "UnionSettings.h"

UUnionSettings::UUnionSettings() {
    this->TravelRingResolution = EViewResolution::High;
    this->ShortcutRingViewScale = EShortcutViewScale::Half;
}

void UUnionSettings::SetRenderingScale(float Scale) {
}

void UUnionSettings::SetMinLoDBias(int32 Bias) {
}

void UUnionSettings::SetEnableBlur(bool Enable) {
}

bool UUnionSettings::IsEnableRadialBlurPP() const {
    return false;
}

bool UUnionSettings::IsEnableHiSpeedPP() const {
    return false;
}

bool UUnionSettings::IsEnableFlowingWaterPP() const {
    return false;
}

bool UUnionSettings::IsCastShadowRing() const {
    return false;
}

bool UUnionSettings::IsCastShadowItemBox() const {
    return false;
}

bool UUnionSettings::IsCastShadowDashPanel() const {
    return false;
}

int32 UUnionSettings::GetQualityIndex() const {
    return 0;
}

int32 UUnionSettings::GetMinLoDPC() const {
    return 0;
}

int32 UUnionSettings::GetMinLoDNonPC() const {
    return 0;
}

int32 UUnionSettings::GetMenuMinLoD() const {
    return 0;
}

FMachineQualitySettings UUnionSettings::GetMachineQualitySettingsPC() const {
    return FMachineQualitySettings{};
}

FMachineQualitySettings UUnionSettings::GetMachineQualitySettingsNonPC() const {
    return FMachineQualitySettings{};
}

int32 UUnionSettings::GetLobbyMeshLOD() const {
    return 0;
}

FHoldItemQualitySettings UUnionSettings::GetHoldItemSettingsPC() const {
    return FHoldItemQualitySettings{};
}

FHoldItemQualitySettings UUnionSettings::GetHoldItemSettingsNonPC() const {
    return FHoldItemQualitySettings{};
}

bool UUnionSettings::GetGFurEnable() const {
    return false;
}

bool UUnionSettings::GetDynamicShadowEnable() const {
    return false;
}

FUnionCastShadowSettings UUnionSettings::GetCurrentUnionCastShadowSettings() const {
    return FUnionCastShadowSettings{};
}

FMachinePostProcessSettings UUnionSettings::GetCurrentMachinePostProcessSettings() const {
    return FMachinePostProcessSettings{};
}

float UUnionSettings::CalcScreenPercentage() const {
    return 0.0f;
}


