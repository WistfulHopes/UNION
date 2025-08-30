#include "RaceUISubTimeTrialTime.h"

URaceUISubTimeTrialTime::URaceUISubTimeTrialTime() : UUserWidget(FObjectInitializer::Get()) {
    this->TargetText = NULL;
    this->PersonalBestText = NULL;
    this->StageTargetTime = 0;
    this->PersonalBestTime = 0;
    this->IsPersonalBestTimeExistance = false;
    this->IsNotGhostReplay = false;
}

void URaceUISubTimeTrialTime::UpdateTime() {
}

FRaceUITimeTrialTime URaceUISubTimeTrialTime::UpdateLapTime(int32 Lap, bool& IsBestLap) {
    return FRaceUITimeTrialTime{};
}

void URaceUISubTimeTrialTime::SetVisibilityTime() {
}

void URaceUISubTimeTrialTime::SetTargetTime4Best(URichTextBlock* TargetTextBlock) {
}

void URaceUISubTimeTrialTime::SetTargetTime(URichTextBlock* TargetTextBlock, FText TargetName, int32 TargetTime, bool IsClockCount) {
}

void URaceUISubTimeTrialTime::SetBestTime() {
}


