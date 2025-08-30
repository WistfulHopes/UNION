#include "PrivateMatchRuleSettingSequence.h"

APrivateMatchRuleSettingSequence::APrivateMatchRuleSettingSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PrevSquenceState = EPrivateMatchRuleSettingState::Idle;
    this->SelectedMainState = EPrivateMatchRuleSettingState::Idle;
    this->PlayType = EPrivateMatchPlayType::None;
    this->bRuleSetting = true;
    this->bRuleConfigured = false;
    this->bIsCustomizedRule = false;
    this->CachePresetId = EPartyRacePreset::QuickMatch;
}

void APrivateMatchRuleSettingSequence::SetNextRuleSettingSequenceState_Implementation(EPrivateMatchRuleSettingState InState, EPrivateMatchRuleSettingState PrevState) {
}

void APrivateMatchRuleSettingSequence::SetLobbyPlayType(EPrivateMatchPlayType LobbyPlayType) {
}

void APrivateMatchRuleSettingSequence::SetHostRuleSettingFlag(bool bIsHost) {
}

void APrivateMatchRuleSettingSequence::OpenRivalSelect() {
}

void APrivateMatchRuleSettingSequence::OpenPresetRuleSelect() {
}

void APrivateMatchRuleSettingSequence::OpenCustomRule() {
}

void APrivateMatchRuleSettingSequence::OpenClassSelect() {
}

void APrivateMatchRuleSettingSequence::OnSelectedClass(bool bSelected) {
}

void APrivateMatchRuleSettingSequence::OnInitIdleState_Implementation() {
}

void APrivateMatchRuleSettingSequence::OnInitExitState_Implementation() {
}

void APrivateMatchRuleSettingSequence::OnBackedRuleSettingMenu() {
}

bool APrivateMatchRuleSettingSequence::GetIsRuleConfigured() {
    return false;
}

bool APrivateMatchRuleSettingSequence::GetIsCustomizedRule() {
    return false;
}

void APrivateMatchRuleSettingSequence::FixedPresetRule() {
}

void APrivateMatchRuleSettingSequence::FixedCustomizeRule() {
}


