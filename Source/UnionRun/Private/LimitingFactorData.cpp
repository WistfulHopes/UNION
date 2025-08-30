#include "LimitingFactorData.h"

FLimitingFactorData::FLimitingFactorData() {
    this->ItemId = EItemId::NonItem;
    this->UseSameCountsForGroupRace = false;
    this->SameTimeCount = 0;
    this->SameTimeCountForGroupRace = 0;
    this->SameTimeCountForUseItemSwitch = 0;
    this->UseReappearanceTimeForGroupRace = false;
    this->ReappearanceTime = 0.00f;
    this->ReappearanceTimeForGroupRace = 0.00f;
    this->startLimitationTime = 0.00f;
    this->ComLimitation = false;
}

