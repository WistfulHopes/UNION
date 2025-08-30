#include "PrivateMatchGroupSettingSequence.h"

APrivateMatchGroupSettingSequence::APrivateMatchGroupSettingSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PrevSquenceState = EPrivateMatchGroupSettingState::Idle;
    this->SelectedMainState = EPrivateMatchGroupSettingState::Idle;
    this->FixInfoWidget = NULL;
    this->bIsHost = false;
    this->OwnLobbyIndex = 0;
    this->FixGroupInfoTime = 1.00f;
    this->FixGroupDisplayTime = 3.00f;
}

void APrivateMatchGroupSettingSequence::UpdateGroupIndexArray_Implementation(const TArray<int32>& InGroupIndex) {
}

void APrivateMatchGroupSettingSequence::SetOwnLobbyIndex(int32 InIndex) {
}

void APrivateMatchGroupSettingSequence::SetNextGroupSettingSequenceState_Implementation(EPrivateMatchGroupSettingState InState, EPrivateMatchGroupSettingState PrevState) {
}

void APrivateMatchGroupSettingSequence::SetLobbyRacersDriverId(TArray<EDriverId> inArray) {
}

void APrivateMatchGroupSettingSequence::SetLobbyMemberCount(int32 LobbyMemberCount) {
}

void APrivateMatchGroupSettingSequence::SetIsHost(bool bIsHostFlag) {
}

void APrivateMatchGroupSettingSequence::OnUpdateSettingCompleteState_Implementation(float InDeltaTime) {
}

void APrivateMatchGroupSettingSequence::OnInitSettingCompleteState_Implementation() {
}

void APrivateMatchGroupSettingSequence::OnInitIdleState_Implementation() {
}

void APrivateMatchGroupSettingSequence::OnInitExitState_Implementation() {
}

void APrivateMatchGroupSettingSequence::OnExirSettingCompleteState_Implementation() {
}

void APrivateMatchGroupSettingSequence::GroupSettingCompleted_Implementation() {
}


void APrivateMatchGroupSettingSequence::ForceFixGroupSettings_Implementation() {
}

void APrivateMatchGroupSettingSequence::FinishDisplayFixInfo() {
}

void APrivateMatchGroupSettingSequence::CreateGroupFixInfo(const FText InText, const float InDisplayTime) {
}


