#include "OnlineSequence.h"

AOnlineSequence::AOnlineSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OnlineLobbyComponent = NULL;
    this->SquadMatchingComponent = NULL;
    this->SquadMatchingComponent2 = NULL;
    this->MenuSequence = NULL;
    this->PrevSequenceState = EOnlineSequenceState::Idle;
    this->CurrentLobbyType = EMatchingLobbyType::None;
    this->PFInvitationErrorPopup = NULL;
}

void AOnlineSequence::SetNextRaceCycle() {
}

void AOnlineSequence::SetNextOnlineSequenceState_Implementation(EOnlineSequenceState InState, EOnlineSequenceState PrevState) {
}

void AOnlineSequence::OnSetNextOnlineLobby(EMatchingLobbyType InNextLobbyType) {
}

void AOnlineSequence::OnPFInvitationJoinCallback(bool IsSuccess) {
}

void AOnlineSequence::OnOnlineLobbyFinished_Implementation() {
}

void AOnlineSequence::OnOnlineLobbyBacked_Implementation() {
}

void AOnlineSequence::OnInitStateOnlineTop_Implementation() {
}

void AOnlineSequence::OnInitStateLogin_Implementation() {
}

void AOnlineSequence::OnInitStateIdle_Implementation() {
}

void AOnlineSequence::OnInitStateExit_Implementation() {
}

void AOnlineSequence::OnInitStateCheckPFInvitation_Implementation() {
}

void AOnlineSequence::OnClosePFInvitationErrorPopup(UUnionUIButtonBase* Button, int32 PanelIndex, int32 ButtonIndex) {
}

void AOnlineSequence::OnBackToTitleSequenceEvent() {
}

void AOnlineSequence::OnBackSequenceEvent() {
}

EGameModeId AOnlineSequence::GetRaceCycleGameModeId() {
    return EGameModeId::None;
}

EOnlineSequenceState AOnlineSequence::GetCurrentOnlineState() {
    return EOnlineSequenceState::Idle;
}

EMatchingLobbyType AOnlineSequence::GetCurrentLobbyType() {
    return EMatchingLobbyType::None;
}

bool AOnlineSequence::CheckRaceCycleFlag() {
    return false;
}


