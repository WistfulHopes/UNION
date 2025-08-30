#include "EndingStaffrollState.h"
#include "EMenuSequenceSubState.h"

UEndingStaffrollState::UEndingStaffrollState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("EndingStaffroll");
    this->DefaultMenuState = EMenuSequenceSubState::EndingStaffroll;
}


