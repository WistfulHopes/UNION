#include "CharaMachineSelectStateBase.h"

UCharaMachineSelectStateBase::UCharaMachineSelectStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultCharaMachineSelectState = ECharaMachineSelectState::Hidden;
    this->bIsExitCharaMachine = false;
    this->StartState = EMenuSequenceSubState::SelectCharacter;
}



int32 UCharaMachineSelectStateBase::GetDefaultCharaMachineSelectState() const {
    return 0;
}


