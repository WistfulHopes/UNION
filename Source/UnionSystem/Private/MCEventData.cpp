#include "MCEventData.h"

FMCEventData::FMCEventData() {
    this->ID = 0;
    this->Genre = EMCEventSwitch::PointUpChance;
    this->TargetRank = EMCEventPointUpChance::None;
    this->PointMul = 0;
    this->PointAdd = 0;
    this->RandomWait = 0;
}

