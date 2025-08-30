#include "GameSettingsSequence.h"

AGameSettingsSequence::AGameSettingsSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UIScene = NULL;
    this->PrevSequenceState = EGameSettingsSequenceState::GameSettingsTop;
}

void AGameSettingsSequence::SetNextGameSettingsSequenceState_Implementation(EGameSettingsSequenceState InState, EGameSettingsSequenceState PrevState) {
}

void AGameSettingsSequence::OnInitStateInputAssignSettings_Implementation() {
}

void AGameSettingsSequence::OnInitStateGraphicsSettings_Implementation() {
}

void AGameSettingsSequence::OnInitStateGameSettingsTop_Implementation() {
}

void AGameSettingsSequence::OnInitStateGameGeneralSettings_Implementation() {
}

void AGameSettingsSequence::OnInitStateExit_Implementation() {
}

EGameSettingsSequenceState AGameSettingsSequence::GetCurrentGameSettingsState() {
    return EGameSettingsSequenceState::GameSettingsTop;
}


