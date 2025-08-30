#include "PreRaceSequenceStateCOMSync.h"
#include "EPreRaceSequenceState.h"

UPreRaceSequenceStateCOMSync::UPreRaceSequenceStateCOMSync(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultSequenceState = EPreRaceSequenceState::COMDataSync;
}


