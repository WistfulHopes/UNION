#include "RaceBeforeSharedData.h"

URaceBeforeSharedData::URaceBeforeSharedData() {
    this->ValidRacerNum = 0;
    this->bIsPrepared = false;
    this->InputKeyHandler = NULL;
    this->RivalRacerIndex = 0;
}

void URaceBeforeSharedData::UnregisterChangeSequenceDelegate() {
}

void URaceBeforeSharedData::RegisterChangeSequenceDelegate(FOnChangeSequenceDelegate CallbackDelegate) {
}

bool URaceBeforeSharedData::PrepareRacers(ARaceSequence* RaceSequence) {
    return false;
}

void URaceBeforeSharedData::OpenSequence(URaceSequenceStateBase* CurrentRaceSequenceState) {
}

void URaceBeforeSharedData::OnFinishedTransition() {
}

void URaceBeforeSharedData::OnFinishedFade(EUnionUIFadeDirection FadeDirection) {
}

URaceBeforeSharedData* URaceBeforeSharedData::GetOrInitializeData(ARaceSequence* RaceSequence) {
    return NULL;
}

ERaceSequenceState URaceBeforeSharedData::GetNextSequence(ERaceSequenceState SequenceState) const {
    return ERaceSequenceState::Idle;
}

void URaceBeforeSharedData::CloseSequence(URaceSequenceStateBase* CurrentRaceSequenceState, ERaceSequenceState CurrentSequenceState) {
}

void URaceBeforeSharedData::CleanupRacers() {
}

bool URaceBeforeSharedData::CanSkipSequence(ERaceSequenceState SequenceState) const {
    return false;
}


