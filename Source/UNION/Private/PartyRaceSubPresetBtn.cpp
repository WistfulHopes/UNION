#include "PartyRaceSubPresetBtn.h"

UPartyRaceSubPresetBtn::UPartyRaceSubPresetBtn() {
    this->_Preset = EPartyRacePreset::Casual;
    this->Active_Loop = NULL;
    this->Select_Loop = NULL;
    this->Select_Out = NULL;
}

void UPartyRaceSubPresetBtn::SetPreset(EPartyRacePreset InPreset) {
}

void UPartyRaceSubPresetBtn::OnSelected(UUnionUIButtonBaseCore* Button) {
}

void UPartyRaceSubPresetBtn::OnDecided(UUnionUIButtonBaseCore* Button) {
}

EPartyRacePreset UPartyRaceSubPresetBtn::GetPreset() const {
    return EPartyRacePreset::Casual;
}


