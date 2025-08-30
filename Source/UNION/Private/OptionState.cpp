#include "OptionState.h"
#include "EMenuSequenceSubState.h"

UOptionState::UOptionState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("Option");
    this->DefaultMenuState = EMenuSequenceSubState::Option;
    this->OptionActor = NULL;
}

void UOptionState::OnExitMenu() {
}


