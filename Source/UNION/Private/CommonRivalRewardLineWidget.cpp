#include "CommonRivalRewardLineWidget.h"

UCommonRivalRewardLineWidget::UCommonRivalRewardLineWidget() {
    this->HorizontalBox = NULL;
    this->DSP_Line_Get_01 = NULL;
    this->DSP_Line_Get_02 = NULL;
}

void UCommonRivalRewardLineWidget::SetWinCount(int32 Value) {
}

void UCommonRivalRewardLineWidget::Setup(ERivalTeamId InTeamID) {
}



int32 UCommonRivalRewardLineWidget::GetWinCount() const {
    return 0;
}

int32 UCommonRivalRewardLineWidget::GetOngoingRewardIndex() const {
    return 0;
}

int32 UCommonRivalRewardLineWidget::GetNecessaryWinCounts(int32 InIndex) const {
    return 0;
}


