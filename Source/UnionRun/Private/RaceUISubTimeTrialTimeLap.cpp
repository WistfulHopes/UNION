#include "RaceUISubTimeTrialTimeLap.h"

URaceUISubTimeTrialTimeLap::URaceUISubTimeTrialTimeLap() : UUserWidget(FObjectInitializer::Get()) {
    this->TxtSign = NULL;
    this->TxtDiff = NULL;
    this->BaseDiff = NULL;
    this->BorderNum = NULL;
    this->BorderDiff = NULL;
}

FRaceUITimeTrialTime URaceUISubTimeTrialTimeLap::UpdateLapTime() {
    return FRaceUITimeTrialTime{};
}

void URaceUISubTimeTrialTimeLap::SetLapTimeWithDiff(FRaceUITimeTrialTime NewTime, int32 Lap, bool IsVisibleDiff) {
}

void URaceUISubTimeTrialTimeLap::SetLapTimeIsGhostReplay(int32 Lap) {
}

void URaceUISubTimeTrialTimeLap::SetLapTime(FRaceUITimeTrialTime NewTime, int32 Lap) {
}

void URaceUISubTimeTrialTimeLap::SetLapDiffTime(int32 LapNum) {
}


