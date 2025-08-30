#include "GarageMenuCustomizeGadgetState.h"
#include "EMenuSequenceSubState.h"

UGarageMenuCustomizeGadgetState::UGarageMenuCustomizeGadgetState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("CustomizeGadget");
    this->DefaultMenuState = EMenuSequenceSubState::CustomizeGadget;
}


