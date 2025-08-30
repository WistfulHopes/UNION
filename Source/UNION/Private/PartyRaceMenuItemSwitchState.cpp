#include "PartyRaceMenuItemSwitchState.h"
#include "EMenuSequenceSubState.h"

UPartyRaceMenuItemSwitchState::UPartyRaceMenuItemSwitchState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("SettingItemSwitch");
    this->DefaultMenuState = EMenuSequenceSubState::SettingItemSwitch;
}


