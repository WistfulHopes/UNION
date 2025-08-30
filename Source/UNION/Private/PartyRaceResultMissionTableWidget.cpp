#include "PartyRaceResultMissionTableWidget.h"

UPartyRaceResultMissionTableWidget::UPartyRaceResultMissionTableWidget() {
    this->Mission_InLoop = NULL;
    this->Mission_Out = NULL;
}

void UPartyRaceResultMissionTableWidget::SkipScoreAnimation() {
}

void UPartyRaceResultMissionTableWidget::SetMissionDataBP(const TArray<FPartyRaceMissionData>& MissionData, const TArray<int32>& Scores, const TArray<bool>& Completeds) {
}

void UPartyRaceResultMissionTableWidget::PlayScoreAnimation() {
}

void UPartyRaceResultMissionTableWidget::PlayOutAnimation() {
}

void UPartyRaceResultMissionTableWidget::PlayInAnimation() {
}

void UPartyRaceResultMissionTableWidget::OnRowScoreAnimationFinished() {
}


