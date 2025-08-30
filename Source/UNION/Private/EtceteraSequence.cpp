#include "EtceteraSequence.h"

AEtceteraSequence::AEtceteraSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UIScene = NULL;
    this->PrevSequenceState = EEtceteraSequenceMainState::Idle;
    this->SelectedMainState = EEtceteraSequenceMainState::Idle;
    this->PlatformStorePopup = NULL;
    this->FullGameStorePopup = NULL;
}

void AEtceteraSequence::SetNextEtceteraSequenceState_Implementation(EEtceteraSequenceMainState InState, EEtceteraSequenceMainState PrevState) {
}

void AEtceteraSequence::OnInitStateSelectMainEtcetera_Implementation() {
}

void AEtceteraSequence::OnInitStateIdle_Implementation() {
}

void AEtceteraSequence::OnInitStateFullGameStore_Implementation() {
}

void AEtceteraSequence::OnInitStateExit_Implementation() {
}

void AEtceteraSequence::OnInitStateEtceteraTop_Implementation() {
}

void AEtceteraSequence::OnInitStateDLC_Implementation() {
}

void AEtceteraSequence::DecisionFullGameStoreEvent_Implementation(bool IsAccept) {
}

void AEtceteraSequence::CompletePlatformStoreEvent_Implementation(bool IsAccept) {
}


