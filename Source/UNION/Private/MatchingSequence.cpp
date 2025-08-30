#include "MatchingSequence.h"

AMatchingSequence::AMatchingSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LobbyType = EMatchingLobbyType::None;
    this->MatchingComponent = NULL;
}

void AMatchingSequence::OnInitStateIdle_Implementation() {
}

void AMatchingSequence::OnInitStateExit_Implementation() {
}

void AMatchingSequence::OnBackSequenceEvent_Implementation() {
}

EMatchingLobbyType AMatchingSequence::GetLobbyType() {
    return EMatchingLobbyType::None;
}


