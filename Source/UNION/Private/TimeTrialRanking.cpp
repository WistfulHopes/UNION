#include "TimeTrialRanking.h"

UTimeTrialRanking::UTimeTrialRanking() {
    this->WBP_TimeTrial_Sub_RankingTable_Myself = NULL;
    this->WidgetSwitcher_0 = NULL;
}

void UTimeTrialRanking::StartUpKeyPress() {
}

void UTimeTrialRanking::StartDownKeyPress() {
}


void UTimeTrialRanking::SelectRanking(EAppSupportedPlatform Platform, EStageId courseId, ESpeedClassId speedType) {
}

void UTimeTrialRanking::ReleaseUpKey() {
}

void UTimeTrialRanking::ReleaseTimer() {
}

void UTimeTrialRanking::ReleaseDownKey() {
}

bool UTimeTrialRanking::IsUpKeyPressLoop() const {
    return false;
}

bool UTimeTrialRanking::IsDownKeyPressLoop() const {
    return false;
}

void UTimeTrialRanking::InitDateTime() {
}

FRankingDataTimeTrial UTimeTrialRanking::GetRankingTimeTrialData(const int32 InIndex, bool& OutIsValid) {
    return FRankingDataTimeTrial{};
}

void UTimeTrialRanking::DisplayRanking() {
}



void UTimeTrialRanking::DisplayLoading() {
}



