#include "PartyRaceRivalResultWidget.h"

UPartyRaceRivalResultWidget::UPartyRaceRivalResultWidget() {
    this->_RivalLeaderImage = NULL;
    this->_RivalMemberImage = NULL;
    this->_RivalTeamIconImage = NULL;
    this->_RivalTeamNamePlateImage = NULL;
    this->_RivalLevelWidget = NULL;
    this->_RivalTeamNameTextBlock = NULL;
    this->_ProgressWidget = NULL;
    this->_RewardGetWindow = NULL;
    this->_InputButton = NULL;
    this->Result_InLoop = NULL;
    this->Result_Out = NULL;
    this->Reward_InLoop = NULL;
    this->Reward_Out = NULL;
}

void UPartyRaceRivalResultWidget::StartLoad(const TArray<EDriverId>& PlayerDriverIds, ERivalTeamId RivalTeamId, int32 EliminatedCount) {
}

void UPartyRaceRivalResultWidget::SetNewWinCount(int32 NewWinCount) {
}

void UPartyRaceRivalResultWidget::PlayWin() {
}

void UPartyRaceRivalResultWidget::PlayProgress() {
}

void UPartyRaceRivalResultWidget::PlayOut() {
}

void UPartyRaceRivalResultWidget::OnPlayProgressCheckFinished() {
}

bool UPartyRaceRivalResultWidget::IsReady() const {
    return false;
}

URewardGetWindow* UPartyRaceRivalResultWidget::GetRewardGetWindow() {
    return NULL;
}

UButton* UPartyRaceRivalResultWidget::GetInputButton() {
    return NULL;
}


