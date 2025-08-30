#include "RaceFrameRate.h"

FRaceFrameRate::FRaceFrameRate() {
    this->FrameRate = ERaceFrameRate::None;
    this->Fps = 0;
    this->LoopCount = 0;
    this->ProcTime = 0.00f;
}

