#include "PartyRacePresetSelect.h"

UPartyRacePresetSelect::UPartyRacePresetSelect() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->CurrentSelectedPresetButton = EPartyRacePreset::QuickMatch;
    this->PresetButtonsPanel = NULL;
    this->CurrentSelectPresetState = EPartyRaceSelectPresetState::SelectPreset;
    this->PartyRace_In = NULL;
    this->PartyRace_Loop = NULL;
    this->PartyRace_Out = NULL;
}

void UPartyRacePresetSelect::ResetPreset() {
}




