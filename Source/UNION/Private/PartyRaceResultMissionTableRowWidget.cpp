#include "PartyRaceResultMissionTableRowWidget.h"

UPartyRaceResultMissionTableRowWidget::UPartyRaceResultMissionTableRowWidget() {
    this->_MissionNameText = NULL;
    this->_ScoreText = NULL;
    this->_NecessaryScoreText = NULL;
    this->_AddedScoreText = NULL;
    this->_Score = 0;
    this->_NecessaryScore = 0;
    this->_Completed = false;
    this->Mission_Count = NULL;
    this->Mission_Loop = NULL;
    this->Mission_Check = NULL;
    this->Mission_Check_Loop = NULL;
}


void UPartyRaceResultMissionTableRowWidget::SetScoreText(int32 score) {
}



