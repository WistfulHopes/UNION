#include "RaceSequenceStateDriverGetting.h"
#include "ERaceSequenceState.h"

URaceSequenceStateDriverGetting::URaceSequenceStateDriverGetting(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("DriverGetting");
    this->DefaultMenuState = ERaceSequenceState::DriverGetting;
    this->_RewardGetWindow = NULL;
}

void URaceSequenceStateDriverGetting::OnRewardGetWindowOpened() {
}

void URaceSequenceStateDriverGetting::OnRewardGetWindowClosed() {
}

void URaceSequenceStateDriverGetting::OnFadeEnd(EUnionUIFadeDirection Direction) {
}


