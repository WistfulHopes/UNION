#include "GrandPrixSequence.h"

AGrandPrixSequence::AGrandPrixSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CourseSelectUI = NULL;
    this->CommonData = NULL;
}

void AGrandPrixSequence::SetSelectedGPData(USelectGrandPrixAndCourseState* SelectCourseState) {
}

void AGrandPrixSequence::ResetRivalDataFromMenuData() {
}

void AGrandPrixSequence::OnInitStateIdle_Implementation() {
}

void AGrandPrixSequence::OnInitStateExit_Implementation() {
}

void AGrandPrixSequence::InitGPRaceResultData() {
}

int32 AGrandPrixSequence::GetRivalWinRewardEventThreshold() {
    return 0;
}

int32 AGrandPrixSequence::GetRivalDominationTargetCount() const {
    return 0;
}

int32 AGrandPrixSequence::GetRivalDominationCount() const {
    return 0;
}

void AGrandPrixSequence::ChooseRival(bool& OutRivalChanged, bool MileStone) {
}


