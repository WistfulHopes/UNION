#include "SquadSequence.h"

ASquadSequence::ASquadSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LobbyPlayerData.AddDefaulted(12);
    this->FakeLobbyPlayerIndexList.AddDefaulted(12);
}

void ASquadSequence::SetNextSquadSequenceState_Implementation(ESquadSequenceState InState, ESquadSequenceState PrevState) {
}

void ASquadSequence::OnInitStateSquadTop_Implementation() {
}

void ASquadSequence::OnInitStatePlayerProfile_Implementation() {
}

void ASquadSequence::OnInitStateFriendList_Implementation() {
}


