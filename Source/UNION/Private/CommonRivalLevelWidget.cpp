#include "CommonRivalLevelWidget.h"

UCommonRivalLevelWidget::UCommonRivalLevelWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->WS_Base = NULL;
    this->WBP_CMN_RivalLevel_Sub_Content = NULL;
    this->bIsHigh = true;
}

void UCommonRivalLevelWidget::SetupSettingsForPartyRace(int32 InMaxRivalLevel, int32 InRivalLevel, int32 InBlankIconHideCount, bool bIsRivalPowerFlag, ERivalTeamId InTeamID, bool bPlayInitAnim) {
}

void UCommonRivalLevelWidget::SetupSettingsForFriendMatch(int32 InMaxRivalLevel, int32 InRivalLevel, int32 InRivalBaseLevel, bool bIsRivalPowerFlag, bool bPlayInitAnim) {
}

void UCommonRivalLevelWidget::SetupSettings(int32 InMaxRivalLevel, int32 InRivalLevel, int32 InBlankIconHideCount, int32 InBaseRivalLevel) {
}

void UCommonRivalLevelWidget::SetIconSeEnabled(bool Enabled) {
}




void UCommonRivalLevelWidget::PlayAnimationFinishedLoop() {
}

void UCommonRivalLevelWidget::PlayAnim() {
}

void UCommonRivalLevelWidget::InitAnimIcons() {
}


