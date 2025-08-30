#include "GarageMenuTopState.h"
#include "EMenuSequenceSubState.h"

UGarageMenuTopState::UGarageMenuTopState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("CustomizeGadget");
    this->DefaultMenuState = EMenuSequenceSubState::CustomizeGadget;
}


