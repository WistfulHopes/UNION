#include "RaceSequenceStateGadgetPlate.h"
#include "ERaceSequenceState.h"

URaceSequenceStateGadgetPlate::URaceSequenceStateGadgetPlate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("GadgetPlate");
    this->DefaultMenuState = ERaceSequenceState::GadgetPlateAddRaceCount;
}


