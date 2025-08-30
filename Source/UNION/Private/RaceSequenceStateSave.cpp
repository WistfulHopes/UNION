#include "RaceSequenceStateSave.h"
#include "ERaceSequenceState.h"

URaceSequenceStateSave::URaceSequenceStateSave(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("Save");
    this->DefaultMenuState = ERaceSequenceState::Save;
}

void URaceSequenceStateSave::OnReplaySaveComplete(ESaveDataStatus Status) {
}

void URaceSequenceStateSave::OnPlayLogSaveComplete(ESaveDataStatus Status) {
}

void URaceSequenceStateSave::OnAppSaveComplete(ESaveDataStatus Status) {
}


