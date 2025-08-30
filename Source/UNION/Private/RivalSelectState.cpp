#include "RivalSelectState.h"
#include "EMenuSequenceSubState.h"

URivalSelectState::URivalSelectState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("SelectRival");
    this->DefaultMenuState = EMenuSequenceSubState::SelectRival;
    this->_Widget = NULL;
}

void URivalSelectState::OnTipsWindowClosed() {
}

void URivalSelectState::OnDecisionAnimFinished() {
}

void URivalSelectState::OnDecision(EDriverId DriverId, uint8 RivalLevel) {
}

void URivalSelectState::OnCanceled(uint8 RivalLevel) {
}



