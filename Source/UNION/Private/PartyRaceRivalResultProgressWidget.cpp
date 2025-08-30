#include "PartyRaceRivalResultProgressWidget.h"

UPartyRaceRivalResultProgressWidget::UPartyRaceRivalResultProgressWidget() {
    this->_ItemIcon = NULL;
    this->_ConditionText = NULL;
    this->_ItemNumText = NULL;
    this->Anm_InLoop = NULL;
    this->Anm_Out = NULL;
    this->Check_InLoop = NULL;
}

void UPartyRaceRivalResultProgressWidget::SetDisplay(ERivalTeamId RivalTeamId, int32 EliminatedCount, int32 winCount, bool PreCount) {
}

void UPartyRaceRivalResultProgressWidget::PlayOut() {
}

void UPartyRaceRivalResultProgressWidget::PlayIn() {
}

void UPartyRaceRivalResultProgressWidget::PlayCheck() {
}

void UPartyRaceRivalResultProgressWidget::OnPlayCheckFinished() {
}


