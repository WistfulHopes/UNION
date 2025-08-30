#include "RaceSequenceStateReadyParam.h"
#include "ERaceSequenceState.h"

URaceSequenceStateReadyParam::URaceSequenceStateReadyParam(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("ReadyParam");
    this->DefaultMenuState = ERaceSequenceState::ReadyParam;
}


