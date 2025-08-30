#include "ResultRateRankSubRateWindow.h"

UResultRateRankSubRateWindow::UResultRateRankSubRateWindow() : UUserWidget(FObjectInitializer::Get()) {
}

void UResultRateRankSubRateWindow::SaveRateReward(const TArray<FRewardGetWindowParam>& RewardGetWindowParamList) {
}

TArray<FRewardGetWindowParam> UResultRateRankSubRateWindow::GetRateRewardParamList(bool bIsGetReward, ERateRank NowRank) {
    return TArray<FRewardGetWindowParam>();
}

FRateRankBonus UResultRateRankSubRateWindow::GetRatePromotionBonus() {
    return FRateRankBonus{};
}


