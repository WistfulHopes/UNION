#include "PreRaceSequenceStateBase.h"

UPreRaceSequenceStateBase::UPreRaceSequenceStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultSequenceState = EPreRaceSequenceState::Idle;
}


