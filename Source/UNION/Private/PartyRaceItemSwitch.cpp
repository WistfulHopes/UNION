#include "PartyRaceItemSwitch.h"

UPartyRaceItemSwitch::UPartyRaceItemSwitch() : UUserWidget(FObjectInitializer::Get()) {
    this->ItemSwitchWindow = NULL;
    this->ItemSwitchDetail = NULL;
}

void UPartyRaceItemSwitch::ResetFromBackUp() {
}


void UPartyRaceItemSwitch::DecideCurrentSetting(bool& IsRuleChanged) {
}


void UPartyRaceItemSwitch::BackupCurrentSetting() {
}


