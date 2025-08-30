#include "PreRaceSequenceStateCheckLobbyMember.h"
#include "EPreRaceSequenceState.h"

UPreRaceSequenceStateCheckLobbyMember::UPreRaceSequenceStateCheckLobbyMember(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultSequenceState = EPreRaceSequenceState::CheckLobbyMember;
}


