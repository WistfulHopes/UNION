#include "CommonRivalRewardWidget.h"

UCommonRivalRewardWidget::UCommonRivalRewardWidget() {
    this->_ItemIcon = NULL;
    this->_CurrentWinCountText = NULL;
    this->_NecessaryWinCountText = NULL;
    this->Active_Loop = NULL;
    this->Get_InLoop = NULL;
    this->Get_Loop = NULL;
    this->CountUp_InOut = NULL;
    this->Lock_Loop = NULL;
}

void UCommonRivalRewardWidget::SetWinCount(int32 Value) {
}

void UCommonRivalRewardWidget::SetState(ECommonRivalRewardState State) {
}

void UCommonRivalRewardWidget::SetGadgetCost(int32 Value) {
}

void UCommonRivalRewardWidget::SetDisplay(int32 CurrentWinCount, int32 NecessaryWinCount, ERewardType rewardType, UTexture2D* RewardTexture, int32 NumRewards) {
}

void UCommonRivalRewardWidget::SetDetailTextIndex_Implementation(const int32& Index) {
}

void UCommonRivalRewardWidget::PlayGetting(const FCommonUserWidgetAnimFinishedDynamicEvent& OnFinished) {
}

void UCommonRivalRewardWidget::PlayCountUp(int32 NewValue, const FCommonUserWidgetAnimFinishedDynamicEvent& OnFinished) {
}

void UCommonRivalRewardWidget::OnUpdateCountDisplayEvent() {
}


