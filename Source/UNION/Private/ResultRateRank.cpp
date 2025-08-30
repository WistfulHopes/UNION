#include "ResultRateRank.h"

UResultRateRank::UResultRateRank() : UUserWidget(FObjectInitializer::Get()) {
}

void UResultRateRank::PlayRateRank_RankUpVoice(ERateRank NextRank) {
}

void UResultRateRank::PlayRateRank_GaugeUpDownVoice(ERateRank NowRateRank, float NowRate, float NextRate, float Bonus) {
}

FRateRankBonusList UResultRateRank::GetRateRankBonusList(bool& Get_bIsGetReward) {
    return FRateRankBonusList{};
}


