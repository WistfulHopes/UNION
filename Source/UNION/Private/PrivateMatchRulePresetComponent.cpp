#include "PrivateMatchRulePresetComponent.h"
#include "EMenuSequenceSubState.h"

UPrivateMatchRulePresetComponent::UPrivateMatchRulePresetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("SelectPartyRacePreset");
    this->DefaultMenuState = EMenuSequenceSubState::SelectPartyRacePreset;
    this->PresetWidget = NULL;
    this->CutInWidget = NULL;
    this->ResultProgressWidget = NULL;
    this->PopupWindowPtr = NULL;
    this->bRivalChallenge = false;
    this->bRivalChanged = false;
    this->CanRivalSelectTransition = false;
}

void UPrivateMatchRulePresetComponent::StartRivalCutInInputWait_Implementation() {
}

void UPrivateMatchRulePresetComponent::StartRivalCutIn() {
}

void UPrivateMatchRulePresetComponent::StartPresetSelect_Implementation() {
}

void UPrivateMatchRulePresetComponent::SetupRivalLevelDownPopupWindow(bool& SpawnPopup) {
}

void UPrivateMatchRulePresetComponent::SetIsRivalChallenge(bool bIsRivalChallenge) {
}

void UPrivateMatchRulePresetComponent::SelectedRivalSelectEvent() {
}

void UPrivateMatchRulePresetComponent::SelectedIndividualRuleEvent_Implementation(EPartyRacePreset RulePreset) {
}

void UPrivateMatchRulePresetComponent::SelectedGroupRuleEvent_Implementation(EPartyRacePreset RulePreset) {
}

void UPrivateMatchRulePresetComponent::SelectedCustomRuleEvent_Implementation() {
}

void UPrivateMatchRulePresetComponent::RewardPlayInEvent_Implementation() {
}

void UPrivateMatchRulePresetComponent::OnRivalLevelDownDecisionEvent(UUnionUIButtonBase* Button, int32 PanelIndex, int32 ButtonIndex) {
}

void UPrivateMatchRulePresetComponent::OnPartyRaceSelectInFinished_Implementation() {
}

void UPrivateMatchRulePresetComponent::OnCancelDown() {
}

void UPrivateMatchRulePresetComponent::InitRulePresetSelect() {
}

void UPrivateMatchRulePresetComponent::InitRivalCutIn() {
}

void UPrivateMatchRulePresetComponent::ExitRulePresetSelect() {
}


