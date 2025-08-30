#include "RaceSequenceStateRivalTeamEliminateResult.h"
#include "ERaceSequenceState.h"

URaceSequenceStateRivalTeamEliminateResult::URaceSequenceStateRivalTeamEliminateResult(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("RivalTeamEliminateResult");
    this->DefaultMenuState = ERaceSequenceState::RivalTeamEliminateResult;
    this->_InputKeyHandler = NULL;
    this->_InputReceiver = NULL;
    this->_RivalResultWidget = NULL;
    this->_RewardGetWindowWidget = NULL;
    this->_ResultDonpaTicket = NULL;
    this->_SubRivalAllWinWidget = NULL;
}

void URaceSequenceStateRivalTeamEliminateResult::OnWinPlayFinished() {
}

void URaceSequenceStateRivalTeamEliminateResult::OnWidgetLoaded() {
}

void URaceSequenceStateRivalTeamEliminateResult::OnSubRivalAllWinRewardFinished() {
}

void URaceSequenceStateRivalTeamEliminateResult::OnSubRivalAllWinPlayFinished() {
}

void URaceSequenceStateRivalTeamEliminateResult::OnSubRivalAllWinFinished() {
}

void URaceSequenceStateRivalTeamEliminateResult::OnRewardGetWindowOpened() {
}

void URaceSequenceStateRivalTeamEliminateResult::OnRewardGetWindowFinished() {
}

void URaceSequenceStateRivalTeamEliminateResult::OnProgressPlayFinished() {
}

void URaceSequenceStateRivalTeamEliminateResult::OnPlayOutFinished() {
}

void URaceSequenceStateRivalTeamEliminateResult::OnKeyPressed(FKey PressedKey) {
}

void URaceSequenceStateRivalTeamEliminateResult::OnButtonInput() {
}

void URaceSequenceStateRivalTeamEliminateResult::OnAcceptKeyPressed(UObject* Object) {
}


