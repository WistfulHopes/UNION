#include "UnionRaceStateParam.h"

FUnionRaceStateParam::FUnionRaceStateParam() {
    this->RaceStatus = ERaceInfoStateType::Idle;
    this->CountDownValue = 0;
    this->RacerCount = 0;
    this->SpeedClass = 0;
}

