#include "UnionRaceInfo.h"

UUnionRaceInfo::UUnionRaceInfo() {
    this->RaceTime = 0.00f;
    this->MinutePart = 0;
    this->SecondPart = 0;
    this->MillimeterSecondPart = 0;
    this->IsRaceStateCountdown = false;
    this->IsRaceStateOnRace = false;
    this->IsRaceStateFinish = false;
    this->Race_CountDown_7 = false;
    this->Race_CountDown_6 = false;
    this->Race_CountDown_5 = false;
    this->Race_CountDown_4 = false;
    this->Race_CountDown_3 = false;
    this->Race_CountDown_2 = false;
    this->Race_CountDown_1 = false;
    this->Race_CountDown_0 = false;
    this->Race_Finish = false;
    this->RaceStatus = ERaceInfoStateType::Idle;
    this->RaceCountDownValue = 2147483647;
}


