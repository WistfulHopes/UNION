#include "CustomComSpeedComLevel.h"

FCustomComSpeedComLevel::FCustomComSpeedComLevel() {
    this->RaceSettingGrouping = ERaceSettingGrouping::Individual;
    this->ComSpeedLevel = ERaceSettingComSpeed::NothingCom;
    this->NomalLv = 0;
    this->HighLv = 0;
    this->SonicLv = 0;
    this->SuperSonicLv = 0;
    this->MirrorLv = 0;
    this->ItemTable = EComLotteryRateDataTableType::ComTableType01;
    this->ItemDist = EComPointDistanceTableType::ComTableType01;
}

