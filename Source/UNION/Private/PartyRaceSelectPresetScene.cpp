#include "PartyRaceSelectPresetScene.h"

UPartyRaceSelectPresetScene::UPartyRaceSelectPresetScene() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->PresetButtonsPanel = NULL;
    this->CurrentSelectPresetState = EPartyRaceSelectPresetState::SelectPreset;
    this->PartyRace_In = NULL;
    this->PartyRace_Loop = NULL;
    this->PartyRace_Out = NULL;
    this->PartyRace_Option_In = NULL;
    this->PartyRace_Option_Loop = NULL;
    this->PartyRace_Option_Out = NULL;
}

void UPartyRaceSelectPresetScene::ResetPreset() {
}


