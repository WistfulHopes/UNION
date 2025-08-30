#include "RacerDamageSquashParam.h"

FRacerDamageSquashParam::FRacerDamageSquashParam() {
    this->AfterInviciblyTime = 0.00f;
    this->DecelerationUnderLimit = 0.00f;
    this->StopTime1stPhase = 0.00f;
    this->StopTime2ndPhase = 0.00f;
    this->StopTime3rdPhase = 0.00f;
    this->BreakRate1stPhase = 0.00f;
    this->BreakRate2ndPhase = 0.00f;
    this->BreakRate3rdPhase = 0.00f;
    this->BigCrashFlag1stPhase = false;
    this->BigCrashFlag2ndPhase = false;
    this->BigCrashFlag3rdPhase = false;
}

