#include "PrivateMatchMenuSelectClassState.h"
#include "EMenuSequenceSubState.h"

UPrivateMatchMenuSelectClassState::UPrivateMatchMenuSelectClassState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("SelectClass");
    this->DefaultMenuState = EMenuSequenceSubState::SelectClass;
}


