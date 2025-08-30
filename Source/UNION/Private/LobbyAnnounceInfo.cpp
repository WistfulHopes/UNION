#include "LobbyAnnounceInfo.h"

ULobbyAnnounceInfo::ULobbyAnnounceInfo() : UUserWidget(FObjectInitializer::Get()) {
    this->TimerWidget = NULL;
    this->MatchingWidget = NULL;
    this->InfoTextWidget = NULL;
    this->CurrentAnimation = NULL;
    this->EnableTimeWidget = false;
    this->EnableUpdateState = false;
    this->IsLobbyHost = false;
    this->LobbyType = EMatchingLobbyType::None;
    this->CurrentTimerType = ELobbyTimerType::None;
    this->CurrentState = ELobbySequenceState::Idle;
    this->CourseSelecting = ERaceSettingCourseSelecting::VoteSelect;
}

void ULobbyAnnounceInfo::UpdateState(ELobbyTimerType InTimerType, ELobbySequenceState InState) {
}


void ULobbyAnnounceInfo::SetVisibilityMatchingWidget(ESlateVisibility InVisibility) {
}

void ULobbyAnnounceInfo::SetVisibilityInfoTextWidget(ESlateVisibility InVisibility) {
}


void ULobbyAnnounceInfo::SetIsLobbyHost(bool bIsHost) {
}

void ULobbyAnnounceInfo::SetCourseSelectRule(ERaceSettingCourseSelecting InCourseSelectRule) {
}
















void ULobbyAnnounceInfo::OnSetup_Implementation() {
}

void ULobbyAnnounceInfo::OnInitialize_Implementation(EMatchingLobbyType InLobbyType) {
}

void ULobbyAnnounceInfo::MatchingNow() {
}

void ULobbyAnnounceInfo::MatchCanceling() {
}

UOnlineTimer* ULobbyAnnounceInfo::GetTimer() const {
    return NULL;
}

ERaceSettingCourseSelecting ULobbyAnnounceInfo::GetCourseSelectRule() const {
    return ERaceSettingCourseSelecting::EveryTimeManualSelect;
}

void ULobbyAnnounceInfo::EnterPrivateLobbyCanceling() {
}

void ULobbyAnnounceInfo::AddToViewPortWidget() {
}


