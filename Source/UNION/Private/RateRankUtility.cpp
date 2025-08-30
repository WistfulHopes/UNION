#include "RateRankUtility.h"

URateRankUtility::URateRankUtility() {
}

bool URateRankUtility::IsRateRankLegend(ERateRank RateRank) {
    return false;
}

bool URateRankUtility::IsRateRank_DifferentCategory(ERateRank NowRateRank, ERateRank NextRateRank) {
    return false;
}

ERateRank URateRankUtility::GetRateToRank(int32 Rate) {
    return ERateRank::None;
}

FRateRankUIData URateRankUtility::GetRateRankUIData(ERateRank NowRateRank) {
    return FRateRankUIData{};
}

int32 URateRankUtility::GetRateRankToIntRank(ERateRank NowRateRank) {
    return 0;
}

int32 URateRankUtility::GetRateRankPoint(const FRateRankPoint& Table, int32 Rank) {
    return 0;
}

ERateRank URateRankUtility::GetRateRankNext(ERateRank NowRateRank) {
    return ERateRank::None;
}

int32 URateRankUtility::GetRateRankCategoryNo(ERateRank Rank) {
    return 0;
}

ERateRank URateRankUtility::GetRateRankBack(ERateRank NowRateRank) {
    return ERateRank::None;
}

int32 URateRankUtility::GetMinPointAtRank(ERateRank InRateRank) {
    return 0;
}

int32 URateRankUtility::GetMaxPointAtRank(ERateRank InRateRank) {
    return 0;
}

ERateRank URateRankUtility::GetIntRankToRateRank(int32 IntRank) {
    return ERateRank::None;
}

FGaugePointResult URateRankUtility::GetGaugePointUpOrDown(float Now, float RemainAdd, float Speed, float High, float Low) {
    return FGaugePointResult{};
}

ERateRank URateRankUtility::GetByteRankToRateRank(uint8 ByteRank) {
    return ERateRank::None;
}


