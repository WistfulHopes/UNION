#include "LobbyHolderBase.h"

ULobbyHolderBase::ULobbyHolderBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultMenuState = EMenuSequenceSubState::None;
}

void ULobbyHolderBase::SetNextMatchingSequenceState(EOnlineSequenceState InState) {
}


