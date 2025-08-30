#include "RaceSequenceStateTermination.h"
#include "ERaceSequenceState.h"

URaceSequenceStateTermination::URaceSequenceStateTermination(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("Termination");
    this->DefaultMenuState = ERaceSequenceState::Termination;
}

void URaceSequenceStateTermination::RequestQuitLobbyNative() {
}


bool URaceSequenceStateTermination::IsBackToMenu() const {
    return false;
}

AHierarchicalStateMachine* URaceSequenceStateTermination::GetRootStateMachine() const {
    return NULL;
}

int32 URaceSequenceStateTermination::GetReservedExitCode() const {
    return 0;
}

EGameModeId URaceSequenceStateTermination::GetNextGameMode() const {
    return EGameModeId::None;
}

void URaceSequenceStateTermination::EndTerminationState() {
}


