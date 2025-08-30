#include "PartyRaceSubMenuBtn.h"

UPartyRaceSubMenuBtn::UPartyRaceSubMenuBtn() {
    this->Preset = EPartyRacePreset::Casual;
    this->PatImageMaterial = NULL;
    this->EdgeType = EUnionUIControlDir::None;
    this->Btn_Active_Loop = NULL;
    this->Btn_Select_Loop = NULL;
    this->Btn_Active_to_Select = NULL;
    this->Btn_Select_to_Active = NULL;
    this->Btn_Active_Out = NULL;
    this->Btn_Select_Out = NULL;
}

void UPartyRaceSubMenuBtn::SetPresetId(EPartyRacePreset InPreset) {
}


