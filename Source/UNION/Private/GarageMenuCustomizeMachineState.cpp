#include "GarageMenuCustomizeMachineState.h"
#include "EMenuSequenceSubState.h"

UGarageMenuCustomizeMachineState::UGarageMenuCustomizeMachineState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("CustomizeMachine");
    this->DefaultMenuState = EMenuSequenceSubState::CustomizeMachine;
}


