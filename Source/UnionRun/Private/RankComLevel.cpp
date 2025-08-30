#include "RankComLevel.h"

FRankComLevel::FRankComLevel() {
    this->Rank = 0;
    this->NomalLv = 0;
    this->HighLv = 0;
    this->SonicLv = 0;
    this->SuperSonicLv = 0;
    this->MirrorLv = 0;
    this->ItemTable = EComLotteryRateDataTableType::ComTableType01;
    this->ItemDist = EComPointDistanceTableType::ComTableType01;
}

