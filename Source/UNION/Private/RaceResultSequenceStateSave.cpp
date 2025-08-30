#include "RaceResultSequenceStateSave.h"
#include "ERaceResultSequenceState.h"

URaceResultSequenceStateSave::URaceResultSequenceStateSave(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("Save");
    this->DefaultMenuState = ERaceResultSequenceState::Save;
}

void URaceResultSequenceStateSave::OnPlayLogSaveComplete(ESaveDataStatus Status) {
}

void URaceResultSequenceStateSave::OnAppSaveComplete(ESaveDataStatus Status) {
}


