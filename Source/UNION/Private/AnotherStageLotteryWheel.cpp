#include "AnotherStageLotteryWheel.h"

UAnotherStageLotteryWheel::UAnotherStageLotteryWheel() {
}

void UAnotherStageLotteryWheel::WriteLotteryResultToSettings() {
}

void UAnotherStageLotteryWheel::SetupManual(const FAnotherStageLotteryParameter& InParameter) {
}

void UAnotherStageLotteryWheel::Setup() {
}

void UAnotherStageLotteryWheel::Reset(int32 InSeed) {
}

TArray<FAnotherStageLotteryResult> UAnotherStageLotteryWheel::Lot(bool bUseCache, bool bIsResult) {
    return TArray<FAnotherStageLotteryResult>();
}

int32 UAnotherStageLotteryWheel::GetSeed() const {
    return 0;
}

void UAnotherStageLotteryWheel::GetLotteryResultsStageIds(TArray<EStageId>& OutStageIds) {
}

TArray<FAnotherStageLotteryResult> UAnotherStageLotteryWheel::GetLotteryResults() const {
    return TArray<FAnotherStageLotteryResult>();
}

void UAnotherStageLotteryWheel::AddIgnoreStages(const TArray<EStageId> NewIgnoreCourses) {
}

void UAnotherStageLotteryWheel::AddIgnoreStage(EStageId IgnoreCourse) {
}


