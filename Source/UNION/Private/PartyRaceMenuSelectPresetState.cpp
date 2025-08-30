#include "PartyRaceMenuSelectPresetState.h"
#include "EMenuSequenceSubState.h"

UPartyRaceMenuSelectPresetState::UPartyRaceMenuSelectPresetState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("SettingPartyRace");
    this->DefaultMenuState = EMenuSequenceSubState::SelectPartyRacePreset;
    this->SelectPresetScene = NULL;
    this->PopupWindowPtr = NULL;
}

void UPartyRaceMenuSelectPresetState::SetupRivalLevelDownPopupWindow(bool& SpawnPopup) {
}

void UPartyRaceMenuSelectPresetState::OnRivalLevelDownDecisionEvent(UUnionUIButtonBase* Button, int32 PanelIndex, int32 ButtonIndex) {
}

UPartyRacePresetSelect* UPartyRaceMenuSelectPresetState::GetPartyRacePresetSelectScene() {
    return NULL;
}

APartyRaceMenuSequence* UPartyRaceMenuSelectPresetState::GetOwnerPartyRaceMenuSequence() {
    return NULL;
}


