#include "PartyRaceConfirmScene.h"

UPartyRaceConfirmScene::UPartyRaceConfirmScene() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->OptionButtonPanel = NULL;
    this->PartyRace_Option_In = NULL;
    this->PartyRace_Option_Loop = NULL;
    this->PartyRace_Option_Out = NULL;
    this->LastFocusItemSwitchOrRaceSetting = EPartyRaceConfirmButton::ItemSwitch;
}


void UPartyRaceConfirmScene::OnSpeedClassSelect(int32 Index) {
}

void UPartyRaceConfirmScene::OnGroupSettingSelect(int32 Index) {
}



