#include "JukeboxSequence.h"
#include "EMenuSequenceSubState.h"

UJukeboxSequence::UJukeboxSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("Jukebox");
    this->DefaultMenuState = EMenuSequenceSubState::JukeBox;
}


