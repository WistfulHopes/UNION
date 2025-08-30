#include "TimeTrialLoginState.h"

UTimeTrialLoginState::UTimeTrialLoginState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("Login");
    this->DefaultMenuState = EMenuSequenceSubState::Login;
    this->NextMenuState = EMenuSequenceSubState::Ranking;
}

void UTimeTrialLoginState::SetNextMenuState(const EMenuSequenceSubState InState) {
}

EMenuSequenceSubState UTimeTrialLoginState::GetNextMenuState() const {
    return EMenuSequenceSubState::None;
}


