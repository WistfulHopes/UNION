#include "CharaMachineSelectSettingUtility.h"

UCharaMachineSelectSettingUtility::UCharaMachineSelectSettingUtility() {
}

bool UCharaMachineSelectSettingUtility::IsCharaEnabled(const UObject* WorldContextObject, EDriverId DriverId) {
    return false;
}

float UCharaMachineSelectSettingUtility::GetHoverboardZLocationAdjust(const UObject* WorldContextObject) {
    return 0.0f;
}

bool UCharaMachineSelectSettingUtility::CanSelectChara(const UObject* WorldContextObject, EDriverId DriverId) {
    return false;
}


