#include "RaceResultSequenceStateRivalTeamResult.h"
#include "ERaceResultSequenceState.h"

URaceResultSequenceStateRivalTeamResult::URaceResultSequenceStateRivalTeamResult(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("RivalTeamResult");
    this->DefaultMenuState = ERaceResultSequenceState::RivalTeamResult;
    this->_InputKeyHandler = NULL;
    this->_InputReceiver = NULL;
    this->_RivalResultWidget = NULL;
}

void URaceResultSequenceStateRivalTeamResult::OnWinPlayFinished() {
}

void URaceResultSequenceStateRivalTeamResult::OnWidgetLoaded() {
}

void URaceResultSequenceStateRivalTeamResult::OnRewardGetWindowFinished() {
}

void URaceResultSequenceStateRivalTeamResult::OnProgressPlayFinished() {
}

void URaceResultSequenceStateRivalTeamResult::OnPlayOutFinished() {
}

void URaceResultSequenceStateRivalTeamResult::OnKeyPressed(FKey PressedKey) {
}

void URaceResultSequenceStateRivalTeamResult::OnButtonInput() {
}

void URaceResultSequenceStateRivalTeamResult::OnAcceptKeyPressed(UObject* Object) {
}


