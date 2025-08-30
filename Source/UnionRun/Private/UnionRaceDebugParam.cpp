#include "UnionRaceDebugParam.h"

FUnionRaceDebugParam::FUnionRaceDebugParam() {
    this->DbgLotteryTableType = ELotteryTableType::Unknown;
    this->bApplyLocalPlayer = false;
    this->bApplyAllPlayer = false;
    this->bIsOnCourseEditor = false;
    this->GenericParameter = 0;
    this->bIsDebugFinalLap = false;
    this->bIsRaceTestMode = false;
}

